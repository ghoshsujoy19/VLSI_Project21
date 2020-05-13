// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _InvSubBytes_HH_
#define _InvSubBytes_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "InvCipher_mux_165bkb.h"
#include "InvCipher_mux_42_cud.h"
#include "InvSubBytes_rsbox.h"

namespace ap_rtl {

struct InvSubBytes : public sc_module {
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
    InvSubBytes(sc_module_name name);
    SC_HAS_PROCESS(InvSubBytes);

    ~InvSubBytes();

    sc_trace_file* mVcdFile;

    InvSubBytes_rsbox* rsbox_U;
    InvCipher_mux_165bkb<1,1,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,5,8>* InvCipher_mux_165bkb_U1;
    InvCipher_mux_42_cud<1,1,8,8,8,8,2,8>* InvCipher_mux_42_cud_U2;
    InvCipher_mux_42_cud<1,1,8,8,8,8,2,8>* InvCipher_mux_42_cud_U3;
    InvCipher_mux_42_cud<1,1,8,8,8,8,2,8>* InvCipher_mux_42_cud_U4;
    InvCipher_mux_42_cud<1,1,8,8,8,8,2,8>* InvCipher_mux_42_cud_U5;
    InvCipher_mux_42_cud<1,1,8,8,8,8,2,8>* InvCipher_mux_42_cud_U6;
    InvCipher_mux_42_cud<1,1,8,8,8,8,2,8>* InvCipher_mux_42_cud_U7;
    InvCipher_mux_42_cud<1,1,8,8,8,8,2,8>* InvCipher_mux_42_cud_U8;
    InvCipher_mux_42_cud<1,1,8,8,8,8,2,8>* InvCipher_mux_42_cud_U9;
    InvCipher_mux_42_cud<1,1,8,8,8,8,2,8>* InvCipher_mux_42_cud_U10;
    InvCipher_mux_42_cud<1,1,8,8,8,8,2,8>* InvCipher_mux_42_cud_U11;
    InvCipher_mux_42_cud<1,1,8,8,8,8,2,8>* InvCipher_mux_42_cud_U12;
    InvCipher_mux_42_cud<1,1,8,8,8,8,2,8>* InvCipher_mux_42_cud_U13;
    InvCipher_mux_42_cud<1,1,8,8,8,8,2,8>* InvCipher_mux_42_cud_U14;
    InvCipher_mux_42_cud<1,1,8,8,8,8,2,8>* InvCipher_mux_42_cud_U15;
    InvCipher_mux_42_cud<1,1,8,8,8,8,2,8>* InvCipher_mux_42_cud_U16;
    InvCipher_mux_42_cud<1,1,8,8,8,8,2,8>* InvCipher_mux_42_cud_U17;
    sc_signal< sc_lv<4> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<8> > rsbox_address0;
    sc_signal< sc_logic > rsbox_ce0;
    sc_signal< sc_lv<8> > rsbox_q0;
    sc_signal< sc_lv<3> > i_fu_393_p2;
    sc_signal< sc_lv<3> > i_reg_924;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<2> > trunc_ln399_fu_399_p1;
    sc_signal< sc_lv<2> > trunc_ln399_reg_929;
    sc_signal< sc_lv<1> > icmp_ln395_fu_387_p2;
    sc_signal< sc_lv<3> > j_fu_505_p2;
    sc_signal< sc_lv<3> > j_reg_953;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<8> > state_3_3_0_load_1_reg_958;
    sc_signal< sc_lv<1> > icmp_ln397_fu_499_p2;
    sc_signal< sc_lv<8> > state_3_2_0_load_1_reg_965;
    sc_signal< sc_lv<8> > state_3_1_0_load_1_reg_972;
    sc_signal< sc_lv<8> > state_3_0_0_load_1_reg_979;
    sc_signal< sc_lv<8> > state_2_3_0_load_1_reg_986;
    sc_signal< sc_lv<8> > state_2_2_0_load_1_reg_993;
    sc_signal< sc_lv<8> > state_2_1_0_load_1_reg_1000;
    sc_signal< sc_lv<8> > state_2_0_0_load_1_reg_1007;
    sc_signal< sc_lv<8> > state_1_3_0_load_1_reg_1014;
    sc_signal< sc_lv<8> > state_1_2_0_load_1_reg_1021;
    sc_signal< sc_lv<8> > state_1_1_0_load_1_reg_1028;
    sc_signal< sc_lv<8> > state_1_0_0_load_1_reg_1035;
    sc_signal< sc_lv<8> > state_0_3_0_load_1_reg_1042;
    sc_signal< sc_lv<8> > state_0_2_0_load_1_reg_1049;
    sc_signal< sc_lv<8> > state_0_1_0_load_1_reg_1056;
    sc_signal< sc_lv<8> > state_0_0_0_load_1_reg_1063;
    sc_signal< sc_lv<2> > trunc_ln399_1_fu_511_p1;
    sc_signal< sc_lv<2> > trunc_ln399_1_reg_1070;
    sc_signal< sc_lv<3> > i_0_reg_237;
    sc_signal< sc_lv<3> > j_0_reg_248;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<64> > zext_ln399_1_fu_564_p1;
    sc_signal< sc_lv<8> > state_3_3_0_fu_64;
    sc_signal< sc_lv<8> > state_3_3_3_fu_749_p6;
    sc_signal< sc_lv<8> > state_3_2_0_fu_68;
    sc_signal< sc_lv<8> > state_3_2_3_fu_759_p6;
    sc_signal< sc_lv<8> > state_3_1_0_fu_72;
    sc_signal< sc_lv<8> > state_3_1_3_fu_769_p6;
    sc_signal< sc_lv<8> > state_3_0_0_fu_76;
    sc_signal< sc_lv<8> > state_3_0_3_fu_779_p6;
    sc_signal< sc_lv<8> > state_2_3_0_fu_80;
    sc_signal< sc_lv<8> > state_2_3_3_fu_569_p6;
    sc_signal< sc_lv<8> > state_2_2_0_fu_84;
    sc_signal< sc_lv<8> > state_2_2_3_fu_579_p6;
    sc_signal< sc_lv<8> > state_2_1_0_fu_88;
    sc_signal< sc_lv<8> > state_2_1_3_fu_589_p6;
    sc_signal< sc_lv<8> > state_2_0_0_fu_92;
    sc_signal< sc_lv<8> > state_2_0_3_fu_599_p6;
    sc_signal< sc_lv<8> > state_1_3_0_fu_96;
    sc_signal< sc_lv<8> > state_1_3_3_fu_629_p6;
    sc_signal< sc_lv<8> > state_1_2_0_fu_100;
    sc_signal< sc_lv<8> > state_1_2_3_fu_639_p6;
    sc_signal< sc_lv<8> > state_1_1_0_fu_104;
    sc_signal< sc_lv<8> > state_1_1_3_fu_649_p6;
    sc_signal< sc_lv<8> > state_1_0_0_fu_108;
    sc_signal< sc_lv<8> > state_1_0_3_fu_659_p6;
    sc_signal< sc_lv<8> > state_0_3_0_fu_112;
    sc_signal< sc_lv<8> > state_0_3_3_fu_689_p6;
    sc_signal< sc_lv<8> > state_0_2_0_fu_116;
    sc_signal< sc_lv<8> > state_0_2_3_fu_699_p6;
    sc_signal< sc_lv<8> > state_0_1_0_fu_120;
    sc_signal< sc_lv<8> > state_0_1_3_fu_709_p6;
    sc_signal< sc_lv<8> > state_0_0_0_fu_124;
    sc_signal< sc_lv<8> > state_0_0_3_fu_719_p6;
    sc_signal< sc_lv<4> > tmp_1_fu_515_p3;
    sc_signal< sc_lv<5> > tmp_fu_526_p17;
    sc_signal< sc_lv<8> > tmp_fu_526_p18;
    sc_signal< sc_lv<4> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<4> ap_ST_fsm_state1;
    static const sc_lv<4> ap_ST_fsm_state2;
    static const sc_lv<4> ap_ST_fsm_state3;
    static const sc_lv<4> ap_ST_fsm_state4;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<3> ap_const_lv3_4;
    static const sc_lv<3> ap_const_lv3_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
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
    void thread_i_fu_393_p2();
    void thread_icmp_ln395_fu_387_p2();
    void thread_icmp_ln397_fu_499_p2();
    void thread_j_fu_505_p2();
    void thread_rsbox_address0();
    void thread_rsbox_ce0();
    void thread_tmp_1_fu_515_p3();
    void thread_tmp_fu_526_p17();
    void thread_trunc_ln399_1_fu_511_p1();
    void thread_trunc_ln399_fu_399_p1();
    void thread_zext_ln399_1_fu_564_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
