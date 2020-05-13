// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module AddRoundKey (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        round,
        state_0_0_read,
        state_0_1_read,
        state_0_2_read,
        state_0_3_read,
        state_1_0_read,
        state_1_1_read,
        state_1_2_read,
        state_1_3_read,
        state_2_0_read,
        state_2_1_read,
        state_2_2_read,
        state_2_3_read,
        state_3_0_read,
        state_3_1_read,
        state_3_2_read,
        state_3_3_read,
        RoundKey_0_address0,
        RoundKey_0_ce0,
        RoundKey_0_q0,
        RoundKey_1_address0,
        RoundKey_1_ce0,
        RoundKey_1_q0,
        RoundKey_2_address0,
        RoundKey_2_ce0,
        RoundKey_2_q0,
        RoundKey_3_address0,
        RoundKey_3_ce0,
        RoundKey_3_q0,
        RoundKey_4_address0,
        RoundKey_4_ce0,
        RoundKey_4_q0,
        RoundKey_5_address0,
        RoundKey_5_ce0,
        RoundKey_5_q0,
        RoundKey_6_address0,
        RoundKey_6_ce0,
        RoundKey_6_q0,
        RoundKey_7_address0,
        RoundKey_7_ce0,
        RoundKey_7_q0,
        RoundKey_8_address0,
        RoundKey_8_ce0,
        RoundKey_8_q0,
        RoundKey_9_address0,
        RoundKey_9_ce0,
        RoundKey_9_q0,
        RoundKey_10_address0,
        RoundKey_10_ce0,
        RoundKey_10_q0,
        RoundKey_11_address0,
        RoundKey_11_ce0,
        RoundKey_11_q0,
        RoundKey_12_address0,
        RoundKey_12_ce0,
        RoundKey_12_q0,
        RoundKey_13_address0,
        RoundKey_13_ce0,
        RoundKey_13_q0,
        RoundKey_14_address0,
        RoundKey_14_ce0,
        RoundKey_14_q0,
        RoundKey_15_address0,
        RoundKey_15_ce0,
        RoundKey_15_q0,
        ap_return_0,
        ap_return_1,
        ap_return_2,
        ap_return_3,
        ap_return_4,
        ap_return_5,
        ap_return_6,
        ap_return_7,
        ap_return_8,
        ap_return_9,
        ap_return_10,
        ap_return_11,
        ap_return_12,
        ap_return_13,
        ap_return_14,
        ap_return_15
);

parameter    ap_ST_fsm_state1 = 2'd1;
parameter    ap_ST_fsm_state2 = 2'd2;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [5:0] round;
input  [7:0] state_0_0_read;
input  [7:0] state_0_1_read;
input  [7:0] state_0_2_read;
input  [7:0] state_0_3_read;
input  [7:0] state_1_0_read;
input  [7:0] state_1_1_read;
input  [7:0] state_1_2_read;
input  [7:0] state_1_3_read;
input  [7:0] state_2_0_read;
input  [7:0] state_2_1_read;
input  [7:0] state_2_2_read;
input  [7:0] state_2_3_read;
input  [7:0] state_3_0_read;
input  [7:0] state_3_1_read;
input  [7:0] state_3_2_read;
input  [7:0] state_3_3_read;
output  [3:0] RoundKey_0_address0;
output   RoundKey_0_ce0;
input  [7:0] RoundKey_0_q0;
output  [3:0] RoundKey_1_address0;
output   RoundKey_1_ce0;
input  [7:0] RoundKey_1_q0;
output  [3:0] RoundKey_2_address0;
output   RoundKey_2_ce0;
input  [7:0] RoundKey_2_q0;
output  [3:0] RoundKey_3_address0;
output   RoundKey_3_ce0;
input  [7:0] RoundKey_3_q0;
output  [3:0] RoundKey_4_address0;
output   RoundKey_4_ce0;
input  [7:0] RoundKey_4_q0;
output  [3:0] RoundKey_5_address0;
output   RoundKey_5_ce0;
input  [7:0] RoundKey_5_q0;
output  [3:0] RoundKey_6_address0;
output   RoundKey_6_ce0;
input  [7:0] RoundKey_6_q0;
output  [3:0] RoundKey_7_address0;
output   RoundKey_7_ce0;
input  [7:0] RoundKey_7_q0;
output  [3:0] RoundKey_8_address0;
output   RoundKey_8_ce0;
input  [7:0] RoundKey_8_q0;
output  [3:0] RoundKey_9_address0;
output   RoundKey_9_ce0;
input  [7:0] RoundKey_9_q0;
output  [3:0] RoundKey_10_address0;
output   RoundKey_10_ce0;
input  [7:0] RoundKey_10_q0;
output  [3:0] RoundKey_11_address0;
output   RoundKey_11_ce0;
input  [7:0] RoundKey_11_q0;
output  [3:0] RoundKey_12_address0;
output   RoundKey_12_ce0;
input  [7:0] RoundKey_12_q0;
output  [3:0] RoundKey_13_address0;
output   RoundKey_13_ce0;
input  [7:0] RoundKey_13_q0;
output  [3:0] RoundKey_14_address0;
output   RoundKey_14_ce0;
input  [7:0] RoundKey_14_q0;
output  [3:0] RoundKey_15_address0;
output   RoundKey_15_ce0;
input  [7:0] RoundKey_15_q0;
output  [7:0] ap_return_0;
output  [7:0] ap_return_1;
output  [7:0] ap_return_2;
output  [7:0] ap_return_3;
output  [7:0] ap_return_4;
output  [7:0] ap_return_5;
output  [7:0] ap_return_6;
output  [7:0] ap_return_7;
output  [7:0] ap_return_8;
output  [7:0] ap_return_9;
output  [7:0] ap_return_10;
output  [7:0] ap_return_11;
output  [7:0] ap_return_12;
output  [7:0] ap_return_13;
output  [7:0] ap_return_14;
output  [7:0] ap_return_15;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg RoundKey_0_ce0;
reg RoundKey_1_ce0;
reg RoundKey_2_ce0;
reg RoundKey_3_ce0;
reg RoundKey_4_ce0;
reg RoundKey_5_ce0;
reg RoundKey_6_ce0;
reg RoundKey_7_ce0;
reg RoundKey_8_ce0;
reg RoundKey_9_ce0;
reg RoundKey_10_ce0;
reg RoundKey_11_ce0;
reg RoundKey_12_ce0;
reg RoundKey_13_ce0;
reg RoundKey_14_ce0;
reg RoundKey_15_ce0;
reg[7:0] ap_return_0;
reg[7:0] ap_return_1;
reg[7:0] ap_return_2;
reg[7:0] ap_return_3;
reg[7:0] ap_return_4;
reg[7:0] ap_return_5;
reg[7:0] ap_return_6;
reg[7:0] ap_return_7;
reg[7:0] ap_return_8;
reg[7:0] ap_return_9;
reg[7:0] ap_return_10;
reg[7:0] ap_return_11;
reg[7:0] ap_return_12;
reg[7:0] ap_return_13;
reg[7:0] ap_return_14;
reg[7:0] ap_return_15;

(* fsm_encoding = "none" *) reg   [1:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [63:0] zext_ln251_fu_400_p1;
wire   [63:0] zext_ln251_1_fu_405_p1;
wire    ap_CS_fsm_state2;
wire   [3:0] trunc_ln251_fu_388_p1;
wire   [7:0] and_ln_fu_392_p3;
wire   [7:0] xor_ln251_fu_424_p2;
wire   [7:0] xor_ln251_1_fu_430_p2;
wire   [7:0] xor_ln251_2_fu_436_p2;
wire   [7:0] xor_ln251_3_fu_442_p2;
wire   [7:0] xor_ln251_4_fu_448_p2;
wire   [7:0] xor_ln251_5_fu_454_p2;
wire   [7:0] xor_ln251_6_fu_460_p2;
wire   [7:0] xor_ln251_7_fu_466_p2;
wire   [7:0] xor_ln251_8_fu_472_p2;
wire   [7:0] xor_ln251_9_fu_478_p2;
wire   [7:0] xor_ln251_10_fu_484_p2;
wire   [7:0] xor_ln251_11_fu_490_p2;
wire   [7:0] xor_ln251_12_fu_496_p2;
wire   [7:0] xor_ln251_13_fu_502_p2;
wire   [7:0] xor_ln251_14_fu_508_p2;
wire   [7:0] xor_ln251_15_fu_514_p2;
reg   [7:0] ap_return_0_preg;
reg   [7:0] ap_return_1_preg;
reg   [7:0] ap_return_2_preg;
reg   [7:0] ap_return_3_preg;
reg   [7:0] ap_return_4_preg;
reg   [7:0] ap_return_5_preg;
reg   [7:0] ap_return_6_preg;
reg   [7:0] ap_return_7_preg;
reg   [7:0] ap_return_8_preg;
reg   [7:0] ap_return_9_preg;
reg   [7:0] ap_return_10_preg;
reg   [7:0] ap_return_11_preg;
reg   [7:0] ap_return_12_preg;
reg   [7:0] ap_return_13_preg;
reg   [7:0] ap_return_14_preg;
reg   [7:0] ap_return_15_preg;
reg   [1:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 2'd1;
#0 ap_return_0_preg = 8'd0;
#0 ap_return_1_preg = 8'd0;
#0 ap_return_2_preg = 8'd0;
#0 ap_return_3_preg = 8'd0;
#0 ap_return_4_preg = 8'd0;
#0 ap_return_5_preg = 8'd0;
#0 ap_return_6_preg = 8'd0;
#0 ap_return_7_preg = 8'd0;
#0 ap_return_8_preg = 8'd0;
#0 ap_return_9_preg = 8'd0;
#0 ap_return_10_preg = 8'd0;
#0 ap_return_11_preg = 8'd0;
#0 ap_return_12_preg = 8'd0;
#0 ap_return_13_preg = 8'd0;
#0 ap_return_14_preg = 8'd0;
#0 ap_return_15_preg = 8'd0;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_return_0_preg <= 8'd0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state2)) begin
            ap_return_0_preg <= xor_ln251_fu_424_p2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_return_10_preg <= 8'd0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state2)) begin
            ap_return_10_preg <= xor_ln251_10_fu_484_p2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_return_11_preg <= 8'd0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state2)) begin
            ap_return_11_preg <= xor_ln251_11_fu_490_p2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_return_12_preg <= 8'd0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state2)) begin
            ap_return_12_preg <= xor_ln251_12_fu_496_p2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_return_13_preg <= 8'd0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state2)) begin
            ap_return_13_preg <= xor_ln251_13_fu_502_p2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_return_14_preg <= 8'd0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state2)) begin
            ap_return_14_preg <= xor_ln251_14_fu_508_p2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_return_15_preg <= 8'd0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state2)) begin
            ap_return_15_preg <= xor_ln251_15_fu_514_p2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_return_1_preg <= 8'd0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state2)) begin
            ap_return_1_preg <= xor_ln251_1_fu_430_p2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_return_2_preg <= 8'd0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state2)) begin
            ap_return_2_preg <= xor_ln251_2_fu_436_p2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_return_3_preg <= 8'd0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state2)) begin
            ap_return_3_preg <= xor_ln251_3_fu_442_p2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_return_4_preg <= 8'd0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state2)) begin
            ap_return_4_preg <= xor_ln251_4_fu_448_p2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_return_5_preg <= 8'd0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state2)) begin
            ap_return_5_preg <= xor_ln251_5_fu_454_p2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_return_6_preg <= 8'd0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state2)) begin
            ap_return_6_preg <= xor_ln251_6_fu_460_p2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_return_7_preg <= 8'd0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state2)) begin
            ap_return_7_preg <= xor_ln251_7_fu_466_p2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_return_8_preg <= 8'd0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state2)) begin
            ap_return_8_preg <= xor_ln251_8_fu_472_p2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_return_9_preg <= 8'd0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state2)) begin
            ap_return_9_preg <= xor_ln251_9_fu_478_p2;
        end
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        RoundKey_0_ce0 = 1'b1;
    end else begin
        RoundKey_0_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        RoundKey_10_ce0 = 1'b1;
    end else begin
        RoundKey_10_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        RoundKey_11_ce0 = 1'b1;
    end else begin
        RoundKey_11_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        RoundKey_12_ce0 = 1'b1;
    end else begin
        RoundKey_12_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        RoundKey_13_ce0 = 1'b1;
    end else begin
        RoundKey_13_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        RoundKey_14_ce0 = 1'b1;
    end else begin
        RoundKey_14_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        RoundKey_15_ce0 = 1'b1;
    end else begin
        RoundKey_15_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        RoundKey_1_ce0 = 1'b1;
    end else begin
        RoundKey_1_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        RoundKey_2_ce0 = 1'b1;
    end else begin
        RoundKey_2_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        RoundKey_3_ce0 = 1'b1;
    end else begin
        RoundKey_3_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        RoundKey_4_ce0 = 1'b1;
    end else begin
        RoundKey_4_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        RoundKey_5_ce0 = 1'b1;
    end else begin
        RoundKey_5_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        RoundKey_6_ce0 = 1'b1;
    end else begin
        RoundKey_6_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        RoundKey_7_ce0 = 1'b1;
    end else begin
        RoundKey_7_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        RoundKey_8_ce0 = 1'b1;
    end else begin
        RoundKey_8_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        RoundKey_9_ce0 = 1'b1;
    end else begin
        RoundKey_9_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        ap_return_0 = xor_ln251_fu_424_p2;
    end else begin
        ap_return_0 = ap_return_0_preg;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        ap_return_1 = xor_ln251_1_fu_430_p2;
    end else begin
        ap_return_1 = ap_return_1_preg;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        ap_return_10 = xor_ln251_10_fu_484_p2;
    end else begin
        ap_return_10 = ap_return_10_preg;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        ap_return_11 = xor_ln251_11_fu_490_p2;
    end else begin
        ap_return_11 = ap_return_11_preg;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        ap_return_12 = xor_ln251_12_fu_496_p2;
    end else begin
        ap_return_12 = ap_return_12_preg;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        ap_return_13 = xor_ln251_13_fu_502_p2;
    end else begin
        ap_return_13 = ap_return_13_preg;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        ap_return_14 = xor_ln251_14_fu_508_p2;
    end else begin
        ap_return_14 = ap_return_14_preg;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        ap_return_15 = xor_ln251_15_fu_514_p2;
    end else begin
        ap_return_15 = ap_return_15_preg;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        ap_return_2 = xor_ln251_2_fu_436_p2;
    end else begin
        ap_return_2 = ap_return_2_preg;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        ap_return_3 = xor_ln251_3_fu_442_p2;
    end else begin
        ap_return_3 = ap_return_3_preg;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        ap_return_4 = xor_ln251_4_fu_448_p2;
    end else begin
        ap_return_4 = ap_return_4_preg;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        ap_return_5 = xor_ln251_5_fu_454_p2;
    end else begin
        ap_return_5 = ap_return_5_preg;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        ap_return_6 = xor_ln251_6_fu_460_p2;
    end else begin
        ap_return_6 = ap_return_6_preg;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        ap_return_7 = xor_ln251_7_fu_466_p2;
    end else begin
        ap_return_7 = ap_return_7_preg;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        ap_return_8 = xor_ln251_8_fu_472_p2;
    end else begin
        ap_return_8 = ap_return_8_preg;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        ap_return_9 = xor_ln251_9_fu_478_p2;
    end else begin
        ap_return_9 = ap_return_9_preg;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign RoundKey_0_address0 = zext_ln251_fu_400_p1;

assign RoundKey_10_address0 = zext_ln251_1_fu_405_p1;

assign RoundKey_11_address0 = zext_ln251_1_fu_405_p1;

assign RoundKey_12_address0 = zext_ln251_1_fu_405_p1;

assign RoundKey_13_address0 = zext_ln251_1_fu_405_p1;

assign RoundKey_14_address0 = zext_ln251_1_fu_405_p1;

assign RoundKey_15_address0 = zext_ln251_1_fu_405_p1;

assign RoundKey_1_address0 = zext_ln251_1_fu_405_p1;

assign RoundKey_2_address0 = zext_ln251_1_fu_405_p1;

assign RoundKey_3_address0 = zext_ln251_1_fu_405_p1;

assign RoundKey_4_address0 = zext_ln251_1_fu_405_p1;

assign RoundKey_5_address0 = zext_ln251_1_fu_405_p1;

assign RoundKey_6_address0 = zext_ln251_1_fu_405_p1;

assign RoundKey_7_address0 = zext_ln251_1_fu_405_p1;

assign RoundKey_8_address0 = zext_ln251_1_fu_405_p1;

assign RoundKey_9_address0 = zext_ln251_1_fu_405_p1;

assign and_ln_fu_392_p3 = {{4'd0}, {trunc_ln251_fu_388_p1}};

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign trunc_ln251_fu_388_p1 = round[3:0];

assign xor_ln251_10_fu_484_p2 = (state_2_2_read ^ RoundKey_10_q0);

assign xor_ln251_11_fu_490_p2 = (state_2_3_read ^ RoundKey_11_q0);

assign xor_ln251_12_fu_496_p2 = (state_3_0_read ^ RoundKey_12_q0);

assign xor_ln251_13_fu_502_p2 = (state_3_1_read ^ RoundKey_13_q0);

assign xor_ln251_14_fu_508_p2 = (state_3_2_read ^ RoundKey_14_q0);

assign xor_ln251_15_fu_514_p2 = (state_3_3_read ^ RoundKey_15_q0);

assign xor_ln251_1_fu_430_p2 = (state_0_1_read ^ RoundKey_1_q0);

assign xor_ln251_2_fu_436_p2 = (state_0_2_read ^ RoundKey_2_q0);

assign xor_ln251_3_fu_442_p2 = (state_0_3_read ^ RoundKey_3_q0);

assign xor_ln251_4_fu_448_p2 = (state_1_0_read ^ RoundKey_4_q0);

assign xor_ln251_5_fu_454_p2 = (state_1_1_read ^ RoundKey_5_q0);

assign xor_ln251_6_fu_460_p2 = (state_1_2_read ^ RoundKey_6_q0);

assign xor_ln251_7_fu_466_p2 = (state_1_3_read ^ RoundKey_7_q0);

assign xor_ln251_8_fu_472_p2 = (state_2_0_read ^ RoundKey_8_q0);

assign xor_ln251_9_fu_478_p2 = (state_2_1_read ^ RoundKey_9_q0);

assign xor_ln251_fu_424_p2 = (state_0_0_read ^ RoundKey_0_q0);

assign zext_ln251_1_fu_405_p1 = and_ln_fu_392_p3;

assign zext_ln251_fu_400_p1 = trunc_ln251_fu_388_p1;

endmodule //AddRoundKey
