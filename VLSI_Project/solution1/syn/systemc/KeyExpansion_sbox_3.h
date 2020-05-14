// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __KeyExpansion_sbox_3_H__
#define __KeyExpansion_sbox_3_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct KeyExpansion_sbox_3_ram : public sc_core::sc_module {

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


   SC_CTOR(KeyExpansion_sbox_3_ram) {
        ram[0] = "0b01111011";
        ram[1] = "0b00101011";
        ram[2] = "0b01111101";
        ram[3] = "0b10101111";
        ram[4] = "0b00100110";
        ram[5] = "0b11110001";
        ram[6] = "0b11000011";
        ram[7] = "0b11100010";
        ram[8] = "0b00011010";
        ram[9] = "0b10110011";
        ram[10] = "0b11101101";
        ram[11] = "0b00111001";
        ram[12] = "0b11111011";
        ram[13] = "0b01111111";
        ram[14] = "0b10001111";
        ram[15] = "0b00100001";
        ram[16] = "0b11101100";
        ram[17] = "0b00111101";
        ram[18] = "0b11011100";
        ram[19] = "0b00010100";
        ram[20] = "0b00001010";
        ram[21] = "0b01100010";
        ram[22] = "0b01101101";
        ram[23] = "0b11101010";
        ram[24] = "0b00101110";
        ram[25] = "0b00011111";
        ram[26] = "0b01100110";
        ram[27] = "0b10111001";
        ram[28] = "0b00010001";
        ram[29] = "0b11101001";
        ram[30] = "0b00001101";
        ram[31] = "0b00001111";


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


SC_MODULE(KeyExpansion_sbox_3) {


static const unsigned DataWidth = 8;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


KeyExpansion_sbox_3_ram* meminst;


SC_CTOR(KeyExpansion_sbox_3) {
meminst = new KeyExpansion_sbox_3_ram("KeyExpansion_sbox_3_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~KeyExpansion_sbox_3() {
    delete meminst;
}


};//endmodule
#endif
