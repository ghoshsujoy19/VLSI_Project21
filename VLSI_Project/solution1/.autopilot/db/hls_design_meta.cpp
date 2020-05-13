#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_start", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_done", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_idle", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_ready", 1, hls_out, -1, "", "", 1),
	Port_Property("state_0_0_i", 8, hls_in, 0, "ap_ovld", "in_data", 1),
	Port_Property("state_0_0_o", 8, hls_out, 0, "ap_ovld", "out_data", 1),
	Port_Property("state_0_0_o_ap_vld", 1, hls_out, 0, "ap_ovld", "out_vld", 1),
	Port_Property("state_0_1_i", 8, hls_in, 1, "ap_ovld", "in_data", 1),
	Port_Property("state_0_1_o", 8, hls_out, 1, "ap_ovld", "out_data", 1),
	Port_Property("state_0_1_o_ap_vld", 1, hls_out, 1, "ap_ovld", "out_vld", 1),
	Port_Property("state_0_2_i", 8, hls_in, 2, "ap_ovld", "in_data", 1),
	Port_Property("state_0_2_o", 8, hls_out, 2, "ap_ovld", "out_data", 1),
	Port_Property("state_0_2_o_ap_vld", 1, hls_out, 2, "ap_ovld", "out_vld", 1),
	Port_Property("state_0_3_i", 8, hls_in, 3, "ap_ovld", "in_data", 1),
	Port_Property("state_0_3_o", 8, hls_out, 3, "ap_ovld", "out_data", 1),
	Port_Property("state_0_3_o_ap_vld", 1, hls_out, 3, "ap_ovld", "out_vld", 1),
	Port_Property("state_1_0_i", 8, hls_in, 4, "ap_ovld", "in_data", 1),
	Port_Property("state_1_0_o", 8, hls_out, 4, "ap_ovld", "out_data", 1),
	Port_Property("state_1_0_o_ap_vld", 1, hls_out, 4, "ap_ovld", "out_vld", 1),
	Port_Property("state_1_1_i", 8, hls_in, 5, "ap_ovld", "in_data", 1),
	Port_Property("state_1_1_o", 8, hls_out, 5, "ap_ovld", "out_data", 1),
	Port_Property("state_1_1_o_ap_vld", 1, hls_out, 5, "ap_ovld", "out_vld", 1),
	Port_Property("state_1_2_i", 8, hls_in, 6, "ap_ovld", "in_data", 1),
	Port_Property("state_1_2_o", 8, hls_out, 6, "ap_ovld", "out_data", 1),
	Port_Property("state_1_2_o_ap_vld", 1, hls_out, 6, "ap_ovld", "out_vld", 1),
	Port_Property("state_1_3_i", 8, hls_in, 7, "ap_ovld", "in_data", 1),
	Port_Property("state_1_3_o", 8, hls_out, 7, "ap_ovld", "out_data", 1),
	Port_Property("state_1_3_o_ap_vld", 1, hls_out, 7, "ap_ovld", "out_vld", 1),
	Port_Property("state_2_0_i", 8, hls_in, 8, "ap_ovld", "in_data", 1),
	Port_Property("state_2_0_o", 8, hls_out, 8, "ap_ovld", "out_data", 1),
	Port_Property("state_2_0_o_ap_vld", 1, hls_out, 8, "ap_ovld", "out_vld", 1),
	Port_Property("state_2_1_i", 8, hls_in, 9, "ap_ovld", "in_data", 1),
	Port_Property("state_2_1_o", 8, hls_out, 9, "ap_ovld", "out_data", 1),
	Port_Property("state_2_1_o_ap_vld", 1, hls_out, 9, "ap_ovld", "out_vld", 1),
	Port_Property("state_2_2_i", 8, hls_in, 10, "ap_ovld", "in_data", 1),
	Port_Property("state_2_2_o", 8, hls_out, 10, "ap_ovld", "out_data", 1),
	Port_Property("state_2_2_o_ap_vld", 1, hls_out, 10, "ap_ovld", "out_vld", 1),
	Port_Property("state_2_3_i", 8, hls_in, 11, "ap_ovld", "in_data", 1),
	Port_Property("state_2_3_o", 8, hls_out, 11, "ap_ovld", "out_data", 1),
	Port_Property("state_2_3_o_ap_vld", 1, hls_out, 11, "ap_ovld", "out_vld", 1),
	Port_Property("state_3_0_i", 8, hls_in, 12, "ap_ovld", "in_data", 1),
	Port_Property("state_3_0_o", 8, hls_out, 12, "ap_ovld", "out_data", 1),
	Port_Property("state_3_0_o_ap_vld", 1, hls_out, 12, "ap_ovld", "out_vld", 1),
	Port_Property("state_3_1_i", 8, hls_in, 13, "ap_ovld", "in_data", 1),
	Port_Property("state_3_1_o", 8, hls_out, 13, "ap_ovld", "out_data", 1),
	Port_Property("state_3_1_o_ap_vld", 1, hls_out, 13, "ap_ovld", "out_vld", 1),
	Port_Property("state_3_2_i", 8, hls_in, 14, "ap_ovld", "in_data", 1),
	Port_Property("state_3_2_o", 8, hls_out, 14, "ap_ovld", "out_data", 1),
	Port_Property("state_3_2_o_ap_vld", 1, hls_out, 14, "ap_ovld", "out_vld", 1),
	Port_Property("state_3_3_i", 8, hls_in, 15, "ap_ovld", "in_data", 1),
	Port_Property("state_3_3_o", 8, hls_out, 15, "ap_ovld", "out_data", 1),
	Port_Property("state_3_3_o_ap_vld", 1, hls_out, 15, "ap_ovld", "out_vld", 1),
	Port_Property("RoundKey_0_address0", 4, hls_out, 16, "ap_memory", "mem_address", 1),
	Port_Property("RoundKey_0_ce0", 1, hls_out, 16, "ap_memory", "mem_ce", 1),
	Port_Property("RoundKey_0_q0", 8, hls_in, 16, "ap_memory", "mem_dout", 1),
	Port_Property("RoundKey_1_address0", 4, hls_out, 17, "ap_memory", "mem_address", 1),
	Port_Property("RoundKey_1_ce0", 1, hls_out, 17, "ap_memory", "mem_ce", 1),
	Port_Property("RoundKey_1_q0", 8, hls_in, 17, "ap_memory", "mem_dout", 1),
	Port_Property("RoundKey_2_address0", 4, hls_out, 18, "ap_memory", "mem_address", 1),
	Port_Property("RoundKey_2_ce0", 1, hls_out, 18, "ap_memory", "mem_ce", 1),
	Port_Property("RoundKey_2_q0", 8, hls_in, 18, "ap_memory", "mem_dout", 1),
	Port_Property("RoundKey_3_address0", 4, hls_out, 19, "ap_memory", "mem_address", 1),
	Port_Property("RoundKey_3_ce0", 1, hls_out, 19, "ap_memory", "mem_ce", 1),
	Port_Property("RoundKey_3_q0", 8, hls_in, 19, "ap_memory", "mem_dout", 1),
	Port_Property("RoundKey_4_address0", 4, hls_out, 20, "ap_memory", "mem_address", 1),
	Port_Property("RoundKey_4_ce0", 1, hls_out, 20, "ap_memory", "mem_ce", 1),
	Port_Property("RoundKey_4_q0", 8, hls_in, 20, "ap_memory", "mem_dout", 1),
	Port_Property("RoundKey_5_address0", 4, hls_out, 21, "ap_memory", "mem_address", 1),
	Port_Property("RoundKey_5_ce0", 1, hls_out, 21, "ap_memory", "mem_ce", 1),
	Port_Property("RoundKey_5_q0", 8, hls_in, 21, "ap_memory", "mem_dout", 1),
	Port_Property("RoundKey_6_address0", 4, hls_out, 22, "ap_memory", "mem_address", 1),
	Port_Property("RoundKey_6_ce0", 1, hls_out, 22, "ap_memory", "mem_ce", 1),
	Port_Property("RoundKey_6_q0", 8, hls_in, 22, "ap_memory", "mem_dout", 1),
	Port_Property("RoundKey_7_address0", 4, hls_out, 23, "ap_memory", "mem_address", 1),
	Port_Property("RoundKey_7_ce0", 1, hls_out, 23, "ap_memory", "mem_ce", 1),
	Port_Property("RoundKey_7_q0", 8, hls_in, 23, "ap_memory", "mem_dout", 1),
	Port_Property("RoundKey_8_address0", 4, hls_out, 24, "ap_memory", "mem_address", 1),
	Port_Property("RoundKey_8_ce0", 1, hls_out, 24, "ap_memory", "mem_ce", 1),
	Port_Property("RoundKey_8_q0", 8, hls_in, 24, "ap_memory", "mem_dout", 1),
	Port_Property("RoundKey_9_address0", 4, hls_out, 25, "ap_memory", "mem_address", 1),
	Port_Property("RoundKey_9_ce0", 1, hls_out, 25, "ap_memory", "mem_ce", 1),
	Port_Property("RoundKey_9_q0", 8, hls_in, 25, "ap_memory", "mem_dout", 1),
	Port_Property("RoundKey_10_address0", 4, hls_out, 26, "ap_memory", "mem_address", 1),
	Port_Property("RoundKey_10_ce0", 1, hls_out, 26, "ap_memory", "mem_ce", 1),
	Port_Property("RoundKey_10_q0", 8, hls_in, 26, "ap_memory", "mem_dout", 1),
	Port_Property("RoundKey_11_address0", 4, hls_out, 27, "ap_memory", "mem_address", 1),
	Port_Property("RoundKey_11_ce0", 1, hls_out, 27, "ap_memory", "mem_ce", 1),
	Port_Property("RoundKey_11_q0", 8, hls_in, 27, "ap_memory", "mem_dout", 1),
	Port_Property("RoundKey_12_address0", 4, hls_out, 28, "ap_memory", "mem_address", 1),
	Port_Property("RoundKey_12_ce0", 1, hls_out, 28, "ap_memory", "mem_ce", 1),
	Port_Property("RoundKey_12_q0", 8, hls_in, 28, "ap_memory", "mem_dout", 1),
	Port_Property("RoundKey_13_address0", 4, hls_out, 29, "ap_memory", "mem_address", 1),
	Port_Property("RoundKey_13_ce0", 1, hls_out, 29, "ap_memory", "mem_ce", 1),
	Port_Property("RoundKey_13_q0", 8, hls_in, 29, "ap_memory", "mem_dout", 1),
	Port_Property("RoundKey_14_address0", 4, hls_out, 30, "ap_memory", "mem_address", 1),
	Port_Property("RoundKey_14_ce0", 1, hls_out, 30, "ap_memory", "mem_ce", 1),
	Port_Property("RoundKey_14_q0", 8, hls_in, 30, "ap_memory", "mem_dout", 1),
	Port_Property("RoundKey_15_address0", 4, hls_out, 31, "ap_memory", "mem_address", 1),
	Port_Property("RoundKey_15_ce0", 1, hls_out, 31, "ap_memory", "mem_ce", 1),
	Port_Property("RoundKey_15_q0", 8, hls_in, 31, "ap_memory", "mem_dout", 1),
};
const char* HLS_Design_Meta::dut_name = "InvCipher";
