// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __KeyExpansion_sbox_0_H__
#define __KeyExpansion_sbox_0_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct KeyExpansion_sbox_0_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 8;
  static const unsigned AddressRange = 32;
  static const unsigned AddressWidth = 5;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(KeyExpansion_sbox_0_ram) {
        ram[0] = "0b01100011";
        ram[1] = "0b00110000";
        ram[2] = "0b11001010";
        ram[3] = "0b10101101";
        ram[4] = "0b10110111";
        ram[5] = "0b00110100";
        ram[6] = "0b00000100";
        ram[7] = "0b00000111";
        ram[8] = "0b00001001";
        ram[9] = "0b01010010";
        ram[10] = "0b01010011";
        ram[11] = "0b01101010";
        ram[12] = "0b11010000";
        ram[13] = "0b01000101";
        ram[14] = "0b01010001";
        ram[15] = "0b10111100";
        ram[16] = "0b11001101";
        ram[17] = "0b11000100";
        ram[18] = "0b01100000";
        ram[19] = "0b01000110";
        ram[20] = "0b11100000";
        ram[21] = "0b11000010";
        ram[22] = "0b11100111";
        ram[23] = "0b01101100";
        ram[24] = "0b10111010";
        ram[25] = "0b11101000";
        ram[26] = "0b01110000";
        ram[27] = "0b01100001";
        ram[28] = "0b11100001";
        ram[29] = "0b10011011";
        ram[30] = "0b10001100";
        ram[31] = "0b01000001";


SC_METHOD(prc_write_0);
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


}; //endmodule


SC_MODULE(KeyExpansion_sbox_0) {


static const unsigned DataWidth = 8;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


KeyExpansion_sbox_0_ram* meminst;


SC_CTOR(KeyExpansion_sbox_0) {
meminst = new KeyExpansion_sbox_0_ram("KeyExpansion_sbox_0_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~KeyExpansion_sbox_0() {
    delete meminst;
}


};//endmodule
#endif
