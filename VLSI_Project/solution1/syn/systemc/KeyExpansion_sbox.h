// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __KeyExpansion_sbox_H__
#define __KeyExpansion_sbox_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct KeyExpansion_sbox_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 32;
  static const unsigned AddressRange = 64;
  static const unsigned AddressWidth = 6;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in <sc_lv<AddressWidth> > address1;
sc_core::sc_in <sc_logic> ce1;
sc_core::sc_out <sc_lv<DataWidth> > q1;
sc_core::sc_in <sc_lv<AddressWidth> > address2;
sc_core::sc_in <sc_logic> ce2;
sc_core::sc_out <sc_lv<DataWidth> > q2;
sc_core::sc_in <sc_lv<AddressWidth> > address3;
sc_core::sc_in <sc_logic> ce3;
sc_core::sc_out <sc_lv<DataWidth> > q3;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(KeyExpansion_sbox_ram) {
        ram[0] = "0b01111011011101110111110001100011";
        ram[1] = "0b11000101011011110110101111110010";
        ram[2] = "0b00101011011001110000000100110000";
        ram[3] = "0b01110110101010111101011111111110";
        ram[4] = "0b01111101110010011000001011001010";
        ram[5] = "0b11110000010001110101100111111010";
        ram[6] = "0b10101111101000101101010010101101";
        ram[7] = "0b11000000011100101010010010011100";
        ram[8] = "0b00100110100100111111110110110111";
        ram[9] = "0b11001100111101110011111100110110";
        ram[10] = "0b11110001111001011010010100110100";
        ram[11] = "0b00010101001100011101100001110001";
        ram[12] = "0b11000011001000111100011100000100";
        ram[13] = "0b10011010000001011001011000011000";
        ram[14] = "0b11100010100000000001001000000111";
        ram[15] = "0b01110101101100100010011111101011";
        ram[16] = "0b00011010001011001000001100001001";
        ram[17] = "0b10100000010110100110111000011011";
        ram[18] = "0b10110011110101100011101101010010";
        ram[19] = "0b10000100001011111110001100101001";
        ram[20] = "0b11101101000000001101000101010011";
        ram[21] = "0b01011011101100011111110000100000";
        ram[22] = "0b00111001101111101100101101101010";
        ram[23] = "0b11001111010110000100110001001010";
        ram[24] = "0b11111011101010101110111111010000";
        ram[25] = "0b10000101001100110100110101000011";
        ram[26] = "0b01111111000000101111100101000101";
        ram[27] = "0b10101000100111110011110001010000";
        ram[28] = "0b10001111010000001010001101010001";
        ram[29] = "0b11110101001110001001110110010010";
        ram[30] = "0b00100001110110101011011010111100";
        ram[31] = "0b11010010111100111111111100010000";
        ram[32] = "0b11101100000100110000110011001101";
        ram[33] = "0b00010111010001001001011101011111";
        ram[34] = "0b00111101011111101010011111000100";
        ram[35] = "0b01110011000110010101110101100100";
        ram[36] = "0b11011100010011111000000101100000";
        ram[37] = "0b10001000100100000010101000100010";
        ram[38] = "0b00010100101110001110111001000110";
        ram[39] = "0b11011011000010110101111011011110";
        ram[40] = "0b00001010001110100011001011100000";
        ram[41] = "0b01011100001001000000011001001001";
        ram[42] = "0b01100010101011001101001111000010";
        ram[43] = "0b01111001111001001001010110010001";
        ram[44] = "0b01101101001101111100100011100111";
        ram[45] = "0b10101001010011101101010110001101";
        ram[46] = "0b11101010111101000101011001101100";
        ram[47] = "0b00001000101011100111101001100101";
        ram[48] = "0b00101110001001010111100010111010";
        ram[49] = "0b11000110101101001010011000011100";
        ram[50] = "0b00011111011101001101110111101000";
        ram[51] = "0b10001010100010111011110101001011";
        ram[52] = "0b01100110101101010011111001110000";
        ram[53] = "0b00001110111101100000001101001000";
        ram[54] = "0b10111001010101110011010101100001";
        ram[55] = "0b10011110000111011100000110000110";
        ram[56] = "0b00010001100110001111100011100001";
        ram[57] = "0b10010100100011101101100101101001";
        ram[58] = "0b11101001100001110001111010011011";
        ram[59] = "0b11011111001010000101010111001110";
        ram[60] = "0b00001101100010011010000110001100";
        ram[61] = "0b01101000010000101110011010111111";
        ram[62] = "0b00001111001011011001100101000001";
        ram[63] = "0b00010110101110110101010010110000";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();


SC_METHOD(prc_write_1);
  sensitive<<clk.pos();


SC_METHOD(prc_write_2);
  sensitive<<clk.pos();


SC_METHOD(prc_write_3);
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


void prc_write_2()
{
    if (ce2.read() == sc_dt::Log_1) 
    {
            if(address2.read().is_01() && address2.read().to_uint()<AddressRange)
              q2 = ram[address2.read().to_uint()];
            else
              q2 = sc_lv<DataWidth>();
    }
}


void prc_write_3()
{
    if (ce3.read() == sc_dt::Log_1) 
    {
            if(address3.read().is_01() && address3.read().to_uint()<AddressRange)
              q3 = ram[address3.read().to_uint()];
            else
              q3 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(KeyExpansion_sbox) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 64;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in <sc_lv<AddressWidth> > address1;
sc_core::sc_in<sc_logic> ce1;
sc_core::sc_out <sc_lv<DataWidth> > q1;
sc_core::sc_in <sc_lv<AddressWidth> > address2;
sc_core::sc_in<sc_logic> ce2;
sc_core::sc_out <sc_lv<DataWidth> > q2;
sc_core::sc_in <sc_lv<AddressWidth> > address3;
sc_core::sc_in<sc_logic> ce3;
sc_core::sc_out <sc_lv<DataWidth> > q3;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


KeyExpansion_sbox_ram* meminst;


SC_CTOR(KeyExpansion_sbox) {
meminst = new KeyExpansion_sbox_ram("KeyExpansion_sbox_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->address1(address1);
meminst->ce1(ce1);
meminst->q1(q1);

meminst->address2(address2);
meminst->ce2(ce2);
meminst->q2(q2);

meminst->address3(address3);
meminst->ce3(ce3);
meminst->q3(q3);

meminst->reset(reset);
meminst->clk(clk);
}
~KeyExpansion_sbox() {
    delete meminst;
}


};//endmodule
#endif
