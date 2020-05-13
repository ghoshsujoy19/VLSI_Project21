// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _Cipher_HH_
#define _Cipher_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "MixColumns.h"
#include "SubBytes.h"
#include "AddRoundKey.h"

namespace ap_rtl {

struct Cipher : public sc_module {
    // Port declarations 102
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<8> > state_0_0_i;
    sc_out< sc_lv<8> > state_0_0_o;
    sc_out< sc_logic > state_0_0_o_ap_vld;
    sc_in< sc_lv<8> > state_0_1_i;
    sc_out< sc_lv<8> > state_0_1_o;
    sc_out< sc_logic > state_0_1_o_ap_vld;
    sc_in< sc_lv<8> > state_0_2_i;
    sc_out< sc_lv<8> > state_0_2_o;
    sc_out< sc_logic > state_0_2_o_ap_vld;
    sc_in< sc_lv<8> > state_0_3_i;
    sc_out< sc_lv<8> > state_0_3_o;
    sc_out< sc_logic > state_0_3_o_ap_vld;
    sc_in< sc_lv<8> > state_1_0_i;
    sc_out< sc_lv<8> > state_1_0_o;
    sc_out< sc_logic > state_1_0_o_ap_vld;
    sc_in< sc_lv<8> > state_1_1_i;
    sc_out< sc_lv<8> > state_1_1_o;
    sc_out< sc_logic > state_1_1_o_ap_vld;
    sc_in< sc_lv<8> > state_1_2_i;
    sc_out< sc_lv<8> > state_1_2_o;
    sc_out< sc_logic > state_1_2_o_ap_vld;
    sc_in< sc_lv<8> > state_1_3_i;
    sc_out< sc_lv<8> > state_1_3_o;
    sc_out< sc_logic > state_1_3_o_ap_vld;
    sc_in< sc_lv<8> > state_2_0_i;
    sc_out< sc_lv<8> > state_2_0_o;
    sc_out< sc_logic > state_2_0_o_ap_vld;
    sc_in< sc_lv<8> > state_2_1_i;
    sc_out< sc_lv<8> > state_2_1_o;
    sc_out< sc_logic > state_2_1_o_ap_vld;
    sc_in< sc_lv<8> > state_2_2_i;
    sc_out< sc_lv<8> > state_2_2_o;
    sc_out< sc_logic > state_2_2_o_ap_vld;
    sc_in< sc_lv<8> > state_2_3_i;
    sc_out< sc_lv<8> > state_2_3_o;
    sc_out< sc_logic > state_2_3_o_ap_vld;
    sc_in< sc_lv<8> > state_3_0_i;
    sc_out< sc_lv<8> > state_3_0_o;
    sc_out< sc_logic > state_3_0_o_ap_vld;
    sc_in< sc_lv<8> > state_3_1_i;
    sc_out< sc_lv<8> > state_3_1_o;
    sc_out< sc_logic > state_3_1_o_ap_vld;
    sc_in< sc_lv<8> > state_3_2_i;
    sc_out< sc_lv<8> > state_3_2_o;
    sc_out< sc_logic > state_3_2_o_ap_vld;
    sc_in< sc_lv<8> > state_3_3_i;
    sc_out< sc_lv<8> > state_3_3_o;
    sc_out< sc_logic > state_3_3_o_ap_vld;
    sc_out< sc_lv<4> > RoundKey_0_address0;
    sc_out< sc_logic > RoundKey_0_ce0;
    sc_in< sc_lv<8> > RoundKey_0_q0;
    sc_out< sc_lv<4> > RoundKey_1_address0;
    sc_out< sc_logic > RoundKey_1_ce0;
    sc_in< sc_lv<8> > RoundKey_1_q0;
    sc_out< sc_lv<4> > RoundKey_2_address0;
    sc_out< sc_logic > RoundKey_2_ce0;
    sc_in< sc_lv<8> > RoundKey_2_q0;
    sc_out< sc_lv<4> > RoundKey_3_address0;
    sc_out< sc_logic > RoundKey_3_ce0;
    sc_in< sc_lv<8> > RoundKey_3_q0;
    sc_out< sc_lv<4> > RoundKey_4_address0;
    sc_out< sc_logic > RoundKey_4_ce0;
    sc_in< sc_lv<8> > RoundKey_4_q0;
    sc_out< sc_lv<4> > RoundKey_5_address0;
    sc_out< sc_logic > RoundKey_5_ce0;
    sc_in< sc_lv<8> > RoundKey_5_q0;
    sc_out< sc_lv<4> > RoundKey_6_address0;
    sc_out< sc_logic > RoundKey_6_ce0;
    sc_in< sc_lv<8> > RoundKey_6_q0;
    sc_out< sc_lv<4> > RoundKey_7_address0;
    sc_out< sc_logic > RoundKey_7_ce0;
    sc_in< sc_lv<8> > RoundKey_7_q0;
    sc_out< sc_lv<4> > RoundKey_8_address0;
    sc_out< sc_logic > RoundKey_8_ce0;
    sc_in< sc_lv<8> > RoundKey_8_q0;
    sc_out< sc_lv<4> > RoundKey_9_address0;
    sc_out< sc_logic > RoundKey_9_ce0;
    sc_in< sc_lv<8> > RoundKey_9_q0;
    sc_out< sc_lv<4> > RoundKey_10_address0;
    sc_out< sc_logic > RoundKey_10_ce0;
    sc_in< sc_lv<8> > RoundKey_10_q0;
    sc_out< sc_lv<4> > RoundKey_11_address0;
    sc_out< sc_logic > RoundKey_11_ce0;
    sc_in< sc_lv<8> > RoundKey_11_q0;
    sc_out< sc_lv<4> > RoundKey_12_address0;
    sc_out< sc_logic > RoundKey_12_ce0;
    sc_in< sc_lv<8> > RoundKey_12_q0;
    sc_out< sc_lv<4> > RoundKey_13_address0;
    sc_out< sc_logic > RoundKey_13_ce0;
    sc_in< sc_lv<8> > RoundKey_13_q0;
    sc_out< sc_lv<4> > RoundKey_14_address0;
    sc_out< sc_logic > RoundKey_14_ce0;
    sc_in< sc_lv<8> > RoundKey_14_q0;
    sc_out< sc_lv<4> > RoundKey_15_address0;
    sc_out< sc_logic > RoundKey_15_ce0;
    sc_in< sc_lv<8> > RoundKey_15_q0;


    // Module declarations
    Cipher(sc_module_name name);
    SC_HAS_PROCESS(Cipher);

    ~Cipher();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    MixColumns* grp_MixColumns_fu_478;
    SubBytes* grp_SubBytes_fu_498;
    AddRoundKey* grp_AddRoundKey_fu_536;
    sc_signal< sc_lv<8> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<8> > reg_799;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_logic > grp_SubBytes_fu_498_ap_ready;
    sc_signal< sc_logic > grp_SubBytes_fu_498_ap_done;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<8> > reg_805;
    sc_signal< sc_lv<8> > reg_811;
    sc_signal< sc_lv<8> > reg_817;
    sc_signal< sc_lv<8> > reg_823;
    sc_signal< sc_lv<8> > reg_829;
    sc_signal< sc_lv<8> > reg_835;
    sc_signal< sc_lv<8> > reg_841;
    sc_signal< sc_lv<8> > reg_847;
    sc_signal< sc_lv<8> > reg_853;
    sc_signal< sc_lv<8> > reg_859;
    sc_signal< sc_lv<8> > reg_865;
    sc_signal< sc_lv<8> > reg_871;
    sc_signal< sc_lv<8> > reg_877;
    sc_signal< sc_lv<8> > reg_883;
    sc_signal< sc_lv<8> > reg_889;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > grp_AddRoundKey_fu_536_ap_ready;
    sc_signal< sc_logic > grp_AddRoundKey_fu_536_ap_done;
    sc_signal< sc_lv<8> > state_0_0_ret2_reg_1171;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > grp_MixColumns_fu_478_ap_ready;
    sc_signal< sc_logic > grp_MixColumns_fu_478_ap_done;
    sc_signal< sc_lv<8> > state_0_1_ret1_20_reg_1176;
    sc_signal< sc_lv<8> > state_0_2_ret1_21_reg_1181;
    sc_signal< sc_lv<8> > state_0_3_ret1_22_reg_1186;
    sc_signal< sc_lv<8> > state_1_0_ret1_reg_1191;
    sc_signal< sc_lv<8> > state_1_1_ret1_23_reg_1196;
    sc_signal< sc_lv<8> > state_1_2_ret1_24_reg_1201;
    sc_signal< sc_lv<8> > state_1_3_ret1_25_reg_1206;
    sc_signal< sc_lv<8> > state_2_0_ret1_reg_1211;
    sc_signal< sc_lv<8> > state_2_1_ret2_reg_1216;
    sc_signal< sc_lv<8> > state_2_2_ret2_reg_1221;
    sc_signal< sc_lv<8> > state_2_3_ret2_reg_1226;
    sc_signal< sc_lv<8> > state_3_0_ret2_reg_1231;
    sc_signal< sc_lv<8> > state_3_1_ret2_reg_1236;
    sc_signal< sc_lv<8> > state_3_2_ret2_reg_1241;
    sc_signal< sc_lv<8> > state_3_3_ret2_reg_1246;
    sc_signal< sc_lv<6> > zext_ln427_fu_997_p1;
    sc_signal< sc_lv<6> > zext_ln427_reg_1251;
    sc_signal< sc_lv<4> > round_fu_1002_p2;
    sc_signal< sc_lv<4> > round_reg_1256;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_logic > grp_MixColumns_fu_478_ap_start;
    sc_signal< sc_logic > grp_MixColumns_fu_478_ap_idle;
    sc_signal< sc_lv<8> > grp_MixColumns_fu_478_ap_return_0;
    sc_signal< sc_lv<8> > grp_MixColumns_fu_478_ap_return_1;
    sc_signal< sc_lv<8> > grp_MixColumns_fu_478_ap_return_2;
    sc_signal< sc_lv<8> > grp_MixColumns_fu_478_ap_return_3;
    sc_signal< sc_lv<8> > grp_MixColumns_fu_478_ap_return_4;
    sc_signal< sc_lv<8> > grp_MixColumns_fu_478_ap_return_5;
    sc_signal< sc_lv<8> > grp_MixColumns_fu_478_ap_return_6;
    sc_signal< sc_lv<8> > grp_MixColumns_fu_478_ap_return_7;
    sc_signal< sc_lv<8> > grp_MixColumns_fu_478_ap_return_8;
    sc_signal< sc_lv<8> > grp_MixColumns_fu_478_ap_return_9;
    sc_signal< sc_lv<8> > grp_MixColumns_fu_478_ap_return_10;
    sc_signal< sc_lv<8> > grp_MixColumns_fu_478_ap_return_11;
    sc_signal< sc_lv<8> > grp_MixColumns_fu_478_ap_return_12;
    sc_signal< sc_lv<8> > grp_MixColumns_fu_478_ap_return_13;
    sc_signal< sc_lv<8> > grp_MixColumns_fu_478_ap_return_14;
    sc_signal< sc_lv<8> > grp_MixColumns_fu_478_ap_return_15;
    sc_signal< sc_logic > grp_SubBytes_fu_498_ap_start;
    sc_signal< sc_logic > grp_SubBytes_fu_498_ap_idle;
    sc_signal< sc_lv<8> > grp_SubBytes_fu_498_ap_return_0;
    sc_signal< sc_lv<8> > grp_SubBytes_fu_498_ap_return_1;
    sc_signal< sc_lv<8> > grp_SubBytes_fu_498_ap_return_2;
    sc_signal< sc_lv<8> > grp_SubBytes_fu_498_ap_return_3;
    sc_signal< sc_lv<8> > grp_SubBytes_fu_498_ap_return_4;
    sc_signal< sc_lv<8> > grp_SubBytes_fu_498_ap_return_5;
    sc_signal< sc_lv<8> > grp_SubBytes_fu_498_ap_return_6;
    sc_signal< sc_lv<8> > grp_SubBytes_fu_498_ap_return_7;
    sc_signal< sc_lv<8> > grp_SubBytes_fu_498_ap_return_8;
    sc_signal< sc_lv<8> > grp_SubBytes_fu_498_ap_return_9;
    sc_signal< sc_lv<8> > grp_SubBytes_fu_498_ap_return_10;
    sc_signal< sc_lv<8> > grp_SubBytes_fu_498_ap_return_11;
    sc_signal< sc_lv<8> > grp_SubBytes_fu_498_ap_return_12;
    sc_signal< sc_lv<8> > grp_SubBytes_fu_498_ap_return_13;
    sc_signal< sc_lv<8> > grp_SubBytes_fu_498_ap_return_14;
    sc_signal< sc_lv<8> > grp_SubBytes_fu_498_ap_return_15;
    sc_signal< sc_logic > grp_AddRoundKey_fu_536_ap_start;
    sc_signal< sc_logic > grp_AddRoundKey_fu_536_ap_idle;
    sc_signal< sc_lv<6> > grp_AddRoundKey_fu_536_round;
    sc_signal< sc_lv<8> > grp_AddRoundKey_fu_536_state_0_0_read;
    sc_signal< sc_lv<8> > grp_AddRoundKey_fu_536_state_0_1_read;
    sc_signal< sc_lv<8> > grp_AddRoundKey_fu_536_state_0_2_read;
    sc_signal< sc_lv<8> > grp_AddRoundKey_fu_536_state_0_3_read;
    sc_signal< sc_lv<8> > grp_AddRoundKey_fu_536_state_1_0_read;
    sc_signal< sc_lv<8> > grp_AddRoundKey_fu_536_state_1_1_read;
    sc_signal< sc_lv<8> > grp_AddRoundKey_fu_536_state_1_2_read;
    sc_signal< sc_lv<8> > grp_AddRoundKey_fu_536_state_1_3_read;
    sc_signal< sc_lv<8> > grp_AddRoundKey_fu_536_state_2_0_read;
    sc_signal< sc_lv<8> > grp_AddRoundKey_fu_536_state_2_1_read;
    sc_signal< sc_lv<8> > grp_AddRoundKey_fu_536_state_2_2_read;
    sc_signal< sc_lv<8> > grp_AddRoundKey_fu_536_state_2_3_read;
    sc_signal< sc_lv<8> > grp_AddRoundKey_fu_536_state_3_0_read;
    sc_signal< sc_lv<8> > grp_AddRoundKey_fu_536_state_3_1_read;
    sc_signal< sc_lv<8> > grp_AddRoundKey_fu_536_state_3_2_read;
    sc_signal< sc_lv<8> > grp_AddRoundKey_fu_536_state_3_3_read;
    sc_signal< sc_lv<4> > grp_AddRoundKey_fu_536_RoundKey_0_address0;
    sc_signal< sc_logic > grp_AddRoundKey_fu_536_RoundKey_0_ce0;
    sc_signal< sc_lv<4> > grp_AddRoundKey_fu_536_RoundKey_1_address0;
    sc_signal< sc_logic > grp_AddRoundKey_fu_536_RoundKey_1_ce0;
    sc_signal< sc_lv<4> > grp_AddRoundKey_fu_536_RoundKey_2_address0;
    sc_signal< sc_logic > grp_AddRoundKey_fu_536_RoundKey_2_ce0;
    sc_signal< sc_lv<4> > grp_AddRoundKey_fu_536_RoundKey_3_address0;
    sc_signal< sc_logic > grp_AddRoundKey_fu_536_RoundKey_3_ce0;
    sc_signal< sc_lv<4> > grp_AddRoundKey_fu_536_RoundKey_4_address0;
    sc_signal< sc_logic > grp_AddRoundKey_fu_536_RoundKey_4_ce0;
    sc_signal< sc_lv<4> > grp_AddRoundKey_fu_536_RoundKey_5_address0;
    sc_signal< sc_logic > grp_AddRoundKey_fu_536_RoundKey_5_ce0;
    sc_signal< sc_lv<4> > grp_AddRoundKey_fu_536_RoundKey_6_address0;
    sc_signal< sc_logic > grp_AddRoundKey_fu_536_RoundKey_6_ce0;
    sc_signal< sc_lv<4> > grp_AddRoundKey_fu_536_RoundKey_7_address0;
    sc_signal< sc_logic > grp_AddRoundKey_fu_536_RoundKey_7_ce0;
    sc_signal< sc_lv<4> > grp_AddRoundKey_fu_536_RoundKey_8_address0;
    sc_signal< sc_logic > grp_AddRoundKey_fu_536_RoundKey_8_ce0;
    sc_signal< sc_lv<4> > grp_AddRoundKey_fu_536_RoundKey_9_address0;
    sc_signal< sc_logic > grp_AddRoundKey_fu_536_RoundKey_9_ce0;
    sc_signal< sc_lv<4> > grp_AddRoundKey_fu_536_RoundKey_10_address0;
    sc_signal< sc_logic > grp_AddRoundKey_fu_536_RoundKey_10_ce0;
    sc_signal< sc_lv<4> > grp_AddRoundKey_fu_536_RoundKey_11_address0;
    sc_signal< sc_logic > grp_AddRoundKey_fu_536_RoundKey_11_ce0;
    sc_signal< sc_lv<4> > grp_AddRoundKey_fu_536_RoundKey_12_address0;
    sc_signal< sc_logic > grp_AddRoundKey_fu_536_RoundKey_12_ce0;
    sc_signal< sc_lv<4> > grp_AddRoundKey_fu_536_RoundKey_13_address0;
    sc_signal< sc_logic > grp_AddRoundKey_fu_536_RoundKey_13_ce0;
    sc_signal< sc_lv<4> > grp_AddRoundKey_fu_536_RoundKey_14_address0;
    sc_signal< sc_logic > grp_AddRoundKey_fu_536_RoundKey_14_ce0;
    sc_signal< sc_lv<4> > grp_AddRoundKey_fu_536_RoundKey_15_address0;
    sc_signal< sc_logic > grp_AddRoundKey_fu_536_RoundKey_15_ce0;
    sc_signal< sc_lv<8> > grp_AddRoundKey_fu_536_ap_return_0;
    sc_signal< sc_lv<8> > grp_AddRoundKey_fu_536_ap_return_1;
    sc_signal< sc_lv<8> > grp_AddRoundKey_fu_536_ap_return_2;
    sc_signal< sc_lv<8> > grp_AddRoundKey_fu_536_ap_return_3;
    sc_signal< sc_lv<8> > grp_AddRoundKey_fu_536_ap_return_4;
    sc_signal< sc_lv<8> > grp_AddRoundKey_fu_536_ap_return_5;
    sc_signal< sc_lv<8> > grp_AddRoundKey_fu_536_ap_return_6;
    sc_signal< sc_lv<8> > grp_AddRoundKey_fu_536_ap_return_7;
    sc_signal< sc_lv<8> > grp_AddRoundKey_fu_536_ap_return_8;
    sc_signal< sc_lv<8> > grp_AddRoundKey_fu_536_ap_return_9;
    sc_signal< sc_lv<8> > grp_AddRoundKey_fu_536_ap_return_10;
    sc_signal< sc_lv<8> > grp_AddRoundKey_fu_536_ap_return_11;
    sc_signal< sc_lv<8> > grp_AddRoundKey_fu_536_ap_return_12;
    sc_signal< sc_lv<8> > grp_AddRoundKey_fu_536_ap_return_13;
    sc_signal< sc_lv<8> > grp_AddRoundKey_fu_536_ap_return_14;
    sc_signal< sc_lv<8> > grp_AddRoundKey_fu_536_ap_return_15;
    sc_signal< sc_lv<8> > state_3_2_load_4_reg_306;
    sc_signal< sc_lv<8> > state_3_1_load_4_reg_316;
    sc_signal< sc_lv<8> > state_3_0_load_4_reg_326;
    sc_signal< sc_lv<8> > state_2_3_load_4_reg_336;
    sc_signal< sc_lv<8> > state_2_2_load_4_reg_346;
    sc_signal< sc_lv<8> > state_2_1_load_4_reg_356;
    sc_signal< sc_lv<8> > state_2_0_load_4_reg_366;
    sc_signal< sc_lv<8> > state_1_3_load_4_reg_376;
    sc_signal< sc_lv<8> > state_1_2_load_4_reg_386;
    sc_signal< sc_lv<8> > state_1_1_load_4_reg_396;
    sc_signal< sc_lv<8> > state_1_0_load_4_reg_406;
    sc_signal< sc_lv<8> > state_0_3_load_4_reg_416;
    sc_signal< sc_lv<8> > state_0_2_load_4_reg_426;
    sc_signal< sc_lv<8> > state_0_1_load_4_reg_436;
    sc_signal< sc_lv<8> > state_0_0_load_4_reg_446;
    sc_signal< sc_lv<8> > state_3_3_load_4_reg_456;
    sc_signal< sc_lv<4> > round_0_reg_466;
    sc_signal< sc_logic > grp_MixColumns_fu_478_ap_start_reg;
    sc_signal< sc_logic > grp_SubBytes_fu_498_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > icmp_ln422_fu_895_p2;
    sc_signal< sc_logic > grp_AddRoundKey_fu_536_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<8> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<8> ap_ST_fsm_state1;
    static const sc_lv<8> ap_ST_fsm_state2;
    static const sc_lv<8> ap_ST_fsm_state3;
    static const sc_lv<8> ap_ST_fsm_state4;
    static const sc_lv<8> ap_ST_fsm_state5;
    static const sc_lv<8> ap_ST_fsm_state6;
    static const sc_lv<8> ap_ST_fsm_state7;
    static const sc_lv<8> ap_ST_fsm_state8;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<6> ap_const_lv6_A;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<4> ap_const_lv4_A;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_RoundKey_0_address0();
    void thread_RoundKey_0_ce0();
    void thread_RoundKey_10_address0();
    void thread_RoundKey_10_ce0();
    void thread_RoundKey_11_address0();
    void thread_RoundKey_11_ce0();
    void thread_RoundKey_12_address0();
    void thread_RoundKey_12_ce0();
    void thread_RoundKey_13_address0();
    void thread_RoundKey_13_ce0();
    void thread_RoundKey_14_address0();
    void thread_RoundKey_14_ce0();
    void thread_RoundKey_15_address0();
    void thread_RoundKey_15_ce0();
    void thread_RoundKey_1_address0();
    void thread_RoundKey_1_ce0();
    void thread_RoundKey_2_address0();
    void thread_RoundKey_2_ce0();
    void thread_RoundKey_3_address0();
    void thread_RoundKey_3_ce0();
    void thread_RoundKey_4_address0();
    void thread_RoundKey_4_ce0();
    void thread_RoundKey_5_address0();
    void thread_RoundKey_5_ce0();
    void thread_RoundKey_6_address0();
    void thread_RoundKey_6_ce0();
    void thread_RoundKey_7_address0();
    void thread_RoundKey_7_ce0();
    void thread_RoundKey_8_address0();
    void thread_RoundKey_8_ce0();
    void thread_RoundKey_9_address0();
    void thread_RoundKey_9_ce0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_grp_AddRoundKey_fu_536_ap_start();
    void thread_grp_AddRoundKey_fu_536_round();
    void thread_grp_AddRoundKey_fu_536_state_0_0_read();
    void thread_grp_AddRoundKey_fu_536_state_0_1_read();
    void thread_grp_AddRoundKey_fu_536_state_0_2_read();
    void thread_grp_AddRoundKey_fu_536_state_0_3_read();
    void thread_grp_AddRoundKey_fu_536_state_1_0_read();
    void thread_grp_AddRoundKey_fu_536_state_1_1_read();
    void thread_grp_AddRoundKey_fu_536_state_1_2_read();
    void thread_grp_AddRoundKey_fu_536_state_1_3_read();
    void thread_grp_AddRoundKey_fu_536_state_2_0_read();
    void thread_grp_AddRoundKey_fu_536_state_2_1_read();
    void thread_grp_AddRoundKey_fu_536_state_2_2_read();
    void thread_grp_AddRoundKey_fu_536_state_2_3_read();
    void thread_grp_AddRoundKey_fu_536_state_3_0_read();
    void thread_grp_AddRoundKey_fu_536_state_3_1_read();
    void thread_grp_AddRoundKey_fu_536_state_3_2_read();
    void thread_grp_AddRoundKey_fu_536_state_3_3_read();
    void thread_grp_MixColumns_fu_478_ap_start();
    void thread_grp_SubBytes_fu_498_ap_start();
    void thread_icmp_ln422_fu_895_p2();
    void thread_round_fu_1002_p2();
    void thread_state_0_0_o();
    void thread_state_0_0_o_ap_vld();
    void thread_state_0_1_o();
    void thread_state_0_1_o_ap_vld();
    void thread_state_0_2_o();
    void thread_state_0_2_o_ap_vld();
    void thread_state_0_3_o();
    void thread_state_0_3_o_ap_vld();
    void thread_state_1_0_o();
    void thread_state_1_0_o_ap_vld();
    void thread_state_1_1_o();
    void thread_state_1_1_o_ap_vld();
    void thread_state_1_2_o();
    void thread_state_1_2_o_ap_vld();
    void thread_state_1_3_o();
    void thread_state_1_3_o_ap_vld();
    void thread_state_2_0_o();
    void thread_state_2_0_o_ap_vld();
    void thread_state_2_1_o();
    void thread_state_2_1_o_ap_vld();
    void thread_state_2_2_o();
    void thread_state_2_2_o_ap_vld();
    void thread_state_2_3_o();
    void thread_state_2_3_o_ap_vld();
    void thread_state_3_0_o();
    void thread_state_3_0_o_ap_vld();
    void thread_state_3_1_o();
    void thread_state_3_1_o_ap_vld();
    void thread_state_3_2_o();
    void thread_state_3_2_o_ap_vld();
    void thread_state_3_3_o();
    void thread_state_3_3_o_ap_vld();
    void thread_zext_ln427_fu_997_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
