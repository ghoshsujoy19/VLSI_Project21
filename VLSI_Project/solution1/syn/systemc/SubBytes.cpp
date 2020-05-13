// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "SubBytes.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic SubBytes::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic SubBytes::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<4> SubBytes::ap_ST_fsm_state1 = "1";
const sc_lv<4> SubBytes::ap_ST_fsm_state2 = "10";
const sc_lv<4> SubBytes::ap_ST_fsm_state3 = "100";
const sc_lv<4> SubBytes::ap_ST_fsm_state4 = "1000";
const sc_lv<32> SubBytes::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> SubBytes::ap_const_lv32_1 = "1";
const sc_lv<1> SubBytes::ap_const_lv1_0 = "0";
const sc_lv<32> SubBytes::ap_const_lv32_2 = "10";
const sc_lv<3> SubBytes::ap_const_lv3_0 = "000";
const sc_lv<1> SubBytes::ap_const_lv1_1 = "1";
const sc_lv<32> SubBytes::ap_const_lv32_3 = "11";
const sc_lv<2> SubBytes::ap_const_lv2_3 = "11";
const sc_lv<2> SubBytes::ap_const_lv2_2 = "10";
const sc_lv<2> SubBytes::ap_const_lv2_1 = "1";
const sc_lv<2> SubBytes::ap_const_lv2_0 = "00";
const sc_lv<3> SubBytes::ap_const_lv3_4 = "100";
const sc_lv<3> SubBytes::ap_const_lv3_1 = "1";
const bool SubBytes::ap_const_boolean_1 = true;

SubBytes::SubBytes(sc_module_name name) : sc_module(name), mVcdFile(0) {
    sbox_U = new SubBytes_sbox("sbox_U");
    sbox_U->clk(ap_clk);
    sbox_U->reset(ap_rst);
    sbox_U->address0(sbox_address0);
    sbox_U->ce0(sbox_ce0);
    sbox_U->q0(sbox_q0);
    Cipher_mux_165_8_bkb_U34 = new Cipher_mux_165_8_bkb<1,1,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,5,8>("Cipher_mux_165_8_bkb_U34");
    Cipher_mux_165_8_bkb_U34->din0(state_0_0_0_fu_134);
    Cipher_mux_165_8_bkb_U34->din1(state_0_1_0_fu_130);
    Cipher_mux_165_8_bkb_U34->din2(state_0_2_0_fu_126);
    Cipher_mux_165_8_bkb_U34->din3(state_0_3_0_fu_122);
    Cipher_mux_165_8_bkb_U34->din4(state_1_0_0_fu_118);
    Cipher_mux_165_8_bkb_U34->din5(state_1_1_0_fu_114);
    Cipher_mux_165_8_bkb_U34->din6(state_1_2_0_fu_110);
    Cipher_mux_165_8_bkb_U34->din7(state_1_3_0_fu_106);
    Cipher_mux_165_8_bkb_U34->din8(state_2_0_0_fu_102);
    Cipher_mux_165_8_bkb_U34->din9(state_2_1_0_fu_98);
    Cipher_mux_165_8_bkb_U34->din10(state_2_2_0_fu_94);
    Cipher_mux_165_8_bkb_U34->din11(state_2_3_0_fu_90);
    Cipher_mux_165_8_bkb_U34->din12(state_3_0_0_fu_86);
    Cipher_mux_165_8_bkb_U34->din13(state_3_1_0_fu_82);
    Cipher_mux_165_8_bkb_U34->din14(state_3_2_0_fu_78);
    Cipher_mux_165_8_bkb_U34->din15(state_3_3_0_fu_74);
    Cipher_mux_165_8_bkb_U34->din16(tmp_1_fu_536_p17);
    Cipher_mux_165_8_bkb_U34->dout(tmp_1_fu_536_p18);
    Cipher_mux_42_8_1_1_U35 = new Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>("Cipher_mux_42_8_1_1_U35");
    Cipher_mux_42_8_1_1_U35->din0(state_2_3_0_load_1_reg_996);
    Cipher_mux_42_8_1_1_U35->din1(state_2_3_0_load_1_reg_996);
    Cipher_mux_42_8_1_1_U35->din2(state_2_3_0_load_1_reg_996);
    Cipher_mux_42_8_1_1_U35->din3(sbox_q0);
    Cipher_mux_42_8_1_1_U35->din4(trunc_ln265_reg_939);
    Cipher_mux_42_8_1_1_U35->dout(state_2_3_3_fu_579_p6);
    Cipher_mux_42_8_1_1_U36 = new Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>("Cipher_mux_42_8_1_1_U36");
    Cipher_mux_42_8_1_1_U36->din0(state_2_2_0_load_1_reg_1003);
    Cipher_mux_42_8_1_1_U36->din1(state_2_2_0_load_1_reg_1003);
    Cipher_mux_42_8_1_1_U36->din2(sbox_q0);
    Cipher_mux_42_8_1_1_U36->din3(state_2_2_0_load_1_reg_1003);
    Cipher_mux_42_8_1_1_U36->din4(trunc_ln265_reg_939);
    Cipher_mux_42_8_1_1_U36->dout(state_2_2_3_fu_589_p6);
    Cipher_mux_42_8_1_1_U37 = new Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>("Cipher_mux_42_8_1_1_U37");
    Cipher_mux_42_8_1_1_U37->din0(state_2_1_0_load_1_reg_1010);
    Cipher_mux_42_8_1_1_U37->din1(sbox_q0);
    Cipher_mux_42_8_1_1_U37->din2(state_2_1_0_load_1_reg_1010);
    Cipher_mux_42_8_1_1_U37->din3(state_2_1_0_load_1_reg_1010);
    Cipher_mux_42_8_1_1_U37->din4(trunc_ln265_reg_939);
    Cipher_mux_42_8_1_1_U37->dout(state_2_1_3_fu_599_p6);
    Cipher_mux_42_8_1_1_U38 = new Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>("Cipher_mux_42_8_1_1_U38");
    Cipher_mux_42_8_1_1_U38->din0(sbox_q0);
    Cipher_mux_42_8_1_1_U38->din1(state_2_0_0_load_1_reg_1017);
    Cipher_mux_42_8_1_1_U38->din2(state_2_0_0_load_1_reg_1017);
    Cipher_mux_42_8_1_1_U38->din3(state_2_0_0_load_1_reg_1017);
    Cipher_mux_42_8_1_1_U38->din4(trunc_ln265_reg_939);
    Cipher_mux_42_8_1_1_U38->dout(state_2_0_3_fu_609_p6);
    Cipher_mux_42_8_1_1_U39 = new Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>("Cipher_mux_42_8_1_1_U39");
    Cipher_mux_42_8_1_1_U39->din0(state_1_3_0_load_1_reg_1024);
    Cipher_mux_42_8_1_1_U39->din1(state_1_3_0_load_1_reg_1024);
    Cipher_mux_42_8_1_1_U39->din2(state_1_3_0_load_1_reg_1024);
    Cipher_mux_42_8_1_1_U39->din3(sbox_q0);
    Cipher_mux_42_8_1_1_U39->din4(trunc_ln265_reg_939);
    Cipher_mux_42_8_1_1_U39->dout(state_1_3_3_fu_639_p6);
    Cipher_mux_42_8_1_1_U40 = new Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>("Cipher_mux_42_8_1_1_U40");
    Cipher_mux_42_8_1_1_U40->din0(state_1_2_0_load_1_reg_1031);
    Cipher_mux_42_8_1_1_U40->din1(state_1_2_0_load_1_reg_1031);
    Cipher_mux_42_8_1_1_U40->din2(sbox_q0);
    Cipher_mux_42_8_1_1_U40->din3(state_1_2_0_load_1_reg_1031);
    Cipher_mux_42_8_1_1_U40->din4(trunc_ln265_reg_939);
    Cipher_mux_42_8_1_1_U40->dout(state_1_2_3_fu_649_p6);
    Cipher_mux_42_8_1_1_U41 = new Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>("Cipher_mux_42_8_1_1_U41");
    Cipher_mux_42_8_1_1_U41->din0(state_1_1_0_load_1_reg_1038);
    Cipher_mux_42_8_1_1_U41->din1(sbox_q0);
    Cipher_mux_42_8_1_1_U41->din2(state_1_1_0_load_1_reg_1038);
    Cipher_mux_42_8_1_1_U41->din3(state_1_1_0_load_1_reg_1038);
    Cipher_mux_42_8_1_1_U41->din4(trunc_ln265_reg_939);
    Cipher_mux_42_8_1_1_U41->dout(state_1_1_3_fu_659_p6);
    Cipher_mux_42_8_1_1_U42 = new Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>("Cipher_mux_42_8_1_1_U42");
    Cipher_mux_42_8_1_1_U42->din0(sbox_q0);
    Cipher_mux_42_8_1_1_U42->din1(state_1_0_0_load_1_reg_1045);
    Cipher_mux_42_8_1_1_U42->din2(state_1_0_0_load_1_reg_1045);
    Cipher_mux_42_8_1_1_U42->din3(state_1_0_0_load_1_reg_1045);
    Cipher_mux_42_8_1_1_U42->din4(trunc_ln265_reg_939);
    Cipher_mux_42_8_1_1_U42->dout(state_1_0_3_fu_669_p6);
    Cipher_mux_42_8_1_1_U43 = new Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>("Cipher_mux_42_8_1_1_U43");
    Cipher_mux_42_8_1_1_U43->din0(state_0_3_0_load_1_reg_1052);
    Cipher_mux_42_8_1_1_U43->din1(state_0_3_0_load_1_reg_1052);
    Cipher_mux_42_8_1_1_U43->din2(state_0_3_0_load_1_reg_1052);
    Cipher_mux_42_8_1_1_U43->din3(sbox_q0);
    Cipher_mux_42_8_1_1_U43->din4(trunc_ln265_reg_939);
    Cipher_mux_42_8_1_1_U43->dout(state_0_3_3_fu_699_p6);
    Cipher_mux_42_8_1_1_U44 = new Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>("Cipher_mux_42_8_1_1_U44");
    Cipher_mux_42_8_1_1_U44->din0(state_0_2_0_load_1_reg_1059);
    Cipher_mux_42_8_1_1_U44->din1(state_0_2_0_load_1_reg_1059);
    Cipher_mux_42_8_1_1_U44->din2(sbox_q0);
    Cipher_mux_42_8_1_1_U44->din3(state_0_2_0_load_1_reg_1059);
    Cipher_mux_42_8_1_1_U44->din4(trunc_ln265_reg_939);
    Cipher_mux_42_8_1_1_U44->dout(state_0_2_3_fu_709_p6);
    Cipher_mux_42_8_1_1_U45 = new Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>("Cipher_mux_42_8_1_1_U45");
    Cipher_mux_42_8_1_1_U45->din0(state_0_1_0_load_1_reg_1066);
    Cipher_mux_42_8_1_1_U45->din1(sbox_q0);
    Cipher_mux_42_8_1_1_U45->din2(state_0_1_0_load_1_reg_1066);
    Cipher_mux_42_8_1_1_U45->din3(state_0_1_0_load_1_reg_1066);
    Cipher_mux_42_8_1_1_U45->din4(trunc_ln265_reg_939);
    Cipher_mux_42_8_1_1_U45->dout(state_0_1_3_fu_719_p6);
    Cipher_mux_42_8_1_1_U46 = new Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>("Cipher_mux_42_8_1_1_U46");
    Cipher_mux_42_8_1_1_U46->din0(sbox_q0);
    Cipher_mux_42_8_1_1_U46->din1(state_0_0_0_load_1_reg_1073);
    Cipher_mux_42_8_1_1_U46->din2(state_0_0_0_load_1_reg_1073);
    Cipher_mux_42_8_1_1_U46->din3(state_0_0_0_load_1_reg_1073);
    Cipher_mux_42_8_1_1_U46->din4(trunc_ln265_reg_939);
    Cipher_mux_42_8_1_1_U46->dout(state_0_0_3_fu_729_p6);
    Cipher_mux_42_8_1_1_U47 = new Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>("Cipher_mux_42_8_1_1_U47");
    Cipher_mux_42_8_1_1_U47->din0(state_3_3_0_load_1_reg_968);
    Cipher_mux_42_8_1_1_U47->din1(state_3_3_0_load_1_reg_968);
    Cipher_mux_42_8_1_1_U47->din2(state_3_3_0_load_1_reg_968);
    Cipher_mux_42_8_1_1_U47->din3(sbox_q0);
    Cipher_mux_42_8_1_1_U47->din4(trunc_ln265_reg_939);
    Cipher_mux_42_8_1_1_U47->dout(state_3_3_3_fu_759_p6);
    Cipher_mux_42_8_1_1_U48 = new Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>("Cipher_mux_42_8_1_1_U48");
    Cipher_mux_42_8_1_1_U48->din0(state_3_2_0_load_1_reg_975);
    Cipher_mux_42_8_1_1_U48->din1(state_3_2_0_load_1_reg_975);
    Cipher_mux_42_8_1_1_U48->din2(sbox_q0);
    Cipher_mux_42_8_1_1_U48->din3(state_3_2_0_load_1_reg_975);
    Cipher_mux_42_8_1_1_U48->din4(trunc_ln265_reg_939);
    Cipher_mux_42_8_1_1_U48->dout(state_3_2_3_fu_769_p6);
    Cipher_mux_42_8_1_1_U49 = new Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>("Cipher_mux_42_8_1_1_U49");
    Cipher_mux_42_8_1_1_U49->din0(state_3_1_0_load_1_reg_982);
    Cipher_mux_42_8_1_1_U49->din1(sbox_q0);
    Cipher_mux_42_8_1_1_U49->din2(state_3_1_0_load_1_reg_982);
    Cipher_mux_42_8_1_1_U49->din3(state_3_1_0_load_1_reg_982);
    Cipher_mux_42_8_1_1_U49->din4(trunc_ln265_reg_939);
    Cipher_mux_42_8_1_1_U49->dout(state_3_1_3_fu_779_p6);
    Cipher_mux_42_8_1_1_U50 = new Cipher_mux_42_8_1_1<1,1,8,8,8,8,2,8>("Cipher_mux_42_8_1_1_U50");
    Cipher_mux_42_8_1_1_U50->din0(sbox_q0);
    Cipher_mux_42_8_1_1_U50->din1(state_3_0_0_load_1_reg_989);
    Cipher_mux_42_8_1_1_U50->din2(state_3_0_0_load_1_reg_989);
    Cipher_mux_42_8_1_1_U50->din3(state_3_0_0_load_1_reg_989);
    Cipher_mux_42_8_1_1_U50->din4(trunc_ln265_reg_939);
    Cipher_mux_42_8_1_1_U50->dout(state_3_0_3_fu_789_p6);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln261_fu_397_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln261_fu_397_p2 );

    SC_METHOD(thread_ap_return_0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln261_fu_397_p2 );
    sensitive << ( state_0_0_0_fu_134 );

    SC_METHOD(thread_ap_return_1);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln261_fu_397_p2 );
    sensitive << ( state_0_1_0_fu_130 );

    SC_METHOD(thread_ap_return_10);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln261_fu_397_p2 );
    sensitive << ( state_2_2_0_fu_94 );

    SC_METHOD(thread_ap_return_11);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln261_fu_397_p2 );
    sensitive << ( state_2_3_0_fu_90 );

    SC_METHOD(thread_ap_return_12);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln261_fu_397_p2 );
    sensitive << ( state_3_0_0_fu_86 );

    SC_METHOD(thread_ap_return_13);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln261_fu_397_p2 );
    sensitive << ( state_3_1_0_fu_82 );

    SC_METHOD(thread_ap_return_14);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln261_fu_397_p2 );
    sensitive << ( state_3_2_0_fu_78 );

    SC_METHOD(thread_ap_return_15);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln261_fu_397_p2 );
    sensitive << ( state_3_3_0_fu_74 );

    SC_METHOD(thread_ap_return_2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln261_fu_397_p2 );
    sensitive << ( state_0_2_0_fu_126 );

    SC_METHOD(thread_ap_return_3);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln261_fu_397_p2 );
    sensitive << ( state_0_3_0_fu_122 );

    SC_METHOD(thread_ap_return_4);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln261_fu_397_p2 );
    sensitive << ( state_1_0_0_fu_118 );

    SC_METHOD(thread_ap_return_5);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln261_fu_397_p2 );
    sensitive << ( state_1_1_0_fu_114 );

    SC_METHOD(thread_ap_return_6);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln261_fu_397_p2 );
    sensitive << ( state_1_2_0_fu_110 );

    SC_METHOD(thread_ap_return_7);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln261_fu_397_p2 );
    sensitive << ( state_1_3_0_fu_106 );

    SC_METHOD(thread_ap_return_8);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln261_fu_397_p2 );
    sensitive << ( state_2_0_0_fu_102 );

    SC_METHOD(thread_ap_return_9);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln261_fu_397_p2 );
    sensitive << ( state_2_1_0_fu_98 );

    SC_METHOD(thread_i_fu_403_p2);
    sensitive << ( i_0_reg_247 );

    SC_METHOD(thread_icmp_ln261_fu_397_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( i_0_reg_247 );

    SC_METHOD(thread_icmp_ln263_fu_509_p2);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( j_0_reg_258 );

    SC_METHOD(thread_j_fu_515_p2);
    sensitive << ( j_0_reg_258 );

    SC_METHOD(thread_sbox_address0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( zext_ln265_1_fu_574_p1 );

    SC_METHOD(thread_sbox_ce0);
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_tmp_1_fu_536_p17);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_2_fu_525_p3 );

    SC_METHOD(thread_tmp_2_fu_525_p3);
    sensitive << ( trunc_ln265_reg_939 );
    sensitive << ( trunc_ln265_1_fu_521_p1 );

    SC_METHOD(thread_trunc_ln265_1_fu_521_p1);
    sensitive << ( j_0_reg_258 );

    SC_METHOD(thread_trunc_ln265_fu_409_p1);
    sensitive << ( i_0_reg_247 );

    SC_METHOD(thread_zext_ln265_1_fu_574_p1);
    sensitive << ( tmp_1_fu_536_p18 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln261_fu_397_p2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( icmp_ln263_fu_509_p2 );

    ap_CS_fsm = "0001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "SubBytes_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, state_0_0_read, "(port)state_0_0_read");
    sc_trace(mVcdFile, state_0_1_read, "(port)state_0_1_read");
    sc_trace(mVcdFile, state_0_2_read, "(port)state_0_2_read");
    sc_trace(mVcdFile, state_0_3_read, "(port)state_0_3_read");
    sc_trace(mVcdFile, state_1_0_read, "(port)state_1_0_read");
    sc_trace(mVcdFile, state_1_1_read, "(port)state_1_1_read");
    sc_trace(mVcdFile, state_1_2_read, "(port)state_1_2_read");
    sc_trace(mVcdFile, state_1_3_read, "(port)state_1_3_read");
    sc_trace(mVcdFile, state_2_0_read, "(port)state_2_0_read");
    sc_trace(mVcdFile, state_2_1_read, "(port)state_2_1_read");
    sc_trace(mVcdFile, state_2_2_read, "(port)state_2_2_read");
    sc_trace(mVcdFile, state_2_3_read, "(port)state_2_3_read");
    sc_trace(mVcdFile, state_3_0_read, "(port)state_3_0_read");
    sc_trace(mVcdFile, state_3_1_read, "(port)state_3_1_read");
    sc_trace(mVcdFile, state_3_2_read, "(port)state_3_2_read");
    sc_trace(mVcdFile, state_3_3_read, "(port)state_3_3_read");
    sc_trace(mVcdFile, ap_return_0, "(port)ap_return_0");
    sc_trace(mVcdFile, ap_return_1, "(port)ap_return_1");
    sc_trace(mVcdFile, ap_return_2, "(port)ap_return_2");
    sc_trace(mVcdFile, ap_return_3, "(port)ap_return_3");
    sc_trace(mVcdFile, ap_return_4, "(port)ap_return_4");
    sc_trace(mVcdFile, ap_return_5, "(port)ap_return_5");
    sc_trace(mVcdFile, ap_return_6, "(port)ap_return_6");
    sc_trace(mVcdFile, ap_return_7, "(port)ap_return_7");
    sc_trace(mVcdFile, ap_return_8, "(port)ap_return_8");
    sc_trace(mVcdFile, ap_return_9, "(port)ap_return_9");
    sc_trace(mVcdFile, ap_return_10, "(port)ap_return_10");
    sc_trace(mVcdFile, ap_return_11, "(port)ap_return_11");
    sc_trace(mVcdFile, ap_return_12, "(port)ap_return_12");
    sc_trace(mVcdFile, ap_return_13, "(port)ap_return_13");
    sc_trace(mVcdFile, ap_return_14, "(port)ap_return_14");
    sc_trace(mVcdFile, ap_return_15, "(port)ap_return_15");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, sbox_address0, "sbox_address0");
    sc_trace(mVcdFile, sbox_ce0, "sbox_ce0");
    sc_trace(mVcdFile, sbox_q0, "sbox_q0");
    sc_trace(mVcdFile, i_fu_403_p2, "i_fu_403_p2");
    sc_trace(mVcdFile, i_reg_934, "i_reg_934");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, trunc_ln265_fu_409_p1, "trunc_ln265_fu_409_p1");
    sc_trace(mVcdFile, trunc_ln265_reg_939, "trunc_ln265_reg_939");
    sc_trace(mVcdFile, icmp_ln261_fu_397_p2, "icmp_ln261_fu_397_p2");
    sc_trace(mVcdFile, j_fu_515_p2, "j_fu_515_p2");
    sc_trace(mVcdFile, j_reg_963, "j_reg_963");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, state_3_3_0_load_1_reg_968, "state_3_3_0_load_1_reg_968");
    sc_trace(mVcdFile, icmp_ln263_fu_509_p2, "icmp_ln263_fu_509_p2");
    sc_trace(mVcdFile, state_3_2_0_load_1_reg_975, "state_3_2_0_load_1_reg_975");
    sc_trace(mVcdFile, state_3_1_0_load_1_reg_982, "state_3_1_0_load_1_reg_982");
    sc_trace(mVcdFile, state_3_0_0_load_1_reg_989, "state_3_0_0_load_1_reg_989");
    sc_trace(mVcdFile, state_2_3_0_load_1_reg_996, "state_2_3_0_load_1_reg_996");
    sc_trace(mVcdFile, state_2_2_0_load_1_reg_1003, "state_2_2_0_load_1_reg_1003");
    sc_trace(mVcdFile, state_2_1_0_load_1_reg_1010, "state_2_1_0_load_1_reg_1010");
    sc_trace(mVcdFile, state_2_0_0_load_1_reg_1017, "state_2_0_0_load_1_reg_1017");
    sc_trace(mVcdFile, state_1_3_0_load_1_reg_1024, "state_1_3_0_load_1_reg_1024");
    sc_trace(mVcdFile, state_1_2_0_load_1_reg_1031, "state_1_2_0_load_1_reg_1031");
    sc_trace(mVcdFile, state_1_1_0_load_1_reg_1038, "state_1_1_0_load_1_reg_1038");
    sc_trace(mVcdFile, state_1_0_0_load_1_reg_1045, "state_1_0_0_load_1_reg_1045");
    sc_trace(mVcdFile, state_0_3_0_load_1_reg_1052, "state_0_3_0_load_1_reg_1052");
    sc_trace(mVcdFile, state_0_2_0_load_1_reg_1059, "state_0_2_0_load_1_reg_1059");
    sc_trace(mVcdFile, state_0_1_0_load_1_reg_1066, "state_0_1_0_load_1_reg_1066");
    sc_trace(mVcdFile, state_0_0_0_load_1_reg_1073, "state_0_0_0_load_1_reg_1073");
    sc_trace(mVcdFile, trunc_ln265_1_fu_521_p1, "trunc_ln265_1_fu_521_p1");
    sc_trace(mVcdFile, trunc_ln265_1_reg_1080, "trunc_ln265_1_reg_1080");
    sc_trace(mVcdFile, i_0_reg_247, "i_0_reg_247");
    sc_trace(mVcdFile, j_0_reg_258, "j_0_reg_258");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, zext_ln265_1_fu_574_p1, "zext_ln265_1_fu_574_p1");
    sc_trace(mVcdFile, state_3_3_0_fu_74, "state_3_3_0_fu_74");
    sc_trace(mVcdFile, state_3_3_3_fu_759_p6, "state_3_3_3_fu_759_p6");
    sc_trace(mVcdFile, state_3_2_0_fu_78, "state_3_2_0_fu_78");
    sc_trace(mVcdFile, state_3_2_3_fu_769_p6, "state_3_2_3_fu_769_p6");
    sc_trace(mVcdFile, state_3_1_0_fu_82, "state_3_1_0_fu_82");
    sc_trace(mVcdFile, state_3_1_3_fu_779_p6, "state_3_1_3_fu_779_p6");
    sc_trace(mVcdFile, state_3_0_0_fu_86, "state_3_0_0_fu_86");
    sc_trace(mVcdFile, state_3_0_3_fu_789_p6, "state_3_0_3_fu_789_p6");
    sc_trace(mVcdFile, state_2_3_0_fu_90, "state_2_3_0_fu_90");
    sc_trace(mVcdFile, state_2_3_3_fu_579_p6, "state_2_3_3_fu_579_p6");
    sc_trace(mVcdFile, state_2_2_0_fu_94, "state_2_2_0_fu_94");
    sc_trace(mVcdFile, state_2_2_3_fu_589_p6, "state_2_2_3_fu_589_p6");
    sc_trace(mVcdFile, state_2_1_0_fu_98, "state_2_1_0_fu_98");
    sc_trace(mVcdFile, state_2_1_3_fu_599_p6, "state_2_1_3_fu_599_p6");
    sc_trace(mVcdFile, state_2_0_0_fu_102, "state_2_0_0_fu_102");
    sc_trace(mVcdFile, state_2_0_3_fu_609_p6, "state_2_0_3_fu_609_p6");
    sc_trace(mVcdFile, state_1_3_0_fu_106, "state_1_3_0_fu_106");
    sc_trace(mVcdFile, state_1_3_3_fu_639_p6, "state_1_3_3_fu_639_p6");
    sc_trace(mVcdFile, state_1_2_0_fu_110, "state_1_2_0_fu_110");
    sc_trace(mVcdFile, state_1_2_3_fu_649_p6, "state_1_2_3_fu_649_p6");
    sc_trace(mVcdFile, state_1_1_0_fu_114, "state_1_1_0_fu_114");
    sc_trace(mVcdFile, state_1_1_3_fu_659_p6, "state_1_1_3_fu_659_p6");
    sc_trace(mVcdFile, state_1_0_0_fu_118, "state_1_0_0_fu_118");
    sc_trace(mVcdFile, state_1_0_3_fu_669_p6, "state_1_0_3_fu_669_p6");
    sc_trace(mVcdFile, state_0_3_0_fu_122, "state_0_3_0_fu_122");
    sc_trace(mVcdFile, state_0_3_3_fu_699_p6, "state_0_3_3_fu_699_p6");
    sc_trace(mVcdFile, state_0_2_0_fu_126, "state_0_2_0_fu_126");
    sc_trace(mVcdFile, state_0_2_3_fu_709_p6, "state_0_2_3_fu_709_p6");
    sc_trace(mVcdFile, state_0_1_0_fu_130, "state_0_1_0_fu_130");
    sc_trace(mVcdFile, state_0_1_3_fu_719_p6, "state_0_1_3_fu_719_p6");
    sc_trace(mVcdFile, state_0_0_0_fu_134, "state_0_0_0_fu_134");
    sc_trace(mVcdFile, state_0_0_3_fu_729_p6, "state_0_0_3_fu_729_p6");
    sc_trace(mVcdFile, tmp_2_fu_525_p3, "tmp_2_fu_525_p3");
    sc_trace(mVcdFile, tmp_1_fu_536_p17, "tmp_1_fu_536_p17");
    sc_trace(mVcdFile, tmp_1_fu_536_p18, "tmp_1_fu_536_p18");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

SubBytes::~SubBytes() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete sbox_U;
    delete Cipher_mux_165_8_bkb_U34;
    delete Cipher_mux_42_8_1_1_U35;
    delete Cipher_mux_42_8_1_1_U36;
    delete Cipher_mux_42_8_1_1_U37;
    delete Cipher_mux_42_8_1_1_U38;
    delete Cipher_mux_42_8_1_1_U39;
    delete Cipher_mux_42_8_1_1_U40;
    delete Cipher_mux_42_8_1_1_U41;
    delete Cipher_mux_42_8_1_1_U42;
    delete Cipher_mux_42_8_1_1_U43;
    delete Cipher_mux_42_8_1_1_U44;
    delete Cipher_mux_42_8_1_1_U45;
    delete Cipher_mux_42_8_1_1_U46;
    delete Cipher_mux_42_8_1_1_U47;
    delete Cipher_mux_42_8_1_1_U48;
    delete Cipher_mux_42_8_1_1_U49;
    delete Cipher_mux_42_8_1_1_U50;
}

void SubBytes::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(icmp_ln263_fu_509_p2.read(), ap_const_lv1_1))) {
        i_0_reg_247 = i_reg_934.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_0_reg_247 = ap_const_lv3_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        j_0_reg_258 = j_reg_963.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(icmp_ln261_fu_397_p2.read(), ap_const_lv1_0))) {
        j_0_reg_258 = ap_const_lv3_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,2,2>(trunc_ln265_1_reg_1080.read(), ap_const_lv2_0))) {
        state_0_0_0_fu_134 = state_0_0_3_fu_729_p6.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        state_0_0_0_fu_134 = state_0_0_read.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,2,2>(trunc_ln265_1_reg_1080.read(), ap_const_lv2_0))) {
        state_0_1_0_fu_130 = state_0_1_3_fu_719_p6.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        state_0_1_0_fu_130 = state_0_1_read.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,2,2>(trunc_ln265_1_reg_1080.read(), ap_const_lv2_0))) {
        state_0_2_0_fu_126 = state_0_2_3_fu_709_p6.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        state_0_2_0_fu_126 = state_0_2_read.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,2,2>(trunc_ln265_1_reg_1080.read(), ap_const_lv2_0))) {
        state_0_3_0_fu_122 = state_0_3_3_fu_699_p6.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        state_0_3_0_fu_122 = state_0_3_read.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,2,2>(trunc_ln265_1_reg_1080.read(), ap_const_lv2_1))) {
        state_1_0_0_fu_118 = state_1_0_3_fu_669_p6.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        state_1_0_0_fu_118 = state_1_0_read.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,2,2>(trunc_ln265_1_reg_1080.read(), ap_const_lv2_1))) {
        state_1_1_0_fu_114 = state_1_1_3_fu_659_p6.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        state_1_1_0_fu_114 = state_1_1_read.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,2,2>(trunc_ln265_1_reg_1080.read(), ap_const_lv2_1))) {
        state_1_2_0_fu_110 = state_1_2_3_fu_649_p6.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        state_1_2_0_fu_110 = state_1_2_read.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,2,2>(trunc_ln265_1_reg_1080.read(), ap_const_lv2_1))) {
        state_1_3_0_fu_106 = state_1_3_3_fu_639_p6.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        state_1_3_0_fu_106 = state_1_3_read.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,2,2>(trunc_ln265_1_reg_1080.read(), ap_const_lv2_2))) {
        state_2_0_0_fu_102 = state_2_0_3_fu_609_p6.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        state_2_0_0_fu_102 = state_2_0_read.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,2,2>(trunc_ln265_1_reg_1080.read(), ap_const_lv2_2))) {
        state_2_1_0_fu_98 = state_2_1_3_fu_599_p6.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        state_2_1_0_fu_98 = state_2_1_read.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,2,2>(trunc_ln265_1_reg_1080.read(), ap_const_lv2_2))) {
        state_2_2_0_fu_94 = state_2_2_3_fu_589_p6.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        state_2_2_0_fu_94 = state_2_2_read.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,2,2>(trunc_ln265_1_reg_1080.read(), ap_const_lv2_2))) {
        state_2_3_0_fu_90 = state_2_3_3_fu_579_p6.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        state_2_3_0_fu_90 = state_2_3_read.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,2,2>(trunc_ln265_1_reg_1080.read(), ap_const_lv2_3))) {
        state_3_0_0_fu_86 = state_3_0_3_fu_789_p6.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        state_3_0_0_fu_86 = state_3_0_read.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,2,2>(trunc_ln265_1_reg_1080.read(), ap_const_lv2_3))) {
        state_3_1_0_fu_82 = state_3_1_3_fu_779_p6.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        state_3_1_0_fu_82 = state_3_1_read.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,2,2>(trunc_ln265_1_reg_1080.read(), ap_const_lv2_3))) {
        state_3_2_0_fu_78 = state_3_2_3_fu_769_p6.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        state_3_2_0_fu_78 = state_3_2_read.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,2,2>(trunc_ln265_1_reg_1080.read(), ap_const_lv2_3))) {
        state_3_3_0_fu_74 = state_3_3_3_fu_759_p6.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        state_3_3_0_fu_74 = state_3_3_read.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        i_reg_934 = i_fu_403_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        j_reg_963 = j_fu_515_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln263_fu_509_p2.read()))) {
        state_0_0_0_load_1_reg_1073 = state_0_0_0_fu_134.read();
        state_0_1_0_load_1_reg_1066 = state_0_1_0_fu_130.read();
        state_0_2_0_load_1_reg_1059 = state_0_2_0_fu_126.read();
        state_0_3_0_load_1_reg_1052 = state_0_3_0_fu_122.read();
        state_1_0_0_load_1_reg_1045 = state_1_0_0_fu_118.read();
        state_1_1_0_load_1_reg_1038 = state_1_1_0_fu_114.read();
        state_1_2_0_load_1_reg_1031 = state_1_2_0_fu_110.read();
        state_1_3_0_load_1_reg_1024 = state_1_3_0_fu_106.read();
        state_2_0_0_load_1_reg_1017 = state_2_0_0_fu_102.read();
        state_2_1_0_load_1_reg_1010 = state_2_1_0_fu_98.read();
        state_2_2_0_load_1_reg_1003 = state_2_2_0_fu_94.read();
        state_2_3_0_load_1_reg_996 = state_2_3_0_fu_90.read();
        state_3_0_0_load_1_reg_989 = state_3_0_0_fu_86.read();
        state_3_1_0_load_1_reg_982 = state_3_1_0_fu_82.read();
        state_3_2_0_load_1_reg_975 = state_3_2_0_fu_78.read();
        state_3_3_0_load_1_reg_968 = state_3_3_0_fu_74.read();
        trunc_ln265_1_reg_1080 = trunc_ln265_1_fu_521_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln261_fu_397_p2.read(), ap_const_lv1_0))) {
        trunc_ln265_reg_939 = trunc_ln265_fu_409_p1.read();
    }
}

void SubBytes::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void SubBytes::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void SubBytes::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void SubBytes::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void SubBytes::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln261_fu_397_p2.read(), ap_const_lv1_1)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void SubBytes::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void SubBytes::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln261_fu_397_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void SubBytes::thread_ap_return_0() {
    ap_return_0 = state_0_0_0_fu_134.read();
}

void SubBytes::thread_ap_return_1() {
    ap_return_1 = state_0_1_0_fu_130.read();
}

void SubBytes::thread_ap_return_10() {
    ap_return_10 = state_2_2_0_fu_94.read();
}

void SubBytes::thread_ap_return_11() {
    ap_return_11 = state_2_3_0_fu_90.read();
}

void SubBytes::thread_ap_return_12() {
    ap_return_12 = state_3_0_0_fu_86.read();
}

void SubBytes::thread_ap_return_13() {
    ap_return_13 = state_3_1_0_fu_82.read();
}

void SubBytes::thread_ap_return_14() {
    ap_return_14 = state_3_2_0_fu_78.read();
}

void SubBytes::thread_ap_return_15() {
    ap_return_15 = state_3_3_0_fu_74.read();
}

void SubBytes::thread_ap_return_2() {
    ap_return_2 = state_0_2_0_fu_126.read();
}

void SubBytes::thread_ap_return_3() {
    ap_return_3 = state_0_3_0_fu_122.read();
}

void SubBytes::thread_ap_return_4() {
    ap_return_4 = state_1_0_0_fu_118.read();
}

void SubBytes::thread_ap_return_5() {
    ap_return_5 = state_1_1_0_fu_114.read();
}

void SubBytes::thread_ap_return_6() {
    ap_return_6 = state_1_2_0_fu_110.read();
}

void SubBytes::thread_ap_return_7() {
    ap_return_7 = state_1_3_0_fu_106.read();
}

void SubBytes::thread_ap_return_8() {
    ap_return_8 = state_2_0_0_fu_102.read();
}

void SubBytes::thread_ap_return_9() {
    ap_return_9 = state_2_1_0_fu_98.read();
}

void SubBytes::thread_i_fu_403_p2() {
    i_fu_403_p2 = (!i_0_reg_247.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_0_reg_247.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void SubBytes::thread_icmp_ln261_fu_397_p2() {
    icmp_ln261_fu_397_p2 = (!i_0_reg_247.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_0_reg_247.read() == ap_const_lv3_4);
}

void SubBytes::thread_icmp_ln263_fu_509_p2() {
    icmp_ln263_fu_509_p2 = (!j_0_reg_258.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(j_0_reg_258.read() == ap_const_lv3_4);
}

void SubBytes::thread_j_fu_515_p2() {
    j_fu_515_p2 = (!j_0_reg_258.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(j_0_reg_258.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void SubBytes::thread_sbox_address0() {
    sbox_address0 =  (sc_lv<8>) (zext_ln265_1_fu_574_p1.read());
}

void SubBytes::thread_sbox_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        sbox_ce0 = ap_const_logic_1;
    } else {
        sbox_ce0 = ap_const_logic_0;
    }
}

void SubBytes::thread_tmp_1_fu_536_p17() {
    tmp_1_fu_536_p17 = esl_zext<5,4>(tmp_2_fu_525_p3.read());
}

void SubBytes::thread_tmp_2_fu_525_p3() {
    tmp_2_fu_525_p3 = esl_concat<2,2>(trunc_ln265_1_fu_521_p1.read(), trunc_ln265_reg_939.read());
}

void SubBytes::thread_trunc_ln265_1_fu_521_p1() {
    trunc_ln265_1_fu_521_p1 = j_0_reg_258.read().range(2-1, 0);
}

void SubBytes::thread_trunc_ln265_fu_409_p1() {
    trunc_ln265_fu_409_p1 = i_0_reg_247.read().range(2-1, 0);
}

void SubBytes::thread_zext_ln265_1_fu_574_p1() {
    zext_ln265_1_fu_574_p1 = esl_zext<64,8>(tmp_1_fu_536_p18.read());
}

void SubBytes::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln261_fu_397_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(icmp_ln263_fu_509_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        default : 
            ap_NS_fsm = "XXXX";
            break;
    }
}

}

