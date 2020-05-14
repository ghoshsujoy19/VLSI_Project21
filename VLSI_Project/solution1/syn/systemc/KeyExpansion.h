// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _KeyExpansion_HH_
#define _KeyExpansion_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "KeyExpansion_sbox_7.h"
#include "KeyExpansion_sbox_0.h"
#include "KeyExpansion_sbox_1.h"
#include "KeyExpansion_sbox_2.h"
#include "KeyExpansion_sbox_3.h"
#include "KeyExpansion_sbox_4.h"
#include "KeyExpansion_sbox_5.h"
#include "KeyExpansion_sbox_6.h"
#include "KeyExpansion_Rcon.h"

namespace ap_rtl {

struct KeyExpansion : public sc_module {
    // Port declarations 126
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<5> > RoundKey_0_address0;
    sc_out< sc_logic > RoundKey_0_ce0;
    sc_out< sc_logic > RoundKey_0_we0;
    sc_out< sc_lv<8> > RoundKey_0_d0;
    sc_in< sc_lv<8> > RoundKey_0_q0;
    sc_out< sc_lv<5> > RoundKey_0_address1;
    sc_out< sc_logic > RoundKey_0_ce1;
    sc_out< sc_logic > RoundKey_0_we1;
    sc_out< sc_lv<8> > RoundKey_0_d1;
    sc_out< sc_lv<5> > RoundKey_1_address0;
    sc_out< sc_logic > RoundKey_1_ce0;
    sc_out< sc_logic > RoundKey_1_we0;
    sc_out< sc_lv<8> > RoundKey_1_d0;
    sc_in< sc_lv<8> > RoundKey_1_q0;
    sc_out< sc_lv<5> > RoundKey_1_address1;
    sc_out< sc_logic > RoundKey_1_ce1;
    sc_out< sc_logic > RoundKey_1_we1;
    sc_out< sc_lv<8> > RoundKey_1_d1;
    sc_out< sc_lv<5> > RoundKey_2_address0;
    sc_out< sc_logic > RoundKey_2_ce0;
    sc_out< sc_logic > RoundKey_2_we0;
    sc_out< sc_lv<8> > RoundKey_2_d0;
    sc_in< sc_lv<8> > RoundKey_2_q0;
    sc_out< sc_lv<5> > RoundKey_2_address1;
    sc_out< sc_logic > RoundKey_2_ce1;
    sc_out< sc_logic > RoundKey_2_we1;
    sc_out< sc_lv<8> > RoundKey_2_d1;
    sc_out< sc_lv<5> > RoundKey_3_address0;
    sc_out< sc_logic > RoundKey_3_ce0;
    sc_out< sc_logic > RoundKey_3_we0;
    sc_out< sc_lv<8> > RoundKey_3_d0;
    sc_in< sc_lv<8> > RoundKey_3_q0;
    sc_out< sc_lv<5> > RoundKey_3_address1;
    sc_out< sc_logic > RoundKey_3_ce1;
    sc_out< sc_logic > RoundKey_3_we1;
    sc_out< sc_lv<8> > RoundKey_3_d1;
    sc_out< sc_lv<5> > RoundKey_4_address0;
    sc_out< sc_logic > RoundKey_4_ce0;
    sc_out< sc_logic > RoundKey_4_we0;
    sc_out< sc_lv<8> > RoundKey_4_d0;
    sc_in< sc_lv<8> > RoundKey_4_q0;
    sc_out< sc_lv<5> > RoundKey_4_address1;
    sc_out< sc_logic > RoundKey_4_ce1;
    sc_out< sc_logic > RoundKey_4_we1;
    sc_out< sc_lv<8> > RoundKey_4_d1;
    sc_out< sc_lv<5> > RoundKey_5_address0;
    sc_out< sc_logic > RoundKey_5_ce0;
    sc_out< sc_logic > RoundKey_5_we0;
    sc_out< sc_lv<8> > RoundKey_5_d0;
    sc_in< sc_lv<8> > RoundKey_5_q0;
    sc_out< sc_lv<5> > RoundKey_5_address1;
    sc_out< sc_logic > RoundKey_5_ce1;
    sc_out< sc_logic > RoundKey_5_we1;
    sc_out< sc_lv<8> > RoundKey_5_d1;
    sc_out< sc_lv<5> > RoundKey_6_address0;
    sc_out< sc_logic > RoundKey_6_ce0;
    sc_out< sc_logic > RoundKey_6_we0;
    sc_out< sc_lv<8> > RoundKey_6_d0;
    sc_in< sc_lv<8> > RoundKey_6_q0;
    sc_out< sc_lv<5> > RoundKey_6_address1;
    sc_out< sc_logic > RoundKey_6_ce1;
    sc_out< sc_logic > RoundKey_6_we1;
    sc_out< sc_lv<8> > RoundKey_6_d1;
    sc_out< sc_lv<5> > RoundKey_7_address0;
    sc_out< sc_logic > RoundKey_7_ce0;
    sc_out< sc_logic > RoundKey_7_we0;
    sc_out< sc_lv<8> > RoundKey_7_d0;
    sc_in< sc_lv<8> > RoundKey_7_q0;
    sc_out< sc_lv<5> > RoundKey_7_address1;
    sc_out< sc_logic > RoundKey_7_ce1;
    sc_out< sc_logic > RoundKey_7_we1;
    sc_out< sc_lv<8> > RoundKey_7_d1;
    sc_out< sc_lv<1> > Key_0_address0;
    sc_out< sc_logic > Key_0_ce0;
    sc_in< sc_lv<8> > Key_0_q0;
    sc_out< sc_lv<1> > Key_0_address1;
    sc_out< sc_logic > Key_0_ce1;
    sc_in< sc_lv<8> > Key_0_q1;
    sc_out< sc_lv<1> > Key_1_address0;
    sc_out< sc_logic > Key_1_ce0;
    sc_in< sc_lv<8> > Key_1_q0;
    sc_out< sc_lv<1> > Key_1_address1;
    sc_out< sc_logic > Key_1_ce1;
    sc_in< sc_lv<8> > Key_1_q1;
    sc_out< sc_lv<1> > Key_2_address0;
    sc_out< sc_logic > Key_2_ce0;
    sc_in< sc_lv<8> > Key_2_q0;
    sc_out< sc_lv<1> > Key_2_address1;
    sc_out< sc_logic > Key_2_ce1;
    sc_in< sc_lv<8> > Key_2_q1;
    sc_out< sc_lv<1> > Key_3_address0;
    sc_out< sc_logic > Key_3_ce0;
    sc_in< sc_lv<8> > Key_3_q0;
    sc_out< sc_lv<1> > Key_3_address1;
    sc_out< sc_logic > Key_3_ce1;
    sc_in< sc_lv<8> > Key_3_q1;
    sc_out< sc_lv<1> > Key_4_address0;
    sc_out< sc_logic > Key_4_ce0;
    sc_in< sc_lv<8> > Key_4_q0;
    sc_out< sc_lv<1> > Key_4_address1;
    sc_out< sc_logic > Key_4_ce1;
    sc_in< sc_lv<8> > Key_4_q1;
    sc_out< sc_lv<1> > Key_5_address0;
    sc_out< sc_logic > Key_5_ce0;
    sc_in< sc_lv<8> > Key_5_q0;
    sc_out< sc_lv<1> > Key_5_address1;
    sc_out< sc_logic > Key_5_ce1;
    sc_in< sc_lv<8> > Key_5_q1;
    sc_out< sc_lv<1> > Key_6_address0;
    sc_out< sc_logic > Key_6_ce0;
    sc_in< sc_lv<8> > Key_6_q0;
    sc_out< sc_lv<1> > Key_6_address1;
    sc_out< sc_logic > Key_6_ce1;
    sc_in< sc_lv<8> > Key_6_q1;
    sc_out< sc_lv<1> > Key_7_address0;
    sc_out< sc_logic > Key_7_ce0;
    sc_in< sc_lv<8> > Key_7_q0;
    sc_out< sc_lv<1> > Key_7_address1;
    sc_out< sc_logic > Key_7_ce1;
    sc_in< sc_lv<8> > Key_7_q1;


    // Module declarations
    KeyExpansion(sc_module_name name);
    SC_HAS_PROCESS(KeyExpansion);

    ~KeyExpansion();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    KeyExpansion_sbox_7* sbox_7_U;
    KeyExpansion_sbox_0* sbox_0_U;
    KeyExpansion_sbox_1* sbox_1_U;
    KeyExpansion_sbox_2* sbox_2_U;
    KeyExpansion_sbox_3* sbox_3_U;
    KeyExpansion_sbox_4* sbox_4_U;
    KeyExpansion_sbox_5* sbox_5_U;
    KeyExpansion_sbox_6* sbox_6_U;
    KeyExpansion_Rcon* Rcon_U;
    sc_signal< sc_lv<8> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<5> > sbox_7_address0;
    sc_signal< sc_logic > sbox_7_ce0;
    sc_signal< sc_lv<8> > sbox_7_q0;
    sc_signal< sc_lv<5> > sbox_0_address0;
    sc_signal< sc_logic > sbox_0_ce0;
    sc_signal< sc_lv<8> > sbox_0_q0;
    sc_signal< sc_lv<5> > sbox_1_address0;
    sc_signal< sc_logic > sbox_1_ce0;
    sc_signal< sc_lv<8> > sbox_1_q0;
    sc_signal< sc_lv<5> > sbox_2_address0;
    sc_signal< sc_logic > sbox_2_ce0;
    sc_signal< sc_lv<8> > sbox_2_q0;
    sc_signal< sc_lv<5> > sbox_3_address0;
    sc_signal< sc_logic > sbox_3_ce0;
    sc_signal< sc_lv<8> > sbox_3_q0;
    sc_signal< sc_lv<5> > sbox_4_address0;
    sc_signal< sc_logic > sbox_4_ce0;
    sc_signal< sc_lv<8> > sbox_4_q0;
    sc_signal< sc_lv<5> > sbox_5_address0;
    sc_signal< sc_logic > sbox_5_ce0;
    sc_signal< sc_lv<8> > sbox_5_q0;
    sc_signal< sc_lv<5> > sbox_6_address0;
    sc_signal< sc_logic > sbox_6_ce0;
    sc_signal< sc_lv<8> > sbox_6_q0;
    sc_signal< sc_lv<4> > Rcon_address0;
    sc_signal< sc_logic > Rcon_ce0;
    sc_signal< sc_lv<8> > Rcon_q0;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > icmp_ln176_fu_1171_p2;
    sc_signal< sc_lv<1> > icmp_ln176_reg_1947;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > icmp_ln183_fu_1181_p2;
    sc_signal< sc_lv<1> > icmp_ln183_reg_1951;
    sc_signal< sc_lv<5> > lshr_ln204_1_reg_2005;
    sc_signal< sc_lv<8> > xor_ln188_fu_1479_p2;
    sc_signal< sc_lv<8> > xor_ln188_reg_2045;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<8> > RoundKey_0_load_reg_2090;
    sc_signal< sc_lv<8> > RoundKey_1_load_reg_2095;
    sc_signal< sc_lv<8> > RoundKey_2_load_reg_2100;
    sc_signal< sc_lv<8> > RoundKey_3_load_reg_2105;
    sc_signal< sc_lv<8> > RoundKey_4_load_reg_2110;
    sc_signal< sc_lv<8> > RoundKey_5_load_reg_2115;
    sc_signal< sc_lv<8> > RoundKey_6_load_reg_2120;
    sc_signal< sc_lv<8> > RoundKey_7_load_reg_2125;
    sc_signal< sc_lv<8> > grp_fu_1163_p3;
    sc_signal< sc_lv<8> > select_ln25_13_reg_2130;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<8> > select_ln25_20_reg_2175;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<8> > xor_ln204_1_fu_1817_p2;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<8> > xor_ln205_1_fu_1823_p2;
    sc_signal< sc_lv<8> > xor_ln206_1_fu_1829_p2;
    sc_signal< sc_lv<8> > xor_ln207_1_fu_1835_p2;
    sc_signal< sc_lv<8> > add_ln176_fu_1841_p2;
    sc_signal< sc_lv<8> > d_0_0_reg_1019;
    sc_signal< sc_lv<8> > c_0_0_reg_1029;
    sc_signal< sc_lv<8> > b_0_0_reg_1039;
    sc_signal< sc_lv<8> > e_0_reg_1049;
    sc_signal< sc_lv<8> > s_0_0_reg_1059;
    sc_signal< sc_lv<8> > ap_phi_mux_d_1_0_phi_fu_1074_p4;
    sc_signal< sc_lv<8> > d_1_0_reg_1071;
    sc_signal< sc_lv<8> > ap_phi_mux_c_1_0_phi_fu_1084_p4;
    sc_signal< sc_lv<8> > c_1_0_reg_1081;
    sc_signal< sc_lv<8> > ap_phi_mux_b_1_0_phi_fu_1094_p4;
    sc_signal< sc_lv<8> > b_1_0_reg_1091;
    sc_signal< sc_lv<8> > ap_phi_mux_a_1_0_phi_fu_1104_p4;
    sc_signal< sc_lv<8> > a_1_0_reg_1101;
    sc_signal< sc_lv<64> > zext_ln188_fu_1197_p1;
    sc_signal< sc_lv<64> > zext_ln188_1_fu_1219_p1;
    sc_signal< sc_lv<64> > zext_ln204_fu_1240_p1;
    sc_signal< sc_lv<64> > zext_ln205_fu_1271_p1;
    sc_signal< sc_lv<64> > zext_ln206_fu_1292_p1;
    sc_signal< sc_lv<64> > zext_ln207_fu_1313_p1;
    sc_signal< sc_lv<64> > zext_ln204_2_fu_1334_p1;
    sc_signal< sc_lv<64> > zext_ln205_1_fu_1355_p1;
    sc_signal< sc_lv<64> > zext_ln206_1_fu_1376_p1;
    sc_signal< sc_lv<64> > zext_ln207_1_fu_1397_p1;
    sc_signal< sc_lv<64> > zext_ln189_fu_1495_p1;
    sc_signal< sc_lv<64> > zext_ln190_fu_1594_p1;
    sc_signal< sc_lv<64> > zext_ln191_fu_1693_p1;
    sc_signal< sc_lv<64> > zext_ln204_1_fu_1788_p1;
    sc_signal< sc_lv<8> > xor_ln204_fu_1782_p2;
    sc_signal< sc_lv<8> > xor_ln205_fu_1799_p2;
    sc_signal< sc_lv<8> > xor_ln206_fu_1805_p2;
    sc_signal< sc_lv<8> > xor_ln207_fu_1811_p2;
    sc_signal< sc_lv<1> > grp_fu_1121_p0;
    sc_signal< sc_lv<1> > icmp_ln25_6_fu_1445_p2;
    sc_signal< sc_lv<1> > icmp_ln25_13_fu_1550_p2;
    sc_signal< sc_lv<1> > icmp_ln25_20_fu_1649_p2;
    sc_signal< sc_lv<1> > icmp_ln25_27_fu_1748_p2;
    sc_signal< sc_lv<1> > grp_fu_1128_p0;
    sc_signal< sc_lv<1> > icmp_ln25_4_fu_1432_p2;
    sc_signal< sc_lv<1> > icmp_ln25_11_fu_1537_p2;
    sc_signal< sc_lv<1> > icmp_ln25_18_fu_1636_p2;
    sc_signal< sc_lv<1> > icmp_ln25_25_fu_1735_p2;
    sc_signal< sc_lv<1> > grp_fu_1135_p0;
    sc_signal< sc_lv<1> > icmp_ln25_2_fu_1419_p2;
    sc_signal< sc_lv<1> > icmp_ln25_9_fu_1524_p2;
    sc_signal< sc_lv<1> > icmp_ln25_16_fu_1623_p2;
    sc_signal< sc_lv<1> > icmp_ln25_23_fu_1722_p2;
    sc_signal< sc_lv<1> > grp_fu_1142_p0;
    sc_signal< sc_lv<1> > icmp_ln25_fu_1406_p2;
    sc_signal< sc_lv<1> > icmp_ln25_7_fu_1511_p2;
    sc_signal< sc_lv<1> > icmp_ln25_14_fu_1610_p2;
    sc_signal< sc_lv<1> > icmp_ln25_21_fu_1709_p2;
    sc_signal< sc_lv<1> > grp_fu_1149_p0;
    sc_signal< sc_lv<1> > or_ln25_fu_1452_p2;
    sc_signal< sc_lv<1> > or_ln25_4_fu_1557_p2;
    sc_signal< sc_lv<1> > or_ln25_8_fu_1656_p2;
    sc_signal< sc_lv<1> > or_ln25_12_fu_1755_p2;
    sc_signal< sc_lv<8> > grp_fu_1121_p3;
    sc_signal< sc_lv<8> > grp_fu_1128_p3;
    sc_signal< sc_lv<1> > grp_fu_1156_p0;
    sc_signal< sc_lv<1> > or_ln25_2_fu_1465_p2;
    sc_signal< sc_lv<1> > or_ln25_6_fu_1570_p2;
    sc_signal< sc_lv<1> > or_ln25_10_fu_1669_p2;
    sc_signal< sc_lv<1> > or_ln25_14_fu_1768_p2;
    sc_signal< sc_lv<8> > grp_fu_1135_p3;
    sc_signal< sc_lv<8> > grp_fu_1142_p3;
    sc_signal< sc_lv<1> > grp_fu_1163_p0;
    sc_signal< sc_lv<1> > or_ln25_3_fu_1472_p2;
    sc_signal< sc_lv<1> > or_ln25_7_fu_1577_p2;
    sc_signal< sc_lv<1> > or_ln25_11_fu_1676_p2;
    sc_signal< sc_lv<1> > or_ln25_15_fu_1775_p2;
    sc_signal< sc_lv<8> > grp_fu_1149_p3;
    sc_signal< sc_lv<8> > grp_fu_1156_p3;
    sc_signal< sc_lv<4> > empty_7_fu_1177_p1;
    sc_signal< sc_lv<5> > lshr_ln_fu_1187_p4;
    sc_signal< sc_lv<4> > lshr_ln188_1_fu_1209_p4;
    sc_signal< sc_lv<8> > add_ln204_fu_1224_p2;
    sc_signal< sc_lv<5> > lshr_ln4_fu_1230_p4;
    sc_signal< sc_lv<8> > add_ln205_fu_1255_p2;
    sc_signal< sc_lv<5> > lshr_ln5_fu_1261_p4;
    sc_signal< sc_lv<8> > add_ln206_fu_1276_p2;
    sc_signal< sc_lv<5> > lshr_ln6_fu_1282_p4;
    sc_signal< sc_lv<8> > add_ln207_fu_1297_p2;
    sc_signal< sc_lv<5> > lshr_ln7_fu_1303_p4;
    sc_signal< sc_lv<8> > add_ln204_1_fu_1318_p2;
    sc_signal< sc_lv<5> > lshr_ln204_2_fu_1324_p4;
    sc_signal< sc_lv<8> > add_ln205_1_fu_1339_p2;
    sc_signal< sc_lv<5> > lshr_ln205_1_fu_1345_p4;
    sc_signal< sc_lv<8> > add_ln206_1_fu_1360_p2;
    sc_signal< sc_lv<5> > lshr_ln206_1_fu_1366_p4;
    sc_signal< sc_lv<8> > add_ln207_1_fu_1381_p2;
    sc_signal< sc_lv<5> > lshr_ln207_1_fu_1387_p4;
    sc_signal< sc_lv<3> > trunc_ln188_fu_1402_p1;
    sc_signal< sc_lv<1> > icmp_ln25_5_fu_1439_p2;
    sc_signal< sc_lv<1> > icmp_ln25_3_fu_1426_p2;
    sc_signal< sc_lv<1> > icmp_ln25_1_fu_1413_p2;
    sc_signal< sc_lv<1> > or_ln25_1_fu_1459_p2;
    sc_signal< sc_lv<5> > lshr_ln1_fu_1485_p4;
    sc_signal< sc_lv<3> > trunc_ln189_fu_1507_p1;
    sc_signal< sc_lv<1> > icmp_ln25_12_fu_1544_p2;
    sc_signal< sc_lv<1> > icmp_ln25_10_fu_1531_p2;
    sc_signal< sc_lv<1> > icmp_ln25_8_fu_1518_p2;
    sc_signal< sc_lv<1> > or_ln25_5_fu_1564_p2;
    sc_signal< sc_lv<5> > lshr_ln2_fu_1584_p4;
    sc_signal< sc_lv<3> > trunc_ln190_fu_1606_p1;
    sc_signal< sc_lv<1> > icmp_ln25_19_fu_1643_p2;
    sc_signal< sc_lv<1> > icmp_ln25_17_fu_1630_p2;
    sc_signal< sc_lv<1> > icmp_ln25_15_fu_1617_p2;
    sc_signal< sc_lv<1> > or_ln25_9_fu_1663_p2;
    sc_signal< sc_lv<5> > lshr_ln3_fu_1683_p4;
    sc_signal< sc_lv<3> > trunc_ln191_fu_1705_p1;
    sc_signal< sc_lv<1> > icmp_ln25_26_fu_1742_p2;
    sc_signal< sc_lv<1> > icmp_ln25_24_fu_1729_p2;
    sc_signal< sc_lv<1> > icmp_ln25_22_fu_1716_p2;
    sc_signal< sc_lv<1> > or_ln25_13_fu_1762_p2;
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
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<8> ap_const_lv8_10;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<8> ap_const_lv8_B0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<8> ap_const_lv8_F0;
    static const sc_lv<8> ap_const_lv8_F1;
    static const sc_lv<8> ap_const_lv8_F2;
    static const sc_lv<8> ap_const_lv8_F3;
    static const sc_lv<8> ap_const_lv8_F4;
    static const sc_lv<8> ap_const_lv8_F5;
    static const sc_lv<8> ap_const_lv8_F6;
    static const sc_lv<8> ap_const_lv8_F7;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<3> ap_const_lv3_2;
    static const sc_lv<3> ap_const_lv3_3;
    static const sc_lv<3> ap_const_lv3_4;
    static const sc_lv<3> ap_const_lv3_5;
    static const sc_lv<3> ap_const_lv3_6;
    static const sc_lv<8> ap_const_lv8_8;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_Key_0_address0();
    void thread_Key_0_address1();
    void thread_Key_0_ce0();
    void thread_Key_0_ce1();
    void thread_Key_1_address0();
    void thread_Key_1_address1();
    void thread_Key_1_ce0();
    void thread_Key_1_ce1();
    void thread_Key_2_address0();
    void thread_Key_2_address1();
    void thread_Key_2_ce0();
    void thread_Key_2_ce1();
    void thread_Key_3_address0();
    void thread_Key_3_address1();
    void thread_Key_3_ce0();
    void thread_Key_3_ce1();
    void thread_Key_4_address0();
    void thread_Key_4_address1();
    void thread_Key_4_ce0();
    void thread_Key_4_ce1();
    void thread_Key_5_address0();
    void thread_Key_5_address1();
    void thread_Key_5_ce0();
    void thread_Key_5_ce1();
    void thread_Key_6_address0();
    void thread_Key_6_address1();
    void thread_Key_6_ce0();
    void thread_Key_6_ce1();
    void thread_Key_7_address0();
    void thread_Key_7_address1();
    void thread_Key_7_ce0();
    void thread_Key_7_ce1();
    void thread_Rcon_address0();
    void thread_Rcon_ce0();
    void thread_RoundKey_0_address0();
    void thread_RoundKey_0_address1();
    void thread_RoundKey_0_ce0();
    void thread_RoundKey_0_ce1();
    void thread_RoundKey_0_d0();
    void thread_RoundKey_0_d1();
    void thread_RoundKey_0_we0();
    void thread_RoundKey_0_we1();
    void thread_RoundKey_1_address0();
    void thread_RoundKey_1_address1();
    void thread_RoundKey_1_ce0();
    void thread_RoundKey_1_ce1();
    void thread_RoundKey_1_d0();
    void thread_RoundKey_1_d1();
    void thread_RoundKey_1_we0();
    void thread_RoundKey_1_we1();
    void thread_RoundKey_2_address0();
    void thread_RoundKey_2_address1();
    void thread_RoundKey_2_ce0();
    void thread_RoundKey_2_ce1();
    void thread_RoundKey_2_d0();
    void thread_RoundKey_2_d1();
    void thread_RoundKey_2_we0();
    void thread_RoundKey_2_we1();
    void thread_RoundKey_3_address0();
    void thread_RoundKey_3_address1();
    void thread_RoundKey_3_ce0();
    void thread_RoundKey_3_ce1();
    void thread_RoundKey_3_d0();
    void thread_RoundKey_3_d1();
    void thread_RoundKey_3_we0();
    void thread_RoundKey_3_we1();
    void thread_RoundKey_4_address0();
    void thread_RoundKey_4_address1();
    void thread_RoundKey_4_ce0();
    void thread_RoundKey_4_ce1();
    void thread_RoundKey_4_d0();
    void thread_RoundKey_4_d1();
    void thread_RoundKey_4_we0();
    void thread_RoundKey_4_we1();
    void thread_RoundKey_5_address0();
    void thread_RoundKey_5_address1();
    void thread_RoundKey_5_ce0();
    void thread_RoundKey_5_ce1();
    void thread_RoundKey_5_d0();
    void thread_RoundKey_5_d1();
    void thread_RoundKey_5_we0();
    void thread_RoundKey_5_we1();
    void thread_RoundKey_6_address0();
    void thread_RoundKey_6_address1();
    void thread_RoundKey_6_ce0();
    void thread_RoundKey_6_ce1();
    void thread_RoundKey_6_d0();
    void thread_RoundKey_6_d1();
    void thread_RoundKey_6_we0();
    void thread_RoundKey_6_we1();
    void thread_RoundKey_7_address0();
    void thread_RoundKey_7_address1();
    void thread_RoundKey_7_ce0();
    void thread_RoundKey_7_ce1();
    void thread_RoundKey_7_d0();
    void thread_RoundKey_7_d1();
    void thread_RoundKey_7_we0();
    void thread_RoundKey_7_we1();
    void thread_add_ln176_fu_1841_p2();
    void thread_add_ln204_1_fu_1318_p2();
    void thread_add_ln204_fu_1224_p2();
    void thread_add_ln205_1_fu_1339_p2();
    void thread_add_ln205_fu_1255_p2();
    void thread_add_ln206_1_fu_1360_p2();
    void thread_add_ln206_fu_1276_p2();
    void thread_add_ln207_1_fu_1381_p2();
    void thread_add_ln207_fu_1297_p2();
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
    void thread_ap_phi_mux_a_1_0_phi_fu_1104_p4();
    void thread_ap_phi_mux_b_1_0_phi_fu_1094_p4();
    void thread_ap_phi_mux_c_1_0_phi_fu_1084_p4();
    void thread_ap_phi_mux_d_1_0_phi_fu_1074_p4();
    void thread_ap_ready();
    void thread_empty_7_fu_1177_p1();
    void thread_grp_fu_1121_p0();
    void thread_grp_fu_1121_p3();
    void thread_grp_fu_1128_p0();
    void thread_grp_fu_1128_p3();
    void thread_grp_fu_1135_p0();
    void thread_grp_fu_1135_p3();
    void thread_grp_fu_1142_p0();
    void thread_grp_fu_1142_p3();
    void thread_grp_fu_1149_p0();
    void thread_grp_fu_1149_p3();
    void thread_grp_fu_1156_p0();
    void thread_grp_fu_1156_p3();
    void thread_grp_fu_1163_p0();
    void thread_grp_fu_1163_p3();
    void thread_icmp_ln176_fu_1171_p2();
    void thread_icmp_ln183_fu_1181_p2();
    void thread_icmp_ln25_10_fu_1531_p2();
    void thread_icmp_ln25_11_fu_1537_p2();
    void thread_icmp_ln25_12_fu_1544_p2();
    void thread_icmp_ln25_13_fu_1550_p2();
    void thread_icmp_ln25_14_fu_1610_p2();
    void thread_icmp_ln25_15_fu_1617_p2();
    void thread_icmp_ln25_16_fu_1623_p2();
    void thread_icmp_ln25_17_fu_1630_p2();
    void thread_icmp_ln25_18_fu_1636_p2();
    void thread_icmp_ln25_19_fu_1643_p2();
    void thread_icmp_ln25_1_fu_1413_p2();
    void thread_icmp_ln25_20_fu_1649_p2();
    void thread_icmp_ln25_21_fu_1709_p2();
    void thread_icmp_ln25_22_fu_1716_p2();
    void thread_icmp_ln25_23_fu_1722_p2();
    void thread_icmp_ln25_24_fu_1729_p2();
    void thread_icmp_ln25_25_fu_1735_p2();
    void thread_icmp_ln25_26_fu_1742_p2();
    void thread_icmp_ln25_27_fu_1748_p2();
    void thread_icmp_ln25_2_fu_1419_p2();
    void thread_icmp_ln25_3_fu_1426_p2();
    void thread_icmp_ln25_4_fu_1432_p2();
    void thread_icmp_ln25_5_fu_1439_p2();
    void thread_icmp_ln25_6_fu_1445_p2();
    void thread_icmp_ln25_7_fu_1511_p2();
    void thread_icmp_ln25_8_fu_1518_p2();
    void thread_icmp_ln25_9_fu_1524_p2();
    void thread_icmp_ln25_fu_1406_p2();
    void thread_lshr_ln188_1_fu_1209_p4();
    void thread_lshr_ln1_fu_1485_p4();
    void thread_lshr_ln204_2_fu_1324_p4();
    void thread_lshr_ln205_1_fu_1345_p4();
    void thread_lshr_ln206_1_fu_1366_p4();
    void thread_lshr_ln207_1_fu_1387_p4();
    void thread_lshr_ln2_fu_1584_p4();
    void thread_lshr_ln3_fu_1683_p4();
    void thread_lshr_ln4_fu_1230_p4();
    void thread_lshr_ln5_fu_1261_p4();
    void thread_lshr_ln6_fu_1282_p4();
    void thread_lshr_ln7_fu_1303_p4();
    void thread_lshr_ln_fu_1187_p4();
    void thread_or_ln25_10_fu_1669_p2();
    void thread_or_ln25_11_fu_1676_p2();
    void thread_or_ln25_12_fu_1755_p2();
    void thread_or_ln25_13_fu_1762_p2();
    void thread_or_ln25_14_fu_1768_p2();
    void thread_or_ln25_15_fu_1775_p2();
    void thread_or_ln25_1_fu_1459_p2();
    void thread_or_ln25_2_fu_1465_p2();
    void thread_or_ln25_3_fu_1472_p2();
    void thread_or_ln25_4_fu_1557_p2();
    void thread_or_ln25_5_fu_1564_p2();
    void thread_or_ln25_6_fu_1570_p2();
    void thread_or_ln25_7_fu_1577_p2();
    void thread_or_ln25_8_fu_1656_p2();
    void thread_or_ln25_9_fu_1663_p2();
    void thread_or_ln25_fu_1452_p2();
    void thread_sbox_0_address0();
    void thread_sbox_0_ce0();
    void thread_sbox_1_address0();
    void thread_sbox_1_ce0();
    void thread_sbox_2_address0();
    void thread_sbox_2_ce0();
    void thread_sbox_3_address0();
    void thread_sbox_3_ce0();
    void thread_sbox_4_address0();
    void thread_sbox_4_ce0();
    void thread_sbox_5_address0();
    void thread_sbox_5_ce0();
    void thread_sbox_6_address0();
    void thread_sbox_6_ce0();
    void thread_sbox_7_address0();
    void thread_sbox_7_ce0();
    void thread_trunc_ln188_fu_1402_p1();
    void thread_trunc_ln189_fu_1507_p1();
    void thread_trunc_ln190_fu_1606_p1();
    void thread_trunc_ln191_fu_1705_p1();
    void thread_xor_ln188_fu_1479_p2();
    void thread_xor_ln204_1_fu_1817_p2();
    void thread_xor_ln204_fu_1782_p2();
    void thread_xor_ln205_1_fu_1823_p2();
    void thread_xor_ln205_fu_1799_p2();
    void thread_xor_ln206_1_fu_1829_p2();
    void thread_xor_ln206_fu_1805_p2();
    void thread_xor_ln207_1_fu_1835_p2();
    void thread_xor_ln207_fu_1811_p2();
    void thread_zext_ln188_1_fu_1219_p1();
    void thread_zext_ln188_fu_1197_p1();
    void thread_zext_ln189_fu_1495_p1();
    void thread_zext_ln190_fu_1594_p1();
    void thread_zext_ln191_fu_1693_p1();
    void thread_zext_ln204_1_fu_1788_p1();
    void thread_zext_ln204_2_fu_1334_p1();
    void thread_zext_ln204_fu_1240_p1();
    void thread_zext_ln205_1_fu_1355_p1();
    void thread_zext_ln205_fu_1271_p1();
    void thread_zext_ln206_1_fu_1376_p1();
    void thread_zext_ln206_fu_1292_p1();
    void thread_zext_ln207_1_fu_1397_p1();
    void thread_zext_ln207_fu_1313_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
