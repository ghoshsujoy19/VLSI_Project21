// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _MixColumns_HH_
#define _MixColumns_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "Cipher_mux_42_8_1_1.h"

namespace ap_rtl {

struct MixColumns : public sc_module {
    // Port declarations 38
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<8> > state_0_0_read;
    sc_in< sc_lv<8> > state_0_1_read;
    sc_in< sc_lv<8> > state_0_2_read;
    sc_in< sc_lv<8> > state_0_3_read;
    sc_in< sc_lv<8> > state_1_0_read;
    sc_in< sc_lv<8> > state_1_1_read;
    sc_in< sc_lv<8> > state_1_2_read;
    sc_in< sc_lv<8> > state_1_3_read;
    sc_in< sc_lv<8> > state_2_0_read;
    sc_in< sc_lv<8> > state_2_1_read;
    sc_in< sc_lv<8> > state_2_2_read;
    sc_in< sc_lv<8> > state_2_3_read;
    sc_in< sc_lv<8> > state_3_0_read;
    sc_in< sc_lv<8> > state_3_1_read;
    sc_in< sc_lv<8> > state_3_2_read;
    sc_in< sc_lv<8> > state_3_3_read;
    sc_out< sc_lv<8> > ap_return_0;
    sc_out< sc_lv<8> > ap_return_1;
    sc_out< sc_lv<8> > ap_return_2;
    sc_out< sc_lv<8> > ap_return_3;
    sc_out< sc_lv<8> > ap_return_4;
    sc_out< sc_lv<8> > ap_return_5;
    sc_out< sc_lv<8> > ap_return_6;
    sc_out< sc_lv<8> > ap_return_7;
    sc_out< sc_lv<8> > ap_return_8;
    sc_out< sc_lv<8> > ap_return_9;
    sc_out< sc_lv<8> > ap_return_10;
    sc_out< sc_lv<8> > ap_return_11;
    sc_out< sc_lv<8> > ap_return_12;
    sc_out< sc_lv<8> > ap_return_13;
    sc_out< sc_lv<8> > ap_return_14;
    sc_out< sc_lv<8> > ap_return_15;


    // Module declarations
    MixColumns(sc_module_name name);
    SC_HAS_PROCESS(MixColumns);

    ~MixColumns();

    sc_trace_file* mVcdFile;

    Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>* Cipher_mux_42_8_1_1_U51;
    Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>* Cipher_mux_42_8_1_1_U52;
    Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>* Cipher_mux_42_8_1_1_U53;
    Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>* Cipher_mux_42_8_1_1_U54;
    Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>* Cipher_mux_42_8_1_1_U55;
    Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>* Cipher_mux_42_8_1_1_U56;
    Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>* Cipher_mux_42_8_1_1_U57;
    Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>* Cipher_mux_42_8_1_1_U58;
    Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>* Cipher_mux_42_8_1_1_U59;
    Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>* Cipher_mux_42_8_1_1_U60;
    Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>* Cipher_mux_42_8_1_1_U61;
    Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>* Cipher_mux_42_8_1_1_U62;
    Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>* Cipher_mux_42_8_1_1_U63;
    Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>* Cipher_mux_42_8_1_1_U64;
    Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>* Cipher_mux_42_8_1_1_U65;
    Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>* Cipher_mux_42_8_1_1_U66;
    Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>* Cipher_mux_42_8_1_1_U67;
    Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>* Cipher_mux_42_8_1_1_U68;
    Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>* Cipher_mux_42_8_1_1_U69;
    Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>* Cipher_mux_42_8_1_1_U70;
    Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>* Cipher_mux_42_8_1_1_U71;
    Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>* Cipher_mux_42_8_1_1_U72;
    Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>* Cipher_mux_42_8_1_1_U73;
    Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>* Cipher_mux_42_8_1_1_U74;
    Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>* Cipher_mux_42_8_1_1_U75;
    sc_signal< sc_lv<2> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<3> > i_fu_319_p2;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<8> > state_3_0_1_fu_443_p6;
    sc_signal< sc_lv<1> > icmp_ln315_fu_313_p2;
    sc_signal< sc_lv<8> > state_2_0_1_fu_457_p6;
    sc_signal< sc_lv<8> > state_1_0_1_fu_471_p6;
    sc_signal< sc_lv<8> > state_0_0_1_fu_485_p6;
    sc_signal< sc_lv<8> > state_3_1_1_fu_573_p6;
    sc_signal< sc_lv<8> > state_2_1_1_fu_587_p6;
    sc_signal< sc_lv<8> > state_1_1_1_fu_601_p6;
    sc_signal< sc_lv<8> > state_0_1_1_fu_615_p6;
    sc_signal< sc_lv<8> > state_3_2_1_fu_703_p6;
    sc_signal< sc_lv<8> > state_2_2_1_fu_717_p6;
    sc_signal< sc_lv<8> > state_1_2_1_fu_731_p6;
    sc_signal< sc_lv<8> > state_0_2_1_fu_745_p6;
    sc_signal< sc_lv<8> > state_3_3_1_fu_819_p6;
    sc_signal< sc_lv<8> > state_2_3_1_fu_833_p6;
    sc_signal< sc_lv<8> > state_1_3_1_fu_847_p6;
    sc_signal< sc_lv<8> > state_0_3_1_fu_861_p6;
    sc_signal< sc_lv<8> > state_0_0_0_reg_158;
    sc_signal< sc_lv<8> > state_0_1_0_reg_167;
    sc_signal< sc_lv<8> > state_0_2_0_reg_176;
    sc_signal< sc_lv<8> > state_0_3_0_reg_185;
    sc_signal< sc_lv<8> > state_1_0_0_reg_194;
    sc_signal< sc_lv<8> > state_1_1_0_reg_203;
    sc_signal< sc_lv<8> > state_1_2_0_reg_212;
    sc_signal< sc_lv<8> > state_1_3_0_reg_221;
    sc_signal< sc_lv<8> > state_2_0_0_reg_230;
    sc_signal< sc_lv<8> > state_2_1_0_reg_239;
    sc_signal< sc_lv<8> > state_2_2_0_reg_248;
    sc_signal< sc_lv<8> > state_2_3_0_reg_257;
    sc_signal< sc_lv<8> > state_3_0_0_reg_266;
    sc_signal< sc_lv<8> > state_3_1_0_reg_275;
    sc_signal< sc_lv<8> > state_3_2_0_reg_284;
    sc_signal< sc_lv<8> > state_3_3_0_reg_293;
    sc_signal< sc_lv<3> > i_0_reg_302;
    sc_signal< sc_lv<2> > trunc_ln317_fu_325_p1;
    sc_signal< sc_lv<8> > tmp_2_fu_343_p6;
    sc_signal< sc_lv<8> > t_fu_329_p6;
    sc_signal< sc_lv<8> > Tm_fu_385_p2;
    sc_signal< sc_lv<8> > tmp_4_fu_371_p6;
    sc_signal< sc_lv<8> > xor_ln318_1_fu_391_p2;
    sc_signal< sc_lv<8> > tmp_3_fu_357_p6;
    sc_signal< sc_lv<1> > tmp_1_fu_409_p3;
    sc_signal< sc_lv<8> > shl_ln307_fu_403_p2;
    sc_signal< sc_lv<8> > Tmp_fu_397_p2;
    sc_signal< sc_lv<8> > select_ln307_fu_417_p3;
    sc_signal< sc_lv<8> > xor_ln319_2_fu_431_p2;
    sc_signal< sc_lv<8> > xor_ln319_fu_425_p2;
    sc_signal< sc_lv<8> > xor_ln319_1_fu_437_p2;
    sc_signal< sc_lv<8> > tmp_5_fu_513_p6;
    sc_signal< sc_lv<8> > tmp_fu_499_p6;
    sc_signal< sc_lv<8> > Tm_1_fu_527_p2;
    sc_signal< sc_lv<1> > tmp_9_fu_539_p3;
    sc_signal< sc_lv<8> > shl_ln307_1_fu_533_p2;
    sc_signal< sc_lv<8> > select_ln307_1_fu_547_p3;
    sc_signal< sc_lv<8> > xor_ln320_2_fu_561_p2;
    sc_signal< sc_lv<8> > xor_ln320_fu_555_p2;
    sc_signal< sc_lv<8> > xor_ln320_1_fu_567_p2;
    sc_signal< sc_lv<8> > tmp_7_fu_643_p6;
    sc_signal< sc_lv<8> > tmp_6_fu_629_p6;
    sc_signal< sc_lv<8> > Tm_2_fu_657_p2;
    sc_signal< sc_lv<1> > tmp_10_fu_669_p3;
    sc_signal< sc_lv<8> > shl_ln307_2_fu_663_p2;
    sc_signal< sc_lv<8> > select_ln307_2_fu_677_p3;
    sc_signal< sc_lv<8> > xor_ln321_2_fu_691_p2;
    sc_signal< sc_lv<8> > xor_ln321_fu_685_p2;
    sc_signal< sc_lv<8> > xor_ln321_1_fu_697_p2;
    sc_signal< sc_lv<8> > tmp_8_fu_759_p6;
    sc_signal< sc_lv<8> > Tm_3_fu_773_p2;
    sc_signal< sc_lv<1> > tmp_11_fu_785_p3;
    sc_signal< sc_lv<8> > shl_ln307_3_fu_779_p2;
    sc_signal< sc_lv<8> > select_ln307_3_fu_793_p3;
    sc_signal< sc_lv<8> > xor_ln322_2_fu_807_p2;
    sc_signal< sc_lv<8> > xor_ln322_fu_801_p2;
    sc_signal< sc_lv<8> > xor_ln322_1_fu_813_p2;
    sc_signal< sc_lv<8> > ap_return_0_preg;
    sc_signal< sc_lv<8> > ap_return_1_preg;
    sc_signal< sc_lv<8> > ap_return_2_preg;
    sc_signal< sc_lv<8> > ap_return_3_preg;
    sc_signal< sc_lv<8> > ap_return_4_preg;
    sc_signal< sc_lv<8> > ap_return_5_preg;
    sc_signal< sc_lv<8> > ap_return_6_preg;
    sc_signal< sc_lv<8> > ap_return_7_preg;
    sc_signal< sc_lv<8> > ap_return_8_preg;
    sc_signal< sc_lv<8> > ap_return_9_preg;
    sc_signal< sc_lv<8> > ap_return_10_preg;
    sc_signal< sc_lv<8> > ap_return_11_preg;
    sc_signal< sc_lv<8> > ap_return_12_preg;
    sc_signal< sc_lv<8> > ap_return_13_preg;
    sc_signal< sc_lv<8> > ap_return_14_preg;
    sc_signal< sc_lv<8> > ap_return_15_preg;
    sc_signal< sc_lv<2> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<2> ap_ST_fsm_state1;
    static const sc_lv<2> ap_ST_fsm_state2;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<3> ap_const_lv3_4;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<8> ap_const_lv8_1B;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_Tm_1_fu_527_p2();
    void thread_Tm_2_fu_657_p2();
    void thread_Tm_3_fu_773_p2();
    void thread_Tm_fu_385_p2();
    void thread_Tmp_fu_397_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return_0();
    void thread_ap_return_1();
    void thread_ap_return_10();
    void thread_ap_return_11();
    void thread_ap_return_12();
    void thread_ap_return_13();
    void thread_ap_return_14();
    void thread_ap_return_15();
    void thread_ap_return_2();
    void thread_ap_return_3();
    void thread_ap_return_4();
    void thread_ap_return_5();
    void thread_ap_return_6();
    void thread_ap_return_7();
    void thread_ap_return_8();
    void thread_ap_return_9();
    void thread_i_fu_319_p2();
    void thread_icmp_ln315_fu_313_p2();
    void thread_select_ln307_1_fu_547_p3();
    void thread_select_ln307_2_fu_677_p3();
    void thread_select_ln307_3_fu_793_p3();
    void thread_select_ln307_fu_417_p3();
    void thread_shl_ln307_1_fu_533_p2();
    void thread_shl_ln307_2_fu_663_p2();
    void thread_shl_ln307_3_fu_779_p2();
    void thread_shl_ln307_fu_403_p2();
    void thread_tmp_10_fu_669_p3();
    void thread_tmp_11_fu_785_p3();
    void thread_tmp_1_fu_409_p3();
    void thread_tmp_9_fu_539_p3();
    void thread_trunc_ln317_fu_325_p1();
    void thread_xor_ln318_1_fu_391_p2();
    void thread_xor_ln319_1_fu_437_p2();
    void thread_xor_ln319_2_fu_431_p2();
    void thread_xor_ln319_fu_425_p2();
    void thread_xor_ln320_1_fu_567_p2();
    void thread_xor_ln320_2_fu_561_p2();
    void thread_xor_ln320_fu_555_p2();
    void thread_xor_ln321_1_fu_697_p2();
    void thread_xor_ln321_2_fu_691_p2();
    void thread_xor_ln321_fu_685_p2();
    void thread_xor_ln322_1_fu_813_p2();
    void thread_xor_ln322_2_fu_807_p2();
    void thread_xor_ln322_fu_801_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif