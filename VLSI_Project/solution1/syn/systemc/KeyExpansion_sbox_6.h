// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __KeyExpansion_sbox_6_H__
#define __KeyExpansion_sbox_6_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct KeyExpansion_sbox_6_ram : public sc_core::sc_module {

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


   SC_CTOR(KeyExpansion_sbox_6_ram) {
        ram[0] = "0b01101111";
        ram[1] = "0b10101011";
        ram[2] = "0b01000111";
        ram[3] = "0b01110010";
        ram[4] = "0b11110111";
        ram[5] = "0b00110001";
        ram[6] = "0b00000101";
        ram[7] = "0b10110010";
        ram[8] = "0b01011010";
        ram[9] = "0b00101111";
        ram[10] = "0b10110001";
        ram[11] = "0b01011000";
        ram[12] = "0b00110011";
        ram[13] = "0b10011111";
        ram[14] = "0b00111000";
        ram[15] = "0b11110011";
        ram[16] = "0b01000100";
        ram[17] = "0b00011001";
        ram[18] = "0b10010000";
        ram[19] = "0b00001011";
        ram[20] = "0b00100100";
        ram[21] = "0b11100100";
        ram[22] = "0b01001110";
        ram[23] = "0b10101110";
        ram[24] = "0b10110100";
        ram[25] = "0b10001011";
        ram[26] = "0b11110110";
        ram[27] = "0b00011101";
        ram[28] = "0b10001110";
        ram[29] = "0b00101000";
        ram[30] = "0b01000010";
        ram[31] = "0b10111011";


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


SC_MODULE(KeyExpansion_sbox_6) {


static const unsigned DataWidth = 8;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


KeyExpansion_sbox_6_ram* meminst;


SC_CTOR(KeyExpansion_sbox_6) {
meminst = new KeyExpansion_sbox_6_ram("KeyExpansion_sbox_6_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~KeyExpansion_sbox_6() {
    delete meminst;
}


};//endmodule
#endif
