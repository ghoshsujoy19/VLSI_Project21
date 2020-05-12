// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __KeyExpansion_sbox_7_H__
#define __KeyExpansion_sbox_7_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct KeyExpansion_sbox_7_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 8;
  static const unsigned AddressRange = 16;
  static const unsigned AddressWidth = 4;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(KeyExpansion_sbox_7_ram) {
        ram[0] = "0b11000101";
        ram[1] = "0b11110000";
        ram[2] = "0b11001100";
        ram[3] = "0b10011010";
        ram[4] = "0b10100000";
        ram[5] = "0b01011011";
        ram[6] = "0b10000101";
        ram[7] = "0b11110101";
        ram[8] = "0b00010111";
        ram[9] = "0b10001000";
        ram[10] = "0b01011100";
        ram[11] = "0b10101001";
        ram[12] = "0b11000110";
        ram[13] = "0b00001110";
        ram[14] = "0b10010100";
        ram[15] = "0b01101000";


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


SC_MODULE(KeyExpansion_sbox_7) {


static const unsigned DataWidth = 8;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


KeyExpansion_sbox_7_ram* meminst;


SC_CTOR(KeyExpansion_sbox_7) {
meminst = new KeyExpansion_sbox_7_ram("KeyExpansion_sbox_7_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~KeyExpansion_sbox_7() {
    delete meminst;
}


};//endmodule
#endif
