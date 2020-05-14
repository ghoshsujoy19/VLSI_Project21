// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __KeyExpansion_sbox_4_H__
#define __KeyExpansion_sbox_4_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct KeyExpansion_sbox_4_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 8;
  static const unsigned AddressRange = 32;
  static const unsigned AddressWidth = 5;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in <sc_lv<AddressWidth> > address1;
sc_core::sc_in <sc_logic> ce1;
sc_core::sc_out <sc_lv<DataWidth> > q1;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(KeyExpansion_sbox_4_ram) {
        ram[0] = "0b11110010";
        ram[1] = "0b11111110";
        ram[2] = "0b11111010";
        ram[3] = "0b10011100";
        ram[4] = "0b00110110";
        ram[5] = "0b01110001";
        ram[6] = "0b00011000";
        ram[7] = "0b11101011";
        ram[8] = "0b00011011";
        ram[9] = "0b00101001";
        ram[10] = "0b00100000";
        ram[11] = "0b01001010";
        ram[12] = "0b01000011";
        ram[13] = "0b01010000";
        ram[14] = "0b10010010";
        ram[15] = "0b00010000";
        ram[16] = "0b01011111";
        ram[17] = "0b01100100";
        ram[18] = "0b00100010";
        ram[19] = "0b11011110";
        ram[20] = "0b01001001";
        ram[21] = "0b10010001";
        ram[22] = "0b10001101";
        ram[23] = "0b01100101";
        ram[24] = "0b00011100";
        ram[25] = "0b01001011";
        ram[26] = "0b01001000";
        ram[27] = "0b10000110";
        ram[28] = "0b01101001";
        ram[29] = "0b11001110";
        ram[30] = "0b10111111";
        ram[31] = "0b10110000";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();


SC_METHOD(prc_write_1);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


void prc_write_1()
{
    if (ce1.read() == sc_dt::Log_1) 
    {
            if(address1.read().is_01() && address1.read().to_uint()<AddressRange)
              q1 = ram[address1.read().to_uint()];
            else
              q1 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(KeyExpansion_sbox_4) {


static const unsigned DataWidth = 8;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in <sc_lv<AddressWidth> > address1;
sc_core::sc_in<sc_logic> ce1;
sc_core::sc_out <sc_lv<DataWidth> > q1;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


KeyExpansion_sbox_4_ram* meminst;


SC_CTOR(KeyExpansion_sbox_4) {
meminst = new KeyExpansion_sbox_4_ram("KeyExpansion_sbox_4_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->address1(address1);
meminst->ce1(ce1);
meminst->q1(q1);

meminst->reset(reset);
meminst->clk(clk);
}
~KeyExpansion_sbox_4() {
    delete meminst;
}


};//endmodule
#endif
