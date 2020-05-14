// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __KeyExpansion_sbox_5_H__
#define __KeyExpansion_sbox_5_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct KeyExpansion_sbox_5_ram : public sc_core::sc_module {

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


   SC_CTOR(KeyExpansion_sbox_5_ram) {
        ram[0] = "0b01101011";
        ram[1] = "0b11010111";
        ram[2] = "0b01011001";
        ram[3] = "0b10100100";
        ram[4] = "0b00111111";
        ram[5] = "0b11011000";
        ram[6] = "0b10010110";
        ram[7] = "0b00100111";
        ram[8] = "0b01101110";
        ram[9] = "0b11100011";
        ram[10] = "0b11111100";
        ram[11] = "0b01001100";
        ram[12] = "0b01001101";
        ram[13] = "0b00111100";
        ram[14] = "0b10011101";
        ram[15] = "0b11111111";
        ram[16] = "0b10010111";
        ram[17] = "0b01011101";
        ram[18] = "0b00101010";
        ram[19] = "0b01011110";
        ram[20] = "0b00000110";
        ram[21] = "0b10010101";
        ram[22] = "0b11010101";
        ram[23] = "0b01111010";
        ram[24] = "0b10100110";
        ram[25] = "0b10111101";
        ram[26] = "0b00000011";
        ram[27] = "0b11000001";
        ram[28] = "0b11011001";
        ram[29] = "0b01010101";
        ram[30] = "0b11100110";
        ram[31] = "0b01010100";


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


SC_MODULE(KeyExpansion_sbox_5) {


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


KeyExpansion_sbox_5_ram* meminst;


SC_CTOR(KeyExpansion_sbox_5) {
meminst = new KeyExpansion_sbox_5_ram("KeyExpansion_sbox_5_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->address1(address1);
meminst->ce1(ce1);
meminst->q1(q1);

meminst->reset(reset);
meminst->clk(clk);
}
~KeyExpansion_sbox_5() {
    delete meminst;
}


};//endmodule
#endif
