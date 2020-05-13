// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
 `timescale 1ns/1ps


`define AUTOTB_DUT      Cipher
`define AUTOTB_DUT_INST AESL_inst_Cipher
`define AUTOTB_TOP      apatb_Cipher_top
`define AUTOTB_LAT_RESULT_FILE "Cipher.result.lat.rb"
`define AUTOTB_PER_RESULT_TRANS_FILE "Cipher.performance.result.transaction.xml"
`define AUTOTB_TOP_INST AESL_inst_apatb_Cipher_top
`define AUTOTB_MAX_ALLOW_LATENCY  15000000
`define AUTOTB_CLOCK_PERIOD_DIV2 5.00

`define AESL_DEPTH_state_0_0 1
`define AESL_DEPTH_state_0_1 1
`define AESL_DEPTH_state_0_2 1
`define AESL_DEPTH_state_0_3 1
`define AESL_DEPTH_state_1_0 1
`define AESL_DEPTH_state_1_1 1
`define AESL_DEPTH_state_1_2 1
`define AESL_DEPTH_state_1_3 1
`define AESL_DEPTH_state_2_0 1
`define AESL_DEPTH_state_2_1 1
`define AESL_DEPTH_state_2_2 1
`define AESL_DEPTH_state_2_3 1
`define AESL_DEPTH_state_3_0 1
`define AESL_DEPTH_state_3_1 1
`define AESL_DEPTH_state_3_2 1
`define AESL_DEPTH_state_3_3 1
`define AESL_MEM_RoundKey_0 AESL_automem_RoundKey_0
`define AESL_MEM_INST_RoundKey_0 mem_inst_RoundKey_0
`define AESL_MEM_RoundKey_1 AESL_automem_RoundKey_1
`define AESL_MEM_INST_RoundKey_1 mem_inst_RoundKey_1
`define AESL_MEM_RoundKey_2 AESL_automem_RoundKey_2
`define AESL_MEM_INST_RoundKey_2 mem_inst_RoundKey_2
`define AESL_MEM_RoundKey_3 AESL_automem_RoundKey_3
`define AESL_MEM_INST_RoundKey_3 mem_inst_RoundKey_3
`define AESL_MEM_RoundKey_4 AESL_automem_RoundKey_4
`define AESL_MEM_INST_RoundKey_4 mem_inst_RoundKey_4
`define AESL_MEM_RoundKey_5 AESL_automem_RoundKey_5
`define AESL_MEM_INST_RoundKey_5 mem_inst_RoundKey_5
`define AESL_MEM_RoundKey_6 AESL_automem_RoundKey_6
`define AESL_MEM_INST_RoundKey_6 mem_inst_RoundKey_6
`define AESL_MEM_RoundKey_7 AESL_automem_RoundKey_7
`define AESL_MEM_INST_RoundKey_7 mem_inst_RoundKey_7
`define AESL_MEM_RoundKey_8 AESL_automem_RoundKey_8
`define AESL_MEM_INST_RoundKey_8 mem_inst_RoundKey_8
`define AESL_MEM_RoundKey_9 AESL_automem_RoundKey_9
`define AESL_MEM_INST_RoundKey_9 mem_inst_RoundKey_9
`define AESL_MEM_RoundKey_10 AESL_automem_RoundKey_10
`define AESL_MEM_INST_RoundKey_10 mem_inst_RoundKey_10
`define AESL_MEM_RoundKey_11 AESL_automem_RoundKey_11
`define AESL_MEM_INST_RoundKey_11 mem_inst_RoundKey_11
`define AESL_MEM_RoundKey_12 AESL_automem_RoundKey_12
`define AESL_MEM_INST_RoundKey_12 mem_inst_RoundKey_12
`define AESL_MEM_RoundKey_13 AESL_automem_RoundKey_13
`define AESL_MEM_INST_RoundKey_13 mem_inst_RoundKey_13
`define AESL_MEM_RoundKey_14 AESL_automem_RoundKey_14
`define AESL_MEM_INST_RoundKey_14 mem_inst_RoundKey_14
`define AESL_MEM_RoundKey_15 AESL_automem_RoundKey_15
`define AESL_MEM_INST_RoundKey_15 mem_inst_RoundKey_15
`define AUTOTB_TVIN_state_0_0  "./c.Cipher.autotvin_state_0_0.dat"
`define AUTOTB_TVIN_state_0_1  "./c.Cipher.autotvin_state_0_1.dat"
`define AUTOTB_TVIN_state_0_2  "./c.Cipher.autotvin_state_0_2.dat"
`define AUTOTB_TVIN_state_0_3  "./c.Cipher.autotvin_state_0_3.dat"
`define AUTOTB_TVIN_state_1_0  "./c.Cipher.autotvin_state_1_0.dat"
`define AUTOTB_TVIN_state_1_1  "./c.Cipher.autotvin_state_1_1.dat"
`define AUTOTB_TVIN_state_1_2  "./c.Cipher.autotvin_state_1_2.dat"
`define AUTOTB_TVIN_state_1_3  "./c.Cipher.autotvin_state_1_3.dat"
`define AUTOTB_TVIN_state_2_0  "./c.Cipher.autotvin_state_2_0.dat"
`define AUTOTB_TVIN_state_2_1  "./c.Cipher.autotvin_state_2_1.dat"
`define AUTOTB_TVIN_state_2_2  "./c.Cipher.autotvin_state_2_2.dat"
`define AUTOTB_TVIN_state_2_3  "./c.Cipher.autotvin_state_2_3.dat"
`define AUTOTB_TVIN_state_3_0  "./c.Cipher.autotvin_state_3_0.dat"
`define AUTOTB_TVIN_state_3_1  "./c.Cipher.autotvin_state_3_1.dat"
`define AUTOTB_TVIN_state_3_2  "./c.Cipher.autotvin_state_3_2.dat"
`define AUTOTB_TVIN_state_3_3  "./c.Cipher.autotvin_state_3_3.dat"
`define AUTOTB_TVIN_RoundKey_0  "./c.Cipher.autotvin_RoundKey_0.dat"
`define AUTOTB_TVIN_RoundKey_1  "./c.Cipher.autotvin_RoundKey_1.dat"
`define AUTOTB_TVIN_RoundKey_2  "./c.Cipher.autotvin_RoundKey_2.dat"
`define AUTOTB_TVIN_RoundKey_3  "./c.Cipher.autotvin_RoundKey_3.dat"
`define AUTOTB_TVIN_RoundKey_4  "./c.Cipher.autotvin_RoundKey_4.dat"
`define AUTOTB_TVIN_RoundKey_5  "./c.Cipher.autotvin_RoundKey_5.dat"
`define AUTOTB_TVIN_RoundKey_6  "./c.Cipher.autotvin_RoundKey_6.dat"
`define AUTOTB_TVIN_RoundKey_7  "./c.Cipher.autotvin_RoundKey_7.dat"
`define AUTOTB_TVIN_RoundKey_8  "./c.Cipher.autotvin_RoundKey_8.dat"
`define AUTOTB_TVIN_RoundKey_9  "./c.Cipher.autotvin_RoundKey_9.dat"
`define AUTOTB_TVIN_RoundKey_10  "./c.Cipher.autotvin_RoundKey_10.dat"
`define AUTOTB_TVIN_RoundKey_11  "./c.Cipher.autotvin_RoundKey_11.dat"
`define AUTOTB_TVIN_RoundKey_12  "./c.Cipher.autotvin_RoundKey_12.dat"
`define AUTOTB_TVIN_RoundKey_13  "./c.Cipher.autotvin_RoundKey_13.dat"
`define AUTOTB_TVIN_RoundKey_14  "./c.Cipher.autotvin_RoundKey_14.dat"
`define AUTOTB_TVIN_RoundKey_15  "./c.Cipher.autotvin_RoundKey_15.dat"
`define AUTOTB_TVIN_state_0_0_out_wrapc  "./rtl.Cipher.autotvin_state_0_0.dat"
`define AUTOTB_TVIN_state_0_1_out_wrapc  "./rtl.Cipher.autotvin_state_0_1.dat"
`define AUTOTB_TVIN_state_0_2_out_wrapc  "./rtl.Cipher.autotvin_state_0_2.dat"
`define AUTOTB_TVIN_state_0_3_out_wrapc  "./rtl.Cipher.autotvin_state_0_3.dat"
`define AUTOTB_TVIN_state_1_0_out_wrapc  "./rtl.Cipher.autotvin_state_1_0.dat"
`define AUTOTB_TVIN_state_1_1_out_wrapc  "./rtl.Cipher.autotvin_state_1_1.dat"
`define AUTOTB_TVIN_state_1_2_out_wrapc  "./rtl.Cipher.autotvin_state_1_2.dat"
`define AUTOTB_TVIN_state_1_3_out_wrapc  "./rtl.Cipher.autotvin_state_1_3.dat"
`define AUTOTB_TVIN_state_2_0_out_wrapc  "./rtl.Cipher.autotvin_state_2_0.dat"
`define AUTOTB_TVIN_state_2_1_out_wrapc  "./rtl.Cipher.autotvin_state_2_1.dat"
`define AUTOTB_TVIN_state_2_2_out_wrapc  "./rtl.Cipher.autotvin_state_2_2.dat"
`define AUTOTB_TVIN_state_2_3_out_wrapc  "./rtl.Cipher.autotvin_state_2_3.dat"
`define AUTOTB_TVIN_state_3_0_out_wrapc  "./rtl.Cipher.autotvin_state_3_0.dat"
`define AUTOTB_TVIN_state_3_1_out_wrapc  "./rtl.Cipher.autotvin_state_3_1.dat"
`define AUTOTB_TVIN_state_3_2_out_wrapc  "./rtl.Cipher.autotvin_state_3_2.dat"
`define AUTOTB_TVIN_state_3_3_out_wrapc  "./rtl.Cipher.autotvin_state_3_3.dat"
`define AUTOTB_TVIN_RoundKey_0_out_wrapc  "./rtl.Cipher.autotvin_RoundKey_0.dat"
`define AUTOTB_TVIN_RoundKey_1_out_wrapc  "./rtl.Cipher.autotvin_RoundKey_1.dat"
`define AUTOTB_TVIN_RoundKey_2_out_wrapc  "./rtl.Cipher.autotvin_RoundKey_2.dat"
`define AUTOTB_TVIN_RoundKey_3_out_wrapc  "./rtl.Cipher.autotvin_RoundKey_3.dat"
`define AUTOTB_TVIN_RoundKey_4_out_wrapc  "./rtl.Cipher.autotvin_RoundKey_4.dat"
`define AUTOTB_TVIN_RoundKey_5_out_wrapc  "./rtl.Cipher.autotvin_RoundKey_5.dat"
`define AUTOTB_TVIN_RoundKey_6_out_wrapc  "./rtl.Cipher.autotvin_RoundKey_6.dat"
`define AUTOTB_TVIN_RoundKey_7_out_wrapc  "./rtl.Cipher.autotvin_RoundKey_7.dat"
`define AUTOTB_TVIN_RoundKey_8_out_wrapc  "./rtl.Cipher.autotvin_RoundKey_8.dat"
`define AUTOTB_TVIN_RoundKey_9_out_wrapc  "./rtl.Cipher.autotvin_RoundKey_9.dat"
`define AUTOTB_TVIN_RoundKey_10_out_wrapc  "./rtl.Cipher.autotvin_RoundKey_10.dat"
`define AUTOTB_TVIN_RoundKey_11_out_wrapc  "./rtl.Cipher.autotvin_RoundKey_11.dat"
`define AUTOTB_TVIN_RoundKey_12_out_wrapc  "./rtl.Cipher.autotvin_RoundKey_12.dat"
`define AUTOTB_TVIN_RoundKey_13_out_wrapc  "./rtl.Cipher.autotvin_RoundKey_13.dat"
`define AUTOTB_TVIN_RoundKey_14_out_wrapc  "./rtl.Cipher.autotvin_RoundKey_14.dat"
`define AUTOTB_TVIN_RoundKey_15_out_wrapc  "./rtl.Cipher.autotvin_RoundKey_15.dat"
`define AUTOTB_TVOUT_state_0_0  "./c.Cipher.autotvout_state_0_0.dat"
`define AUTOTB_TVOUT_state_0_1  "./c.Cipher.autotvout_state_0_1.dat"
`define AUTOTB_TVOUT_state_0_2  "./c.Cipher.autotvout_state_0_2.dat"
`define AUTOTB_TVOUT_state_0_3  "./c.Cipher.autotvout_state_0_3.dat"
`define AUTOTB_TVOUT_state_1_0  "./c.Cipher.autotvout_state_1_0.dat"
`define AUTOTB_TVOUT_state_1_1  "./c.Cipher.autotvout_state_1_1.dat"
`define AUTOTB_TVOUT_state_1_2  "./c.Cipher.autotvout_state_1_2.dat"
`define AUTOTB_TVOUT_state_1_3  "./c.Cipher.autotvout_state_1_3.dat"
`define AUTOTB_TVOUT_state_2_0  "./c.Cipher.autotvout_state_2_0.dat"
`define AUTOTB_TVOUT_state_2_1  "./c.Cipher.autotvout_state_2_1.dat"
`define AUTOTB_TVOUT_state_2_2  "./c.Cipher.autotvout_state_2_2.dat"
`define AUTOTB_TVOUT_state_2_3  "./c.Cipher.autotvout_state_2_3.dat"
`define AUTOTB_TVOUT_state_3_0  "./c.Cipher.autotvout_state_3_0.dat"
`define AUTOTB_TVOUT_state_3_1  "./c.Cipher.autotvout_state_3_1.dat"
`define AUTOTB_TVOUT_state_3_2  "./c.Cipher.autotvout_state_3_2.dat"
`define AUTOTB_TVOUT_state_3_3  "./c.Cipher.autotvout_state_3_3.dat"
`define AUTOTB_TVOUT_state_0_0_out_wrapc  "./impl_rtl.Cipher.autotvout_state_0_0.dat"
`define AUTOTB_TVOUT_state_0_1_out_wrapc  "./impl_rtl.Cipher.autotvout_state_0_1.dat"
`define AUTOTB_TVOUT_state_0_2_out_wrapc  "./impl_rtl.Cipher.autotvout_state_0_2.dat"
`define AUTOTB_TVOUT_state_0_3_out_wrapc  "./impl_rtl.Cipher.autotvout_state_0_3.dat"
`define AUTOTB_TVOUT_state_1_0_out_wrapc  "./impl_rtl.Cipher.autotvout_state_1_0.dat"
`define AUTOTB_TVOUT_state_1_1_out_wrapc  "./impl_rtl.Cipher.autotvout_state_1_1.dat"
`define AUTOTB_TVOUT_state_1_2_out_wrapc  "./impl_rtl.Cipher.autotvout_state_1_2.dat"
`define AUTOTB_TVOUT_state_1_3_out_wrapc  "./impl_rtl.Cipher.autotvout_state_1_3.dat"
`define AUTOTB_TVOUT_state_2_0_out_wrapc  "./impl_rtl.Cipher.autotvout_state_2_0.dat"
`define AUTOTB_TVOUT_state_2_1_out_wrapc  "./impl_rtl.Cipher.autotvout_state_2_1.dat"
`define AUTOTB_TVOUT_state_2_2_out_wrapc  "./impl_rtl.Cipher.autotvout_state_2_2.dat"
`define AUTOTB_TVOUT_state_2_3_out_wrapc  "./impl_rtl.Cipher.autotvout_state_2_3.dat"
`define AUTOTB_TVOUT_state_3_0_out_wrapc  "./impl_rtl.Cipher.autotvout_state_3_0.dat"
`define AUTOTB_TVOUT_state_3_1_out_wrapc  "./impl_rtl.Cipher.autotvout_state_3_1.dat"
`define AUTOTB_TVOUT_state_3_2_out_wrapc  "./impl_rtl.Cipher.autotvout_state_3_2.dat"
`define AUTOTB_TVOUT_state_3_3_out_wrapc  "./impl_rtl.Cipher.autotvout_state_3_3.dat"
module `AUTOTB_TOP;

parameter AUTOTB_TRANSACTION_NUM = 17;
parameter PROGRESS_TIMEOUT = 10000000;
parameter LATENCY_ESTIMATION = 506;
parameter LENGTH_state_0_0 = 1;
parameter LENGTH_state_0_1 = 1;
parameter LENGTH_state_0_2 = 1;
parameter LENGTH_state_0_3 = 1;
parameter LENGTH_state_1_0 = 1;
parameter LENGTH_state_1_1 = 1;
parameter LENGTH_state_1_2 = 1;
parameter LENGTH_state_1_3 = 1;
parameter LENGTH_state_2_0 = 1;
parameter LENGTH_state_2_1 = 1;
parameter LENGTH_state_2_2 = 1;
parameter LENGTH_state_2_3 = 1;
parameter LENGTH_state_3_0 = 1;
parameter LENGTH_state_3_1 = 1;
parameter LENGTH_state_3_2 = 1;
parameter LENGTH_state_3_3 = 1;
parameter LENGTH_RoundKey_0 = 15;
parameter LENGTH_RoundKey_1 = 15;
parameter LENGTH_RoundKey_2 = 15;
parameter LENGTH_RoundKey_3 = 15;
parameter LENGTH_RoundKey_4 = 15;
parameter LENGTH_RoundKey_5 = 15;
parameter LENGTH_RoundKey_6 = 15;
parameter LENGTH_RoundKey_7 = 15;
parameter LENGTH_RoundKey_8 = 15;
parameter LENGTH_RoundKey_9 = 15;
parameter LENGTH_RoundKey_10 = 15;
parameter LENGTH_RoundKey_11 = 15;
parameter LENGTH_RoundKey_12 = 15;
parameter LENGTH_RoundKey_13 = 15;
parameter LENGTH_RoundKey_14 = 15;
parameter LENGTH_RoundKey_15 = 15;

task read_token;
    input integer fp;
    output reg [183 : 0] token;
    integer ret;
    begin
        token = "";
        ret = 0;
        ret = $fscanf(fp,"%s",token);
    end
endtask

task post_check;
    input integer fp1;
    input integer fp2;
    reg [183 : 0] token1;
    reg [183 : 0] token2;
    reg [183 : 0] golden;
    reg [183 : 0] result;
    integer ret;
    begin
        read_token(fp1, token1);
        read_token(fp2, token2);
        if (token1 != "[[[runtime]]]" || token2 != "[[[runtime]]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
            $finish;
        end
        read_token(fp1, token1);
        read_token(fp2, token2);
        while (token1 != "[[[/runtime]]]" && token2 != "[[[/runtime]]]") begin
            if (token1 != "[[transaction]]" || token2 != "[[transaction]]") begin
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
            end
            read_token(fp1, token1);  // skip transaction number
            read_token(fp2, token2);  // skip transaction number
              read_token(fp1, token1);
              read_token(fp2, token2);
            while(token1 != "[[/transaction]]" && token2 != "[[/transaction]]") begin
                ret = $sscanf(token1, "0x%x", golden);
                  if (ret != 1) begin
                      $display("Failed to parse token!");
                    $display("ERROR: Simulation using HLS TB failed.");
                      $finish;
                  end
                ret = $sscanf(token2, "0x%x", result);
                  if (ret != 1) begin
                      $display("Failed to parse token!");
                    $display("ERROR: Simulation using HLS TB failed.");
                      $finish;
                  end
                if(golden != result) begin
                      $display("%x (expected) vs. %x (actual) - mismatch", golden, result);
                    $display("ERROR: Simulation using HLS TB failed.");
                      $finish;
                end
                  read_token(fp1, token1);
                  read_token(fp2, token2);
            end
              read_token(fp1, token1);
              read_token(fp2, token2);
        end
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
wire [7 : 0] state_0_0_i;
wire [7 : 0] state_0_0_o;
wire  state_0_0_o_ap_vld;
wire [7 : 0] state_0_1_i;
wire [7 : 0] state_0_1_o;
wire  state_0_1_o_ap_vld;
wire [7 : 0] state_0_2_i;
wire [7 : 0] state_0_2_o;
wire  state_0_2_o_ap_vld;
wire [7 : 0] state_0_3_i;
wire [7 : 0] state_0_3_o;
wire  state_0_3_o_ap_vld;
wire [7 : 0] state_1_0_i;
wire [7 : 0] state_1_0_o;
wire  state_1_0_o_ap_vld;
wire [7 : 0] state_1_1_i;
wire [7 : 0] state_1_1_o;
wire  state_1_1_o_ap_vld;
wire [7 : 0] state_1_2_i;
wire [7 : 0] state_1_2_o;
wire  state_1_2_o_ap_vld;
wire [7 : 0] state_1_3_i;
wire [7 : 0] state_1_3_o;
wire  state_1_3_o_ap_vld;
wire [7 : 0] state_2_0_i;
wire [7 : 0] state_2_0_o;
wire  state_2_0_o_ap_vld;
wire [7 : 0] state_2_1_i;
wire [7 : 0] state_2_1_o;
wire  state_2_1_o_ap_vld;
wire [7 : 0] state_2_2_i;
wire [7 : 0] state_2_2_o;
wire  state_2_2_o_ap_vld;
wire [7 : 0] state_2_3_i;
wire [7 : 0] state_2_3_o;
wire  state_2_3_o_ap_vld;
wire [7 : 0] state_3_0_i;
wire [7 : 0] state_3_0_o;
wire  state_3_0_o_ap_vld;
wire [7 : 0] state_3_1_i;
wire [7 : 0] state_3_1_o;
wire  state_3_1_o_ap_vld;
wire [7 : 0] state_3_2_i;
wire [7 : 0] state_3_2_o;
wire  state_3_2_o_ap_vld;
wire [7 : 0] state_3_3_i;
wire [7 : 0] state_3_3_o;
wire  state_3_3_o_ap_vld;
wire [3 : 0] RoundKey_0_address0;
wire  RoundKey_0_ce0;
wire [7 : 0] RoundKey_0_q0;
wire [3 : 0] RoundKey_1_address0;
wire  RoundKey_1_ce0;
wire [7 : 0] RoundKey_1_q0;
wire [3 : 0] RoundKey_2_address0;
wire  RoundKey_2_ce0;
wire [7 : 0] RoundKey_2_q0;
wire [3 : 0] RoundKey_3_address0;
wire  RoundKey_3_ce0;
wire [7 : 0] RoundKey_3_q0;
wire [3 : 0] RoundKey_4_address0;
wire  RoundKey_4_ce0;
wire [7 : 0] RoundKey_4_q0;
wire [3 : 0] RoundKey_5_address0;
wire  RoundKey_5_ce0;
wire [7 : 0] RoundKey_5_q0;
wire [3 : 0] RoundKey_6_address0;
wire  RoundKey_6_ce0;
wire [7 : 0] RoundKey_6_q0;
wire [3 : 0] RoundKey_7_address0;
wire  RoundKey_7_ce0;
wire [7 : 0] RoundKey_7_q0;
wire [3 : 0] RoundKey_8_address0;
wire  RoundKey_8_ce0;
wire [7 : 0] RoundKey_8_q0;
wire [3 : 0] RoundKey_9_address0;
wire  RoundKey_9_ce0;
wire [7 : 0] RoundKey_9_q0;
wire [3 : 0] RoundKey_10_address0;
wire  RoundKey_10_ce0;
wire [7 : 0] RoundKey_10_q0;
wire [3 : 0] RoundKey_11_address0;
wire  RoundKey_11_ce0;
wire [7 : 0] RoundKey_11_q0;
wire [3 : 0] RoundKey_12_address0;
wire  RoundKey_12_ce0;
wire [7 : 0] RoundKey_12_q0;
wire [3 : 0] RoundKey_13_address0;
wire  RoundKey_13_ce0;
wire [7 : 0] RoundKey_13_q0;
wire [3 : 0] RoundKey_14_address0;
wire  RoundKey_14_ce0;
wire [7 : 0] RoundKey_14_q0;
wire [3 : 0] RoundKey_15_address0;
wire  RoundKey_15_ce0;
wire [7 : 0] RoundKey_15_q0;
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
    .state_0_0_i(state_0_0_i),
    .state_0_0_o(state_0_0_o),
    .state_0_0_o_ap_vld(state_0_0_o_ap_vld),
    .state_0_1_i(state_0_1_i),
    .state_0_1_o(state_0_1_o),
    .state_0_1_o_ap_vld(state_0_1_o_ap_vld),
    .state_0_2_i(state_0_2_i),
    .state_0_2_o(state_0_2_o),
    .state_0_2_o_ap_vld(state_0_2_o_ap_vld),
    .state_0_3_i(state_0_3_i),
    .state_0_3_o(state_0_3_o),
    .state_0_3_o_ap_vld(state_0_3_o_ap_vld),
    .state_1_0_i(state_1_0_i),
    .state_1_0_o(state_1_0_o),
    .state_1_0_o_ap_vld(state_1_0_o_ap_vld),
    .state_1_1_i(state_1_1_i),
    .state_1_1_o(state_1_1_o),
    .state_1_1_o_ap_vld(state_1_1_o_ap_vld),
    .state_1_2_i(state_1_2_i),
    .state_1_2_o(state_1_2_o),
    .state_1_2_o_ap_vld(state_1_2_o_ap_vld),
    .state_1_3_i(state_1_3_i),
    .state_1_3_o(state_1_3_o),
    .state_1_3_o_ap_vld(state_1_3_o_ap_vld),
    .state_2_0_i(state_2_0_i),
    .state_2_0_o(state_2_0_o),
    .state_2_0_o_ap_vld(state_2_0_o_ap_vld),
    .state_2_1_i(state_2_1_i),
    .state_2_1_o(state_2_1_o),
    .state_2_1_o_ap_vld(state_2_1_o_ap_vld),
    .state_2_2_i(state_2_2_i),
    .state_2_2_o(state_2_2_o),
    .state_2_2_o_ap_vld(state_2_2_o_ap_vld),
    .state_2_3_i(state_2_3_i),
    .state_2_3_o(state_2_3_o),
    .state_2_3_o_ap_vld(state_2_3_o_ap_vld),
    .state_3_0_i(state_3_0_i),
    .state_3_0_o(state_3_0_o),
    .state_3_0_o_ap_vld(state_3_0_o_ap_vld),
    .state_3_1_i(state_3_1_i),
    .state_3_1_o(state_3_1_o),
    .state_3_1_o_ap_vld(state_3_1_o_ap_vld),
    .state_3_2_i(state_3_2_i),
    .state_3_2_o(state_3_2_o),
    .state_3_2_o_ap_vld(state_3_2_o_ap_vld),
    .state_3_3_i(state_3_3_i),
    .state_3_3_o(state_3_3_o),
    .state_3_3_o_ap_vld(state_3_3_o_ap_vld),
    .RoundKey_0_address0(RoundKey_0_address0),
    .RoundKey_0_ce0(RoundKey_0_ce0),
    .RoundKey_0_q0(RoundKey_0_q0),
    .RoundKey_1_address0(RoundKey_1_address0),
    .RoundKey_1_ce0(RoundKey_1_ce0),
    .RoundKey_1_q0(RoundKey_1_q0),
    .RoundKey_2_address0(RoundKey_2_address0),
    .RoundKey_2_ce0(RoundKey_2_ce0),
    .RoundKey_2_q0(RoundKey_2_q0),
    .RoundKey_3_address0(RoundKey_3_address0),
    .RoundKey_3_ce0(RoundKey_3_ce0),
    .RoundKey_3_q0(RoundKey_3_q0),
    .RoundKey_4_address0(RoundKey_4_address0),
    .RoundKey_4_ce0(RoundKey_4_ce0),
    .RoundKey_4_q0(RoundKey_4_q0),
    .RoundKey_5_address0(RoundKey_5_address0),
    .RoundKey_5_ce0(RoundKey_5_ce0),
    .RoundKey_5_q0(RoundKey_5_q0),
    .RoundKey_6_address0(RoundKey_6_address0),
    .RoundKey_6_ce0(RoundKey_6_ce0),
    .RoundKey_6_q0(RoundKey_6_q0),
    .RoundKey_7_address0(RoundKey_7_address0),
    .RoundKey_7_ce0(RoundKey_7_ce0),
    .RoundKey_7_q0(RoundKey_7_q0),
    .RoundKey_8_address0(RoundKey_8_address0),
    .RoundKey_8_ce0(RoundKey_8_ce0),
    .RoundKey_8_q0(RoundKey_8_q0),
    .RoundKey_9_address0(RoundKey_9_address0),
    .RoundKey_9_ce0(RoundKey_9_ce0),
    .RoundKey_9_q0(RoundKey_9_q0),
    .RoundKey_10_address0(RoundKey_10_address0),
    .RoundKey_10_ce0(RoundKey_10_ce0),
    .RoundKey_10_q0(RoundKey_10_q0),
    .RoundKey_11_address0(RoundKey_11_address0),
    .RoundKey_11_ce0(RoundKey_11_ce0),
    .RoundKey_11_q0(RoundKey_11_q0),
    .RoundKey_12_address0(RoundKey_12_address0),
    .RoundKey_12_ce0(RoundKey_12_ce0),
    .RoundKey_12_q0(RoundKey_12_q0),
    .RoundKey_13_address0(RoundKey_13_address0),
    .RoundKey_13_ce0(RoundKey_13_ce0),
    .RoundKey_13_q0(RoundKey_13_q0),
    .RoundKey_14_address0(RoundKey_14_address0),
    .RoundKey_14_ce0(RoundKey_14_ce0),
    .RoundKey_14_q0(RoundKey_14_q0),
    .RoundKey_15_address0(RoundKey_15_address0),
    .RoundKey_15_ce0(RoundKey_15_ce0),
    .RoundKey_15_q0(RoundKey_15_q0));

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
// The signal of port state_0_0_i
reg [7: 0] AESL_REG_state_0_0_i = 0;
assign state_0_0_i = AESL_REG_state_0_0_i;
always @(posedge AESL_clock)
begin
    if(state_0_0_o_ap_vld === 1)
        AESL_REG_state_0_0_i <= state_0_0_o;
end

initial begin : read_file_process_state_0_0
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [183  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_state_0_0,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_state_0_0);
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
            ret = $sscanf(token, "0x%x", AESL_REG_state_0_0_i);
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

reg AESL_REG_state_0_0_o_ap_vld = 0;
// The signal of port state_0_0_o
reg [7: 0] AESL_REG_state_0_0_o = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_state_0_0_o = 0; 
    else if(state_0_0_o_ap_vld) begin
        AESL_REG_state_0_0_o <= state_0_0_o;
        AESL_REG_state_0_0_o_ap_vld <= 1;
    end
end 

initial begin : write_file_process_state_0_0
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer state_0_0_count;
    reg [183:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_state_0_0_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_state_0_0_out_wrapc);
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
        if(AESL_REG_state_0_0_o_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_state_0_0_o);
        AESL_REG_state_0_0_o_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


// The signal of port state_0_1_i
reg [7: 0] AESL_REG_state_0_1_i = 0;
assign state_0_1_i = AESL_REG_state_0_1_i;
always @(posedge AESL_clock)
begin
    if(state_0_1_o_ap_vld === 1)
        AESL_REG_state_0_1_i <= state_0_1_o;
end

initial begin : read_file_process_state_0_1
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [183  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_state_0_1,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_state_0_1);
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
            ret = $sscanf(token, "0x%x", AESL_REG_state_0_1_i);
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

reg AESL_REG_state_0_1_o_ap_vld = 0;
// The signal of port state_0_1_o
reg [7: 0] AESL_REG_state_0_1_o = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_state_0_1_o = 0; 
    else if(state_0_1_o_ap_vld) begin
        AESL_REG_state_0_1_o <= state_0_1_o;
        AESL_REG_state_0_1_o_ap_vld <= 1;
    end
end 

initial begin : write_file_process_state_0_1
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer state_0_1_count;
    reg [183:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_state_0_1_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_state_0_1_out_wrapc);
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
        if(AESL_REG_state_0_1_o_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_state_0_1_o);
        AESL_REG_state_0_1_o_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


// The signal of port state_0_2_i
reg [7: 0] AESL_REG_state_0_2_i = 0;
assign state_0_2_i = AESL_REG_state_0_2_i;
always @(posedge AESL_clock)
begin
    if(state_0_2_o_ap_vld === 1)
        AESL_REG_state_0_2_i <= state_0_2_o;
end

initial begin : read_file_process_state_0_2
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [183  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_state_0_2,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_state_0_2);
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
            ret = $sscanf(token, "0x%x", AESL_REG_state_0_2_i);
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

reg AESL_REG_state_0_2_o_ap_vld = 0;
// The signal of port state_0_2_o
reg [7: 0] AESL_REG_state_0_2_o = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_state_0_2_o = 0; 
    else if(state_0_2_o_ap_vld) begin
        AESL_REG_state_0_2_o <= state_0_2_o;
        AESL_REG_state_0_2_o_ap_vld <= 1;
    end
end 

initial begin : write_file_process_state_0_2
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer state_0_2_count;
    reg [183:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_state_0_2_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_state_0_2_out_wrapc);
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
        if(AESL_REG_state_0_2_o_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_state_0_2_o);
        AESL_REG_state_0_2_o_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


// The signal of port state_0_3_i
reg [7: 0] AESL_REG_state_0_3_i = 0;
assign state_0_3_i = AESL_REG_state_0_3_i;
always @(posedge AESL_clock)
begin
    if(state_0_3_o_ap_vld === 1)
        AESL_REG_state_0_3_i <= state_0_3_o;
end

initial begin : read_file_process_state_0_3
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [183  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_state_0_3,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_state_0_3);
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
            ret = $sscanf(token, "0x%x", AESL_REG_state_0_3_i);
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

reg AESL_REG_state_0_3_o_ap_vld = 0;
// The signal of port state_0_3_o
reg [7: 0] AESL_REG_state_0_3_o = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_state_0_3_o = 0; 
    else if(state_0_3_o_ap_vld) begin
        AESL_REG_state_0_3_o <= state_0_3_o;
        AESL_REG_state_0_3_o_ap_vld <= 1;
    end
end 

initial begin : write_file_process_state_0_3
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer state_0_3_count;
    reg [183:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_state_0_3_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_state_0_3_out_wrapc);
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
        if(AESL_REG_state_0_3_o_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_state_0_3_o);
        AESL_REG_state_0_3_o_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


// The signal of port state_1_0_i
reg [7: 0] AESL_REG_state_1_0_i = 0;
assign state_1_0_i = AESL_REG_state_1_0_i;
always @(posedge AESL_clock)
begin
    if(state_1_0_o_ap_vld === 1)
        AESL_REG_state_1_0_i <= state_1_0_o;
end

initial begin : read_file_process_state_1_0
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [183  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_state_1_0,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_state_1_0);
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
            ret = $sscanf(token, "0x%x", AESL_REG_state_1_0_i);
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

reg AESL_REG_state_1_0_o_ap_vld = 0;
// The signal of port state_1_0_o
reg [7: 0] AESL_REG_state_1_0_o = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_state_1_0_o = 0; 
    else if(state_1_0_o_ap_vld) begin
        AESL_REG_state_1_0_o <= state_1_0_o;
        AESL_REG_state_1_0_o_ap_vld <= 1;
    end
end 

initial begin : write_file_process_state_1_0
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer state_1_0_count;
    reg [183:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_state_1_0_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_state_1_0_out_wrapc);
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
        if(AESL_REG_state_1_0_o_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_state_1_0_o);
        AESL_REG_state_1_0_o_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


// The signal of port state_1_1_i
reg [7: 0] AESL_REG_state_1_1_i = 0;
assign state_1_1_i = AESL_REG_state_1_1_i;
always @(posedge AESL_clock)
begin
    if(state_1_1_o_ap_vld === 1)
        AESL_REG_state_1_1_i <= state_1_1_o;
end

initial begin : read_file_process_state_1_1
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [183  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_state_1_1,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_state_1_1);
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
            ret = $sscanf(token, "0x%x", AESL_REG_state_1_1_i);
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

reg AESL_REG_state_1_1_o_ap_vld = 0;
// The signal of port state_1_1_o
reg [7: 0] AESL_REG_state_1_1_o = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_state_1_1_o = 0; 
    else if(state_1_1_o_ap_vld) begin
        AESL_REG_state_1_1_o <= state_1_1_o;
        AESL_REG_state_1_1_o_ap_vld <= 1;
    end
end 

initial begin : write_file_process_state_1_1
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer state_1_1_count;
    reg [183:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_state_1_1_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_state_1_1_out_wrapc);
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
        if(AESL_REG_state_1_1_o_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_state_1_1_o);
        AESL_REG_state_1_1_o_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


// The signal of port state_1_2_i
reg [7: 0] AESL_REG_state_1_2_i = 0;
assign state_1_2_i = AESL_REG_state_1_2_i;
always @(posedge AESL_clock)
begin
    if(state_1_2_o_ap_vld === 1)
        AESL_REG_state_1_2_i <= state_1_2_o;
end

initial begin : read_file_process_state_1_2
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [183  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_state_1_2,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_state_1_2);
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
            ret = $sscanf(token, "0x%x", AESL_REG_state_1_2_i);
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

reg AESL_REG_state_1_2_o_ap_vld = 0;
// The signal of port state_1_2_o
reg [7: 0] AESL_REG_state_1_2_o = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_state_1_2_o = 0; 
    else if(state_1_2_o_ap_vld) begin
        AESL_REG_state_1_2_o <= state_1_2_o;
        AESL_REG_state_1_2_o_ap_vld <= 1;
    end
end 

initial begin : write_file_process_state_1_2
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer state_1_2_count;
    reg [183:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_state_1_2_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_state_1_2_out_wrapc);
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
        if(AESL_REG_state_1_2_o_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_state_1_2_o);
        AESL_REG_state_1_2_o_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


// The signal of port state_1_3_i
reg [7: 0] AESL_REG_state_1_3_i = 0;
assign state_1_3_i = AESL_REG_state_1_3_i;
always @(posedge AESL_clock)
begin
    if(state_1_3_o_ap_vld === 1)
        AESL_REG_state_1_3_i <= state_1_3_o;
end

initial begin : read_file_process_state_1_3
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [183  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_state_1_3,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_state_1_3);
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
            ret = $sscanf(token, "0x%x", AESL_REG_state_1_3_i);
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

reg AESL_REG_state_1_3_o_ap_vld = 0;
// The signal of port state_1_3_o
reg [7: 0] AESL_REG_state_1_3_o = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_state_1_3_o = 0; 
    else if(state_1_3_o_ap_vld) begin
        AESL_REG_state_1_3_o <= state_1_3_o;
        AESL_REG_state_1_3_o_ap_vld <= 1;
    end
end 

initial begin : write_file_process_state_1_3
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer state_1_3_count;
    reg [183:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_state_1_3_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_state_1_3_out_wrapc);
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
        if(AESL_REG_state_1_3_o_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_state_1_3_o);
        AESL_REG_state_1_3_o_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


// The signal of port state_2_0_i
reg [7: 0] AESL_REG_state_2_0_i = 0;
assign state_2_0_i = AESL_REG_state_2_0_i;
always @(posedge AESL_clock)
begin
    if(state_2_0_o_ap_vld === 1)
        AESL_REG_state_2_0_i <= state_2_0_o;
end

initial begin : read_file_process_state_2_0
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [183  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_state_2_0,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_state_2_0);
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
            ret = $sscanf(token, "0x%x", AESL_REG_state_2_0_i);
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

reg AESL_REG_state_2_0_o_ap_vld = 0;
// The signal of port state_2_0_o
reg [7: 0] AESL_REG_state_2_0_o = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_state_2_0_o = 0; 
    else if(state_2_0_o_ap_vld) begin
        AESL_REG_state_2_0_o <= state_2_0_o;
        AESL_REG_state_2_0_o_ap_vld <= 1;
    end
end 

initial begin : write_file_process_state_2_0
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer state_2_0_count;
    reg [183:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_state_2_0_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_state_2_0_out_wrapc);
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
        if(AESL_REG_state_2_0_o_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_state_2_0_o);
        AESL_REG_state_2_0_o_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


// The signal of port state_2_1_i
reg [7: 0] AESL_REG_state_2_1_i = 0;
assign state_2_1_i = AESL_REG_state_2_1_i;
always @(posedge AESL_clock)
begin
    if(state_2_1_o_ap_vld === 1)
        AESL_REG_state_2_1_i <= state_2_1_o;
end

initial begin : read_file_process_state_2_1
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [183  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_state_2_1,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_state_2_1);
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
            ret = $sscanf(token, "0x%x", AESL_REG_state_2_1_i);
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

reg AESL_REG_state_2_1_o_ap_vld = 0;
// The signal of port state_2_1_o
reg [7: 0] AESL_REG_state_2_1_o = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_state_2_1_o = 0; 
    else if(state_2_1_o_ap_vld) begin
        AESL_REG_state_2_1_o <= state_2_1_o;
        AESL_REG_state_2_1_o_ap_vld <= 1;
    end
end 

initial begin : write_file_process_state_2_1
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer state_2_1_count;
    reg [183:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_state_2_1_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_state_2_1_out_wrapc);
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
        if(AESL_REG_state_2_1_o_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_state_2_1_o);
        AESL_REG_state_2_1_o_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


// The signal of port state_2_2_i
reg [7: 0] AESL_REG_state_2_2_i = 0;
assign state_2_2_i = AESL_REG_state_2_2_i;
always @(posedge AESL_clock)
begin
    if(state_2_2_o_ap_vld === 1)
        AESL_REG_state_2_2_i <= state_2_2_o;
end

initial begin : read_file_process_state_2_2
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [183  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_state_2_2,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_state_2_2);
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
            ret = $sscanf(token, "0x%x", AESL_REG_state_2_2_i);
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

reg AESL_REG_state_2_2_o_ap_vld = 0;
// The signal of port state_2_2_o
reg [7: 0] AESL_REG_state_2_2_o = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_state_2_2_o = 0; 
    else if(state_2_2_o_ap_vld) begin
        AESL_REG_state_2_2_o <= state_2_2_o;
        AESL_REG_state_2_2_o_ap_vld <= 1;
    end
end 

initial begin : write_file_process_state_2_2
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer state_2_2_count;
    reg [183:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_state_2_2_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_state_2_2_out_wrapc);
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
        if(AESL_REG_state_2_2_o_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_state_2_2_o);
        AESL_REG_state_2_2_o_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


// The signal of port state_2_3_i
reg [7: 0] AESL_REG_state_2_3_i = 0;
assign state_2_3_i = AESL_REG_state_2_3_i;
always @(posedge AESL_clock)
begin
    if(state_2_3_o_ap_vld === 1)
        AESL_REG_state_2_3_i <= state_2_3_o;
end

initial begin : read_file_process_state_2_3
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [183  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_state_2_3,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_state_2_3);
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
            ret = $sscanf(token, "0x%x", AESL_REG_state_2_3_i);
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

reg AESL_REG_state_2_3_o_ap_vld = 0;
// The signal of port state_2_3_o
reg [7: 0] AESL_REG_state_2_3_o = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_state_2_3_o = 0; 
    else if(state_2_3_o_ap_vld) begin
        AESL_REG_state_2_3_o <= state_2_3_o;
        AESL_REG_state_2_3_o_ap_vld <= 1;
    end
end 

initial begin : write_file_process_state_2_3
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer state_2_3_count;
    reg [183:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_state_2_3_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_state_2_3_out_wrapc);
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
        if(AESL_REG_state_2_3_o_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_state_2_3_o);
        AESL_REG_state_2_3_o_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


// The signal of port state_3_0_i
reg [7: 0] AESL_REG_state_3_0_i = 0;
assign state_3_0_i = AESL_REG_state_3_0_i;
always @(posedge AESL_clock)
begin
    if(state_3_0_o_ap_vld === 1)
        AESL_REG_state_3_0_i <= state_3_0_o;
end

initial begin : read_file_process_state_3_0
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [183  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_state_3_0,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_state_3_0);
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
            ret = $sscanf(token, "0x%x", AESL_REG_state_3_0_i);
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

reg AESL_REG_state_3_0_o_ap_vld = 0;
// The signal of port state_3_0_o
reg [7: 0] AESL_REG_state_3_0_o = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_state_3_0_o = 0; 
    else if(state_3_0_o_ap_vld) begin
        AESL_REG_state_3_0_o <= state_3_0_o;
        AESL_REG_state_3_0_o_ap_vld <= 1;
    end
end 

initial begin : write_file_process_state_3_0
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer state_3_0_count;
    reg [183:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_state_3_0_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_state_3_0_out_wrapc);
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
        if(AESL_REG_state_3_0_o_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_state_3_0_o);
        AESL_REG_state_3_0_o_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


// The signal of port state_3_1_i
reg [7: 0] AESL_REG_state_3_1_i = 0;
assign state_3_1_i = AESL_REG_state_3_1_i;
always @(posedge AESL_clock)
begin
    if(state_3_1_o_ap_vld === 1)
        AESL_REG_state_3_1_i <= state_3_1_o;
end

initial begin : read_file_process_state_3_1
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [183  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_state_3_1,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_state_3_1);
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
            ret = $sscanf(token, "0x%x", AESL_REG_state_3_1_i);
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

reg AESL_REG_state_3_1_o_ap_vld = 0;
// The signal of port state_3_1_o
reg [7: 0] AESL_REG_state_3_1_o = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_state_3_1_o = 0; 
    else if(state_3_1_o_ap_vld) begin
        AESL_REG_state_3_1_o <= state_3_1_o;
        AESL_REG_state_3_1_o_ap_vld <= 1;
    end
end 

initial begin : write_file_process_state_3_1
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer state_3_1_count;
    reg [183:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_state_3_1_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_state_3_1_out_wrapc);
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
        if(AESL_REG_state_3_1_o_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_state_3_1_o);
        AESL_REG_state_3_1_o_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


// The signal of port state_3_2_i
reg [7: 0] AESL_REG_state_3_2_i = 0;
assign state_3_2_i = AESL_REG_state_3_2_i;
always @(posedge AESL_clock)
begin
    if(state_3_2_o_ap_vld === 1)
        AESL_REG_state_3_2_i <= state_3_2_o;
end

initial begin : read_file_process_state_3_2
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [183  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_state_3_2,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_state_3_2);
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
            ret = $sscanf(token, "0x%x", AESL_REG_state_3_2_i);
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

reg AESL_REG_state_3_2_o_ap_vld = 0;
// The signal of port state_3_2_o
reg [7: 0] AESL_REG_state_3_2_o = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_state_3_2_o = 0; 
    else if(state_3_2_o_ap_vld) begin
        AESL_REG_state_3_2_o <= state_3_2_o;
        AESL_REG_state_3_2_o_ap_vld <= 1;
    end
end 

initial begin : write_file_process_state_3_2
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer state_3_2_count;
    reg [183:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_state_3_2_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_state_3_2_out_wrapc);
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
        if(AESL_REG_state_3_2_o_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_state_3_2_o);
        AESL_REG_state_3_2_o_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


// The signal of port state_3_3_i
reg [7: 0] AESL_REG_state_3_3_i = 0;
assign state_3_3_i = AESL_REG_state_3_3_i;
always @(posedge AESL_clock)
begin
    if(state_3_3_o_ap_vld === 1)
        AESL_REG_state_3_3_i <= state_3_3_o;
end

initial begin : read_file_process_state_3_3
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [183  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_state_3_3,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_state_3_3);
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
            ret = $sscanf(token, "0x%x", AESL_REG_state_3_3_i);
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

reg AESL_REG_state_3_3_o_ap_vld = 0;
// The signal of port state_3_3_o
reg [7: 0] AESL_REG_state_3_3_o = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_state_3_3_o = 0; 
    else if(state_3_3_o_ap_vld) begin
        AESL_REG_state_3_3_o <= state_3_3_o;
        AESL_REG_state_3_3_o_ap_vld <= 1;
    end
end 

initial begin : write_file_process_state_3_3
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer state_3_3_count;
    reg [183:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_state_3_3_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_state_3_3_out_wrapc);
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
        if(AESL_REG_state_3_3_o_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_state_3_3_o);
        AESL_REG_state_3_3_o_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


//------------------------arrayRoundKey_0 Instantiation--------------

// The input and output of arrayRoundKey_0
wire    arrayRoundKey_0_ce0, arrayRoundKey_0_ce1;
wire    arrayRoundKey_0_we0, arrayRoundKey_0_we1;
wire    [3 : 0]    arrayRoundKey_0_address0, arrayRoundKey_0_address1;
wire    [7 : 0]    arrayRoundKey_0_din0, arrayRoundKey_0_din1;
wire    [7 : 0]    arrayRoundKey_0_dout0, arrayRoundKey_0_dout1;
wire    arrayRoundKey_0_ready;
wire    arrayRoundKey_0_done;

`AESL_MEM_RoundKey_0 `AESL_MEM_INST_RoundKey_0(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayRoundKey_0_ce0),
    .we0        (arrayRoundKey_0_we0),
    .address0   (arrayRoundKey_0_address0),
    .din0       (arrayRoundKey_0_din0),
    .dout0      (arrayRoundKey_0_dout0),
    .ce1        (arrayRoundKey_0_ce1),
    .we1        (arrayRoundKey_0_we1),
    .address1   (arrayRoundKey_0_address1),
    .din1       (arrayRoundKey_0_din1),
    .dout1      (arrayRoundKey_0_dout1),
    .ready      (arrayRoundKey_0_ready),
    .done    (arrayRoundKey_0_done)
);

// Assignment between dut and arrayRoundKey_0
assign arrayRoundKey_0_address0 = RoundKey_0_address0;
assign arrayRoundKey_0_ce0 = RoundKey_0_ce0;
assign RoundKey_0_q0 = arrayRoundKey_0_dout0;
assign arrayRoundKey_0_we0 = 0;
assign arrayRoundKey_0_din0 = 0;
assign arrayRoundKey_0_we1 = 0;
assign arrayRoundKey_0_din1 = 0;
assign arrayRoundKey_0_ready=    ready;
assign arrayRoundKey_0_done = 0;


//------------------------arrayRoundKey_1 Instantiation--------------

// The input and output of arrayRoundKey_1
wire    arrayRoundKey_1_ce0, arrayRoundKey_1_ce1;
wire    arrayRoundKey_1_we0, arrayRoundKey_1_we1;
wire    [3 : 0]    arrayRoundKey_1_address0, arrayRoundKey_1_address1;
wire    [7 : 0]    arrayRoundKey_1_din0, arrayRoundKey_1_din1;
wire    [7 : 0]    arrayRoundKey_1_dout0, arrayRoundKey_1_dout1;
wire    arrayRoundKey_1_ready;
wire    arrayRoundKey_1_done;

`AESL_MEM_RoundKey_1 `AESL_MEM_INST_RoundKey_1(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayRoundKey_1_ce0),
    .we0        (arrayRoundKey_1_we0),
    .address0   (arrayRoundKey_1_address0),
    .din0       (arrayRoundKey_1_din0),
    .dout0      (arrayRoundKey_1_dout0),
    .ce1        (arrayRoundKey_1_ce1),
    .we1        (arrayRoundKey_1_we1),
    .address1   (arrayRoundKey_1_address1),
    .din1       (arrayRoundKey_1_din1),
    .dout1      (arrayRoundKey_1_dout1),
    .ready      (arrayRoundKey_1_ready),
    .done    (arrayRoundKey_1_done)
);

// Assignment between dut and arrayRoundKey_1
assign arrayRoundKey_1_address0 = RoundKey_1_address0;
assign arrayRoundKey_1_ce0 = RoundKey_1_ce0;
assign RoundKey_1_q0 = arrayRoundKey_1_dout0;
assign arrayRoundKey_1_we0 = 0;
assign arrayRoundKey_1_din0 = 0;
assign arrayRoundKey_1_we1 = 0;
assign arrayRoundKey_1_din1 = 0;
assign arrayRoundKey_1_ready=    ready;
assign arrayRoundKey_1_done = 0;


//------------------------arrayRoundKey_2 Instantiation--------------

// The input and output of arrayRoundKey_2
wire    arrayRoundKey_2_ce0, arrayRoundKey_2_ce1;
wire    arrayRoundKey_2_we0, arrayRoundKey_2_we1;
wire    [3 : 0]    arrayRoundKey_2_address0, arrayRoundKey_2_address1;
wire    [7 : 0]    arrayRoundKey_2_din0, arrayRoundKey_2_din1;
wire    [7 : 0]    arrayRoundKey_2_dout0, arrayRoundKey_2_dout1;
wire    arrayRoundKey_2_ready;
wire    arrayRoundKey_2_done;

`AESL_MEM_RoundKey_2 `AESL_MEM_INST_RoundKey_2(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayRoundKey_2_ce0),
    .we0        (arrayRoundKey_2_we0),
    .address0   (arrayRoundKey_2_address0),
    .din0       (arrayRoundKey_2_din0),
    .dout0      (arrayRoundKey_2_dout0),
    .ce1        (arrayRoundKey_2_ce1),
    .we1        (arrayRoundKey_2_we1),
    .address1   (arrayRoundKey_2_address1),
    .din1       (arrayRoundKey_2_din1),
    .dout1      (arrayRoundKey_2_dout1),
    .ready      (arrayRoundKey_2_ready),
    .done    (arrayRoundKey_2_done)
);

// Assignment between dut and arrayRoundKey_2
assign arrayRoundKey_2_address0 = RoundKey_2_address0;
assign arrayRoundKey_2_ce0 = RoundKey_2_ce0;
assign RoundKey_2_q0 = arrayRoundKey_2_dout0;
assign arrayRoundKey_2_we0 = 0;
assign arrayRoundKey_2_din0 = 0;
assign arrayRoundKey_2_we1 = 0;
assign arrayRoundKey_2_din1 = 0;
assign arrayRoundKey_2_ready=    ready;
assign arrayRoundKey_2_done = 0;


//------------------------arrayRoundKey_3 Instantiation--------------

// The input and output of arrayRoundKey_3
wire    arrayRoundKey_3_ce0, arrayRoundKey_3_ce1;
wire    arrayRoundKey_3_we0, arrayRoundKey_3_we1;
wire    [3 : 0]    arrayRoundKey_3_address0, arrayRoundKey_3_address1;
wire    [7 : 0]    arrayRoundKey_3_din0, arrayRoundKey_3_din1;
wire    [7 : 0]    arrayRoundKey_3_dout0, arrayRoundKey_3_dout1;
wire    arrayRoundKey_3_ready;
wire    arrayRoundKey_3_done;

`AESL_MEM_RoundKey_3 `AESL_MEM_INST_RoundKey_3(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayRoundKey_3_ce0),
    .we0        (arrayRoundKey_3_we0),
    .address0   (arrayRoundKey_3_address0),
    .din0       (arrayRoundKey_3_din0),
    .dout0      (arrayRoundKey_3_dout0),
    .ce1        (arrayRoundKey_3_ce1),
    .we1        (arrayRoundKey_3_we1),
    .address1   (arrayRoundKey_3_address1),
    .din1       (arrayRoundKey_3_din1),
    .dout1      (arrayRoundKey_3_dout1),
    .ready      (arrayRoundKey_3_ready),
    .done    (arrayRoundKey_3_done)
);

// Assignment between dut and arrayRoundKey_3
assign arrayRoundKey_3_address0 = RoundKey_3_address0;
assign arrayRoundKey_3_ce0 = RoundKey_3_ce0;
assign RoundKey_3_q0 = arrayRoundKey_3_dout0;
assign arrayRoundKey_3_we0 = 0;
assign arrayRoundKey_3_din0 = 0;
assign arrayRoundKey_3_we1 = 0;
assign arrayRoundKey_3_din1 = 0;
assign arrayRoundKey_3_ready=    ready;
assign arrayRoundKey_3_done = 0;


//------------------------arrayRoundKey_4 Instantiation--------------

// The input and output of arrayRoundKey_4
wire    arrayRoundKey_4_ce0, arrayRoundKey_4_ce1;
wire    arrayRoundKey_4_we0, arrayRoundKey_4_we1;
wire    [3 : 0]    arrayRoundKey_4_address0, arrayRoundKey_4_address1;
wire    [7 : 0]    arrayRoundKey_4_din0, arrayRoundKey_4_din1;
wire    [7 : 0]    arrayRoundKey_4_dout0, arrayRoundKey_4_dout1;
wire    arrayRoundKey_4_ready;
wire    arrayRoundKey_4_done;

`AESL_MEM_RoundKey_4 `AESL_MEM_INST_RoundKey_4(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayRoundKey_4_ce0),
    .we0        (arrayRoundKey_4_we0),
    .address0   (arrayRoundKey_4_address0),
    .din0       (arrayRoundKey_4_din0),
    .dout0      (arrayRoundKey_4_dout0),
    .ce1        (arrayRoundKey_4_ce1),
    .we1        (arrayRoundKey_4_we1),
    .address1   (arrayRoundKey_4_address1),
    .din1       (arrayRoundKey_4_din1),
    .dout1      (arrayRoundKey_4_dout1),
    .ready      (arrayRoundKey_4_ready),
    .done    (arrayRoundKey_4_done)
);

// Assignment between dut and arrayRoundKey_4
assign arrayRoundKey_4_address0 = RoundKey_4_address0;
assign arrayRoundKey_4_ce0 = RoundKey_4_ce0;
assign RoundKey_4_q0 = arrayRoundKey_4_dout0;
assign arrayRoundKey_4_we0 = 0;
assign arrayRoundKey_4_din0 = 0;
assign arrayRoundKey_4_we1 = 0;
assign arrayRoundKey_4_din1 = 0;
assign arrayRoundKey_4_ready=    ready;
assign arrayRoundKey_4_done = 0;


//------------------------arrayRoundKey_5 Instantiation--------------

// The input and output of arrayRoundKey_5
wire    arrayRoundKey_5_ce0, arrayRoundKey_5_ce1;
wire    arrayRoundKey_5_we0, arrayRoundKey_5_we1;
wire    [3 : 0]    arrayRoundKey_5_address0, arrayRoundKey_5_address1;
wire    [7 : 0]    arrayRoundKey_5_din0, arrayRoundKey_5_din1;
wire    [7 : 0]    arrayRoundKey_5_dout0, arrayRoundKey_5_dout1;
wire    arrayRoundKey_5_ready;
wire    arrayRoundKey_5_done;

`AESL_MEM_RoundKey_5 `AESL_MEM_INST_RoundKey_5(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayRoundKey_5_ce0),
    .we0        (arrayRoundKey_5_we0),
    .address0   (arrayRoundKey_5_address0),
    .din0       (arrayRoundKey_5_din0),
    .dout0      (arrayRoundKey_5_dout0),
    .ce1        (arrayRoundKey_5_ce1),
    .we1        (arrayRoundKey_5_we1),
    .address1   (arrayRoundKey_5_address1),
    .din1       (arrayRoundKey_5_din1),
    .dout1      (arrayRoundKey_5_dout1),
    .ready      (arrayRoundKey_5_ready),
    .done    (arrayRoundKey_5_done)
);

// Assignment between dut and arrayRoundKey_5
assign arrayRoundKey_5_address0 = RoundKey_5_address0;
assign arrayRoundKey_5_ce0 = RoundKey_5_ce0;
assign RoundKey_5_q0 = arrayRoundKey_5_dout0;
assign arrayRoundKey_5_we0 = 0;
assign arrayRoundKey_5_din0 = 0;
assign arrayRoundKey_5_we1 = 0;
assign arrayRoundKey_5_din1 = 0;
assign arrayRoundKey_5_ready=    ready;
assign arrayRoundKey_5_done = 0;


//------------------------arrayRoundKey_6 Instantiation--------------

// The input and output of arrayRoundKey_6
wire    arrayRoundKey_6_ce0, arrayRoundKey_6_ce1;
wire    arrayRoundKey_6_we0, arrayRoundKey_6_we1;
wire    [3 : 0]    arrayRoundKey_6_address0, arrayRoundKey_6_address1;
wire    [7 : 0]    arrayRoundKey_6_din0, arrayRoundKey_6_din1;
wire    [7 : 0]    arrayRoundKey_6_dout0, arrayRoundKey_6_dout1;
wire    arrayRoundKey_6_ready;
wire    arrayRoundKey_6_done;

`AESL_MEM_RoundKey_6 `AESL_MEM_INST_RoundKey_6(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayRoundKey_6_ce0),
    .we0        (arrayRoundKey_6_we0),
    .address0   (arrayRoundKey_6_address0),
    .din0       (arrayRoundKey_6_din0),
    .dout0      (arrayRoundKey_6_dout0),
    .ce1        (arrayRoundKey_6_ce1),
    .we1        (arrayRoundKey_6_we1),
    .address1   (arrayRoundKey_6_address1),
    .din1       (arrayRoundKey_6_din1),
    .dout1      (arrayRoundKey_6_dout1),
    .ready      (arrayRoundKey_6_ready),
    .done    (arrayRoundKey_6_done)
);

// Assignment between dut and arrayRoundKey_6
assign arrayRoundKey_6_address0 = RoundKey_6_address0;
assign arrayRoundKey_6_ce0 = RoundKey_6_ce0;
assign RoundKey_6_q0 = arrayRoundKey_6_dout0;
assign arrayRoundKey_6_we0 = 0;
assign arrayRoundKey_6_din0 = 0;
assign arrayRoundKey_6_we1 = 0;
assign arrayRoundKey_6_din1 = 0;
assign arrayRoundKey_6_ready=    ready;
assign arrayRoundKey_6_done = 0;


//------------------------arrayRoundKey_7 Instantiation--------------

// The input and output of arrayRoundKey_7
wire    arrayRoundKey_7_ce0, arrayRoundKey_7_ce1;
wire    arrayRoundKey_7_we0, arrayRoundKey_7_we1;
wire    [3 : 0]    arrayRoundKey_7_address0, arrayRoundKey_7_address1;
wire    [7 : 0]    arrayRoundKey_7_din0, arrayRoundKey_7_din1;
wire    [7 : 0]    arrayRoundKey_7_dout0, arrayRoundKey_7_dout1;
wire    arrayRoundKey_7_ready;
wire    arrayRoundKey_7_done;

`AESL_MEM_RoundKey_7 `AESL_MEM_INST_RoundKey_7(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayRoundKey_7_ce0),
    .we0        (arrayRoundKey_7_we0),
    .address0   (arrayRoundKey_7_address0),
    .din0       (arrayRoundKey_7_din0),
    .dout0      (arrayRoundKey_7_dout0),
    .ce1        (arrayRoundKey_7_ce1),
    .we1        (arrayRoundKey_7_we1),
    .address1   (arrayRoundKey_7_address1),
    .din1       (arrayRoundKey_7_din1),
    .dout1      (arrayRoundKey_7_dout1),
    .ready      (arrayRoundKey_7_ready),
    .done    (arrayRoundKey_7_done)
);

// Assignment between dut and arrayRoundKey_7
assign arrayRoundKey_7_address0 = RoundKey_7_address0;
assign arrayRoundKey_7_ce0 = RoundKey_7_ce0;
assign RoundKey_7_q0 = arrayRoundKey_7_dout0;
assign arrayRoundKey_7_we0 = 0;
assign arrayRoundKey_7_din0 = 0;
assign arrayRoundKey_7_we1 = 0;
assign arrayRoundKey_7_din1 = 0;
assign arrayRoundKey_7_ready=    ready;
assign arrayRoundKey_7_done = 0;


//------------------------arrayRoundKey_8 Instantiation--------------

// The input and output of arrayRoundKey_8
wire    arrayRoundKey_8_ce0, arrayRoundKey_8_ce1;
wire    arrayRoundKey_8_we0, arrayRoundKey_8_we1;
wire    [3 : 0]    arrayRoundKey_8_address0, arrayRoundKey_8_address1;
wire    [7 : 0]    arrayRoundKey_8_din0, arrayRoundKey_8_din1;
wire    [7 : 0]    arrayRoundKey_8_dout0, arrayRoundKey_8_dout1;
wire    arrayRoundKey_8_ready;
wire    arrayRoundKey_8_done;

`AESL_MEM_RoundKey_8 `AESL_MEM_INST_RoundKey_8(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayRoundKey_8_ce0),
    .we0        (arrayRoundKey_8_we0),
    .address0   (arrayRoundKey_8_address0),
    .din0       (arrayRoundKey_8_din0),
    .dout0      (arrayRoundKey_8_dout0),
    .ce1        (arrayRoundKey_8_ce1),
    .we1        (arrayRoundKey_8_we1),
    .address1   (arrayRoundKey_8_address1),
    .din1       (arrayRoundKey_8_din1),
    .dout1      (arrayRoundKey_8_dout1),
    .ready      (arrayRoundKey_8_ready),
    .done    (arrayRoundKey_8_done)
);

// Assignment between dut and arrayRoundKey_8
assign arrayRoundKey_8_address0 = RoundKey_8_address0;
assign arrayRoundKey_8_ce0 = RoundKey_8_ce0;
assign RoundKey_8_q0 = arrayRoundKey_8_dout0;
assign arrayRoundKey_8_we0 = 0;
assign arrayRoundKey_8_din0 = 0;
assign arrayRoundKey_8_we1 = 0;
assign arrayRoundKey_8_din1 = 0;
assign arrayRoundKey_8_ready=    ready;
assign arrayRoundKey_8_done = 0;


//------------------------arrayRoundKey_9 Instantiation--------------

// The input and output of arrayRoundKey_9
wire    arrayRoundKey_9_ce0, arrayRoundKey_9_ce1;
wire    arrayRoundKey_9_we0, arrayRoundKey_9_we1;
wire    [3 : 0]    arrayRoundKey_9_address0, arrayRoundKey_9_address1;
wire    [7 : 0]    arrayRoundKey_9_din0, arrayRoundKey_9_din1;
wire    [7 : 0]    arrayRoundKey_9_dout0, arrayRoundKey_9_dout1;
wire    arrayRoundKey_9_ready;
wire    arrayRoundKey_9_done;

`AESL_MEM_RoundKey_9 `AESL_MEM_INST_RoundKey_9(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayRoundKey_9_ce0),
    .we0        (arrayRoundKey_9_we0),
    .address0   (arrayRoundKey_9_address0),
    .din0       (arrayRoundKey_9_din0),
    .dout0      (arrayRoundKey_9_dout0),
    .ce1        (arrayRoundKey_9_ce1),
    .we1        (arrayRoundKey_9_we1),
    .address1   (arrayRoundKey_9_address1),
    .din1       (arrayRoundKey_9_din1),
    .dout1      (arrayRoundKey_9_dout1),
    .ready      (arrayRoundKey_9_ready),
    .done    (arrayRoundKey_9_done)
);

// Assignment between dut and arrayRoundKey_9
assign arrayRoundKey_9_address0 = RoundKey_9_address0;
assign arrayRoundKey_9_ce0 = RoundKey_9_ce0;
assign RoundKey_9_q0 = arrayRoundKey_9_dout0;
assign arrayRoundKey_9_we0 = 0;
assign arrayRoundKey_9_din0 = 0;
assign arrayRoundKey_9_we1 = 0;
assign arrayRoundKey_9_din1 = 0;
assign arrayRoundKey_9_ready=    ready;
assign arrayRoundKey_9_done = 0;


//------------------------arrayRoundKey_10 Instantiation--------------

// The input and output of arrayRoundKey_10
wire    arrayRoundKey_10_ce0, arrayRoundKey_10_ce1;
wire    arrayRoundKey_10_we0, arrayRoundKey_10_we1;
wire    [3 : 0]    arrayRoundKey_10_address0, arrayRoundKey_10_address1;
wire    [7 : 0]    arrayRoundKey_10_din0, arrayRoundKey_10_din1;
wire    [7 : 0]    arrayRoundKey_10_dout0, arrayRoundKey_10_dout1;
wire    arrayRoundKey_10_ready;
wire    arrayRoundKey_10_done;

`AESL_MEM_RoundKey_10 `AESL_MEM_INST_RoundKey_10(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayRoundKey_10_ce0),
    .we0        (arrayRoundKey_10_we0),
    .address0   (arrayRoundKey_10_address0),
    .din0       (arrayRoundKey_10_din0),
    .dout0      (arrayRoundKey_10_dout0),
    .ce1        (arrayRoundKey_10_ce1),
    .we1        (arrayRoundKey_10_we1),
    .address1   (arrayRoundKey_10_address1),
    .din1       (arrayRoundKey_10_din1),
    .dout1      (arrayRoundKey_10_dout1),
    .ready      (arrayRoundKey_10_ready),
    .done    (arrayRoundKey_10_done)
);

// Assignment between dut and arrayRoundKey_10
assign arrayRoundKey_10_address0 = RoundKey_10_address0;
assign arrayRoundKey_10_ce0 = RoundKey_10_ce0;
assign RoundKey_10_q0 = arrayRoundKey_10_dout0;
assign arrayRoundKey_10_we0 = 0;
assign arrayRoundKey_10_din0 = 0;
assign arrayRoundKey_10_we1 = 0;
assign arrayRoundKey_10_din1 = 0;
assign arrayRoundKey_10_ready=    ready;
assign arrayRoundKey_10_done = 0;


//------------------------arrayRoundKey_11 Instantiation--------------

// The input and output of arrayRoundKey_11
wire    arrayRoundKey_11_ce0, arrayRoundKey_11_ce1;
wire    arrayRoundKey_11_we0, arrayRoundKey_11_we1;
wire    [3 : 0]    arrayRoundKey_11_address0, arrayRoundKey_11_address1;
wire    [7 : 0]    arrayRoundKey_11_din0, arrayRoundKey_11_din1;
wire    [7 : 0]    arrayRoundKey_11_dout0, arrayRoundKey_11_dout1;
wire    arrayRoundKey_11_ready;
wire    arrayRoundKey_11_done;

`AESL_MEM_RoundKey_11 `AESL_MEM_INST_RoundKey_11(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayRoundKey_11_ce0),
    .we0        (arrayRoundKey_11_we0),
    .address0   (arrayRoundKey_11_address0),
    .din0       (arrayRoundKey_11_din0),
    .dout0      (arrayRoundKey_11_dout0),
    .ce1        (arrayRoundKey_11_ce1),
    .we1        (arrayRoundKey_11_we1),
    .address1   (arrayRoundKey_11_address1),
    .din1       (arrayRoundKey_11_din1),
    .dout1      (arrayRoundKey_11_dout1),
    .ready      (arrayRoundKey_11_ready),
    .done    (arrayRoundKey_11_done)
);

// Assignment between dut and arrayRoundKey_11
assign arrayRoundKey_11_address0 = RoundKey_11_address0;
assign arrayRoundKey_11_ce0 = RoundKey_11_ce0;
assign RoundKey_11_q0 = arrayRoundKey_11_dout0;
assign arrayRoundKey_11_we0 = 0;
assign arrayRoundKey_11_din0 = 0;
assign arrayRoundKey_11_we1 = 0;
assign arrayRoundKey_11_din1 = 0;
assign arrayRoundKey_11_ready=    ready;
assign arrayRoundKey_11_done = 0;


//------------------------arrayRoundKey_12 Instantiation--------------

// The input and output of arrayRoundKey_12
wire    arrayRoundKey_12_ce0, arrayRoundKey_12_ce1;
wire    arrayRoundKey_12_we0, arrayRoundKey_12_we1;
wire    [3 : 0]    arrayRoundKey_12_address0, arrayRoundKey_12_address1;
wire    [7 : 0]    arrayRoundKey_12_din0, arrayRoundKey_12_din1;
wire    [7 : 0]    arrayRoundKey_12_dout0, arrayRoundKey_12_dout1;
wire    arrayRoundKey_12_ready;
wire    arrayRoundKey_12_done;

`AESL_MEM_RoundKey_12 `AESL_MEM_INST_RoundKey_12(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayRoundKey_12_ce0),
    .we0        (arrayRoundKey_12_we0),
    .address0   (arrayRoundKey_12_address0),
    .din0       (arrayRoundKey_12_din0),
    .dout0      (arrayRoundKey_12_dout0),
    .ce1        (arrayRoundKey_12_ce1),
    .we1        (arrayRoundKey_12_we1),
    .address1   (arrayRoundKey_12_address1),
    .din1       (arrayRoundKey_12_din1),
    .dout1      (arrayRoundKey_12_dout1),
    .ready      (arrayRoundKey_12_ready),
    .done    (arrayRoundKey_12_done)
);

// Assignment between dut and arrayRoundKey_12
assign arrayRoundKey_12_address0 = RoundKey_12_address0;
assign arrayRoundKey_12_ce0 = RoundKey_12_ce0;
assign RoundKey_12_q0 = arrayRoundKey_12_dout0;
assign arrayRoundKey_12_we0 = 0;
assign arrayRoundKey_12_din0 = 0;
assign arrayRoundKey_12_we1 = 0;
assign arrayRoundKey_12_din1 = 0;
assign arrayRoundKey_12_ready=    ready;
assign arrayRoundKey_12_done = 0;


//------------------------arrayRoundKey_13 Instantiation--------------

// The input and output of arrayRoundKey_13
wire    arrayRoundKey_13_ce0, arrayRoundKey_13_ce1;
wire    arrayRoundKey_13_we0, arrayRoundKey_13_we1;
wire    [3 : 0]    arrayRoundKey_13_address0, arrayRoundKey_13_address1;
wire    [7 : 0]    arrayRoundKey_13_din0, arrayRoundKey_13_din1;
wire    [7 : 0]    arrayRoundKey_13_dout0, arrayRoundKey_13_dout1;
wire    arrayRoundKey_13_ready;
wire    arrayRoundKey_13_done;

`AESL_MEM_RoundKey_13 `AESL_MEM_INST_RoundKey_13(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayRoundKey_13_ce0),
    .we0        (arrayRoundKey_13_we0),
    .address0   (arrayRoundKey_13_address0),
    .din0       (arrayRoundKey_13_din0),
    .dout0      (arrayRoundKey_13_dout0),
    .ce1        (arrayRoundKey_13_ce1),
    .we1        (arrayRoundKey_13_we1),
    .address1   (arrayRoundKey_13_address1),
    .din1       (arrayRoundKey_13_din1),
    .dout1      (arrayRoundKey_13_dout1),
    .ready      (arrayRoundKey_13_ready),
    .done    (arrayRoundKey_13_done)
);

// Assignment between dut and arrayRoundKey_13
assign arrayRoundKey_13_address0 = RoundKey_13_address0;
assign arrayRoundKey_13_ce0 = RoundKey_13_ce0;
assign RoundKey_13_q0 = arrayRoundKey_13_dout0;
assign arrayRoundKey_13_we0 = 0;
assign arrayRoundKey_13_din0 = 0;
assign arrayRoundKey_13_we1 = 0;
assign arrayRoundKey_13_din1 = 0;
assign arrayRoundKey_13_ready=    ready;
assign arrayRoundKey_13_done = 0;


//------------------------arrayRoundKey_14 Instantiation--------------

// The input and output of arrayRoundKey_14
wire    arrayRoundKey_14_ce0, arrayRoundKey_14_ce1;
wire    arrayRoundKey_14_we0, arrayRoundKey_14_we1;
wire    [3 : 0]    arrayRoundKey_14_address0, arrayRoundKey_14_address1;
wire    [7 : 0]    arrayRoundKey_14_din0, arrayRoundKey_14_din1;
wire    [7 : 0]    arrayRoundKey_14_dout0, arrayRoundKey_14_dout1;
wire    arrayRoundKey_14_ready;
wire    arrayRoundKey_14_done;

`AESL_MEM_RoundKey_14 `AESL_MEM_INST_RoundKey_14(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayRoundKey_14_ce0),
    .we0        (arrayRoundKey_14_we0),
    .address0   (arrayRoundKey_14_address0),
    .din0       (arrayRoundKey_14_din0),
    .dout0      (arrayRoundKey_14_dout0),
    .ce1        (arrayRoundKey_14_ce1),
    .we1        (arrayRoundKey_14_we1),
    .address1   (arrayRoundKey_14_address1),
    .din1       (arrayRoundKey_14_din1),
    .dout1      (arrayRoundKey_14_dout1),
    .ready      (arrayRoundKey_14_ready),
    .done    (arrayRoundKey_14_done)
);

// Assignment between dut and arrayRoundKey_14
assign arrayRoundKey_14_address0 = RoundKey_14_address0;
assign arrayRoundKey_14_ce0 = RoundKey_14_ce0;
assign RoundKey_14_q0 = arrayRoundKey_14_dout0;
assign arrayRoundKey_14_we0 = 0;
assign arrayRoundKey_14_din0 = 0;
assign arrayRoundKey_14_we1 = 0;
assign arrayRoundKey_14_din1 = 0;
assign arrayRoundKey_14_ready=    ready;
assign arrayRoundKey_14_done = 0;


//------------------------arrayRoundKey_15 Instantiation--------------

// The input and output of arrayRoundKey_15
wire    arrayRoundKey_15_ce0, arrayRoundKey_15_ce1;
wire    arrayRoundKey_15_we0, arrayRoundKey_15_we1;
wire    [3 : 0]    arrayRoundKey_15_address0, arrayRoundKey_15_address1;
wire    [7 : 0]    arrayRoundKey_15_din0, arrayRoundKey_15_din1;
wire    [7 : 0]    arrayRoundKey_15_dout0, arrayRoundKey_15_dout1;
wire    arrayRoundKey_15_ready;
wire    arrayRoundKey_15_done;

`AESL_MEM_RoundKey_15 `AESL_MEM_INST_RoundKey_15(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayRoundKey_15_ce0),
    .we0        (arrayRoundKey_15_we0),
    .address0   (arrayRoundKey_15_address0),
    .din0       (arrayRoundKey_15_din0),
    .dout0      (arrayRoundKey_15_dout0),
    .ce1        (arrayRoundKey_15_ce1),
    .we1        (arrayRoundKey_15_we1),
    .address1   (arrayRoundKey_15_address1),
    .din1       (arrayRoundKey_15_din1),
    .dout1      (arrayRoundKey_15_dout1),
    .ready      (arrayRoundKey_15_ready),
    .done    (arrayRoundKey_15_done)
);

// Assignment between dut and arrayRoundKey_15
assign arrayRoundKey_15_address0 = RoundKey_15_address0;
assign arrayRoundKey_15_ce0 = RoundKey_15_ce0;
assign RoundKey_15_q0 = arrayRoundKey_15_dout0;
assign arrayRoundKey_15_we0 = 0;
assign arrayRoundKey_15_din0 = 0;
assign arrayRoundKey_15_we1 = 0;
assign arrayRoundKey_15_din1 = 0;
assign arrayRoundKey_15_ready=    ready;
assign arrayRoundKey_15_done = 0;


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
        integer fp1;
        integer fp2;
        wait (all_finish == 1);
        // last transaction is saved at negedge right after last done
        @ (posedge AESL_clock);
        @ (posedge AESL_clock);
        @ (posedge AESL_clock);
        @ (posedge AESL_clock);
    fp1 = $fopen("./rtl.Cipher.autotvout_state_0_0.dat", "r");
    fp2 = $fopen("./impl_rtl.Cipher.autotvout_state_0_0.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.Cipher.autotvout_state_0_0.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.Cipher.autotvout_state_0_0.dat\"!");
    else begin
        $display("Comparing rtl.Cipher.autotvout_state_0_0.dat with impl_rtl.Cipher.autotvout_state_0_0.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
    fp1 = $fopen("./rtl.Cipher.autotvout_state_0_1.dat", "r");
    fp2 = $fopen("./impl_rtl.Cipher.autotvout_state_0_1.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.Cipher.autotvout_state_0_1.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.Cipher.autotvout_state_0_1.dat\"!");
    else begin
        $display("Comparing rtl.Cipher.autotvout_state_0_1.dat with impl_rtl.Cipher.autotvout_state_0_1.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
    fp1 = $fopen("./rtl.Cipher.autotvout_state_0_2.dat", "r");
    fp2 = $fopen("./impl_rtl.Cipher.autotvout_state_0_2.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.Cipher.autotvout_state_0_2.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.Cipher.autotvout_state_0_2.dat\"!");
    else begin
        $display("Comparing rtl.Cipher.autotvout_state_0_2.dat with impl_rtl.Cipher.autotvout_state_0_2.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
    fp1 = $fopen("./rtl.Cipher.autotvout_state_0_3.dat", "r");
    fp2 = $fopen("./impl_rtl.Cipher.autotvout_state_0_3.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.Cipher.autotvout_state_0_3.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.Cipher.autotvout_state_0_3.dat\"!");
    else begin
        $display("Comparing rtl.Cipher.autotvout_state_0_3.dat with impl_rtl.Cipher.autotvout_state_0_3.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
    fp1 = $fopen("./rtl.Cipher.autotvout_state_1_0.dat", "r");
    fp2 = $fopen("./impl_rtl.Cipher.autotvout_state_1_0.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.Cipher.autotvout_state_1_0.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.Cipher.autotvout_state_1_0.dat\"!");
    else begin
        $display("Comparing rtl.Cipher.autotvout_state_1_0.dat with impl_rtl.Cipher.autotvout_state_1_0.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
    fp1 = $fopen("./rtl.Cipher.autotvout_state_1_1.dat", "r");
    fp2 = $fopen("./impl_rtl.Cipher.autotvout_state_1_1.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.Cipher.autotvout_state_1_1.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.Cipher.autotvout_state_1_1.dat\"!");
    else begin
        $display("Comparing rtl.Cipher.autotvout_state_1_1.dat with impl_rtl.Cipher.autotvout_state_1_1.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
    fp1 = $fopen("./rtl.Cipher.autotvout_state_1_2.dat", "r");
    fp2 = $fopen("./impl_rtl.Cipher.autotvout_state_1_2.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.Cipher.autotvout_state_1_2.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.Cipher.autotvout_state_1_2.dat\"!");
    else begin
        $display("Comparing rtl.Cipher.autotvout_state_1_2.dat with impl_rtl.Cipher.autotvout_state_1_2.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
    fp1 = $fopen("./rtl.Cipher.autotvout_state_1_3.dat", "r");
    fp2 = $fopen("./impl_rtl.Cipher.autotvout_state_1_3.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.Cipher.autotvout_state_1_3.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.Cipher.autotvout_state_1_3.dat\"!");
    else begin
        $display("Comparing rtl.Cipher.autotvout_state_1_3.dat with impl_rtl.Cipher.autotvout_state_1_3.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
    fp1 = $fopen("./rtl.Cipher.autotvout_state_2_0.dat", "r");
    fp2 = $fopen("./impl_rtl.Cipher.autotvout_state_2_0.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.Cipher.autotvout_state_2_0.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.Cipher.autotvout_state_2_0.dat\"!");
    else begin
        $display("Comparing rtl.Cipher.autotvout_state_2_0.dat with impl_rtl.Cipher.autotvout_state_2_0.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
    fp1 = $fopen("./rtl.Cipher.autotvout_state_2_1.dat", "r");
    fp2 = $fopen("./impl_rtl.Cipher.autotvout_state_2_1.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.Cipher.autotvout_state_2_1.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.Cipher.autotvout_state_2_1.dat\"!");
    else begin
        $display("Comparing rtl.Cipher.autotvout_state_2_1.dat with impl_rtl.Cipher.autotvout_state_2_1.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
    fp1 = $fopen("./rtl.Cipher.autotvout_state_2_2.dat", "r");
    fp2 = $fopen("./impl_rtl.Cipher.autotvout_state_2_2.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.Cipher.autotvout_state_2_2.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.Cipher.autotvout_state_2_2.dat\"!");
    else begin
        $display("Comparing rtl.Cipher.autotvout_state_2_2.dat with impl_rtl.Cipher.autotvout_state_2_2.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
    fp1 = $fopen("./rtl.Cipher.autotvout_state_2_3.dat", "r");
    fp2 = $fopen("./impl_rtl.Cipher.autotvout_state_2_3.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.Cipher.autotvout_state_2_3.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.Cipher.autotvout_state_2_3.dat\"!");
    else begin
        $display("Comparing rtl.Cipher.autotvout_state_2_3.dat with impl_rtl.Cipher.autotvout_state_2_3.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
    fp1 = $fopen("./rtl.Cipher.autotvout_state_3_0.dat", "r");
    fp2 = $fopen("./impl_rtl.Cipher.autotvout_state_3_0.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.Cipher.autotvout_state_3_0.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.Cipher.autotvout_state_3_0.dat\"!");
    else begin
        $display("Comparing rtl.Cipher.autotvout_state_3_0.dat with impl_rtl.Cipher.autotvout_state_3_0.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
    fp1 = $fopen("./rtl.Cipher.autotvout_state_3_1.dat", "r");
    fp2 = $fopen("./impl_rtl.Cipher.autotvout_state_3_1.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.Cipher.autotvout_state_3_1.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.Cipher.autotvout_state_3_1.dat\"!");
    else begin
        $display("Comparing rtl.Cipher.autotvout_state_3_1.dat with impl_rtl.Cipher.autotvout_state_3_1.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
    fp1 = $fopen("./rtl.Cipher.autotvout_state_3_2.dat", "r");
    fp2 = $fopen("./impl_rtl.Cipher.autotvout_state_3_2.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.Cipher.autotvout_state_3_2.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.Cipher.autotvout_state_3_2.dat\"!");
    else begin
        $display("Comparing rtl.Cipher.autotvout_state_3_2.dat with impl_rtl.Cipher.autotvout_state_3_2.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
    fp1 = $fopen("./rtl.Cipher.autotvout_state_3_3.dat", "r");
    fp2 = $fopen("./impl_rtl.Cipher.autotvout_state_3_3.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.Cipher.autotvout_state_3_3.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.Cipher.autotvout_state_3_3.dat\"!");
    else begin
        $display("Comparing rtl.Cipher.autotvout_state_3_3.dat with impl_rtl.Cipher.autotvout_state_3_3.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
        $display("Simulation Passed.");
        $finish;
    end
    
initial begin
    AESL_clock = 0;
    forever #`AUTOTB_CLOCK_PERIOD_DIV2 AESL_clock = ~AESL_clock;
end


reg end_state_0_0;
reg [31:0] size_state_0_0;
reg [31:0] size_state_0_0_backup;
reg end_state_0_1;
reg [31:0] size_state_0_1;
reg [31:0] size_state_0_1_backup;
reg end_state_0_2;
reg [31:0] size_state_0_2;
reg [31:0] size_state_0_2_backup;
reg end_state_0_3;
reg [31:0] size_state_0_3;
reg [31:0] size_state_0_3_backup;
reg end_state_1_0;
reg [31:0] size_state_1_0;
reg [31:0] size_state_1_0_backup;
reg end_state_1_1;
reg [31:0] size_state_1_1;
reg [31:0] size_state_1_1_backup;
reg end_state_1_2;
reg [31:0] size_state_1_2;
reg [31:0] size_state_1_2_backup;
reg end_state_1_3;
reg [31:0] size_state_1_3;
reg [31:0] size_state_1_3_backup;
reg end_state_2_0;
reg [31:0] size_state_2_0;
reg [31:0] size_state_2_0_backup;
reg end_state_2_1;
reg [31:0] size_state_2_1;
reg [31:0] size_state_2_1_backup;
reg end_state_2_2;
reg [31:0] size_state_2_2;
reg [31:0] size_state_2_2_backup;
reg end_state_2_3;
reg [31:0] size_state_2_3;
reg [31:0] size_state_2_3_backup;
reg end_state_3_0;
reg [31:0] size_state_3_0;
reg [31:0] size_state_3_0_backup;
reg end_state_3_1;
reg [31:0] size_state_3_1;
reg [31:0] size_state_3_1_backup;
reg end_state_3_2;
reg [31:0] size_state_3_2;
reg [31:0] size_state_3_2_backup;
reg end_state_3_3;
reg [31:0] size_state_3_3;
reg [31:0] size_state_3_3_backup;
reg end_RoundKey_0;
reg [31:0] size_RoundKey_0;
reg [31:0] size_RoundKey_0_backup;
reg end_RoundKey_1;
reg [31:0] size_RoundKey_1;
reg [31:0] size_RoundKey_1_backup;
reg end_RoundKey_2;
reg [31:0] size_RoundKey_2;
reg [31:0] size_RoundKey_2_backup;
reg end_RoundKey_3;
reg [31:0] size_RoundKey_3;
reg [31:0] size_RoundKey_3_backup;
reg end_RoundKey_4;
reg [31:0] size_RoundKey_4;
reg [31:0] size_RoundKey_4_backup;
reg end_RoundKey_5;
reg [31:0] size_RoundKey_5;
reg [31:0] size_RoundKey_5_backup;
reg end_RoundKey_6;
reg [31:0] size_RoundKey_6;
reg [31:0] size_RoundKey_6_backup;
reg end_RoundKey_7;
reg [31:0] size_RoundKey_7;
reg [31:0] size_RoundKey_7_backup;
reg end_RoundKey_8;
reg [31:0] size_RoundKey_8;
reg [31:0] size_RoundKey_8_backup;
reg end_RoundKey_9;
reg [31:0] size_RoundKey_9;
reg [31:0] size_RoundKey_9_backup;
reg end_RoundKey_10;
reg [31:0] size_RoundKey_10;
reg [31:0] size_RoundKey_10_backup;
reg end_RoundKey_11;
reg [31:0] size_RoundKey_11;
reg [31:0] size_RoundKey_11_backup;
reg end_RoundKey_12;
reg [31:0] size_RoundKey_12;
reg [31:0] size_RoundKey_12_backup;
reg end_RoundKey_13;
reg [31:0] size_RoundKey_13;
reg [31:0] size_RoundKey_13_backup;
reg end_RoundKey_14;
reg [31:0] size_RoundKey_14;
reg [31:0] size_RoundKey_14_backup;
reg end_RoundKey_15;
reg [31:0] size_RoundKey_15;
reg [31:0] size_RoundKey_15_backup;

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
