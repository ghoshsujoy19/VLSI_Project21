// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
 `timescale 1ns/1ps


`define AUTOTB_DUT      AES
`define AUTOTB_DUT_INST AESL_inst_AES
`define AUTOTB_TOP      apatb_AES_top
`define AUTOTB_LAT_RESULT_FILE "AES.result.lat.rb"
`define AUTOTB_PER_RESULT_TRANS_FILE "AES.performance.result.transaction.xml"
`define AUTOTB_TOP_INST AESL_inst_apatb_AES_top
`define AUTOTB_MAX_ALLOW_LATENCY  15000000
`define AUTOTB_CLOCK_PERIOD_DIV2 5.00

`define AESL_MEM_ctx_RoundKey_0 AESL_automem_ctx_RoundKey_0
`define AESL_MEM_INST_ctx_RoundKey_0 mem_inst_ctx_RoundKey_0
`define AESL_MEM_ctx_RoundKey_1 AESL_automem_ctx_RoundKey_1
`define AESL_MEM_INST_ctx_RoundKey_1 mem_inst_ctx_RoundKey_1
`define AESL_MEM_ctx_RoundKey_2 AESL_automem_ctx_RoundKey_2
`define AESL_MEM_INST_ctx_RoundKey_2 mem_inst_ctx_RoundKey_2
`define AESL_MEM_ctx_RoundKey_3 AESL_automem_ctx_RoundKey_3
`define AESL_MEM_INST_ctx_RoundKey_3 mem_inst_ctx_RoundKey_3
`define AESL_MEM_ctx_RoundKey_4 AESL_automem_ctx_RoundKey_4
`define AESL_MEM_INST_ctx_RoundKey_4 mem_inst_ctx_RoundKey_4
`define AESL_MEM_ctx_RoundKey_5 AESL_automem_ctx_RoundKey_5
`define AESL_MEM_INST_ctx_RoundKey_5 mem_inst_ctx_RoundKey_5
`define AESL_MEM_ctx_RoundKey_6 AESL_automem_ctx_RoundKey_6
`define AESL_MEM_INST_ctx_RoundKey_6 mem_inst_ctx_RoundKey_6
`define AESL_MEM_ctx_RoundKey_7 AESL_automem_ctx_RoundKey_7
`define AESL_MEM_INST_ctx_RoundKey_7 mem_inst_ctx_RoundKey_7
`define AESL_MEM_ctx_RoundKey_8 AESL_automem_ctx_RoundKey_8
`define AESL_MEM_INST_ctx_RoundKey_8 mem_inst_ctx_RoundKey_8
`define AESL_MEM_ctx_RoundKey_9 AESL_automem_ctx_RoundKey_9
`define AESL_MEM_INST_ctx_RoundKey_9 mem_inst_ctx_RoundKey_9
`define AESL_MEM_ctx_RoundKey_10 AESL_automem_ctx_RoundKey_10
`define AESL_MEM_INST_ctx_RoundKey_10 mem_inst_ctx_RoundKey_10
`define AESL_MEM_ctx_RoundKey_11 AESL_automem_ctx_RoundKey_11
`define AESL_MEM_INST_ctx_RoundKey_11 mem_inst_ctx_RoundKey_11
`define AESL_MEM_ctx_RoundKey_12 AESL_automem_ctx_RoundKey_12
`define AESL_MEM_INST_ctx_RoundKey_12 mem_inst_ctx_RoundKey_12
`define AESL_MEM_ctx_RoundKey_13 AESL_automem_ctx_RoundKey_13
`define AESL_MEM_INST_ctx_RoundKey_13 mem_inst_ctx_RoundKey_13
`define AESL_MEM_ctx_RoundKey_14 AESL_automem_ctx_RoundKey_14
`define AESL_MEM_INST_ctx_RoundKey_14 mem_inst_ctx_RoundKey_14
`define AESL_MEM_ctx_RoundKey_15 AESL_automem_ctx_RoundKey_15
`define AESL_MEM_INST_ctx_RoundKey_15 mem_inst_ctx_RoundKey_15
`define AESL_MEM_ctx_Iv AESL_automem_ctx_Iv
`define AESL_MEM_INST_ctx_Iv mem_inst_ctx_Iv
`define AESL_DEPTH_key_0 1
`define AESL_DEPTH_key_1 1
`define AESL_DEPTH_key_2 1
`define AESL_DEPTH_key_3 1
`define AESL_DEPTH_key_4 1
`define AESL_DEPTH_key_5 1
`define AESL_DEPTH_key_6 1
`define AESL_DEPTH_key_7 1
`define AESL_DEPTH_key_8 1
`define AESL_DEPTH_key_9 1
`define AESL_DEPTH_key_10 1
`define AESL_DEPTH_key_11 1
`define AESL_DEPTH_key_12 1
`define AESL_DEPTH_key_13 1
`define AESL_DEPTH_key_14 1
`define AESL_DEPTH_key_15 1
`define AESL_DEPTH_in_0_0 1
`define AESL_DEPTH_in_0_1 1
`define AESL_DEPTH_in_0_2 1
`define AESL_DEPTH_in_0_3 1
`define AESL_DEPTH_in_1_0 1
`define AESL_DEPTH_in_1_1 1
`define AESL_DEPTH_in_1_2 1
`define AESL_DEPTH_in_1_3 1
`define AESL_DEPTH_in_2_0 1
`define AESL_DEPTH_in_2_1 1
`define AESL_DEPTH_in_2_2 1
`define AESL_DEPTH_in_2_3 1
`define AESL_DEPTH_in_3_0 1
`define AESL_DEPTH_in_3_1 1
`define AESL_DEPTH_in_3_2 1
`define AESL_DEPTH_in_3_3 1
`define AUTOTB_TVIN_ctx_RoundKey_0  "../tv/cdatafile/c.AES.autotvin_ctx_RoundKey_0.dat"
`define AUTOTB_TVIN_ctx_RoundKey_1  "../tv/cdatafile/c.AES.autotvin_ctx_RoundKey_1.dat"
`define AUTOTB_TVIN_ctx_RoundKey_2  "../tv/cdatafile/c.AES.autotvin_ctx_RoundKey_2.dat"
`define AUTOTB_TVIN_ctx_RoundKey_3  "../tv/cdatafile/c.AES.autotvin_ctx_RoundKey_3.dat"
`define AUTOTB_TVIN_ctx_RoundKey_4  "../tv/cdatafile/c.AES.autotvin_ctx_RoundKey_4.dat"
`define AUTOTB_TVIN_ctx_RoundKey_5  "../tv/cdatafile/c.AES.autotvin_ctx_RoundKey_5.dat"
`define AUTOTB_TVIN_ctx_RoundKey_6  "../tv/cdatafile/c.AES.autotvin_ctx_RoundKey_6.dat"
`define AUTOTB_TVIN_ctx_RoundKey_7  "../tv/cdatafile/c.AES.autotvin_ctx_RoundKey_7.dat"
`define AUTOTB_TVIN_ctx_RoundKey_8  "../tv/cdatafile/c.AES.autotvin_ctx_RoundKey_8.dat"
`define AUTOTB_TVIN_ctx_RoundKey_9  "../tv/cdatafile/c.AES.autotvin_ctx_RoundKey_9.dat"
`define AUTOTB_TVIN_ctx_RoundKey_10  "../tv/cdatafile/c.AES.autotvin_ctx_RoundKey_10.dat"
`define AUTOTB_TVIN_ctx_RoundKey_11  "../tv/cdatafile/c.AES.autotvin_ctx_RoundKey_11.dat"
`define AUTOTB_TVIN_ctx_RoundKey_12  "../tv/cdatafile/c.AES.autotvin_ctx_RoundKey_12.dat"
`define AUTOTB_TVIN_ctx_RoundKey_13  "../tv/cdatafile/c.AES.autotvin_ctx_RoundKey_13.dat"
`define AUTOTB_TVIN_ctx_RoundKey_14  "../tv/cdatafile/c.AES.autotvin_ctx_RoundKey_14.dat"
`define AUTOTB_TVIN_ctx_RoundKey_15  "../tv/cdatafile/c.AES.autotvin_ctx_RoundKey_15.dat"
`define AUTOTB_TVIN_key_0  "../tv/cdatafile/c.AES.autotvin_key_0.dat"
`define AUTOTB_TVIN_key_1  "../tv/cdatafile/c.AES.autotvin_key_1.dat"
`define AUTOTB_TVIN_key_2  "../tv/cdatafile/c.AES.autotvin_key_2.dat"
`define AUTOTB_TVIN_key_3  "../tv/cdatafile/c.AES.autotvin_key_3.dat"
`define AUTOTB_TVIN_key_4  "../tv/cdatafile/c.AES.autotvin_key_4.dat"
`define AUTOTB_TVIN_key_5  "../tv/cdatafile/c.AES.autotvin_key_5.dat"
`define AUTOTB_TVIN_key_6  "../tv/cdatafile/c.AES.autotvin_key_6.dat"
`define AUTOTB_TVIN_key_7  "../tv/cdatafile/c.AES.autotvin_key_7.dat"
`define AUTOTB_TVIN_key_8  "../tv/cdatafile/c.AES.autotvin_key_8.dat"
`define AUTOTB_TVIN_key_9  "../tv/cdatafile/c.AES.autotvin_key_9.dat"
`define AUTOTB_TVIN_key_10  "../tv/cdatafile/c.AES.autotvin_key_10.dat"
`define AUTOTB_TVIN_key_11  "../tv/cdatafile/c.AES.autotvin_key_11.dat"
`define AUTOTB_TVIN_key_12  "../tv/cdatafile/c.AES.autotvin_key_12.dat"
`define AUTOTB_TVIN_key_13  "../tv/cdatafile/c.AES.autotvin_key_13.dat"
`define AUTOTB_TVIN_key_14  "../tv/cdatafile/c.AES.autotvin_key_14.dat"
`define AUTOTB_TVIN_key_15  "../tv/cdatafile/c.AES.autotvin_key_15.dat"
`define AUTOTB_TVIN_in_0_0  "../tv/cdatafile/c.AES.autotvin_in_0_0.dat"
`define AUTOTB_TVIN_in_0_1  "../tv/cdatafile/c.AES.autotvin_in_0_1.dat"
`define AUTOTB_TVIN_in_0_2  "../tv/cdatafile/c.AES.autotvin_in_0_2.dat"
`define AUTOTB_TVIN_in_0_3  "../tv/cdatafile/c.AES.autotvin_in_0_3.dat"
`define AUTOTB_TVIN_in_1_0  "../tv/cdatafile/c.AES.autotvin_in_1_0.dat"
`define AUTOTB_TVIN_in_1_1  "../tv/cdatafile/c.AES.autotvin_in_1_1.dat"
`define AUTOTB_TVIN_in_1_2  "../tv/cdatafile/c.AES.autotvin_in_1_2.dat"
`define AUTOTB_TVIN_in_1_3  "../tv/cdatafile/c.AES.autotvin_in_1_3.dat"
`define AUTOTB_TVIN_in_2_0  "../tv/cdatafile/c.AES.autotvin_in_2_0.dat"
`define AUTOTB_TVIN_in_2_1  "../tv/cdatafile/c.AES.autotvin_in_2_1.dat"
`define AUTOTB_TVIN_in_2_2  "../tv/cdatafile/c.AES.autotvin_in_2_2.dat"
`define AUTOTB_TVIN_in_2_3  "../tv/cdatafile/c.AES.autotvin_in_2_3.dat"
`define AUTOTB_TVIN_in_3_0  "../tv/cdatafile/c.AES.autotvin_in_3_0.dat"
`define AUTOTB_TVIN_in_3_1  "../tv/cdatafile/c.AES.autotvin_in_3_1.dat"
`define AUTOTB_TVIN_in_3_2  "../tv/cdatafile/c.AES.autotvin_in_3_2.dat"
`define AUTOTB_TVIN_in_3_3  "../tv/cdatafile/c.AES.autotvin_in_3_3.dat"
`define AUTOTB_TVIN_ctx_RoundKey_0_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_ctx_RoundKey_0.dat"
`define AUTOTB_TVIN_ctx_RoundKey_1_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_ctx_RoundKey_1.dat"
`define AUTOTB_TVIN_ctx_RoundKey_2_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_ctx_RoundKey_2.dat"
`define AUTOTB_TVIN_ctx_RoundKey_3_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_ctx_RoundKey_3.dat"
`define AUTOTB_TVIN_ctx_RoundKey_4_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_ctx_RoundKey_4.dat"
`define AUTOTB_TVIN_ctx_RoundKey_5_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_ctx_RoundKey_5.dat"
`define AUTOTB_TVIN_ctx_RoundKey_6_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_ctx_RoundKey_6.dat"
`define AUTOTB_TVIN_ctx_RoundKey_7_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_ctx_RoundKey_7.dat"
`define AUTOTB_TVIN_ctx_RoundKey_8_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_ctx_RoundKey_8.dat"
`define AUTOTB_TVIN_ctx_RoundKey_9_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_ctx_RoundKey_9.dat"
`define AUTOTB_TVIN_ctx_RoundKey_10_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_ctx_RoundKey_10.dat"
`define AUTOTB_TVIN_ctx_RoundKey_11_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_ctx_RoundKey_11.dat"
`define AUTOTB_TVIN_ctx_RoundKey_12_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_ctx_RoundKey_12.dat"
`define AUTOTB_TVIN_ctx_RoundKey_13_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_ctx_RoundKey_13.dat"
`define AUTOTB_TVIN_ctx_RoundKey_14_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_ctx_RoundKey_14.dat"
`define AUTOTB_TVIN_ctx_RoundKey_15_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_ctx_RoundKey_15.dat"
`define AUTOTB_TVIN_key_0_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_key_0.dat"
`define AUTOTB_TVIN_key_1_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_key_1.dat"
`define AUTOTB_TVIN_key_2_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_key_2.dat"
`define AUTOTB_TVIN_key_3_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_key_3.dat"
`define AUTOTB_TVIN_key_4_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_key_4.dat"
`define AUTOTB_TVIN_key_5_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_key_5.dat"
`define AUTOTB_TVIN_key_6_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_key_6.dat"
`define AUTOTB_TVIN_key_7_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_key_7.dat"
`define AUTOTB_TVIN_key_8_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_key_8.dat"
`define AUTOTB_TVIN_key_9_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_key_9.dat"
`define AUTOTB_TVIN_key_10_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_key_10.dat"
`define AUTOTB_TVIN_key_11_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_key_11.dat"
`define AUTOTB_TVIN_key_12_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_key_12.dat"
`define AUTOTB_TVIN_key_13_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_key_13.dat"
`define AUTOTB_TVIN_key_14_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_key_14.dat"
`define AUTOTB_TVIN_key_15_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_key_15.dat"
`define AUTOTB_TVIN_in_0_0_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_in_0_0.dat"
`define AUTOTB_TVIN_in_0_1_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_in_0_1.dat"
`define AUTOTB_TVIN_in_0_2_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_in_0_2.dat"
`define AUTOTB_TVIN_in_0_3_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_in_0_3.dat"
`define AUTOTB_TVIN_in_1_0_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_in_1_0.dat"
`define AUTOTB_TVIN_in_1_1_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_in_1_1.dat"
`define AUTOTB_TVIN_in_1_2_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_in_1_2.dat"
`define AUTOTB_TVIN_in_1_3_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_in_1_3.dat"
`define AUTOTB_TVIN_in_2_0_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_in_2_0.dat"
`define AUTOTB_TVIN_in_2_1_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_in_2_1.dat"
`define AUTOTB_TVIN_in_2_2_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_in_2_2.dat"
`define AUTOTB_TVIN_in_2_3_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_in_2_3.dat"
`define AUTOTB_TVIN_in_3_0_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_in_3_0.dat"
`define AUTOTB_TVIN_in_3_1_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_in_3_1.dat"
`define AUTOTB_TVIN_in_3_2_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_in_3_2.dat"
`define AUTOTB_TVIN_in_3_3_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvin_in_3_3.dat"
`define AUTOTB_TVOUT_ctx_RoundKey_0  "../tv/cdatafile/c.AES.autotvout_ctx_RoundKey_0.dat"
`define AUTOTB_TVOUT_ctx_RoundKey_1  "../tv/cdatafile/c.AES.autotvout_ctx_RoundKey_1.dat"
`define AUTOTB_TVOUT_ctx_RoundKey_2  "../tv/cdatafile/c.AES.autotvout_ctx_RoundKey_2.dat"
`define AUTOTB_TVOUT_ctx_RoundKey_3  "../tv/cdatafile/c.AES.autotvout_ctx_RoundKey_3.dat"
`define AUTOTB_TVOUT_ctx_RoundKey_4  "../tv/cdatafile/c.AES.autotvout_ctx_RoundKey_4.dat"
`define AUTOTB_TVOUT_ctx_RoundKey_5  "../tv/cdatafile/c.AES.autotvout_ctx_RoundKey_5.dat"
`define AUTOTB_TVOUT_ctx_RoundKey_6  "../tv/cdatafile/c.AES.autotvout_ctx_RoundKey_6.dat"
`define AUTOTB_TVOUT_ctx_RoundKey_7  "../tv/cdatafile/c.AES.autotvout_ctx_RoundKey_7.dat"
`define AUTOTB_TVOUT_ctx_RoundKey_8  "../tv/cdatafile/c.AES.autotvout_ctx_RoundKey_8.dat"
`define AUTOTB_TVOUT_ctx_RoundKey_9  "../tv/cdatafile/c.AES.autotvout_ctx_RoundKey_9.dat"
`define AUTOTB_TVOUT_ctx_RoundKey_10  "../tv/cdatafile/c.AES.autotvout_ctx_RoundKey_10.dat"
`define AUTOTB_TVOUT_ctx_RoundKey_11  "../tv/cdatafile/c.AES.autotvout_ctx_RoundKey_11.dat"
`define AUTOTB_TVOUT_ctx_RoundKey_12  "../tv/cdatafile/c.AES.autotvout_ctx_RoundKey_12.dat"
`define AUTOTB_TVOUT_ctx_RoundKey_13  "../tv/cdatafile/c.AES.autotvout_ctx_RoundKey_13.dat"
`define AUTOTB_TVOUT_ctx_RoundKey_14  "../tv/cdatafile/c.AES.autotvout_ctx_RoundKey_14.dat"
`define AUTOTB_TVOUT_ctx_RoundKey_15  "../tv/cdatafile/c.AES.autotvout_ctx_RoundKey_15.dat"
`define AUTOTB_TVOUT_in_0_0  "../tv/cdatafile/c.AES.autotvout_in_0_0.dat"
`define AUTOTB_TVOUT_in_0_1  "../tv/cdatafile/c.AES.autotvout_in_0_1.dat"
`define AUTOTB_TVOUT_in_0_2  "../tv/cdatafile/c.AES.autotvout_in_0_2.dat"
`define AUTOTB_TVOUT_in_0_3  "../tv/cdatafile/c.AES.autotvout_in_0_3.dat"
`define AUTOTB_TVOUT_in_1_0  "../tv/cdatafile/c.AES.autotvout_in_1_0.dat"
`define AUTOTB_TVOUT_in_1_1  "../tv/cdatafile/c.AES.autotvout_in_1_1.dat"
`define AUTOTB_TVOUT_in_1_2  "../tv/cdatafile/c.AES.autotvout_in_1_2.dat"
`define AUTOTB_TVOUT_in_1_3  "../tv/cdatafile/c.AES.autotvout_in_1_3.dat"
`define AUTOTB_TVOUT_in_2_0  "../tv/cdatafile/c.AES.autotvout_in_2_0.dat"
`define AUTOTB_TVOUT_in_2_1  "../tv/cdatafile/c.AES.autotvout_in_2_1.dat"
`define AUTOTB_TVOUT_in_2_2  "../tv/cdatafile/c.AES.autotvout_in_2_2.dat"
`define AUTOTB_TVOUT_in_2_3  "../tv/cdatafile/c.AES.autotvout_in_2_3.dat"
`define AUTOTB_TVOUT_in_3_0  "../tv/cdatafile/c.AES.autotvout_in_3_0.dat"
`define AUTOTB_TVOUT_in_3_1  "../tv/cdatafile/c.AES.autotvout_in_3_1.dat"
`define AUTOTB_TVOUT_in_3_2  "../tv/cdatafile/c.AES.autotvout_in_3_2.dat"
`define AUTOTB_TVOUT_in_3_3  "../tv/cdatafile/c.AES.autotvout_in_3_3.dat"
`define AUTOTB_TVOUT_ctx_RoundKey_0_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvout_ctx_RoundKey_0.dat"
`define AUTOTB_TVOUT_ctx_RoundKey_1_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvout_ctx_RoundKey_1.dat"
`define AUTOTB_TVOUT_ctx_RoundKey_2_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvout_ctx_RoundKey_2.dat"
`define AUTOTB_TVOUT_ctx_RoundKey_3_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvout_ctx_RoundKey_3.dat"
`define AUTOTB_TVOUT_ctx_RoundKey_4_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvout_ctx_RoundKey_4.dat"
`define AUTOTB_TVOUT_ctx_RoundKey_5_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvout_ctx_RoundKey_5.dat"
`define AUTOTB_TVOUT_ctx_RoundKey_6_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvout_ctx_RoundKey_6.dat"
`define AUTOTB_TVOUT_ctx_RoundKey_7_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvout_ctx_RoundKey_7.dat"
`define AUTOTB_TVOUT_ctx_RoundKey_8_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvout_ctx_RoundKey_8.dat"
`define AUTOTB_TVOUT_ctx_RoundKey_9_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvout_ctx_RoundKey_9.dat"
`define AUTOTB_TVOUT_ctx_RoundKey_10_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvout_ctx_RoundKey_10.dat"
`define AUTOTB_TVOUT_ctx_RoundKey_11_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvout_ctx_RoundKey_11.dat"
`define AUTOTB_TVOUT_ctx_RoundKey_12_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvout_ctx_RoundKey_12.dat"
`define AUTOTB_TVOUT_ctx_RoundKey_13_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvout_ctx_RoundKey_13.dat"
`define AUTOTB_TVOUT_ctx_RoundKey_14_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvout_ctx_RoundKey_14.dat"
`define AUTOTB_TVOUT_ctx_RoundKey_15_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvout_ctx_RoundKey_15.dat"
`define AUTOTB_TVOUT_in_0_0_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvout_in_0_0.dat"
`define AUTOTB_TVOUT_in_0_1_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvout_in_0_1.dat"
`define AUTOTB_TVOUT_in_0_2_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvout_in_0_2.dat"
`define AUTOTB_TVOUT_in_0_3_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvout_in_0_3.dat"
`define AUTOTB_TVOUT_in_1_0_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvout_in_1_0.dat"
`define AUTOTB_TVOUT_in_1_1_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvout_in_1_1.dat"
`define AUTOTB_TVOUT_in_1_2_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvout_in_1_2.dat"
`define AUTOTB_TVOUT_in_1_3_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvout_in_1_3.dat"
`define AUTOTB_TVOUT_in_2_0_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvout_in_2_0.dat"
`define AUTOTB_TVOUT_in_2_1_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvout_in_2_1.dat"
`define AUTOTB_TVOUT_in_2_2_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvout_in_2_2.dat"
`define AUTOTB_TVOUT_in_2_3_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvout_in_2_3.dat"
`define AUTOTB_TVOUT_in_3_0_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvout_in_3_0.dat"
`define AUTOTB_TVOUT_in_3_1_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvout_in_3_1.dat"
`define AUTOTB_TVOUT_in_3_2_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvout_in_3_2.dat"
`define AUTOTB_TVOUT_in_3_3_out_wrapc  "../tv/rtldatafile/rtl.AES.autotvout_in_3_3.dat"
module `AUTOTB_TOP;

parameter AUTOTB_TRANSACTION_NUM = 1;
parameter PROGRESS_TIMEOUT = 10000000;
parameter LATENCY_ESTIMATION = 100;
parameter LENGTH_ctx_RoundKey_0 = 11;
parameter LENGTH_ctx_RoundKey_1 = 11;
parameter LENGTH_ctx_RoundKey_2 = 11;
parameter LENGTH_ctx_RoundKey_3 = 11;
parameter LENGTH_ctx_RoundKey_4 = 11;
parameter LENGTH_ctx_RoundKey_5 = 11;
parameter LENGTH_ctx_RoundKey_6 = 11;
parameter LENGTH_ctx_RoundKey_7 = 11;
parameter LENGTH_ctx_RoundKey_8 = 11;
parameter LENGTH_ctx_RoundKey_9 = 11;
parameter LENGTH_ctx_RoundKey_10 = 11;
parameter LENGTH_ctx_RoundKey_11 = 11;
parameter LENGTH_ctx_RoundKey_12 = 11;
parameter LENGTH_ctx_RoundKey_13 = 11;
parameter LENGTH_ctx_RoundKey_14 = 11;
parameter LENGTH_ctx_RoundKey_15 = 11;
parameter LENGTH_key_0 = 1;
parameter LENGTH_key_1 = 1;
parameter LENGTH_key_2 = 1;
parameter LENGTH_key_3 = 1;
parameter LENGTH_key_4 = 1;
parameter LENGTH_key_5 = 1;
parameter LENGTH_key_6 = 1;
parameter LENGTH_key_7 = 1;
parameter LENGTH_key_8 = 1;
parameter LENGTH_key_9 = 1;
parameter LENGTH_key_10 = 1;
parameter LENGTH_key_11 = 1;
parameter LENGTH_key_12 = 1;
parameter LENGTH_key_13 = 1;
parameter LENGTH_key_14 = 1;
parameter LENGTH_key_15 = 1;
parameter LENGTH_in_0_0 = 1;
parameter LENGTH_in_0_1 = 1;
parameter LENGTH_in_0_2 = 1;
parameter LENGTH_in_0_3 = 1;
parameter LENGTH_in_1_0 = 1;
parameter LENGTH_in_1_1 = 1;
parameter LENGTH_in_1_2 = 1;
parameter LENGTH_in_1_3 = 1;
parameter LENGTH_in_2_0 = 1;
parameter LENGTH_in_2_1 = 1;
parameter LENGTH_in_2_2 = 1;
parameter LENGTH_in_2_3 = 1;
parameter LENGTH_in_3_0 = 1;
parameter LENGTH_in_3_1 = 1;
parameter LENGTH_in_3_2 = 1;
parameter LENGTH_in_3_3 = 1;

task read_token;
    input integer fp;
    output reg [215 : 0] token;
    integer ret;
    begin
        token = "";
        ret = 0;
        ret = $fscanf(fp,"%s",token);
    end
endtask

reg AESL_clock;
reg rst;
reg start;
reg ce;
reg tb_continue;
wire AESL_start;
wire AESL_reset;
wire AESL_ce;
wire AESL_ready;
wire AESL_idle;
wire AESL_continue;
wire AESL_done;
reg AESL_done_delay = 0;
reg AESL_done_delay2 = 0;
reg AESL_ready_delay = 0;
wire ready;
wire ready_wire;
wire ap_start;
wire ap_done;
wire ap_idle;
wire ap_ready;
wire [3 : 0] ctx_RoundKey_0_address0;
wire  ctx_RoundKey_0_ce0;
wire  ctx_RoundKey_0_we0;
wire [7 : 0] ctx_RoundKey_0_d0;
wire [7 : 0] ctx_RoundKey_0_q0;
wire [3 : 0] ctx_RoundKey_1_address0;
wire  ctx_RoundKey_1_ce0;
wire  ctx_RoundKey_1_we0;
wire [7 : 0] ctx_RoundKey_1_d0;
wire [7 : 0] ctx_RoundKey_1_q0;
wire [3 : 0] ctx_RoundKey_2_address0;
wire  ctx_RoundKey_2_ce0;
wire  ctx_RoundKey_2_we0;
wire [7 : 0] ctx_RoundKey_2_d0;
wire [7 : 0] ctx_RoundKey_2_q0;
wire [3 : 0] ctx_RoundKey_3_address0;
wire  ctx_RoundKey_3_ce0;
wire  ctx_RoundKey_3_we0;
wire [7 : 0] ctx_RoundKey_3_d0;
wire [7 : 0] ctx_RoundKey_3_q0;
wire [3 : 0] ctx_RoundKey_4_address0;
wire  ctx_RoundKey_4_ce0;
wire  ctx_RoundKey_4_we0;
wire [7 : 0] ctx_RoundKey_4_d0;
wire [7 : 0] ctx_RoundKey_4_q0;
wire [3 : 0] ctx_RoundKey_5_address0;
wire  ctx_RoundKey_5_ce0;
wire  ctx_RoundKey_5_we0;
wire [7 : 0] ctx_RoundKey_5_d0;
wire [7 : 0] ctx_RoundKey_5_q0;
wire [3 : 0] ctx_RoundKey_6_address0;
wire  ctx_RoundKey_6_ce0;
wire  ctx_RoundKey_6_we0;
wire [7 : 0] ctx_RoundKey_6_d0;
wire [7 : 0] ctx_RoundKey_6_q0;
wire [3 : 0] ctx_RoundKey_7_address0;
wire  ctx_RoundKey_7_ce0;
wire  ctx_RoundKey_7_we0;
wire [7 : 0] ctx_RoundKey_7_d0;
wire [7 : 0] ctx_RoundKey_7_q0;
wire [3 : 0] ctx_RoundKey_8_address0;
wire  ctx_RoundKey_8_ce0;
wire  ctx_RoundKey_8_we0;
wire [7 : 0] ctx_RoundKey_8_d0;
wire [7 : 0] ctx_RoundKey_8_q0;
wire [3 : 0] ctx_RoundKey_9_address0;
wire  ctx_RoundKey_9_ce0;
wire  ctx_RoundKey_9_we0;
wire [7 : 0] ctx_RoundKey_9_d0;
wire [7 : 0] ctx_RoundKey_9_q0;
wire [3 : 0] ctx_RoundKey_10_address0;
wire  ctx_RoundKey_10_ce0;
wire  ctx_RoundKey_10_we0;
wire [7 : 0] ctx_RoundKey_10_d0;
wire [7 : 0] ctx_RoundKey_10_q0;
wire [3 : 0] ctx_RoundKey_11_address0;
wire  ctx_RoundKey_11_ce0;
wire  ctx_RoundKey_11_we0;
wire [7 : 0] ctx_RoundKey_11_d0;
wire [7 : 0] ctx_RoundKey_11_q0;
wire [3 : 0] ctx_RoundKey_12_address0;
wire  ctx_RoundKey_12_ce0;
wire  ctx_RoundKey_12_we0;
wire [7 : 0] ctx_RoundKey_12_d0;
wire [7 : 0] ctx_RoundKey_12_q0;
wire [3 : 0] ctx_RoundKey_13_address0;
wire  ctx_RoundKey_13_ce0;
wire  ctx_RoundKey_13_we0;
wire [7 : 0] ctx_RoundKey_13_d0;
wire [7 : 0] ctx_RoundKey_13_q0;
wire [3 : 0] ctx_RoundKey_14_address0;
wire  ctx_RoundKey_14_ce0;
wire  ctx_RoundKey_14_we0;
wire [7 : 0] ctx_RoundKey_14_d0;
wire [7 : 0] ctx_RoundKey_14_q0;
wire [3 : 0] ctx_RoundKey_15_address0;
wire  ctx_RoundKey_15_ce0;
wire  ctx_RoundKey_15_we0;
wire [7 : 0] ctx_RoundKey_15_d0;
wire [7 : 0] ctx_RoundKey_15_q0;
wire [3 : 0] ctx_Iv_address0;
wire  ctx_Iv_ce0;
wire  ctx_Iv_we0;
wire [7 : 0] ctx_Iv_d0;
wire [7 : 0] ctx_Iv_q0;
wire [3 : 0] ctx_Iv_address1;
wire  ctx_Iv_ce1;
wire  ctx_Iv_we1;
wire [7 : 0] ctx_Iv_d1;
wire [7 : 0] ctx_Iv_q1;
wire [7 : 0] key_0;
wire [7 : 0] key_1;
wire [7 : 0] key_2;
wire [7 : 0] key_3;
wire [7 : 0] key_4;
wire [7 : 0] key_5;
wire [7 : 0] key_6;
wire [7 : 0] key_7;
wire [7 : 0] key_8;
wire [7 : 0] key_9;
wire [7 : 0] key_10;
wire [7 : 0] key_11;
wire [7 : 0] key_12;
wire [7 : 0] key_13;
wire [7 : 0] key_14;
wire [7 : 0] key_15;
wire [7 : 0] in_0_0_i;
wire [7 : 0] in_0_0_o;
wire  in_0_0_o_ap_vld;
wire [7 : 0] in_0_1_i;
wire [7 : 0] in_0_1_o;
wire  in_0_1_o_ap_vld;
wire [7 : 0] in_0_2_i;
wire [7 : 0] in_0_2_o;
wire  in_0_2_o_ap_vld;
wire [7 : 0] in_0_3_i;
wire [7 : 0] in_0_3_o;
wire  in_0_3_o_ap_vld;
wire [7 : 0] in_1_0_i;
wire [7 : 0] in_1_0_o;
wire  in_1_0_o_ap_vld;
wire [7 : 0] in_1_1_i;
wire [7 : 0] in_1_1_o;
wire  in_1_1_o_ap_vld;
wire [7 : 0] in_1_2_i;
wire [7 : 0] in_1_2_o;
wire  in_1_2_o_ap_vld;
wire [7 : 0] in_1_3_i;
wire [7 : 0] in_1_3_o;
wire  in_1_3_o_ap_vld;
wire [7 : 0] in_2_0_i;
wire [7 : 0] in_2_0_o;
wire  in_2_0_o_ap_vld;
wire [7 : 0] in_2_1_i;
wire [7 : 0] in_2_1_o;
wire  in_2_1_o_ap_vld;
wire [7 : 0] in_2_2_i;
wire [7 : 0] in_2_2_o;
wire  in_2_2_o_ap_vld;
wire [7 : 0] in_2_3_i;
wire [7 : 0] in_2_3_o;
wire  in_2_3_o_ap_vld;
wire [7 : 0] in_3_0_i;
wire [7 : 0] in_3_0_o;
wire  in_3_0_o_ap_vld;
wire [7 : 0] in_3_1_i;
wire [7 : 0] in_3_1_o;
wire  in_3_1_o_ap_vld;
wire [7 : 0] in_3_2_i;
wire [7 : 0] in_3_2_o;
wire  in_3_2_o_ap_vld;
wire [7 : 0] in_3_3_i;
wire [7 : 0] in_3_3_o;
wire  in_3_3_o_ap_vld;
integer done_cnt = 0;
integer AESL_ready_cnt = 0;
integer ready_cnt = 0;
reg ready_initial;
reg ready_initial_n;
reg ready_last_n;
reg ready_delay_last_n;
reg done_delay_last_n;
reg interface_done = 0;

wire ap_clk;
wire ap_rst;
wire ap_rst_n;

`AUTOTB_DUT `AUTOTB_DUT_INST(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(ap_start),
    .ap_done(ap_done),
    .ap_idle(ap_idle),
    .ap_ready(ap_ready),
    .ctx_RoundKey_0_address0(ctx_RoundKey_0_address0),
    .ctx_RoundKey_0_ce0(ctx_RoundKey_0_ce0),
    .ctx_RoundKey_0_we0(ctx_RoundKey_0_we0),
    .ctx_RoundKey_0_d0(ctx_RoundKey_0_d0),
    .ctx_RoundKey_0_q0(ctx_RoundKey_0_q0),
    .ctx_RoundKey_1_address0(ctx_RoundKey_1_address0),
    .ctx_RoundKey_1_ce0(ctx_RoundKey_1_ce0),
    .ctx_RoundKey_1_we0(ctx_RoundKey_1_we0),
    .ctx_RoundKey_1_d0(ctx_RoundKey_1_d0),
    .ctx_RoundKey_1_q0(ctx_RoundKey_1_q0),
    .ctx_RoundKey_2_address0(ctx_RoundKey_2_address0),
    .ctx_RoundKey_2_ce0(ctx_RoundKey_2_ce0),
    .ctx_RoundKey_2_we0(ctx_RoundKey_2_we0),
    .ctx_RoundKey_2_d0(ctx_RoundKey_2_d0),
    .ctx_RoundKey_2_q0(ctx_RoundKey_2_q0),
    .ctx_RoundKey_3_address0(ctx_RoundKey_3_address0),
    .ctx_RoundKey_3_ce0(ctx_RoundKey_3_ce0),
    .ctx_RoundKey_3_we0(ctx_RoundKey_3_we0),
    .ctx_RoundKey_3_d0(ctx_RoundKey_3_d0),
    .ctx_RoundKey_3_q0(ctx_RoundKey_3_q0),
    .ctx_RoundKey_4_address0(ctx_RoundKey_4_address0),
    .ctx_RoundKey_4_ce0(ctx_RoundKey_4_ce0),
    .ctx_RoundKey_4_we0(ctx_RoundKey_4_we0),
    .ctx_RoundKey_4_d0(ctx_RoundKey_4_d0),
    .ctx_RoundKey_4_q0(ctx_RoundKey_4_q0),
    .ctx_RoundKey_5_address0(ctx_RoundKey_5_address0),
    .ctx_RoundKey_5_ce0(ctx_RoundKey_5_ce0),
    .ctx_RoundKey_5_we0(ctx_RoundKey_5_we0),
    .ctx_RoundKey_5_d0(ctx_RoundKey_5_d0),
    .ctx_RoundKey_5_q0(ctx_RoundKey_5_q0),
    .ctx_RoundKey_6_address0(ctx_RoundKey_6_address0),
    .ctx_RoundKey_6_ce0(ctx_RoundKey_6_ce0),
    .ctx_RoundKey_6_we0(ctx_RoundKey_6_we0),
    .ctx_RoundKey_6_d0(ctx_RoundKey_6_d0),
    .ctx_RoundKey_6_q0(ctx_RoundKey_6_q0),
    .ctx_RoundKey_7_address0(ctx_RoundKey_7_address0),
    .ctx_RoundKey_7_ce0(ctx_RoundKey_7_ce0),
    .ctx_RoundKey_7_we0(ctx_RoundKey_7_we0),
    .ctx_RoundKey_7_d0(ctx_RoundKey_7_d0),
    .ctx_RoundKey_7_q0(ctx_RoundKey_7_q0),
    .ctx_RoundKey_8_address0(ctx_RoundKey_8_address0),
    .ctx_RoundKey_8_ce0(ctx_RoundKey_8_ce0),
    .ctx_RoundKey_8_we0(ctx_RoundKey_8_we0),
    .ctx_RoundKey_8_d0(ctx_RoundKey_8_d0),
    .ctx_RoundKey_8_q0(ctx_RoundKey_8_q0),
    .ctx_RoundKey_9_address0(ctx_RoundKey_9_address0),
    .ctx_RoundKey_9_ce0(ctx_RoundKey_9_ce0),
    .ctx_RoundKey_9_we0(ctx_RoundKey_9_we0),
    .ctx_RoundKey_9_d0(ctx_RoundKey_9_d0),
    .ctx_RoundKey_9_q0(ctx_RoundKey_9_q0),
    .ctx_RoundKey_10_address0(ctx_RoundKey_10_address0),
    .ctx_RoundKey_10_ce0(ctx_RoundKey_10_ce0),
    .ctx_RoundKey_10_we0(ctx_RoundKey_10_we0),
    .ctx_RoundKey_10_d0(ctx_RoundKey_10_d0),
    .ctx_RoundKey_10_q0(ctx_RoundKey_10_q0),
    .ctx_RoundKey_11_address0(ctx_RoundKey_11_address0),
    .ctx_RoundKey_11_ce0(ctx_RoundKey_11_ce0),
    .ctx_RoundKey_11_we0(ctx_RoundKey_11_we0),
    .ctx_RoundKey_11_d0(ctx_RoundKey_11_d0),
    .ctx_RoundKey_11_q0(ctx_RoundKey_11_q0),
    .ctx_RoundKey_12_address0(ctx_RoundKey_12_address0),
    .ctx_RoundKey_12_ce0(ctx_RoundKey_12_ce0),
    .ctx_RoundKey_12_we0(ctx_RoundKey_12_we0),
    .ctx_RoundKey_12_d0(ctx_RoundKey_12_d0),
    .ctx_RoundKey_12_q0(ctx_RoundKey_12_q0),
    .ctx_RoundKey_13_address0(ctx_RoundKey_13_address0),
    .ctx_RoundKey_13_ce0(ctx_RoundKey_13_ce0),
    .ctx_RoundKey_13_we0(ctx_RoundKey_13_we0),
    .ctx_RoundKey_13_d0(ctx_RoundKey_13_d0),
    .ctx_RoundKey_13_q0(ctx_RoundKey_13_q0),
    .ctx_RoundKey_14_address0(ctx_RoundKey_14_address0),
    .ctx_RoundKey_14_ce0(ctx_RoundKey_14_ce0),
    .ctx_RoundKey_14_we0(ctx_RoundKey_14_we0),
    .ctx_RoundKey_14_d0(ctx_RoundKey_14_d0),
    .ctx_RoundKey_14_q0(ctx_RoundKey_14_q0),
    .ctx_RoundKey_15_address0(ctx_RoundKey_15_address0),
    .ctx_RoundKey_15_ce0(ctx_RoundKey_15_ce0),
    .ctx_RoundKey_15_we0(ctx_RoundKey_15_we0),
    .ctx_RoundKey_15_d0(ctx_RoundKey_15_d0),
    .ctx_RoundKey_15_q0(ctx_RoundKey_15_q0),
    .ctx_Iv_address0(ctx_Iv_address0),
    .ctx_Iv_ce0(ctx_Iv_ce0),
    .ctx_Iv_we0(ctx_Iv_we0),
    .ctx_Iv_d0(ctx_Iv_d0),
    .ctx_Iv_q0(ctx_Iv_q0),
    .ctx_Iv_address1(ctx_Iv_address1),
    .ctx_Iv_ce1(ctx_Iv_ce1),
    .ctx_Iv_we1(ctx_Iv_we1),
    .ctx_Iv_d1(ctx_Iv_d1),
    .ctx_Iv_q1(ctx_Iv_q1),
    .key_0(key_0),
    .key_1(key_1),
    .key_2(key_2),
    .key_3(key_3),
    .key_4(key_4),
    .key_5(key_5),
    .key_6(key_6),
    .key_7(key_7),
    .key_8(key_8),
    .key_9(key_9),
    .key_10(key_10),
    .key_11(key_11),
    .key_12(key_12),
    .key_13(key_13),
    .key_14(key_14),
    .key_15(key_15),
    .in_0_0_i(in_0_0_i),
    .in_0_0_o(in_0_0_o),
    .in_0_0_o_ap_vld(in_0_0_o_ap_vld),
    .in_0_1_i(in_0_1_i),
    .in_0_1_o(in_0_1_o),
    .in_0_1_o_ap_vld(in_0_1_o_ap_vld),
    .in_0_2_i(in_0_2_i),
    .in_0_2_o(in_0_2_o),
    .in_0_2_o_ap_vld(in_0_2_o_ap_vld),
    .in_0_3_i(in_0_3_i),
    .in_0_3_o(in_0_3_o),
    .in_0_3_o_ap_vld(in_0_3_o_ap_vld),
    .in_1_0_i(in_1_0_i),
    .in_1_0_o(in_1_0_o),
    .in_1_0_o_ap_vld(in_1_0_o_ap_vld),
    .in_1_1_i(in_1_1_i),
    .in_1_1_o(in_1_1_o),
    .in_1_1_o_ap_vld(in_1_1_o_ap_vld),
    .in_1_2_i(in_1_2_i),
    .in_1_2_o(in_1_2_o),
    .in_1_2_o_ap_vld(in_1_2_o_ap_vld),
    .in_1_3_i(in_1_3_i),
    .in_1_3_o(in_1_3_o),
    .in_1_3_o_ap_vld(in_1_3_o_ap_vld),
    .in_2_0_i(in_2_0_i),
    .in_2_0_o(in_2_0_o),
    .in_2_0_o_ap_vld(in_2_0_o_ap_vld),
    .in_2_1_i(in_2_1_i),
    .in_2_1_o(in_2_1_o),
    .in_2_1_o_ap_vld(in_2_1_o_ap_vld),
    .in_2_2_i(in_2_2_i),
    .in_2_2_o(in_2_2_o),
    .in_2_2_o_ap_vld(in_2_2_o_ap_vld),
    .in_2_3_i(in_2_3_i),
    .in_2_3_o(in_2_3_o),
    .in_2_3_o_ap_vld(in_2_3_o_ap_vld),
    .in_3_0_i(in_3_0_i),
    .in_3_0_o(in_3_0_o),
    .in_3_0_o_ap_vld(in_3_0_o_ap_vld),
    .in_3_1_i(in_3_1_i),
    .in_3_1_o(in_3_1_o),
    .in_3_1_o_ap_vld(in_3_1_o_ap_vld),
    .in_3_2_i(in_3_2_i),
    .in_3_2_o(in_3_2_o),
    .in_3_2_o_ap_vld(in_3_2_o_ap_vld),
    .in_3_3_i(in_3_3_i),
    .in_3_3_o(in_3_3_o),
    .in_3_3_o_ap_vld(in_3_3_o_ap_vld));

// Assignment for control signal
assign ap_clk = AESL_clock;
assign ap_rst = AESL_reset;
assign ap_rst_n = ~AESL_reset;
assign AESL_reset = rst;
assign ap_start = AESL_start;
assign AESL_start = start;
assign AESL_done = ap_done;
assign AESL_idle = ap_idle;
assign AESL_ready = ap_ready;
assign AESL_ce = ce;
assign AESL_continue = tb_continue;
    always @(posedge AESL_clock) begin
        if (AESL_reset) begin
        end else begin
            if (AESL_done !== 1 && AESL_done !== 0) begin
                $display("ERROR: Control signal AESL_done is invalid!");
                $finish;
            end
        end
    end
    always @(posedge AESL_clock) begin
        if (AESL_reset) begin
        end else begin
            if (AESL_ready !== 1 && AESL_ready !== 0) begin
                $display("ERROR: Control signal AESL_ready is invalid!");
                $finish;
            end
        end
    end
//------------------------arrayctx_RoundKey_0 Instantiation--------------

// The input and output of arrayctx_RoundKey_0
wire    arrayctx_RoundKey_0_ce0, arrayctx_RoundKey_0_ce1;
wire    arrayctx_RoundKey_0_we0, arrayctx_RoundKey_0_we1;
wire    [3 : 0]    arrayctx_RoundKey_0_address0, arrayctx_RoundKey_0_address1;
wire    [7 : 0]    arrayctx_RoundKey_0_din0, arrayctx_RoundKey_0_din1;
wire    [7 : 0]    arrayctx_RoundKey_0_dout0, arrayctx_RoundKey_0_dout1;
wire    arrayctx_RoundKey_0_ready;
wire    arrayctx_RoundKey_0_done;

`AESL_MEM_ctx_RoundKey_0 `AESL_MEM_INST_ctx_RoundKey_0(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayctx_RoundKey_0_ce0),
    .we0        (arrayctx_RoundKey_0_we0),
    .address0   (arrayctx_RoundKey_0_address0),
    .din0       (arrayctx_RoundKey_0_din0),
    .dout0      (arrayctx_RoundKey_0_dout0),
    .ce1        (arrayctx_RoundKey_0_ce1),
    .we1        (arrayctx_RoundKey_0_we1),
    .address1   (arrayctx_RoundKey_0_address1),
    .din1       (arrayctx_RoundKey_0_din1),
    .dout1      (arrayctx_RoundKey_0_dout1),
    .ready      (arrayctx_RoundKey_0_ready),
    .done    (arrayctx_RoundKey_0_done)
);

// Assignment between dut and arrayctx_RoundKey_0
assign arrayctx_RoundKey_0_address0 = ctx_RoundKey_0_address0;
assign arrayctx_RoundKey_0_ce0 = ctx_RoundKey_0_ce0;
assign ctx_RoundKey_0_q0 = arrayctx_RoundKey_0_dout0;
assign arrayctx_RoundKey_0_we0 = ctx_RoundKey_0_we0;
assign arrayctx_RoundKey_0_din0 = ctx_RoundKey_0_d0;
assign arrayctx_RoundKey_0_we1 = 0;
assign arrayctx_RoundKey_0_din1 = 0;
assign arrayctx_RoundKey_0_ready= ready;
assign arrayctx_RoundKey_0_done = interface_done;


//------------------------arrayctx_RoundKey_1 Instantiation--------------

// The input and output of arrayctx_RoundKey_1
wire    arrayctx_RoundKey_1_ce0, arrayctx_RoundKey_1_ce1;
wire    arrayctx_RoundKey_1_we0, arrayctx_RoundKey_1_we1;
wire    [3 : 0]    arrayctx_RoundKey_1_address0, arrayctx_RoundKey_1_address1;
wire    [7 : 0]    arrayctx_RoundKey_1_din0, arrayctx_RoundKey_1_din1;
wire    [7 : 0]    arrayctx_RoundKey_1_dout0, arrayctx_RoundKey_1_dout1;
wire    arrayctx_RoundKey_1_ready;
wire    arrayctx_RoundKey_1_done;

`AESL_MEM_ctx_RoundKey_1 `AESL_MEM_INST_ctx_RoundKey_1(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayctx_RoundKey_1_ce0),
    .we0        (arrayctx_RoundKey_1_we0),
    .address0   (arrayctx_RoundKey_1_address0),
    .din0       (arrayctx_RoundKey_1_din0),
    .dout0      (arrayctx_RoundKey_1_dout0),
    .ce1        (arrayctx_RoundKey_1_ce1),
    .we1        (arrayctx_RoundKey_1_we1),
    .address1   (arrayctx_RoundKey_1_address1),
    .din1       (arrayctx_RoundKey_1_din1),
    .dout1      (arrayctx_RoundKey_1_dout1),
    .ready      (arrayctx_RoundKey_1_ready),
    .done    (arrayctx_RoundKey_1_done)
);

// Assignment between dut and arrayctx_RoundKey_1
assign arrayctx_RoundKey_1_address0 = ctx_RoundKey_1_address0;
assign arrayctx_RoundKey_1_ce0 = ctx_RoundKey_1_ce0;
assign ctx_RoundKey_1_q0 = arrayctx_RoundKey_1_dout0;
assign arrayctx_RoundKey_1_we0 = ctx_RoundKey_1_we0;
assign arrayctx_RoundKey_1_din0 = ctx_RoundKey_1_d0;
assign arrayctx_RoundKey_1_we1 = 0;
assign arrayctx_RoundKey_1_din1 = 0;
assign arrayctx_RoundKey_1_ready= ready;
assign arrayctx_RoundKey_1_done = interface_done;


//------------------------arrayctx_RoundKey_2 Instantiation--------------

// The input and output of arrayctx_RoundKey_2
wire    arrayctx_RoundKey_2_ce0, arrayctx_RoundKey_2_ce1;
wire    arrayctx_RoundKey_2_we0, arrayctx_RoundKey_2_we1;
wire    [3 : 0]    arrayctx_RoundKey_2_address0, arrayctx_RoundKey_2_address1;
wire    [7 : 0]    arrayctx_RoundKey_2_din0, arrayctx_RoundKey_2_din1;
wire    [7 : 0]    arrayctx_RoundKey_2_dout0, arrayctx_RoundKey_2_dout1;
wire    arrayctx_RoundKey_2_ready;
wire    arrayctx_RoundKey_2_done;

`AESL_MEM_ctx_RoundKey_2 `AESL_MEM_INST_ctx_RoundKey_2(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayctx_RoundKey_2_ce0),
    .we0        (arrayctx_RoundKey_2_we0),
    .address0   (arrayctx_RoundKey_2_address0),
    .din0       (arrayctx_RoundKey_2_din0),
    .dout0      (arrayctx_RoundKey_2_dout0),
    .ce1        (arrayctx_RoundKey_2_ce1),
    .we1        (arrayctx_RoundKey_2_we1),
    .address1   (arrayctx_RoundKey_2_address1),
    .din1       (arrayctx_RoundKey_2_din1),
    .dout1      (arrayctx_RoundKey_2_dout1),
    .ready      (arrayctx_RoundKey_2_ready),
    .done    (arrayctx_RoundKey_2_done)
);

// Assignment between dut and arrayctx_RoundKey_2
assign arrayctx_RoundKey_2_address0 = ctx_RoundKey_2_address0;
assign arrayctx_RoundKey_2_ce0 = ctx_RoundKey_2_ce0;
assign ctx_RoundKey_2_q0 = arrayctx_RoundKey_2_dout0;
assign arrayctx_RoundKey_2_we0 = ctx_RoundKey_2_we0;
assign arrayctx_RoundKey_2_din0 = ctx_RoundKey_2_d0;
assign arrayctx_RoundKey_2_we1 = 0;
assign arrayctx_RoundKey_2_din1 = 0;
assign arrayctx_RoundKey_2_ready= ready;
assign arrayctx_RoundKey_2_done = interface_done;


//------------------------arrayctx_RoundKey_3 Instantiation--------------

// The input and output of arrayctx_RoundKey_3
wire    arrayctx_RoundKey_3_ce0, arrayctx_RoundKey_3_ce1;
wire    arrayctx_RoundKey_3_we0, arrayctx_RoundKey_3_we1;
wire    [3 : 0]    arrayctx_RoundKey_3_address0, arrayctx_RoundKey_3_address1;
wire    [7 : 0]    arrayctx_RoundKey_3_din0, arrayctx_RoundKey_3_din1;
wire    [7 : 0]    arrayctx_RoundKey_3_dout0, arrayctx_RoundKey_3_dout1;
wire    arrayctx_RoundKey_3_ready;
wire    arrayctx_RoundKey_3_done;

`AESL_MEM_ctx_RoundKey_3 `AESL_MEM_INST_ctx_RoundKey_3(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayctx_RoundKey_3_ce0),
    .we0        (arrayctx_RoundKey_3_we0),
    .address0   (arrayctx_RoundKey_3_address0),
    .din0       (arrayctx_RoundKey_3_din0),
    .dout0      (arrayctx_RoundKey_3_dout0),
    .ce1        (arrayctx_RoundKey_3_ce1),
    .we1        (arrayctx_RoundKey_3_we1),
    .address1   (arrayctx_RoundKey_3_address1),
    .din1       (arrayctx_RoundKey_3_din1),
    .dout1      (arrayctx_RoundKey_3_dout1),
    .ready      (arrayctx_RoundKey_3_ready),
    .done    (arrayctx_RoundKey_3_done)
);

// Assignment between dut and arrayctx_RoundKey_3
assign arrayctx_RoundKey_3_address0 = ctx_RoundKey_3_address0;
assign arrayctx_RoundKey_3_ce0 = ctx_RoundKey_3_ce0;
assign ctx_RoundKey_3_q0 = arrayctx_RoundKey_3_dout0;
assign arrayctx_RoundKey_3_we0 = ctx_RoundKey_3_we0;
assign arrayctx_RoundKey_3_din0 = ctx_RoundKey_3_d0;
assign arrayctx_RoundKey_3_we1 = 0;
assign arrayctx_RoundKey_3_din1 = 0;
assign arrayctx_RoundKey_3_ready= ready;
assign arrayctx_RoundKey_3_done = interface_done;


//------------------------arrayctx_RoundKey_4 Instantiation--------------

// The input and output of arrayctx_RoundKey_4
wire    arrayctx_RoundKey_4_ce0, arrayctx_RoundKey_4_ce1;
wire    arrayctx_RoundKey_4_we0, arrayctx_RoundKey_4_we1;
wire    [3 : 0]    arrayctx_RoundKey_4_address0, arrayctx_RoundKey_4_address1;
wire    [7 : 0]    arrayctx_RoundKey_4_din0, arrayctx_RoundKey_4_din1;
wire    [7 : 0]    arrayctx_RoundKey_4_dout0, arrayctx_RoundKey_4_dout1;
wire    arrayctx_RoundKey_4_ready;
wire    arrayctx_RoundKey_4_done;

`AESL_MEM_ctx_RoundKey_4 `AESL_MEM_INST_ctx_RoundKey_4(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayctx_RoundKey_4_ce0),
    .we0        (arrayctx_RoundKey_4_we0),
    .address0   (arrayctx_RoundKey_4_address0),
    .din0       (arrayctx_RoundKey_4_din0),
    .dout0      (arrayctx_RoundKey_4_dout0),
    .ce1        (arrayctx_RoundKey_4_ce1),
    .we1        (arrayctx_RoundKey_4_we1),
    .address1   (arrayctx_RoundKey_4_address1),
    .din1       (arrayctx_RoundKey_4_din1),
    .dout1      (arrayctx_RoundKey_4_dout1),
    .ready      (arrayctx_RoundKey_4_ready),
    .done    (arrayctx_RoundKey_4_done)
);

// Assignment between dut and arrayctx_RoundKey_4
assign arrayctx_RoundKey_4_address0 = ctx_RoundKey_4_address0;
assign arrayctx_RoundKey_4_ce0 = ctx_RoundKey_4_ce0;
assign ctx_RoundKey_4_q0 = arrayctx_RoundKey_4_dout0;
assign arrayctx_RoundKey_4_we0 = ctx_RoundKey_4_we0;
assign arrayctx_RoundKey_4_din0 = ctx_RoundKey_4_d0;
assign arrayctx_RoundKey_4_we1 = 0;
assign arrayctx_RoundKey_4_din1 = 0;
assign arrayctx_RoundKey_4_ready= ready;
assign arrayctx_RoundKey_4_done = interface_done;


//------------------------arrayctx_RoundKey_5 Instantiation--------------

// The input and output of arrayctx_RoundKey_5
wire    arrayctx_RoundKey_5_ce0, arrayctx_RoundKey_5_ce1;
wire    arrayctx_RoundKey_5_we0, arrayctx_RoundKey_5_we1;
wire    [3 : 0]    arrayctx_RoundKey_5_address0, arrayctx_RoundKey_5_address1;
wire    [7 : 0]    arrayctx_RoundKey_5_din0, arrayctx_RoundKey_5_din1;
wire    [7 : 0]    arrayctx_RoundKey_5_dout0, arrayctx_RoundKey_5_dout1;
wire    arrayctx_RoundKey_5_ready;
wire    arrayctx_RoundKey_5_done;

`AESL_MEM_ctx_RoundKey_5 `AESL_MEM_INST_ctx_RoundKey_5(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayctx_RoundKey_5_ce0),
    .we0        (arrayctx_RoundKey_5_we0),
    .address0   (arrayctx_RoundKey_5_address0),
    .din0       (arrayctx_RoundKey_5_din0),
    .dout0      (arrayctx_RoundKey_5_dout0),
    .ce1        (arrayctx_RoundKey_5_ce1),
    .we1        (arrayctx_RoundKey_5_we1),
    .address1   (arrayctx_RoundKey_5_address1),
    .din1       (arrayctx_RoundKey_5_din1),
    .dout1      (arrayctx_RoundKey_5_dout1),
    .ready      (arrayctx_RoundKey_5_ready),
    .done    (arrayctx_RoundKey_5_done)
);

// Assignment between dut and arrayctx_RoundKey_5
assign arrayctx_RoundKey_5_address0 = ctx_RoundKey_5_address0;
assign arrayctx_RoundKey_5_ce0 = ctx_RoundKey_5_ce0;
assign ctx_RoundKey_5_q0 = arrayctx_RoundKey_5_dout0;
assign arrayctx_RoundKey_5_we0 = ctx_RoundKey_5_we0;
assign arrayctx_RoundKey_5_din0 = ctx_RoundKey_5_d0;
assign arrayctx_RoundKey_5_we1 = 0;
assign arrayctx_RoundKey_5_din1 = 0;
assign arrayctx_RoundKey_5_ready= ready;
assign arrayctx_RoundKey_5_done = interface_done;


//------------------------arrayctx_RoundKey_6 Instantiation--------------

// The input and output of arrayctx_RoundKey_6
wire    arrayctx_RoundKey_6_ce0, arrayctx_RoundKey_6_ce1;
wire    arrayctx_RoundKey_6_we0, arrayctx_RoundKey_6_we1;
wire    [3 : 0]    arrayctx_RoundKey_6_address0, arrayctx_RoundKey_6_address1;
wire    [7 : 0]    arrayctx_RoundKey_6_din0, arrayctx_RoundKey_6_din1;
wire    [7 : 0]    arrayctx_RoundKey_6_dout0, arrayctx_RoundKey_6_dout1;
wire    arrayctx_RoundKey_6_ready;
wire    arrayctx_RoundKey_6_done;

`AESL_MEM_ctx_RoundKey_6 `AESL_MEM_INST_ctx_RoundKey_6(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayctx_RoundKey_6_ce0),
    .we0        (arrayctx_RoundKey_6_we0),
    .address0   (arrayctx_RoundKey_6_address0),
    .din0       (arrayctx_RoundKey_6_din0),
    .dout0      (arrayctx_RoundKey_6_dout0),
    .ce1        (arrayctx_RoundKey_6_ce1),
    .we1        (arrayctx_RoundKey_6_we1),
    .address1   (arrayctx_RoundKey_6_address1),
    .din1       (arrayctx_RoundKey_6_din1),
    .dout1      (arrayctx_RoundKey_6_dout1),
    .ready      (arrayctx_RoundKey_6_ready),
    .done    (arrayctx_RoundKey_6_done)
);

// Assignment between dut and arrayctx_RoundKey_6
assign arrayctx_RoundKey_6_address0 = ctx_RoundKey_6_address0;
assign arrayctx_RoundKey_6_ce0 = ctx_RoundKey_6_ce0;
assign ctx_RoundKey_6_q0 = arrayctx_RoundKey_6_dout0;
assign arrayctx_RoundKey_6_we0 = ctx_RoundKey_6_we0;
assign arrayctx_RoundKey_6_din0 = ctx_RoundKey_6_d0;
assign arrayctx_RoundKey_6_we1 = 0;
assign arrayctx_RoundKey_6_din1 = 0;
assign arrayctx_RoundKey_6_ready= ready;
assign arrayctx_RoundKey_6_done = interface_done;


//------------------------arrayctx_RoundKey_7 Instantiation--------------

// The input and output of arrayctx_RoundKey_7
wire    arrayctx_RoundKey_7_ce0, arrayctx_RoundKey_7_ce1;
wire    arrayctx_RoundKey_7_we0, arrayctx_RoundKey_7_we1;
wire    [3 : 0]    arrayctx_RoundKey_7_address0, arrayctx_RoundKey_7_address1;
wire    [7 : 0]    arrayctx_RoundKey_7_din0, arrayctx_RoundKey_7_din1;
wire    [7 : 0]    arrayctx_RoundKey_7_dout0, arrayctx_RoundKey_7_dout1;
wire    arrayctx_RoundKey_7_ready;
wire    arrayctx_RoundKey_7_done;

`AESL_MEM_ctx_RoundKey_7 `AESL_MEM_INST_ctx_RoundKey_7(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayctx_RoundKey_7_ce0),
    .we0        (arrayctx_RoundKey_7_we0),
    .address0   (arrayctx_RoundKey_7_address0),
    .din0       (arrayctx_RoundKey_7_din0),
    .dout0      (arrayctx_RoundKey_7_dout0),
    .ce1        (arrayctx_RoundKey_7_ce1),
    .we1        (arrayctx_RoundKey_7_we1),
    .address1   (arrayctx_RoundKey_7_address1),
    .din1       (arrayctx_RoundKey_7_din1),
    .dout1      (arrayctx_RoundKey_7_dout1),
    .ready      (arrayctx_RoundKey_7_ready),
    .done    (arrayctx_RoundKey_7_done)
);

// Assignment between dut and arrayctx_RoundKey_7
assign arrayctx_RoundKey_7_address0 = ctx_RoundKey_7_address0;
assign arrayctx_RoundKey_7_ce0 = ctx_RoundKey_7_ce0;
assign ctx_RoundKey_7_q0 = arrayctx_RoundKey_7_dout0;
assign arrayctx_RoundKey_7_we0 = ctx_RoundKey_7_we0;
assign arrayctx_RoundKey_7_din0 = ctx_RoundKey_7_d0;
assign arrayctx_RoundKey_7_we1 = 0;
assign arrayctx_RoundKey_7_din1 = 0;
assign arrayctx_RoundKey_7_ready= ready;
assign arrayctx_RoundKey_7_done = interface_done;


//------------------------arrayctx_RoundKey_8 Instantiation--------------

// The input and output of arrayctx_RoundKey_8
wire    arrayctx_RoundKey_8_ce0, arrayctx_RoundKey_8_ce1;
wire    arrayctx_RoundKey_8_we0, arrayctx_RoundKey_8_we1;
wire    [3 : 0]    arrayctx_RoundKey_8_address0, arrayctx_RoundKey_8_address1;
wire    [7 : 0]    arrayctx_RoundKey_8_din0, arrayctx_RoundKey_8_din1;
wire    [7 : 0]    arrayctx_RoundKey_8_dout0, arrayctx_RoundKey_8_dout1;
wire    arrayctx_RoundKey_8_ready;
wire    arrayctx_RoundKey_8_done;

`AESL_MEM_ctx_RoundKey_8 `AESL_MEM_INST_ctx_RoundKey_8(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayctx_RoundKey_8_ce0),
    .we0        (arrayctx_RoundKey_8_we0),
    .address0   (arrayctx_RoundKey_8_address0),
    .din0       (arrayctx_RoundKey_8_din0),
    .dout0      (arrayctx_RoundKey_8_dout0),
    .ce1        (arrayctx_RoundKey_8_ce1),
    .we1        (arrayctx_RoundKey_8_we1),
    .address1   (arrayctx_RoundKey_8_address1),
    .din1       (arrayctx_RoundKey_8_din1),
    .dout1      (arrayctx_RoundKey_8_dout1),
    .ready      (arrayctx_RoundKey_8_ready),
    .done    (arrayctx_RoundKey_8_done)
);

// Assignment between dut and arrayctx_RoundKey_8
assign arrayctx_RoundKey_8_address0 = ctx_RoundKey_8_address0;
assign arrayctx_RoundKey_8_ce0 = ctx_RoundKey_8_ce0;
assign ctx_RoundKey_8_q0 = arrayctx_RoundKey_8_dout0;
assign arrayctx_RoundKey_8_we0 = ctx_RoundKey_8_we0;
assign arrayctx_RoundKey_8_din0 = ctx_RoundKey_8_d0;
assign arrayctx_RoundKey_8_we1 = 0;
assign arrayctx_RoundKey_8_din1 = 0;
assign arrayctx_RoundKey_8_ready= ready;
assign arrayctx_RoundKey_8_done = interface_done;


//------------------------arrayctx_RoundKey_9 Instantiation--------------

// The input and output of arrayctx_RoundKey_9
wire    arrayctx_RoundKey_9_ce0, arrayctx_RoundKey_9_ce1;
wire    arrayctx_RoundKey_9_we0, arrayctx_RoundKey_9_we1;
wire    [3 : 0]    arrayctx_RoundKey_9_address0, arrayctx_RoundKey_9_address1;
wire    [7 : 0]    arrayctx_RoundKey_9_din0, arrayctx_RoundKey_9_din1;
wire    [7 : 0]    arrayctx_RoundKey_9_dout0, arrayctx_RoundKey_9_dout1;
wire    arrayctx_RoundKey_9_ready;
wire    arrayctx_RoundKey_9_done;

`AESL_MEM_ctx_RoundKey_9 `AESL_MEM_INST_ctx_RoundKey_9(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayctx_RoundKey_9_ce0),
    .we0        (arrayctx_RoundKey_9_we0),
    .address0   (arrayctx_RoundKey_9_address0),
    .din0       (arrayctx_RoundKey_9_din0),
    .dout0      (arrayctx_RoundKey_9_dout0),
    .ce1        (arrayctx_RoundKey_9_ce1),
    .we1        (arrayctx_RoundKey_9_we1),
    .address1   (arrayctx_RoundKey_9_address1),
    .din1       (arrayctx_RoundKey_9_din1),
    .dout1      (arrayctx_RoundKey_9_dout1),
    .ready      (arrayctx_RoundKey_9_ready),
    .done    (arrayctx_RoundKey_9_done)
);

// Assignment between dut and arrayctx_RoundKey_9
assign arrayctx_RoundKey_9_address0 = ctx_RoundKey_9_address0;
assign arrayctx_RoundKey_9_ce0 = ctx_RoundKey_9_ce0;
assign ctx_RoundKey_9_q0 = arrayctx_RoundKey_9_dout0;
assign arrayctx_RoundKey_9_we0 = ctx_RoundKey_9_we0;
assign arrayctx_RoundKey_9_din0 = ctx_RoundKey_9_d0;
assign arrayctx_RoundKey_9_we1 = 0;
assign arrayctx_RoundKey_9_din1 = 0;
assign arrayctx_RoundKey_9_ready= ready;
assign arrayctx_RoundKey_9_done = interface_done;


//------------------------arrayctx_RoundKey_10 Instantiation--------------

// The input and output of arrayctx_RoundKey_10
wire    arrayctx_RoundKey_10_ce0, arrayctx_RoundKey_10_ce1;
wire    arrayctx_RoundKey_10_we0, arrayctx_RoundKey_10_we1;
wire    [3 : 0]    arrayctx_RoundKey_10_address0, arrayctx_RoundKey_10_address1;
wire    [7 : 0]    arrayctx_RoundKey_10_din0, arrayctx_RoundKey_10_din1;
wire    [7 : 0]    arrayctx_RoundKey_10_dout0, arrayctx_RoundKey_10_dout1;
wire    arrayctx_RoundKey_10_ready;
wire    arrayctx_RoundKey_10_done;

`AESL_MEM_ctx_RoundKey_10 `AESL_MEM_INST_ctx_RoundKey_10(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayctx_RoundKey_10_ce0),
    .we0        (arrayctx_RoundKey_10_we0),
    .address0   (arrayctx_RoundKey_10_address0),
    .din0       (arrayctx_RoundKey_10_din0),
    .dout0      (arrayctx_RoundKey_10_dout0),
    .ce1        (arrayctx_RoundKey_10_ce1),
    .we1        (arrayctx_RoundKey_10_we1),
    .address1   (arrayctx_RoundKey_10_address1),
    .din1       (arrayctx_RoundKey_10_din1),
    .dout1      (arrayctx_RoundKey_10_dout1),
    .ready      (arrayctx_RoundKey_10_ready),
    .done    (arrayctx_RoundKey_10_done)
);

// Assignment between dut and arrayctx_RoundKey_10
assign arrayctx_RoundKey_10_address0 = ctx_RoundKey_10_address0;
assign arrayctx_RoundKey_10_ce0 = ctx_RoundKey_10_ce0;
assign ctx_RoundKey_10_q0 = arrayctx_RoundKey_10_dout0;
assign arrayctx_RoundKey_10_we0 = ctx_RoundKey_10_we0;
assign arrayctx_RoundKey_10_din0 = ctx_RoundKey_10_d0;
assign arrayctx_RoundKey_10_we1 = 0;
assign arrayctx_RoundKey_10_din1 = 0;
assign arrayctx_RoundKey_10_ready= ready;
assign arrayctx_RoundKey_10_done = interface_done;


//------------------------arrayctx_RoundKey_11 Instantiation--------------

// The input and output of arrayctx_RoundKey_11
wire    arrayctx_RoundKey_11_ce0, arrayctx_RoundKey_11_ce1;
wire    arrayctx_RoundKey_11_we0, arrayctx_RoundKey_11_we1;
wire    [3 : 0]    arrayctx_RoundKey_11_address0, arrayctx_RoundKey_11_address1;
wire    [7 : 0]    arrayctx_RoundKey_11_din0, arrayctx_RoundKey_11_din1;
wire    [7 : 0]    arrayctx_RoundKey_11_dout0, arrayctx_RoundKey_11_dout1;
wire    arrayctx_RoundKey_11_ready;
wire    arrayctx_RoundKey_11_done;

`AESL_MEM_ctx_RoundKey_11 `AESL_MEM_INST_ctx_RoundKey_11(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayctx_RoundKey_11_ce0),
    .we0        (arrayctx_RoundKey_11_we0),
    .address0   (arrayctx_RoundKey_11_address0),
    .din0       (arrayctx_RoundKey_11_din0),
    .dout0      (arrayctx_RoundKey_11_dout0),
    .ce1        (arrayctx_RoundKey_11_ce1),
    .we1        (arrayctx_RoundKey_11_we1),
    .address1   (arrayctx_RoundKey_11_address1),
    .din1       (arrayctx_RoundKey_11_din1),
    .dout1      (arrayctx_RoundKey_11_dout1),
    .ready      (arrayctx_RoundKey_11_ready),
    .done    (arrayctx_RoundKey_11_done)
);

// Assignment between dut and arrayctx_RoundKey_11
assign arrayctx_RoundKey_11_address0 = ctx_RoundKey_11_address0;
assign arrayctx_RoundKey_11_ce0 = ctx_RoundKey_11_ce0;
assign ctx_RoundKey_11_q0 = arrayctx_RoundKey_11_dout0;
assign arrayctx_RoundKey_11_we0 = ctx_RoundKey_11_we0;
assign arrayctx_RoundKey_11_din0 = ctx_RoundKey_11_d0;
assign arrayctx_RoundKey_11_we1 = 0;
assign arrayctx_RoundKey_11_din1 = 0;
assign arrayctx_RoundKey_11_ready= ready;
assign arrayctx_RoundKey_11_done = interface_done;


//------------------------arrayctx_RoundKey_12 Instantiation--------------

// The input and output of arrayctx_RoundKey_12
wire    arrayctx_RoundKey_12_ce0, arrayctx_RoundKey_12_ce1;
wire    arrayctx_RoundKey_12_we0, arrayctx_RoundKey_12_we1;
wire    [3 : 0]    arrayctx_RoundKey_12_address0, arrayctx_RoundKey_12_address1;
wire    [7 : 0]    arrayctx_RoundKey_12_din0, arrayctx_RoundKey_12_din1;
wire    [7 : 0]    arrayctx_RoundKey_12_dout0, arrayctx_RoundKey_12_dout1;
wire    arrayctx_RoundKey_12_ready;
wire    arrayctx_RoundKey_12_done;

`AESL_MEM_ctx_RoundKey_12 `AESL_MEM_INST_ctx_RoundKey_12(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayctx_RoundKey_12_ce0),
    .we0        (arrayctx_RoundKey_12_we0),
    .address0   (arrayctx_RoundKey_12_address0),
    .din0       (arrayctx_RoundKey_12_din0),
    .dout0      (arrayctx_RoundKey_12_dout0),
    .ce1        (arrayctx_RoundKey_12_ce1),
    .we1        (arrayctx_RoundKey_12_we1),
    .address1   (arrayctx_RoundKey_12_address1),
    .din1       (arrayctx_RoundKey_12_din1),
    .dout1      (arrayctx_RoundKey_12_dout1),
    .ready      (arrayctx_RoundKey_12_ready),
    .done    (arrayctx_RoundKey_12_done)
);

// Assignment between dut and arrayctx_RoundKey_12
assign arrayctx_RoundKey_12_address0 = ctx_RoundKey_12_address0;
assign arrayctx_RoundKey_12_ce0 = ctx_RoundKey_12_ce0;
assign ctx_RoundKey_12_q0 = arrayctx_RoundKey_12_dout0;
assign arrayctx_RoundKey_12_we0 = ctx_RoundKey_12_we0;
assign arrayctx_RoundKey_12_din0 = ctx_RoundKey_12_d0;
assign arrayctx_RoundKey_12_we1 = 0;
assign arrayctx_RoundKey_12_din1 = 0;
assign arrayctx_RoundKey_12_ready= ready;
assign arrayctx_RoundKey_12_done = interface_done;


//------------------------arrayctx_RoundKey_13 Instantiation--------------

// The input and output of arrayctx_RoundKey_13
wire    arrayctx_RoundKey_13_ce0, arrayctx_RoundKey_13_ce1;
wire    arrayctx_RoundKey_13_we0, arrayctx_RoundKey_13_we1;
wire    [3 : 0]    arrayctx_RoundKey_13_address0, arrayctx_RoundKey_13_address1;
wire    [7 : 0]    arrayctx_RoundKey_13_din0, arrayctx_RoundKey_13_din1;
wire    [7 : 0]    arrayctx_RoundKey_13_dout0, arrayctx_RoundKey_13_dout1;
wire    arrayctx_RoundKey_13_ready;
wire    arrayctx_RoundKey_13_done;

`AESL_MEM_ctx_RoundKey_13 `AESL_MEM_INST_ctx_RoundKey_13(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayctx_RoundKey_13_ce0),
    .we0        (arrayctx_RoundKey_13_we0),
    .address0   (arrayctx_RoundKey_13_address0),
    .din0       (arrayctx_RoundKey_13_din0),
    .dout0      (arrayctx_RoundKey_13_dout0),
    .ce1        (arrayctx_RoundKey_13_ce1),
    .we1        (arrayctx_RoundKey_13_we1),
    .address1   (arrayctx_RoundKey_13_address1),
    .din1       (arrayctx_RoundKey_13_din1),
    .dout1      (arrayctx_RoundKey_13_dout1),
    .ready      (arrayctx_RoundKey_13_ready),
    .done    (arrayctx_RoundKey_13_done)
);

// Assignment between dut and arrayctx_RoundKey_13
assign arrayctx_RoundKey_13_address0 = ctx_RoundKey_13_address0;
assign arrayctx_RoundKey_13_ce0 = ctx_RoundKey_13_ce0;
assign ctx_RoundKey_13_q0 = arrayctx_RoundKey_13_dout0;
assign arrayctx_RoundKey_13_we0 = ctx_RoundKey_13_we0;
assign arrayctx_RoundKey_13_din0 = ctx_RoundKey_13_d0;
assign arrayctx_RoundKey_13_we1 = 0;
assign arrayctx_RoundKey_13_din1 = 0;
assign arrayctx_RoundKey_13_ready= ready;
assign arrayctx_RoundKey_13_done = interface_done;


//------------------------arrayctx_RoundKey_14 Instantiation--------------

// The input and output of arrayctx_RoundKey_14
wire    arrayctx_RoundKey_14_ce0, arrayctx_RoundKey_14_ce1;
wire    arrayctx_RoundKey_14_we0, arrayctx_RoundKey_14_we1;
wire    [3 : 0]    arrayctx_RoundKey_14_address0, arrayctx_RoundKey_14_address1;
wire    [7 : 0]    arrayctx_RoundKey_14_din0, arrayctx_RoundKey_14_din1;
wire    [7 : 0]    arrayctx_RoundKey_14_dout0, arrayctx_RoundKey_14_dout1;
wire    arrayctx_RoundKey_14_ready;
wire    arrayctx_RoundKey_14_done;

`AESL_MEM_ctx_RoundKey_14 `AESL_MEM_INST_ctx_RoundKey_14(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayctx_RoundKey_14_ce0),
    .we0        (arrayctx_RoundKey_14_we0),
    .address0   (arrayctx_RoundKey_14_address0),
    .din0       (arrayctx_RoundKey_14_din0),
    .dout0      (arrayctx_RoundKey_14_dout0),
    .ce1        (arrayctx_RoundKey_14_ce1),
    .we1        (arrayctx_RoundKey_14_we1),
    .address1   (arrayctx_RoundKey_14_address1),
    .din1       (arrayctx_RoundKey_14_din1),
    .dout1      (arrayctx_RoundKey_14_dout1),
    .ready      (arrayctx_RoundKey_14_ready),
    .done    (arrayctx_RoundKey_14_done)
);

// Assignment between dut and arrayctx_RoundKey_14
assign arrayctx_RoundKey_14_address0 = ctx_RoundKey_14_address0;
assign arrayctx_RoundKey_14_ce0 = ctx_RoundKey_14_ce0;
assign ctx_RoundKey_14_q0 = arrayctx_RoundKey_14_dout0;
assign arrayctx_RoundKey_14_we0 = ctx_RoundKey_14_we0;
assign arrayctx_RoundKey_14_din0 = ctx_RoundKey_14_d0;
assign arrayctx_RoundKey_14_we1 = 0;
assign arrayctx_RoundKey_14_din1 = 0;
assign arrayctx_RoundKey_14_ready= ready;
assign arrayctx_RoundKey_14_done = interface_done;


//------------------------arrayctx_RoundKey_15 Instantiation--------------

// The input and output of arrayctx_RoundKey_15
wire    arrayctx_RoundKey_15_ce0, arrayctx_RoundKey_15_ce1;
wire    arrayctx_RoundKey_15_we0, arrayctx_RoundKey_15_we1;
wire    [3 : 0]    arrayctx_RoundKey_15_address0, arrayctx_RoundKey_15_address1;
wire    [7 : 0]    arrayctx_RoundKey_15_din0, arrayctx_RoundKey_15_din1;
wire    [7 : 0]    arrayctx_RoundKey_15_dout0, arrayctx_RoundKey_15_dout1;
wire    arrayctx_RoundKey_15_ready;
wire    arrayctx_RoundKey_15_done;

`AESL_MEM_ctx_RoundKey_15 `AESL_MEM_INST_ctx_RoundKey_15(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayctx_RoundKey_15_ce0),
    .we0        (arrayctx_RoundKey_15_we0),
    .address0   (arrayctx_RoundKey_15_address0),
    .din0       (arrayctx_RoundKey_15_din0),
    .dout0      (arrayctx_RoundKey_15_dout0),
    .ce1        (arrayctx_RoundKey_15_ce1),
    .we1        (arrayctx_RoundKey_15_we1),
    .address1   (arrayctx_RoundKey_15_address1),
    .din1       (arrayctx_RoundKey_15_din1),
    .dout1      (arrayctx_RoundKey_15_dout1),
    .ready      (arrayctx_RoundKey_15_ready),
    .done    (arrayctx_RoundKey_15_done)
);

// Assignment between dut and arrayctx_RoundKey_15
assign arrayctx_RoundKey_15_address0 = ctx_RoundKey_15_address0;
assign arrayctx_RoundKey_15_ce0 = ctx_RoundKey_15_ce0;
assign ctx_RoundKey_15_q0 = arrayctx_RoundKey_15_dout0;
assign arrayctx_RoundKey_15_we0 = ctx_RoundKey_15_we0;
assign arrayctx_RoundKey_15_din0 = ctx_RoundKey_15_d0;
assign arrayctx_RoundKey_15_we1 = 0;
assign arrayctx_RoundKey_15_din1 = 0;
assign arrayctx_RoundKey_15_ready= ready;
assign arrayctx_RoundKey_15_done = interface_done;


//------------------------arrayctx_Iv Instantiation--------------

// The input and output of arrayctx_Iv
wire    arrayctx_Iv_ce0, arrayctx_Iv_ce1;
wire    arrayctx_Iv_we0, arrayctx_Iv_we1;
wire    [3 : 0]    arrayctx_Iv_address0, arrayctx_Iv_address1;
wire    [7 : 0]    arrayctx_Iv_din0, arrayctx_Iv_din1;
wire    [7 : 0]    arrayctx_Iv_dout0, arrayctx_Iv_dout1;
wire    arrayctx_Iv_ready;
wire    arrayctx_Iv_done;

// Assignment between dut and arrayctx_Iv
assign arrayctx_Iv_done = 0;


// The signal of port key_0
reg [7: 0] AESL_REG_key_0 = 0;
assign key_0 = AESL_REG_key_0;
initial begin : read_file_process_key_0
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [215  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_key_0,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_key_0);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_key_0);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port key_1
reg [7: 0] AESL_REG_key_1 = 0;
assign key_1 = AESL_REG_key_1;
initial begin : read_file_process_key_1
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [215  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_key_1,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_key_1);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_key_1);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port key_2
reg [7: 0] AESL_REG_key_2 = 0;
assign key_2 = AESL_REG_key_2;
initial begin : read_file_process_key_2
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [215  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_key_2,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_key_2);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_key_2);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port key_3
reg [7: 0] AESL_REG_key_3 = 0;
assign key_3 = AESL_REG_key_3;
initial begin : read_file_process_key_3
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [215  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_key_3,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_key_3);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_key_3);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port key_4
reg [7: 0] AESL_REG_key_4 = 0;
assign key_4 = AESL_REG_key_4;
initial begin : read_file_process_key_4
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [215  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_key_4,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_key_4);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_key_4);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port key_5
reg [7: 0] AESL_REG_key_5 = 0;
assign key_5 = AESL_REG_key_5;
initial begin : read_file_process_key_5
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [215  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_key_5,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_key_5);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_key_5);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port key_6
reg [7: 0] AESL_REG_key_6 = 0;
assign key_6 = AESL_REG_key_6;
initial begin : read_file_process_key_6
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [215  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_key_6,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_key_6);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_key_6);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port key_7
reg [7: 0] AESL_REG_key_7 = 0;
assign key_7 = AESL_REG_key_7;
initial begin : read_file_process_key_7
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [215  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_key_7,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_key_7);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_key_7);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port key_8
reg [7: 0] AESL_REG_key_8 = 0;
assign key_8 = AESL_REG_key_8;
initial begin : read_file_process_key_8
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [215  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_key_8,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_key_8);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_key_8);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port key_9
reg [7: 0] AESL_REG_key_9 = 0;
assign key_9 = AESL_REG_key_9;
initial begin : read_file_process_key_9
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [215  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_key_9,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_key_9);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_key_9);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port key_10
reg [7: 0] AESL_REG_key_10 = 0;
assign key_10 = AESL_REG_key_10;
initial begin : read_file_process_key_10
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [215  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_key_10,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_key_10);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_key_10);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port key_11
reg [7: 0] AESL_REG_key_11 = 0;
assign key_11 = AESL_REG_key_11;
initial begin : read_file_process_key_11
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [215  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_key_11,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_key_11);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_key_11);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port key_12
reg [7: 0] AESL_REG_key_12 = 0;
assign key_12 = AESL_REG_key_12;
initial begin : read_file_process_key_12
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [215  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_key_12,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_key_12);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_key_12);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port key_13
reg [7: 0] AESL_REG_key_13 = 0;
assign key_13 = AESL_REG_key_13;
initial begin : read_file_process_key_13
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [215  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_key_13,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_key_13);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_key_13);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port key_14
reg [7: 0] AESL_REG_key_14 = 0;
assign key_14 = AESL_REG_key_14;
initial begin : read_file_process_key_14
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [215  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_key_14,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_key_14);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_key_14);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port key_15
reg [7: 0] AESL_REG_key_15 = 0;
assign key_15 = AESL_REG_key_15;
initial begin : read_file_process_key_15
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [215  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_key_15,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_key_15);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_key_15);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port in_0_0_i
reg [7: 0] AESL_REG_in_0_0_i = 0;
assign in_0_0_i = AESL_REG_in_0_0_i;
always @(posedge AESL_clock)
begin
    if(in_0_0_o_ap_vld === 1)
        AESL_REG_in_0_0_i <= in_0_0_o;
end

initial begin : read_file_process_in_0_0
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [215  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_0_0,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_0_0);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_0_0_i);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end

reg AESL_REG_in_0_0_o_ap_vld = 0;
// The signal of port in_0_0_o
reg [7: 0] AESL_REG_in_0_0_o = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_in_0_0_o = 0; 
    else if(in_0_0_o_ap_vld) begin
        AESL_REG_in_0_0_o <= in_0_0_o;
        AESL_REG_in_0_0_o_ap_vld <= 1;
    end
end 

initial begin : write_file_process_in_0_0
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer in_0_0_count;
    reg [215:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_in_0_0_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_in_0_0_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_in_0_0_o_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_in_0_0_o);
        AESL_REG_in_0_0_o_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


// The signal of port in_0_1_i
reg [7: 0] AESL_REG_in_0_1_i = 0;
assign in_0_1_i = AESL_REG_in_0_1_i;
always @(posedge AESL_clock)
begin
    if(in_0_1_o_ap_vld === 1)
        AESL_REG_in_0_1_i <= in_0_1_o;
end

initial begin : read_file_process_in_0_1
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [215  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_0_1,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_0_1);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_0_1_i);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end

reg AESL_REG_in_0_1_o_ap_vld = 0;
// The signal of port in_0_1_o
reg [7: 0] AESL_REG_in_0_1_o = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_in_0_1_o = 0; 
    else if(in_0_1_o_ap_vld) begin
        AESL_REG_in_0_1_o <= in_0_1_o;
        AESL_REG_in_0_1_o_ap_vld <= 1;
    end
end 

initial begin : write_file_process_in_0_1
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer in_0_1_count;
    reg [215:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_in_0_1_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_in_0_1_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_in_0_1_o_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_in_0_1_o);
        AESL_REG_in_0_1_o_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


// The signal of port in_0_2_i
reg [7: 0] AESL_REG_in_0_2_i = 0;
assign in_0_2_i = AESL_REG_in_0_2_i;
always @(posedge AESL_clock)
begin
    if(in_0_2_o_ap_vld === 1)
        AESL_REG_in_0_2_i <= in_0_2_o;
end

initial begin : read_file_process_in_0_2
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [215  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_0_2,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_0_2);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_0_2_i);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end

reg AESL_REG_in_0_2_o_ap_vld = 0;
// The signal of port in_0_2_o
reg [7: 0] AESL_REG_in_0_2_o = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_in_0_2_o = 0; 
    else if(in_0_2_o_ap_vld) begin
        AESL_REG_in_0_2_o <= in_0_2_o;
        AESL_REG_in_0_2_o_ap_vld <= 1;
    end
end 

initial begin : write_file_process_in_0_2
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer in_0_2_count;
    reg [215:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_in_0_2_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_in_0_2_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_in_0_2_o_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_in_0_2_o);
        AESL_REG_in_0_2_o_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


// The signal of port in_0_3_i
reg [7: 0] AESL_REG_in_0_3_i = 0;
assign in_0_3_i = AESL_REG_in_0_3_i;
always @(posedge AESL_clock)
begin
    if(in_0_3_o_ap_vld === 1)
        AESL_REG_in_0_3_i <= in_0_3_o;
end

initial begin : read_file_process_in_0_3
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [215  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_0_3,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_0_3);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_0_3_i);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end

reg AESL_REG_in_0_3_o_ap_vld = 0;
// The signal of port in_0_3_o
reg [7: 0] AESL_REG_in_0_3_o = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_in_0_3_o = 0; 
    else if(in_0_3_o_ap_vld) begin
        AESL_REG_in_0_3_o <= in_0_3_o;
        AESL_REG_in_0_3_o_ap_vld <= 1;
    end
end 

initial begin : write_file_process_in_0_3
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer in_0_3_count;
    reg [215:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_in_0_3_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_in_0_3_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_in_0_3_o_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_in_0_3_o);
        AESL_REG_in_0_3_o_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


// The signal of port in_1_0_i
reg [7: 0] AESL_REG_in_1_0_i = 0;
assign in_1_0_i = AESL_REG_in_1_0_i;
always @(posedge AESL_clock)
begin
    if(in_1_0_o_ap_vld === 1)
        AESL_REG_in_1_0_i <= in_1_0_o;
end

initial begin : read_file_process_in_1_0
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [215  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_1_0,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_1_0);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_1_0_i);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end

reg AESL_REG_in_1_0_o_ap_vld = 0;
// The signal of port in_1_0_o
reg [7: 0] AESL_REG_in_1_0_o = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_in_1_0_o = 0; 
    else if(in_1_0_o_ap_vld) begin
        AESL_REG_in_1_0_o <= in_1_0_o;
        AESL_REG_in_1_0_o_ap_vld <= 1;
    end
end 

initial begin : write_file_process_in_1_0
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer in_1_0_count;
    reg [215:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_in_1_0_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_in_1_0_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_in_1_0_o_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_in_1_0_o);
        AESL_REG_in_1_0_o_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


// The signal of port in_1_1_i
reg [7: 0] AESL_REG_in_1_1_i = 0;
assign in_1_1_i = AESL_REG_in_1_1_i;
always @(posedge AESL_clock)
begin
    if(in_1_1_o_ap_vld === 1)
        AESL_REG_in_1_1_i <= in_1_1_o;
end

initial begin : read_file_process_in_1_1
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [215  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_1_1,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_1_1);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_1_1_i);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end

reg AESL_REG_in_1_1_o_ap_vld = 0;
// The signal of port in_1_1_o
reg [7: 0] AESL_REG_in_1_1_o = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_in_1_1_o = 0; 
    else if(in_1_1_o_ap_vld) begin
        AESL_REG_in_1_1_o <= in_1_1_o;
        AESL_REG_in_1_1_o_ap_vld <= 1;
    end
end 

initial begin : write_file_process_in_1_1
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer in_1_1_count;
    reg [215:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_in_1_1_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_in_1_1_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_in_1_1_o_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_in_1_1_o);
        AESL_REG_in_1_1_o_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


// The signal of port in_1_2_i
reg [7: 0] AESL_REG_in_1_2_i = 0;
assign in_1_2_i = AESL_REG_in_1_2_i;
always @(posedge AESL_clock)
begin
    if(in_1_2_o_ap_vld === 1)
        AESL_REG_in_1_2_i <= in_1_2_o;
end

initial begin : read_file_process_in_1_2
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [215  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_1_2,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_1_2);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_1_2_i);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end

reg AESL_REG_in_1_2_o_ap_vld = 0;
// The signal of port in_1_2_o
reg [7: 0] AESL_REG_in_1_2_o = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_in_1_2_o = 0; 
    else if(in_1_2_o_ap_vld) begin
        AESL_REG_in_1_2_o <= in_1_2_o;
        AESL_REG_in_1_2_o_ap_vld <= 1;
    end
end 

initial begin : write_file_process_in_1_2
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer in_1_2_count;
    reg [215:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_in_1_2_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_in_1_2_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_in_1_2_o_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_in_1_2_o);
        AESL_REG_in_1_2_o_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


// The signal of port in_1_3_i
reg [7: 0] AESL_REG_in_1_3_i = 0;
assign in_1_3_i = AESL_REG_in_1_3_i;
always @(posedge AESL_clock)
begin
    if(in_1_3_o_ap_vld === 1)
        AESL_REG_in_1_3_i <= in_1_3_o;
end

initial begin : read_file_process_in_1_3
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [215  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_1_3,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_1_3);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_1_3_i);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end

reg AESL_REG_in_1_3_o_ap_vld = 0;
// The signal of port in_1_3_o
reg [7: 0] AESL_REG_in_1_3_o = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_in_1_3_o = 0; 
    else if(in_1_3_o_ap_vld) begin
        AESL_REG_in_1_3_o <= in_1_3_o;
        AESL_REG_in_1_3_o_ap_vld <= 1;
    end
end 

initial begin : write_file_process_in_1_3
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer in_1_3_count;
    reg [215:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_in_1_3_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_in_1_3_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_in_1_3_o_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_in_1_3_o);
        AESL_REG_in_1_3_o_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


// The signal of port in_2_0_i
reg [7: 0] AESL_REG_in_2_0_i = 0;
assign in_2_0_i = AESL_REG_in_2_0_i;
always @(posedge AESL_clock)
begin
    if(in_2_0_o_ap_vld === 1)
        AESL_REG_in_2_0_i <= in_2_0_o;
end

initial begin : read_file_process_in_2_0
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [215  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_2_0,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_2_0);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_2_0_i);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end

reg AESL_REG_in_2_0_o_ap_vld = 0;
// The signal of port in_2_0_o
reg [7: 0] AESL_REG_in_2_0_o = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_in_2_0_o = 0; 
    else if(in_2_0_o_ap_vld) begin
        AESL_REG_in_2_0_o <= in_2_0_o;
        AESL_REG_in_2_0_o_ap_vld <= 1;
    end
end 

initial begin : write_file_process_in_2_0
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer in_2_0_count;
    reg [215:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_in_2_0_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_in_2_0_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_in_2_0_o_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_in_2_0_o);
        AESL_REG_in_2_0_o_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


// The signal of port in_2_1_i
reg [7: 0] AESL_REG_in_2_1_i = 0;
assign in_2_1_i = AESL_REG_in_2_1_i;
always @(posedge AESL_clock)
begin
    if(in_2_1_o_ap_vld === 1)
        AESL_REG_in_2_1_i <= in_2_1_o;
end

initial begin : read_file_process_in_2_1
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [215  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_2_1,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_2_1);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_2_1_i);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end

reg AESL_REG_in_2_1_o_ap_vld = 0;
// The signal of port in_2_1_o
reg [7: 0] AESL_REG_in_2_1_o = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_in_2_1_o = 0; 
    else if(in_2_1_o_ap_vld) begin
        AESL_REG_in_2_1_o <= in_2_1_o;
        AESL_REG_in_2_1_o_ap_vld <= 1;
    end
end 

initial begin : write_file_process_in_2_1
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer in_2_1_count;
    reg [215:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_in_2_1_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_in_2_1_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_in_2_1_o_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_in_2_1_o);
        AESL_REG_in_2_1_o_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


// The signal of port in_2_2_i
reg [7: 0] AESL_REG_in_2_2_i = 0;
assign in_2_2_i = AESL_REG_in_2_2_i;
always @(posedge AESL_clock)
begin
    if(in_2_2_o_ap_vld === 1)
        AESL_REG_in_2_2_i <= in_2_2_o;
end

initial begin : read_file_process_in_2_2
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [215  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_2_2,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_2_2);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_2_2_i);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end

reg AESL_REG_in_2_2_o_ap_vld = 0;
// The signal of port in_2_2_o
reg [7: 0] AESL_REG_in_2_2_o = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_in_2_2_o = 0; 
    else if(in_2_2_o_ap_vld) begin
        AESL_REG_in_2_2_o <= in_2_2_o;
        AESL_REG_in_2_2_o_ap_vld <= 1;
    end
end 

initial begin : write_file_process_in_2_2
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer in_2_2_count;
    reg [215:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_in_2_2_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_in_2_2_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_in_2_2_o_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_in_2_2_o);
        AESL_REG_in_2_2_o_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


// The signal of port in_2_3_i
reg [7: 0] AESL_REG_in_2_3_i = 0;
assign in_2_3_i = AESL_REG_in_2_3_i;
always @(posedge AESL_clock)
begin
    if(in_2_3_o_ap_vld === 1)
        AESL_REG_in_2_3_i <= in_2_3_o;
end

initial begin : read_file_process_in_2_3
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [215  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_2_3,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_2_3);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_2_3_i);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end

reg AESL_REG_in_2_3_o_ap_vld = 0;
// The signal of port in_2_3_o
reg [7: 0] AESL_REG_in_2_3_o = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_in_2_3_o = 0; 
    else if(in_2_3_o_ap_vld) begin
        AESL_REG_in_2_3_o <= in_2_3_o;
        AESL_REG_in_2_3_o_ap_vld <= 1;
    end
end 

initial begin : write_file_process_in_2_3
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer in_2_3_count;
    reg [215:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_in_2_3_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_in_2_3_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_in_2_3_o_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_in_2_3_o);
        AESL_REG_in_2_3_o_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


// The signal of port in_3_0_i
reg [7: 0] AESL_REG_in_3_0_i = 0;
assign in_3_0_i = AESL_REG_in_3_0_i;
always @(posedge AESL_clock)
begin
    if(in_3_0_o_ap_vld === 1)
        AESL_REG_in_3_0_i <= in_3_0_o;
end

initial begin : read_file_process_in_3_0
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [215  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_3_0,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_3_0);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_3_0_i);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end

reg AESL_REG_in_3_0_o_ap_vld = 0;
// The signal of port in_3_0_o
reg [7: 0] AESL_REG_in_3_0_o = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_in_3_0_o = 0; 
    else if(in_3_0_o_ap_vld) begin
        AESL_REG_in_3_0_o <= in_3_0_o;
        AESL_REG_in_3_0_o_ap_vld <= 1;
    end
end 

initial begin : write_file_process_in_3_0
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer in_3_0_count;
    reg [215:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_in_3_0_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_in_3_0_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_in_3_0_o_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_in_3_0_o);
        AESL_REG_in_3_0_o_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


// The signal of port in_3_1_i
reg [7: 0] AESL_REG_in_3_1_i = 0;
assign in_3_1_i = AESL_REG_in_3_1_i;
always @(posedge AESL_clock)
begin
    if(in_3_1_o_ap_vld === 1)
        AESL_REG_in_3_1_i <= in_3_1_o;
end

initial begin : read_file_process_in_3_1
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [215  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_3_1,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_3_1);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_3_1_i);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end

reg AESL_REG_in_3_1_o_ap_vld = 0;
// The signal of port in_3_1_o
reg [7: 0] AESL_REG_in_3_1_o = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_in_3_1_o = 0; 
    else if(in_3_1_o_ap_vld) begin
        AESL_REG_in_3_1_o <= in_3_1_o;
        AESL_REG_in_3_1_o_ap_vld <= 1;
    end
end 

initial begin : write_file_process_in_3_1
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer in_3_1_count;
    reg [215:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_in_3_1_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_in_3_1_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_in_3_1_o_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_in_3_1_o);
        AESL_REG_in_3_1_o_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


// The signal of port in_3_2_i
reg [7: 0] AESL_REG_in_3_2_i = 0;
assign in_3_2_i = AESL_REG_in_3_2_i;
always @(posedge AESL_clock)
begin
    if(in_3_2_o_ap_vld === 1)
        AESL_REG_in_3_2_i <= in_3_2_o;
end

initial begin : read_file_process_in_3_2
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [215  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_3_2,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_3_2);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_3_2_i);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end

reg AESL_REG_in_3_2_o_ap_vld = 0;
// The signal of port in_3_2_o
reg [7: 0] AESL_REG_in_3_2_o = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_in_3_2_o = 0; 
    else if(in_3_2_o_ap_vld) begin
        AESL_REG_in_3_2_o <= in_3_2_o;
        AESL_REG_in_3_2_o_ap_vld <= 1;
    end
end 

initial begin : write_file_process_in_3_2
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer in_3_2_count;
    reg [215:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_in_3_2_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_in_3_2_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_in_3_2_o_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_in_3_2_o);
        AESL_REG_in_3_2_o_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


// The signal of port in_3_3_i
reg [7: 0] AESL_REG_in_3_3_i = 0;
assign in_3_3_i = AESL_REG_in_3_3_i;
always @(posedge AESL_clock)
begin
    if(in_3_3_o_ap_vld === 1)
        AESL_REG_in_3_3_i <= in_3_3_o;
end

initial begin : read_file_process_in_3_3
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [215  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_3_3,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_3_3);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_3_3_i);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end

reg AESL_REG_in_3_3_o_ap_vld = 0;
// The signal of port in_3_3_o
reg [7: 0] AESL_REG_in_3_3_o = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_in_3_3_o = 0; 
    else if(in_3_3_o_ap_vld) begin
        AESL_REG_in_3_3_o <= in_3_3_o;
        AESL_REG_in_3_3_o_ap_vld <= 1;
    end
end 

initial begin : write_file_process_in_3_3
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer in_3_3_count;
    reg [215:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_in_3_3_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_in_3_3_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_in_3_3_o_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_in_3_3_o);
        AESL_REG_in_3_3_o_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


initial begin : generate_AESL_ready_cnt_proc
    AESL_ready_cnt = 0;
    wait(AESL_reset === 0);
    while(AESL_ready_cnt != AUTOTB_TRANSACTION_NUM) begin
        while(AESL_ready !== 1) begin
            @(posedge AESL_clock);
            # 0.4;
        end
        @(negedge AESL_clock);
        AESL_ready_cnt = AESL_ready_cnt + 1;
        @(posedge AESL_clock);
        # 0.4;
    end
end

    event next_trigger_ready_cnt;
    
    initial begin : gen_ready_cnt
        ready_cnt = 0;
        wait (AESL_reset === 0);
        forever begin
            @ (posedge AESL_clock);
            if (ready == 1) begin
                if (ready_cnt < AUTOTB_TRANSACTION_NUM) begin
                    ready_cnt = ready_cnt + 1;
                end
            end
            -> next_trigger_ready_cnt;
        end
    end
    
    wire all_finish = (done_cnt == AUTOTB_TRANSACTION_NUM);
    
    // done_cnt
    always @ (posedge AESL_clock) begin
        if (AESL_reset) begin
            done_cnt <= 0;
        end else begin
            if (AESL_done == 1) begin
                if (done_cnt < AUTOTB_TRANSACTION_NUM) begin
                    done_cnt <= done_cnt + 1;
                end
            end
        end
    end
    
    initial begin : finish_simulation
        wait (all_finish == 1);
        // last transaction is saved at negedge right after last done
        @ (posedge AESL_clock);
        @ (posedge AESL_clock);
        @ (posedge AESL_clock);
        @ (posedge AESL_clock);
        $finish;
    end
    
initial begin
    AESL_clock = 0;
    forever #`AUTOTB_CLOCK_PERIOD_DIV2 AESL_clock = ~AESL_clock;
end


reg end_ctx_RoundKey_0;
reg [31:0] size_ctx_RoundKey_0;
reg [31:0] size_ctx_RoundKey_0_backup;
reg end_ctx_RoundKey_1;
reg [31:0] size_ctx_RoundKey_1;
reg [31:0] size_ctx_RoundKey_1_backup;
reg end_ctx_RoundKey_2;
reg [31:0] size_ctx_RoundKey_2;
reg [31:0] size_ctx_RoundKey_2_backup;
reg end_ctx_RoundKey_3;
reg [31:0] size_ctx_RoundKey_3;
reg [31:0] size_ctx_RoundKey_3_backup;
reg end_ctx_RoundKey_4;
reg [31:0] size_ctx_RoundKey_4;
reg [31:0] size_ctx_RoundKey_4_backup;
reg end_ctx_RoundKey_5;
reg [31:0] size_ctx_RoundKey_5;
reg [31:0] size_ctx_RoundKey_5_backup;
reg end_ctx_RoundKey_6;
reg [31:0] size_ctx_RoundKey_6;
reg [31:0] size_ctx_RoundKey_6_backup;
reg end_ctx_RoundKey_7;
reg [31:0] size_ctx_RoundKey_7;
reg [31:0] size_ctx_RoundKey_7_backup;
reg end_ctx_RoundKey_8;
reg [31:0] size_ctx_RoundKey_8;
reg [31:0] size_ctx_RoundKey_8_backup;
reg end_ctx_RoundKey_9;
reg [31:0] size_ctx_RoundKey_9;
reg [31:0] size_ctx_RoundKey_9_backup;
reg end_ctx_RoundKey_10;
reg [31:0] size_ctx_RoundKey_10;
reg [31:0] size_ctx_RoundKey_10_backup;
reg end_ctx_RoundKey_11;
reg [31:0] size_ctx_RoundKey_11;
reg [31:0] size_ctx_RoundKey_11_backup;
reg end_ctx_RoundKey_12;
reg [31:0] size_ctx_RoundKey_12;
reg [31:0] size_ctx_RoundKey_12_backup;
reg end_ctx_RoundKey_13;
reg [31:0] size_ctx_RoundKey_13;
reg [31:0] size_ctx_RoundKey_13_backup;
reg end_ctx_RoundKey_14;
reg [31:0] size_ctx_RoundKey_14;
reg [31:0] size_ctx_RoundKey_14_backup;
reg end_ctx_RoundKey_15;
reg [31:0] size_ctx_RoundKey_15;
reg [31:0] size_ctx_RoundKey_15_backup;
reg end_key_0;
reg [31:0] size_key_0;
reg [31:0] size_key_0_backup;
reg end_key_1;
reg [31:0] size_key_1;
reg [31:0] size_key_1_backup;
reg end_key_2;
reg [31:0] size_key_2;
reg [31:0] size_key_2_backup;
reg end_key_3;
reg [31:0] size_key_3;
reg [31:0] size_key_3_backup;
reg end_key_4;
reg [31:0] size_key_4;
reg [31:0] size_key_4_backup;
reg end_key_5;
reg [31:0] size_key_5;
reg [31:0] size_key_5_backup;
reg end_key_6;
reg [31:0] size_key_6;
reg [31:0] size_key_6_backup;
reg end_key_7;
reg [31:0] size_key_7;
reg [31:0] size_key_7_backup;
reg end_key_8;
reg [31:0] size_key_8;
reg [31:0] size_key_8_backup;
reg end_key_9;
reg [31:0] size_key_9;
reg [31:0] size_key_9_backup;
reg end_key_10;
reg [31:0] size_key_10;
reg [31:0] size_key_10_backup;
reg end_key_11;
reg [31:0] size_key_11;
reg [31:0] size_key_11_backup;
reg end_key_12;
reg [31:0] size_key_12;
reg [31:0] size_key_12_backup;
reg end_key_13;
reg [31:0] size_key_13;
reg [31:0] size_key_13_backup;
reg end_key_14;
reg [31:0] size_key_14;
reg [31:0] size_key_14_backup;
reg end_key_15;
reg [31:0] size_key_15;
reg [31:0] size_key_15_backup;
reg end_in_0_0;
reg [31:0] size_in_0_0;
reg [31:0] size_in_0_0_backup;
reg end_in_0_1;
reg [31:0] size_in_0_1;
reg [31:0] size_in_0_1_backup;
reg end_in_0_2;
reg [31:0] size_in_0_2;
reg [31:0] size_in_0_2_backup;
reg end_in_0_3;
reg [31:0] size_in_0_3;
reg [31:0] size_in_0_3_backup;
reg end_in_1_0;
reg [31:0] size_in_1_0;
reg [31:0] size_in_1_0_backup;
reg end_in_1_1;
reg [31:0] size_in_1_1;
reg [31:0] size_in_1_1_backup;
reg end_in_1_2;
reg [31:0] size_in_1_2;
reg [31:0] size_in_1_2_backup;
reg end_in_1_3;
reg [31:0] size_in_1_3;
reg [31:0] size_in_1_3_backup;
reg end_in_2_0;
reg [31:0] size_in_2_0;
reg [31:0] size_in_2_0_backup;
reg end_in_2_1;
reg [31:0] size_in_2_1;
reg [31:0] size_in_2_1_backup;
reg end_in_2_2;
reg [31:0] size_in_2_2;
reg [31:0] size_in_2_2_backup;
reg end_in_2_3;
reg [31:0] size_in_2_3;
reg [31:0] size_in_2_3_backup;
reg end_in_3_0;
reg [31:0] size_in_3_0;
reg [31:0] size_in_3_0_backup;
reg end_in_3_1;
reg [31:0] size_in_3_1;
reg [31:0] size_in_3_1_backup;
reg end_in_3_2;
reg [31:0] size_in_3_2;
reg [31:0] size_in_3_2_backup;
reg end_in_3_3;
reg [31:0] size_in_3_3;
reg [31:0] size_in_3_3_backup;

initial begin : initial_process
    integer proc_rand;
    rst = 1;
    # 100;
    repeat(3) @ (posedge AESL_clock);
    rst = 0;
end
initial begin : start_process
    integer proc_rand;
    reg [31:0] start_cnt;
    ce = 1;
    start = 0;
    start_cnt = 0;
    wait (AESL_reset === 0);
    @ (posedge AESL_clock);
    #0 start = 1;
    start_cnt = start_cnt + 1;
    forever begin
        @ (posedge AESL_clock);
        if (start_cnt >= AUTOTB_TRANSACTION_NUM) begin
            // keep pushing garbage in
            #0 start = 1;
        end
        if (AESL_ready) begin
            start_cnt = start_cnt + 1;
        end
    end
end

always @(AESL_done)
begin
    tb_continue = AESL_done;
end

initial begin : ready_initial_process
    ready_initial = 0;
    wait (AESL_start === 1);
    ready_initial = 1;
    @(posedge AESL_clock);
    ready_initial = 0;
end

always @(posedge AESL_clock)
begin
    if(AESL_reset)
      AESL_ready_delay = 0;
  else
      AESL_ready_delay = AESL_ready;
end
initial begin : ready_last_n_process
  ready_last_n = 1;
  wait(ready_cnt == AUTOTB_TRANSACTION_NUM)
  @(posedge AESL_clock);
  ready_last_n <= 0;
end

always @(posedge AESL_clock)
begin
    if(AESL_reset)
      ready_delay_last_n = 0;
  else
      ready_delay_last_n <= ready_last_n;
end
assign ready = (ready_initial | AESL_ready_delay);
assign ready_wire = ready_initial | AESL_ready_delay;
initial begin : done_delay_last_n_process
  done_delay_last_n = 1;
  while(done_cnt < AUTOTB_TRANSACTION_NUM)
      @(posedge AESL_clock);
  # 0.1;
  done_delay_last_n = 0;
end

always @(posedge AESL_clock)
begin
    if(AESL_reset)
  begin
      AESL_done_delay <= 0;
      AESL_done_delay2 <= 0;
  end
  else begin
      AESL_done_delay <= AESL_done & done_delay_last_n;
      AESL_done_delay2 <= AESL_done_delay;
  end
end
always @(posedge AESL_clock)
begin
    if(AESL_reset)
      interface_done = 0;
  else begin
      # 0.01;
      if(ready === 1 && ready_cnt > 0 && ready_cnt < AUTOTB_TRANSACTION_NUM)
          interface_done = 1;
      else if(AESL_done_delay === 1 && done_cnt == AUTOTB_TRANSACTION_NUM)
          interface_done = 1;
      else
          interface_done = 0;
  end
end

reg dump_tvout_finish_ctx_RoundKey_0;

initial begin : dump_tvout_runtime_sign_ctx_RoundKey_0
    integer fp;
    dump_tvout_finish_ctx_RoundKey_0 = 0;
    fp = $fopen(`AUTOTB_TVOUT_ctx_RoundKey_0_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_ctx_RoundKey_0_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    $fclose(fp);
    wait (done_cnt == AUTOTB_TRANSACTION_NUM);
    // last transaction is saved at negedge right after last done
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    fp = $fopen(`AUTOTB_TVOUT_ctx_RoundKey_0_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_ctx_RoundKey_0_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_ctx_RoundKey_0 = 1;
end


reg dump_tvout_finish_ctx_RoundKey_1;

initial begin : dump_tvout_runtime_sign_ctx_RoundKey_1
    integer fp;
    dump_tvout_finish_ctx_RoundKey_1 = 0;
    fp = $fopen(`AUTOTB_TVOUT_ctx_RoundKey_1_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_ctx_RoundKey_1_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    $fclose(fp);
    wait (done_cnt == AUTOTB_TRANSACTION_NUM);
    // last transaction is saved at negedge right after last done
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    fp = $fopen(`AUTOTB_TVOUT_ctx_RoundKey_1_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_ctx_RoundKey_1_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_ctx_RoundKey_1 = 1;
end


reg dump_tvout_finish_ctx_RoundKey_2;

initial begin : dump_tvout_runtime_sign_ctx_RoundKey_2
    integer fp;
    dump_tvout_finish_ctx_RoundKey_2 = 0;
    fp = $fopen(`AUTOTB_TVOUT_ctx_RoundKey_2_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_ctx_RoundKey_2_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    $fclose(fp);
    wait (done_cnt == AUTOTB_TRANSACTION_NUM);
    // last transaction is saved at negedge right after last done
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    fp = $fopen(`AUTOTB_TVOUT_ctx_RoundKey_2_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_ctx_RoundKey_2_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_ctx_RoundKey_2 = 1;
end


reg dump_tvout_finish_ctx_RoundKey_3;

initial begin : dump_tvout_runtime_sign_ctx_RoundKey_3
    integer fp;
    dump_tvout_finish_ctx_RoundKey_3 = 0;
    fp = $fopen(`AUTOTB_TVOUT_ctx_RoundKey_3_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_ctx_RoundKey_3_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    $fclose(fp);
    wait (done_cnt == AUTOTB_TRANSACTION_NUM);
    // last transaction is saved at negedge right after last done
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    fp = $fopen(`AUTOTB_TVOUT_ctx_RoundKey_3_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_ctx_RoundKey_3_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_ctx_RoundKey_3 = 1;
end


reg dump_tvout_finish_ctx_RoundKey_4;

initial begin : dump_tvout_runtime_sign_ctx_RoundKey_4
    integer fp;
    dump_tvout_finish_ctx_RoundKey_4 = 0;
    fp = $fopen(`AUTOTB_TVOUT_ctx_RoundKey_4_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_ctx_RoundKey_4_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    $fclose(fp);
    wait (done_cnt == AUTOTB_TRANSACTION_NUM);
    // last transaction is saved at negedge right after last done
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    fp = $fopen(`AUTOTB_TVOUT_ctx_RoundKey_4_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_ctx_RoundKey_4_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_ctx_RoundKey_4 = 1;
end


reg dump_tvout_finish_ctx_RoundKey_5;

initial begin : dump_tvout_runtime_sign_ctx_RoundKey_5
    integer fp;
    dump_tvout_finish_ctx_RoundKey_5 = 0;
    fp = $fopen(`AUTOTB_TVOUT_ctx_RoundKey_5_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_ctx_RoundKey_5_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    $fclose(fp);
    wait (done_cnt == AUTOTB_TRANSACTION_NUM);
    // last transaction is saved at negedge right after last done
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    fp = $fopen(`AUTOTB_TVOUT_ctx_RoundKey_5_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_ctx_RoundKey_5_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_ctx_RoundKey_5 = 1;
end


reg dump_tvout_finish_ctx_RoundKey_6;

initial begin : dump_tvout_runtime_sign_ctx_RoundKey_6
    integer fp;
    dump_tvout_finish_ctx_RoundKey_6 = 0;
    fp = $fopen(`AUTOTB_TVOUT_ctx_RoundKey_6_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_ctx_RoundKey_6_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    $fclose(fp);
    wait (done_cnt == AUTOTB_TRANSACTION_NUM);
    // last transaction is saved at negedge right after last done
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    fp = $fopen(`AUTOTB_TVOUT_ctx_RoundKey_6_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_ctx_RoundKey_6_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_ctx_RoundKey_6 = 1;
end


reg dump_tvout_finish_ctx_RoundKey_7;

initial begin : dump_tvout_runtime_sign_ctx_RoundKey_7
    integer fp;
    dump_tvout_finish_ctx_RoundKey_7 = 0;
    fp = $fopen(`AUTOTB_TVOUT_ctx_RoundKey_7_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_ctx_RoundKey_7_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    $fclose(fp);
    wait (done_cnt == AUTOTB_TRANSACTION_NUM);
    // last transaction is saved at negedge right after last done
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    fp = $fopen(`AUTOTB_TVOUT_ctx_RoundKey_7_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_ctx_RoundKey_7_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_ctx_RoundKey_7 = 1;
end


reg dump_tvout_finish_ctx_RoundKey_8;

initial begin : dump_tvout_runtime_sign_ctx_RoundKey_8
    integer fp;
    dump_tvout_finish_ctx_RoundKey_8 = 0;
    fp = $fopen(`AUTOTB_TVOUT_ctx_RoundKey_8_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_ctx_RoundKey_8_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    $fclose(fp);
    wait (done_cnt == AUTOTB_TRANSACTION_NUM);
    // last transaction is saved at negedge right after last done
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    fp = $fopen(`AUTOTB_TVOUT_ctx_RoundKey_8_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_ctx_RoundKey_8_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_ctx_RoundKey_8 = 1;
end


reg dump_tvout_finish_ctx_RoundKey_9;

initial begin : dump_tvout_runtime_sign_ctx_RoundKey_9
    integer fp;
    dump_tvout_finish_ctx_RoundKey_9 = 0;
    fp = $fopen(`AUTOTB_TVOUT_ctx_RoundKey_9_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_ctx_RoundKey_9_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    $fclose(fp);
    wait (done_cnt == AUTOTB_TRANSACTION_NUM);
    // last transaction is saved at negedge right after last done
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    fp = $fopen(`AUTOTB_TVOUT_ctx_RoundKey_9_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_ctx_RoundKey_9_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_ctx_RoundKey_9 = 1;
end


reg dump_tvout_finish_ctx_RoundKey_10;

initial begin : dump_tvout_runtime_sign_ctx_RoundKey_10
    integer fp;
    dump_tvout_finish_ctx_RoundKey_10 = 0;
    fp = $fopen(`AUTOTB_TVOUT_ctx_RoundKey_10_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_ctx_RoundKey_10_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    $fclose(fp);
    wait (done_cnt == AUTOTB_TRANSACTION_NUM);
    // last transaction is saved at negedge right after last done
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    fp = $fopen(`AUTOTB_TVOUT_ctx_RoundKey_10_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_ctx_RoundKey_10_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_ctx_RoundKey_10 = 1;
end


reg dump_tvout_finish_ctx_RoundKey_11;

initial begin : dump_tvout_runtime_sign_ctx_RoundKey_11
    integer fp;
    dump_tvout_finish_ctx_RoundKey_11 = 0;
    fp = $fopen(`AUTOTB_TVOUT_ctx_RoundKey_11_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_ctx_RoundKey_11_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    $fclose(fp);
    wait (done_cnt == AUTOTB_TRANSACTION_NUM);
    // last transaction is saved at negedge right after last done
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    fp = $fopen(`AUTOTB_TVOUT_ctx_RoundKey_11_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_ctx_RoundKey_11_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_ctx_RoundKey_11 = 1;
end


reg dump_tvout_finish_ctx_RoundKey_12;

initial begin : dump_tvout_runtime_sign_ctx_RoundKey_12
    integer fp;
    dump_tvout_finish_ctx_RoundKey_12 = 0;
    fp = $fopen(`AUTOTB_TVOUT_ctx_RoundKey_12_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_ctx_RoundKey_12_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    $fclose(fp);
    wait (done_cnt == AUTOTB_TRANSACTION_NUM);
    // last transaction is saved at negedge right after last done
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    fp = $fopen(`AUTOTB_TVOUT_ctx_RoundKey_12_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_ctx_RoundKey_12_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_ctx_RoundKey_12 = 1;
end


reg dump_tvout_finish_ctx_RoundKey_13;

initial begin : dump_tvout_runtime_sign_ctx_RoundKey_13
    integer fp;
    dump_tvout_finish_ctx_RoundKey_13 = 0;
    fp = $fopen(`AUTOTB_TVOUT_ctx_RoundKey_13_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_ctx_RoundKey_13_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    $fclose(fp);
    wait (done_cnt == AUTOTB_TRANSACTION_NUM);
    // last transaction is saved at negedge right after last done
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    fp = $fopen(`AUTOTB_TVOUT_ctx_RoundKey_13_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_ctx_RoundKey_13_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_ctx_RoundKey_13 = 1;
end


reg dump_tvout_finish_ctx_RoundKey_14;

initial begin : dump_tvout_runtime_sign_ctx_RoundKey_14
    integer fp;
    dump_tvout_finish_ctx_RoundKey_14 = 0;
    fp = $fopen(`AUTOTB_TVOUT_ctx_RoundKey_14_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_ctx_RoundKey_14_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    $fclose(fp);
    wait (done_cnt == AUTOTB_TRANSACTION_NUM);
    // last transaction is saved at negedge right after last done
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    fp = $fopen(`AUTOTB_TVOUT_ctx_RoundKey_14_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_ctx_RoundKey_14_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_ctx_RoundKey_14 = 1;
end


reg dump_tvout_finish_ctx_RoundKey_15;

initial begin : dump_tvout_runtime_sign_ctx_RoundKey_15
    integer fp;
    dump_tvout_finish_ctx_RoundKey_15 = 0;
    fp = $fopen(`AUTOTB_TVOUT_ctx_RoundKey_15_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_ctx_RoundKey_15_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    $fclose(fp);
    wait (done_cnt == AUTOTB_TRANSACTION_NUM);
    // last transaction is saved at negedge right after last done
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    fp = $fopen(`AUTOTB_TVOUT_ctx_RoundKey_15_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_ctx_RoundKey_15_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_ctx_RoundKey_15 = 1;
end


////////////////////////////////////////////
// progress and performance
////////////////////////////////////////////

task wait_start();
    while (~AESL_start) begin
        @ (posedge AESL_clock);
    end
endtask

reg [31:0] clk_cnt = 0;
reg AESL_ready_p1;
reg AESL_start_p1;

always @ (posedge AESL_clock) begin
    clk_cnt <= clk_cnt + 1;
    AESL_ready_p1 <= AESL_ready;
    AESL_start_p1 <= AESL_start;
end

reg [31:0] start_timestamp [0:AUTOTB_TRANSACTION_NUM - 1];
reg [31:0] start_cnt;
reg [31:0] ready_timestamp [0:AUTOTB_TRANSACTION_NUM - 1];
reg [31:0] ap_ready_cnt;
reg [31:0] finish_timestamp [0:AUTOTB_TRANSACTION_NUM - 1];
reg [31:0] finish_cnt;
event report_progress;

initial begin
    start_cnt = 0;
    finish_cnt = 0;
    ap_ready_cnt = 0;
    wait (AESL_reset == 0);
    wait_start();
    start_timestamp[start_cnt] = clk_cnt;
    start_cnt = start_cnt + 1;
    if (AESL_done) begin
        finish_timestamp[finish_cnt] = clk_cnt;
        finish_cnt = finish_cnt + 1;
    end
    -> report_progress;
    forever begin
        @ (posedge AESL_clock);
        if (start_cnt < AUTOTB_TRANSACTION_NUM) begin
            if ((AESL_start && AESL_ready_p1)||(AESL_start && ~AESL_start_p1)) begin
                start_timestamp[start_cnt] = clk_cnt;
                start_cnt = start_cnt + 1;
            end
        end
        if (ap_ready_cnt < AUTOTB_TRANSACTION_NUM) begin
            if (AESL_start_p1 && AESL_ready_p1) begin
                ready_timestamp[ap_ready_cnt] = clk_cnt;
                ap_ready_cnt = ap_ready_cnt + 1;
            end
        end
        if (finish_cnt < AUTOTB_TRANSACTION_NUM) begin
            if (AESL_done) begin
                finish_timestamp[finish_cnt] = clk_cnt;
                finish_cnt = finish_cnt + 1;
            end
        end
        -> report_progress;
    end
end

reg [31:0] progress_timeout;

initial begin : simulation_progress
    real intra_progress;
    wait (AESL_reset == 0);
    progress_timeout = PROGRESS_TIMEOUT;
    $display("////////////////////////////////////////////////////////////////////////////////////");
    $display("// Inter-Transaction Progress: Completed Transaction / Total Transaction");
    $display("// Intra-Transaction Progress: Measured Latency / Latency Estimation * 100%%");
    $display("//");
    $display("// RTL Simulation : \"Inter-Transaction Progress\" [\"Intra-Transaction Progress\"] @ \"Simulation Time\"");
    $display("////////////////////////////////////////////////////////////////////////////////////");
    print_progress();
    while (finish_cnt < AUTOTB_TRANSACTION_NUM) begin
        @ (report_progress);
        if (finish_cnt < AUTOTB_TRANSACTION_NUM) begin
            if (AESL_done) begin
                print_progress();
                progress_timeout = PROGRESS_TIMEOUT;
            end else begin
                if (progress_timeout == 0) begin
                    print_progress();
                    progress_timeout = PROGRESS_TIMEOUT;
                end else begin
                    progress_timeout = progress_timeout - 1;
                end
            end
        end
    end
    print_progress();
    $display("////////////////////////////////////////////////////////////////////////////////////");
    calculate_performance();
end

task get_intra_progress(output real intra_progress);
    begin
        if (start_cnt > finish_cnt) begin
            intra_progress = clk_cnt - start_timestamp[finish_cnt];
        end else if(finish_cnt > 0) begin
            intra_progress = LATENCY_ESTIMATION;
        end else begin
            intra_progress = 0;
        end
        intra_progress = intra_progress / LATENCY_ESTIMATION;
    end
endtask

task print_progress();
    real intra_progress;
    begin
        if (LATENCY_ESTIMATION > 0) begin
            get_intra_progress(intra_progress);
            $display("// RTL Simulation : %0d / %0d [%2.2f%%] @ \"%0t\"", finish_cnt, AUTOTB_TRANSACTION_NUM, intra_progress * 100, $time);
        end else begin
            $display("// RTL Simulation : %0d / %0d [n/a] @ \"%0t\"", finish_cnt, AUTOTB_TRANSACTION_NUM, $time);
        end
    end
endtask

task calculate_performance();
    integer i;
    integer fp;
    reg [31:0] latency [0:AUTOTB_TRANSACTION_NUM - 1];
    reg [31:0] latency_min;
    reg [31:0] latency_max;
    reg [31:0] latency_total;
    reg [31:0] latency_average;
    reg [31:0] interval [0:AUTOTB_TRANSACTION_NUM - 2];
    reg [31:0] interval_min;
    reg [31:0] interval_max;
    reg [31:0] interval_total;
    reg [31:0] interval_average;
    begin
        latency_min = -1;
        latency_max = 0;
        latency_total = 0;
        interval_min = -1;
        interval_max = 0;
        interval_total = 0;

        for (i = 0; i < AUTOTB_TRANSACTION_NUM; i = i + 1) begin
            // calculate latency
            latency[i] = finish_timestamp[i] - start_timestamp[i];
            if (latency[i] > latency_max) latency_max = latency[i];
            if (latency[i] < latency_min) latency_min = latency[i];
            latency_total = latency_total + latency[i];
            // calculate interval
            if (AUTOTB_TRANSACTION_NUM == 1) begin
                interval[i] = 0;
                interval_max = 0;
                interval_min = 0;
                interval_total = 0;
            end else if (i < AUTOTB_TRANSACTION_NUM - 1) begin
                interval[i] = finish_timestamp[i] - start_timestamp[i]+1;
                if (interval[i] > interval_max) interval_max = interval[i];
                if (interval[i] < interval_min) interval_min = interval[i];
                interval_total = interval_total + interval[i];
            end
        end

        latency_average = latency_total / AUTOTB_TRANSACTION_NUM;
        if (AUTOTB_TRANSACTION_NUM == 1) begin
            interval_average = 0;
        end else begin
            interval_average = interval_total / (AUTOTB_TRANSACTION_NUM - 1);
        end

        fp = $fopen(`AUTOTB_LAT_RESULT_FILE, "w");

        $fdisplay(fp, "$MAX_LATENCY = \"%0d\"", latency_max);
        $fdisplay(fp, "$MIN_LATENCY = \"%0d\"", latency_min);
        $fdisplay(fp, "$AVER_LATENCY = \"%0d\"", latency_average);
        $fdisplay(fp, "$MAX_THROUGHPUT = \"%0d\"", interval_max);
        $fdisplay(fp, "$MIN_THROUGHPUT = \"%0d\"", interval_min);
        $fdisplay(fp, "$AVER_THROUGHPUT = \"%0d\"", interval_average);

        $fclose(fp);

        fp = $fopen(`AUTOTB_PER_RESULT_TRANS_FILE, "w");

        $fdisplay(fp, "%20s%16s%16s", "", "latency", "interval");
        if (AUTOTB_TRANSACTION_NUM == 1) begin
            i = 0;
            $fdisplay(fp, "transaction%8d:%16d%16d", i, latency[i], interval[i]);
        end else begin
            for (i = 0; i < AUTOTB_TRANSACTION_NUM; i = i + 1) begin
                if (i < AUTOTB_TRANSACTION_NUM - 1) begin
                    $fdisplay(fp, "transaction%8d:%16d%16d", i, latency[i], interval[i]);
                end else begin
                    $fdisplay(fp, "transaction%8d:%16d               x", i, latency[i]);
                end
            end
        end

        $fclose(fp);
    end
endtask


////////////////////////////////////////////
// Dependence Check
////////////////////////////////////////////

`ifndef POST_SYN

`endif

endmodule
