// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
 `timescale 1ns/1ps


`define AUTOTB_DUT      KeyExpansion
`define AUTOTB_DUT_INST AESL_inst_KeyExpansion
`define AUTOTB_TOP      apatb_KeyExpansion_top
`define AUTOTB_LAT_RESULT_FILE "KeyExpansion.result.lat.rb"
`define AUTOTB_PER_RESULT_TRANS_FILE "KeyExpansion.performance.result.transaction.xml"
`define AUTOTB_TOP_INST AESL_inst_apatb_KeyExpansion_top
`define AUTOTB_MAX_ALLOW_LATENCY  15000000
`define AUTOTB_CLOCK_PERIOD_DIV2 5.00

`define AESL_MEM_RoundKey_0 AESL_automem_RoundKey_0
`define AESL_MEM_INST_RoundKey_0 mem_inst_RoundKey_0
`define AESL_MEM_RoundKey_1 AESL_automem_RoundKey_1
`define AESL_MEM_INST_RoundKey_1 mem_inst_RoundKey_1
`define AESL_MEM_RoundKey_2 AESL_automem_RoundKey_2
`define AESL_MEM_INST_RoundKey_2 mem_inst_RoundKey_2
`define AESL_MEM_RoundKey_3 AESL_automem_RoundKey_3
`define AESL_MEM_INST_RoundKey_3 mem_inst_RoundKey_3
`define AESL_MEM_Key_0 AESL_automem_Key_0
`define AESL_MEM_INST_Key_0 mem_inst_Key_0
`define AESL_MEM_Key_1 AESL_automem_Key_1
`define AESL_MEM_INST_Key_1 mem_inst_Key_1
`define AESL_MEM_Key_2 AESL_automem_Key_2
`define AESL_MEM_INST_Key_2 mem_inst_Key_2
`define AESL_MEM_Key_3 AESL_automem_Key_3
`define AESL_MEM_INST_Key_3 mem_inst_Key_3
`define AUTOTB_TVIN_RoundKey_0  "./c.KeyExpansion.autotvin_RoundKey_0.dat"
`define AUTOTB_TVIN_RoundKey_1  "./c.KeyExpansion.autotvin_RoundKey_1.dat"
`define AUTOTB_TVIN_RoundKey_2  "./c.KeyExpansion.autotvin_RoundKey_2.dat"
`define AUTOTB_TVIN_RoundKey_3  "./c.KeyExpansion.autotvin_RoundKey_3.dat"
`define AUTOTB_TVIN_Key_0  "./c.KeyExpansion.autotvin_Key_0.dat"
`define AUTOTB_TVIN_Key_1  "./c.KeyExpansion.autotvin_Key_1.dat"
`define AUTOTB_TVIN_Key_2  "./c.KeyExpansion.autotvin_Key_2.dat"
`define AUTOTB_TVIN_Key_3  "./c.KeyExpansion.autotvin_Key_3.dat"
`define AUTOTB_TVIN_RoundKey_0_out_wrapc  "./rtl.KeyExpansion.autotvin_RoundKey_0.dat"
`define AUTOTB_TVIN_RoundKey_1_out_wrapc  "./rtl.KeyExpansion.autotvin_RoundKey_1.dat"
`define AUTOTB_TVIN_RoundKey_2_out_wrapc  "./rtl.KeyExpansion.autotvin_RoundKey_2.dat"
`define AUTOTB_TVIN_RoundKey_3_out_wrapc  "./rtl.KeyExpansion.autotvin_RoundKey_3.dat"
`define AUTOTB_TVIN_Key_0_out_wrapc  "./rtl.KeyExpansion.autotvin_Key_0.dat"
`define AUTOTB_TVIN_Key_1_out_wrapc  "./rtl.KeyExpansion.autotvin_Key_1.dat"
`define AUTOTB_TVIN_Key_2_out_wrapc  "./rtl.KeyExpansion.autotvin_Key_2.dat"
`define AUTOTB_TVIN_Key_3_out_wrapc  "./rtl.KeyExpansion.autotvin_Key_3.dat"
`define AUTOTB_TVOUT_RoundKey_0  "./c.KeyExpansion.autotvout_RoundKey_0.dat"
`define AUTOTB_TVOUT_RoundKey_1  "./c.KeyExpansion.autotvout_RoundKey_1.dat"
`define AUTOTB_TVOUT_RoundKey_2  "./c.KeyExpansion.autotvout_RoundKey_2.dat"
`define AUTOTB_TVOUT_RoundKey_3  "./c.KeyExpansion.autotvout_RoundKey_3.dat"
`define AUTOTB_TVOUT_RoundKey_0_out_wrapc  "./impl_rtl.KeyExpansion.autotvout_RoundKey_0.dat"
`define AUTOTB_TVOUT_RoundKey_1_out_wrapc  "./impl_rtl.KeyExpansion.autotvout_RoundKey_1.dat"
`define AUTOTB_TVOUT_RoundKey_2_out_wrapc  "./impl_rtl.KeyExpansion.autotvout_RoundKey_2.dat"
`define AUTOTB_TVOUT_RoundKey_3_out_wrapc  "./impl_rtl.KeyExpansion.autotvout_RoundKey_3.dat"
module `AUTOTB_TOP;

parameter AUTOTB_TRANSACTION_NUM = 7;
parameter PROGRESS_TIMEOUT = 10000000;
parameter LATENCY_ESTIMATION = 23;
parameter LENGTH_RoundKey_0 = 60;
parameter LENGTH_RoundKey_1 = 60;
parameter LENGTH_RoundKey_2 = 60;
parameter LENGTH_RoundKey_3 = 60;
parameter LENGTH_Key_0 = 4;
parameter LENGTH_Key_1 = 4;
parameter LENGTH_Key_2 = 4;
parameter LENGTH_Key_3 = 4;

task read_token;
    input integer fp;
    output reg [175 : 0] token;
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
    reg [175 : 0] token1;
    reg [175 : 0] token2;
    reg [175 : 0] golden;
    reg [175 : 0] result;
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
wire [5 : 0] RoundKey_0_address0;
wire  RoundKey_0_ce0;
wire  RoundKey_0_we0;
wire [7 : 0] RoundKey_0_d0;
wire [5 : 0] RoundKey_0_address1;
wire  RoundKey_0_ce1;
wire  RoundKey_0_we1;
wire [7 : 0] RoundKey_0_d1;
wire [5 : 0] RoundKey_1_address0;
wire  RoundKey_1_ce0;
wire  RoundKey_1_we0;
wire [7 : 0] RoundKey_1_d0;
wire [5 : 0] RoundKey_1_address1;
wire  RoundKey_1_ce1;
wire  RoundKey_1_we1;
wire [7 : 0] RoundKey_1_d1;
wire [5 : 0] RoundKey_2_address0;
wire  RoundKey_2_ce0;
wire  RoundKey_2_we0;
wire [7 : 0] RoundKey_2_d0;
wire [5 : 0] RoundKey_2_address1;
wire  RoundKey_2_ce1;
wire  RoundKey_2_we1;
wire [7 : 0] RoundKey_2_d1;
wire [5 : 0] RoundKey_3_address0;
wire  RoundKey_3_ce0;
wire  RoundKey_3_we0;
wire [7 : 0] RoundKey_3_d0;
wire [5 : 0] RoundKey_3_address1;
wire  RoundKey_3_ce1;
wire  RoundKey_3_we1;
wire [7 : 0] RoundKey_3_d1;
wire [1 : 0] Key_0_address0;
wire  Key_0_ce0;
wire [7 : 0] Key_0_q0;
wire [1 : 0] Key_0_address1;
wire  Key_0_ce1;
wire [7 : 0] Key_0_q1;
wire [1 : 0] Key_1_address0;
wire  Key_1_ce0;
wire [7 : 0] Key_1_q0;
wire [1 : 0] Key_1_address1;
wire  Key_1_ce1;
wire [7 : 0] Key_1_q1;
wire [1 : 0] Key_2_address0;
wire  Key_2_ce0;
wire [7 : 0] Key_2_q0;
wire [1 : 0] Key_2_address1;
wire  Key_2_ce1;
wire [7 : 0] Key_2_q1;
wire [1 : 0] Key_3_address0;
wire  Key_3_ce0;
wire [7 : 0] Key_3_q0;
wire [1 : 0] Key_3_address1;
wire  Key_3_ce1;
wire [7 : 0] Key_3_q1;
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
    .RoundKey_0_address0(RoundKey_0_address0),
    .RoundKey_0_ce0(RoundKey_0_ce0),
    .RoundKey_0_we0(RoundKey_0_we0),
    .RoundKey_0_d0(RoundKey_0_d0),
    .RoundKey_0_address1(RoundKey_0_address1),
    .RoundKey_0_ce1(RoundKey_0_ce1),
    .RoundKey_0_we1(RoundKey_0_we1),
    .RoundKey_0_d1(RoundKey_0_d1),
    .RoundKey_1_address0(RoundKey_1_address0),
    .RoundKey_1_ce0(RoundKey_1_ce0),
    .RoundKey_1_we0(RoundKey_1_we0),
    .RoundKey_1_d0(RoundKey_1_d0),
    .RoundKey_1_address1(RoundKey_1_address1),
    .RoundKey_1_ce1(RoundKey_1_ce1),
    .RoundKey_1_we1(RoundKey_1_we1),
    .RoundKey_1_d1(RoundKey_1_d1),
    .RoundKey_2_address0(RoundKey_2_address0),
    .RoundKey_2_ce0(RoundKey_2_ce0),
    .RoundKey_2_we0(RoundKey_2_we0),
    .RoundKey_2_d0(RoundKey_2_d0),
    .RoundKey_2_address1(RoundKey_2_address1),
    .RoundKey_2_ce1(RoundKey_2_ce1),
    .RoundKey_2_we1(RoundKey_2_we1),
    .RoundKey_2_d1(RoundKey_2_d1),
    .RoundKey_3_address0(RoundKey_3_address0),
    .RoundKey_3_ce0(RoundKey_3_ce0),
    .RoundKey_3_we0(RoundKey_3_we0),
    .RoundKey_3_d0(RoundKey_3_d0),
    .RoundKey_3_address1(RoundKey_3_address1),
    .RoundKey_3_ce1(RoundKey_3_ce1),
    .RoundKey_3_we1(RoundKey_3_we1),
    .RoundKey_3_d1(RoundKey_3_d1),
    .Key_0_address0(Key_0_address0),
    .Key_0_ce0(Key_0_ce0),
    .Key_0_q0(Key_0_q0),
    .Key_0_address1(Key_0_address1),
    .Key_0_ce1(Key_0_ce1),
    .Key_0_q1(Key_0_q1),
    .Key_1_address0(Key_1_address0),
    .Key_1_ce0(Key_1_ce0),
    .Key_1_q0(Key_1_q0),
    .Key_1_address1(Key_1_address1),
    .Key_1_ce1(Key_1_ce1),
    .Key_1_q1(Key_1_q1),
    .Key_2_address0(Key_2_address0),
    .Key_2_ce0(Key_2_ce0),
    .Key_2_q0(Key_2_q0),
    .Key_2_address1(Key_2_address1),
    .Key_2_ce1(Key_2_ce1),
    .Key_2_q1(Key_2_q1),
    .Key_3_address0(Key_3_address0),
    .Key_3_ce0(Key_3_ce0),
    .Key_3_q0(Key_3_q0),
    .Key_3_address1(Key_3_address1),
    .Key_3_ce1(Key_3_ce1),
    .Key_3_q1(Key_3_q1));

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
//------------------------arrayRoundKey_0 Instantiation--------------

// The input and output of arrayRoundKey_0
wire    arrayRoundKey_0_ce0, arrayRoundKey_0_ce1;
wire    arrayRoundKey_0_we0, arrayRoundKey_0_we1;
wire    [5 : 0]    arrayRoundKey_0_address0, arrayRoundKey_0_address1;
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
assign arrayRoundKey_0_we0 = RoundKey_0_we0;
assign arrayRoundKey_0_din0 = RoundKey_0_d0;
assign arrayRoundKey_0_address1 = RoundKey_0_address1;
assign arrayRoundKey_0_ce1 = RoundKey_0_ce1;
assign arrayRoundKey_0_we1 = RoundKey_0_we1;
assign arrayRoundKey_0_din1 = RoundKey_0_d1;
assign arrayRoundKey_0_ready= ready_initial | arrayRoundKey_0_done;
assign arrayRoundKey_0_done =    AESL_done_delay;


//------------------------arrayRoundKey_1 Instantiation--------------

// The input and output of arrayRoundKey_1
wire    arrayRoundKey_1_ce0, arrayRoundKey_1_ce1;
wire    arrayRoundKey_1_we0, arrayRoundKey_1_we1;
wire    [5 : 0]    arrayRoundKey_1_address0, arrayRoundKey_1_address1;
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
assign arrayRoundKey_1_we0 = RoundKey_1_we0;
assign arrayRoundKey_1_din0 = RoundKey_1_d0;
assign arrayRoundKey_1_address1 = RoundKey_1_address1;
assign arrayRoundKey_1_ce1 = RoundKey_1_ce1;
assign arrayRoundKey_1_we1 = RoundKey_1_we1;
assign arrayRoundKey_1_din1 = RoundKey_1_d1;
assign arrayRoundKey_1_ready= ready_initial | arrayRoundKey_1_done;
assign arrayRoundKey_1_done =    AESL_done_delay;


//------------------------arrayRoundKey_2 Instantiation--------------

// The input and output of arrayRoundKey_2
wire    arrayRoundKey_2_ce0, arrayRoundKey_2_ce1;
wire    arrayRoundKey_2_we0, arrayRoundKey_2_we1;
wire    [5 : 0]    arrayRoundKey_2_address0, arrayRoundKey_2_address1;
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
assign arrayRoundKey_2_we0 = RoundKey_2_we0;
assign arrayRoundKey_2_din0 = RoundKey_2_d0;
assign arrayRoundKey_2_address1 = RoundKey_2_address1;
assign arrayRoundKey_2_ce1 = RoundKey_2_ce1;
assign arrayRoundKey_2_we1 = RoundKey_2_we1;
assign arrayRoundKey_2_din1 = RoundKey_2_d1;
assign arrayRoundKey_2_ready= ready_initial | arrayRoundKey_2_done;
assign arrayRoundKey_2_done =    AESL_done_delay;


//------------------------arrayRoundKey_3 Instantiation--------------

// The input and output of arrayRoundKey_3
wire    arrayRoundKey_3_ce0, arrayRoundKey_3_ce1;
wire    arrayRoundKey_3_we0, arrayRoundKey_3_we1;
wire    [5 : 0]    arrayRoundKey_3_address0, arrayRoundKey_3_address1;
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
assign arrayRoundKey_3_we0 = RoundKey_3_we0;
assign arrayRoundKey_3_din0 = RoundKey_3_d0;
assign arrayRoundKey_3_address1 = RoundKey_3_address1;
assign arrayRoundKey_3_ce1 = RoundKey_3_ce1;
assign arrayRoundKey_3_we1 = RoundKey_3_we1;
assign arrayRoundKey_3_din1 = RoundKey_3_d1;
assign arrayRoundKey_3_ready= ready_initial | arrayRoundKey_3_done;
assign arrayRoundKey_3_done =    AESL_done_delay;


//------------------------arrayKey_0 Instantiation--------------

// The input and output of arrayKey_0
wire    arrayKey_0_ce0, arrayKey_0_ce1;
wire    arrayKey_0_we0, arrayKey_0_we1;
wire    [1 : 0]    arrayKey_0_address0, arrayKey_0_address1;
wire    [7 : 0]    arrayKey_0_din0, arrayKey_0_din1;
wire    [7 : 0]    arrayKey_0_dout0, arrayKey_0_dout1;
wire    arrayKey_0_ready;
wire    arrayKey_0_done;

`AESL_MEM_Key_0 `AESL_MEM_INST_Key_0(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayKey_0_ce0),
    .we0        (arrayKey_0_we0),
    .address0   (arrayKey_0_address0),
    .din0       (arrayKey_0_din0),
    .dout0      (arrayKey_0_dout0),
    .ce1        (arrayKey_0_ce1),
    .we1        (arrayKey_0_we1),
    .address1   (arrayKey_0_address1),
    .din1       (arrayKey_0_din1),
    .dout1      (arrayKey_0_dout1),
    .ready      (arrayKey_0_ready),
    .done    (arrayKey_0_done)
);

// Assignment between dut and arrayKey_0
assign arrayKey_0_address0 = Key_0_address0;
assign arrayKey_0_ce0 = Key_0_ce0;
assign Key_0_q0 = arrayKey_0_dout0;
assign arrayKey_0_we0 = 0;
assign arrayKey_0_din0 = 0;
assign arrayKey_0_address1 = Key_0_address1;
assign arrayKey_0_ce1 = Key_0_ce1;
assign Key_0_q1 = arrayKey_0_dout1;
assign arrayKey_0_we1 = 0;
assign arrayKey_0_din1 = 0;
assign arrayKey_0_ready=    ready;
assign arrayKey_0_done = 0;


//------------------------arrayKey_1 Instantiation--------------

// The input and output of arrayKey_1
wire    arrayKey_1_ce0, arrayKey_1_ce1;
wire    arrayKey_1_we0, arrayKey_1_we1;
wire    [1 : 0]    arrayKey_1_address0, arrayKey_1_address1;
wire    [7 : 0]    arrayKey_1_din0, arrayKey_1_din1;
wire    [7 : 0]    arrayKey_1_dout0, arrayKey_1_dout1;
wire    arrayKey_1_ready;
wire    arrayKey_1_done;

`AESL_MEM_Key_1 `AESL_MEM_INST_Key_1(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayKey_1_ce0),
    .we0        (arrayKey_1_we0),
    .address0   (arrayKey_1_address0),
    .din0       (arrayKey_1_din0),
    .dout0      (arrayKey_1_dout0),
    .ce1        (arrayKey_1_ce1),
    .we1        (arrayKey_1_we1),
    .address1   (arrayKey_1_address1),
    .din1       (arrayKey_1_din1),
    .dout1      (arrayKey_1_dout1),
    .ready      (arrayKey_1_ready),
    .done    (arrayKey_1_done)
);

// Assignment between dut and arrayKey_1
assign arrayKey_1_address0 = Key_1_address0;
assign arrayKey_1_ce0 = Key_1_ce0;
assign Key_1_q0 = arrayKey_1_dout0;
assign arrayKey_1_we0 = 0;
assign arrayKey_1_din0 = 0;
assign arrayKey_1_address1 = Key_1_address1;
assign arrayKey_1_ce1 = Key_1_ce1;
assign Key_1_q1 = arrayKey_1_dout1;
assign arrayKey_1_we1 = 0;
assign arrayKey_1_din1 = 0;
assign arrayKey_1_ready=    ready;
assign arrayKey_1_done = 0;


//------------------------arrayKey_2 Instantiation--------------

// The input and output of arrayKey_2
wire    arrayKey_2_ce0, arrayKey_2_ce1;
wire    arrayKey_2_we0, arrayKey_2_we1;
wire    [1 : 0]    arrayKey_2_address0, arrayKey_2_address1;
wire    [7 : 0]    arrayKey_2_din0, arrayKey_2_din1;
wire    [7 : 0]    arrayKey_2_dout0, arrayKey_2_dout1;
wire    arrayKey_2_ready;
wire    arrayKey_2_done;

`AESL_MEM_Key_2 `AESL_MEM_INST_Key_2(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayKey_2_ce0),
    .we0        (arrayKey_2_we0),
    .address0   (arrayKey_2_address0),
    .din0       (arrayKey_2_din0),
    .dout0      (arrayKey_2_dout0),
    .ce1        (arrayKey_2_ce1),
    .we1        (arrayKey_2_we1),
    .address1   (arrayKey_2_address1),
    .din1       (arrayKey_2_din1),
    .dout1      (arrayKey_2_dout1),
    .ready      (arrayKey_2_ready),
    .done    (arrayKey_2_done)
);

// Assignment between dut and arrayKey_2
assign arrayKey_2_address0 = Key_2_address0;
assign arrayKey_2_ce0 = Key_2_ce0;
assign Key_2_q0 = arrayKey_2_dout0;
assign arrayKey_2_we0 = 0;
assign arrayKey_2_din0 = 0;
assign arrayKey_2_address1 = Key_2_address1;
assign arrayKey_2_ce1 = Key_2_ce1;
assign Key_2_q1 = arrayKey_2_dout1;
assign arrayKey_2_we1 = 0;
assign arrayKey_2_din1 = 0;
assign arrayKey_2_ready=    ready;
assign arrayKey_2_done = 0;


//------------------------arrayKey_3 Instantiation--------------

// The input and output of arrayKey_3
wire    arrayKey_3_ce0, arrayKey_3_ce1;
wire    arrayKey_3_we0, arrayKey_3_we1;
wire    [1 : 0]    arrayKey_3_address0, arrayKey_3_address1;
wire    [7 : 0]    arrayKey_3_din0, arrayKey_3_din1;
wire    [7 : 0]    arrayKey_3_dout0, arrayKey_3_dout1;
wire    arrayKey_3_ready;
wire    arrayKey_3_done;

`AESL_MEM_Key_3 `AESL_MEM_INST_Key_3(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayKey_3_ce0),
    .we0        (arrayKey_3_we0),
    .address0   (arrayKey_3_address0),
    .din0       (arrayKey_3_din0),
    .dout0      (arrayKey_3_dout0),
    .ce1        (arrayKey_3_ce1),
    .we1        (arrayKey_3_we1),
    .address1   (arrayKey_3_address1),
    .din1       (arrayKey_3_din1),
    .dout1      (arrayKey_3_dout1),
    .ready      (arrayKey_3_ready),
    .done    (arrayKey_3_done)
);

// Assignment between dut and arrayKey_3
assign arrayKey_3_address0 = Key_3_address0;
assign arrayKey_3_ce0 = Key_3_ce0;
assign Key_3_q0 = arrayKey_3_dout0;
assign arrayKey_3_we0 = 0;
assign arrayKey_3_din0 = 0;
assign arrayKey_3_address1 = Key_3_address1;
assign arrayKey_3_ce1 = Key_3_ce1;
assign Key_3_q1 = arrayKey_3_dout1;
assign arrayKey_3_we1 = 0;
assign arrayKey_3_din1 = 0;
assign arrayKey_3_ready=    ready;
assign arrayKey_3_done = 0;


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
    fp1 = $fopen("./rtl.KeyExpansion.autotvout_RoundKey_0.dat", "r");
    fp2 = $fopen("./impl_rtl.KeyExpansion.autotvout_RoundKey_0.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.KeyExpansion.autotvout_RoundKey_0.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.KeyExpansion.autotvout_RoundKey_0.dat\"!");
    else begin
        $display("Comparing rtl.KeyExpansion.autotvout_RoundKey_0.dat with impl_rtl.KeyExpansion.autotvout_RoundKey_0.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
    fp1 = $fopen("./rtl.KeyExpansion.autotvout_RoundKey_1.dat", "r");
    fp2 = $fopen("./impl_rtl.KeyExpansion.autotvout_RoundKey_1.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.KeyExpansion.autotvout_RoundKey_1.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.KeyExpansion.autotvout_RoundKey_1.dat\"!");
    else begin
        $display("Comparing rtl.KeyExpansion.autotvout_RoundKey_1.dat with impl_rtl.KeyExpansion.autotvout_RoundKey_1.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
    fp1 = $fopen("./rtl.KeyExpansion.autotvout_RoundKey_2.dat", "r");
    fp2 = $fopen("./impl_rtl.KeyExpansion.autotvout_RoundKey_2.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.KeyExpansion.autotvout_RoundKey_2.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.KeyExpansion.autotvout_RoundKey_2.dat\"!");
    else begin
        $display("Comparing rtl.KeyExpansion.autotvout_RoundKey_2.dat with impl_rtl.KeyExpansion.autotvout_RoundKey_2.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
    fp1 = $fopen("./rtl.KeyExpansion.autotvout_RoundKey_3.dat", "r");
    fp2 = $fopen("./impl_rtl.KeyExpansion.autotvout_RoundKey_3.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.KeyExpansion.autotvout_RoundKey_3.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.KeyExpansion.autotvout_RoundKey_3.dat\"!");
    else begin
        $display("Comparing rtl.KeyExpansion.autotvout_RoundKey_3.dat with impl_rtl.KeyExpansion.autotvout_RoundKey_3.dat");
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
reg end_Key_0;
reg [31:0] size_Key_0;
reg [31:0] size_Key_0_backup;
reg end_Key_1;
reg [31:0] size_Key_1;
reg [31:0] size_Key_1_backup;
reg end_Key_2;
reg [31:0] size_Key_2;
reg [31:0] size_Key_2_backup;
reg end_Key_3;
reg [31:0] size_Key_3;
reg [31:0] size_Key_3_backup;

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

reg dump_tvout_finish_RoundKey_0;

initial begin : dump_tvout_runtime_sign_RoundKey_0
    integer fp;
    dump_tvout_finish_RoundKey_0 = 0;
    fp = $fopen(`AUTOTB_TVOUT_RoundKey_0_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_RoundKey_0_out_wrapc);
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
    fp = $fopen(`AUTOTB_TVOUT_RoundKey_0_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_RoundKey_0_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_RoundKey_0 = 1;
end


reg dump_tvout_finish_RoundKey_1;

initial begin : dump_tvout_runtime_sign_RoundKey_1
    integer fp;
    dump_tvout_finish_RoundKey_1 = 0;
    fp = $fopen(`AUTOTB_TVOUT_RoundKey_1_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_RoundKey_1_out_wrapc);
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
    fp = $fopen(`AUTOTB_TVOUT_RoundKey_1_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_RoundKey_1_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_RoundKey_1 = 1;
end


reg dump_tvout_finish_RoundKey_2;

initial begin : dump_tvout_runtime_sign_RoundKey_2
    integer fp;
    dump_tvout_finish_RoundKey_2 = 0;
    fp = $fopen(`AUTOTB_TVOUT_RoundKey_2_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_RoundKey_2_out_wrapc);
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
    fp = $fopen(`AUTOTB_TVOUT_RoundKey_2_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_RoundKey_2_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_RoundKey_2 = 1;
end


reg dump_tvout_finish_RoundKey_3;

initial begin : dump_tvout_runtime_sign_RoundKey_3
    integer fp;
    dump_tvout_finish_RoundKey_3 = 0;
    fp = $fopen(`AUTOTB_TVOUT_RoundKey_3_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_RoundKey_3_out_wrapc);
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
    fp = $fopen(`AUTOTB_TVOUT_RoundKey_3_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_RoundKey_3_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_RoundKey_3 = 1;
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
        // non-dataflow design && latency is predictable && no AXI master/slave interface
        get_intra_progress(intra_progress);
        if (intra_progress > 1000) begin
            $display("// RTL Simulation : transaction %0d run-time latency is greater than %0f time(s) of the prediction @ \"%0t\"", start_cnt, intra_progress, $time);
            $display("////////////////////////////////////////////////////////////////////////////////////");
            $finish;
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
                interval[i] = start_timestamp[i + 1] - start_timestamp[i];
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
