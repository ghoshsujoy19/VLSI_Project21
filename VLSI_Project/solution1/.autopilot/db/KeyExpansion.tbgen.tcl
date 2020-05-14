set moduleName KeyExpansion
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {KeyExpansion}
set C_modelType { void 0 }
set C_modelArgList {
	{ RoundKey_0 int 8 regular {array 11 { 2 3 } 1 1 }  }
	{ RoundKey_1 int 8 regular {array 11 { 2 3 } 1 1 }  }
	{ RoundKey_2 int 8 regular {array 11 { 2 3 } 1 1 }  }
	{ RoundKey_3 int 8 regular {array 11 { 2 3 } 1 1 }  }
	{ RoundKey_4 int 8 regular {array 11 { 2 3 } 1 1 }  }
	{ RoundKey_5 int 8 regular {array 11 { 2 3 } 1 1 }  }
	{ RoundKey_6 int 8 regular {array 11 { 2 3 } 1 1 }  }
	{ RoundKey_7 int 8 regular {array 11 { 2 3 } 1 1 }  }
	{ RoundKey_8 int 8 regular {array 11 { 2 3 } 1 1 }  }
	{ RoundKey_9 int 8 regular {array 11 { 2 3 } 1 1 }  }
	{ RoundKey_10 int 8 regular {array 11 { 2 3 } 1 1 }  }
	{ RoundKey_11 int 8 regular {array 11 { 2 3 } 1 1 }  }
	{ RoundKey_12 int 8 regular {array 11 { 2 3 } 1 1 }  }
	{ RoundKey_13 int 8 regular {array 11 { 2 3 } 1 1 }  }
	{ RoundKey_14 int 8 regular {array 11 { 2 3 } 1 1 }  }
	{ RoundKey_15 int 8 regular {array 11 { 2 3 } 1 1 }  }
	{ Key_0_read int 8 regular  }
	{ Key_1_read int 8 regular  }
	{ Key_2_read int 8 regular  }
	{ Key_3_read int 8 regular  }
	{ Key_4_read int 8 regular  }
	{ Key_5_read int 8 regular  }
	{ Key_6_read int 8 regular  }
	{ Key_7_read int 8 regular  }
	{ Key_8_read int 8 regular  }
	{ Key_9_read int 8 regular  }
	{ Key_10_read int 8 regular  }
	{ Key_11_read int 8 regular  }
	{ Key_12_read int 8 regular  }
	{ Key_13_read int 8 regular  }
	{ Key_14_read int 8 regular  }
	{ Key_15_read int 8 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "RoundKey_0", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE"} , 
 	{ "Name" : "RoundKey_1", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE"} , 
 	{ "Name" : "RoundKey_2", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE"} , 
 	{ "Name" : "RoundKey_3", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE"} , 
 	{ "Name" : "RoundKey_4", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE"} , 
 	{ "Name" : "RoundKey_5", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE"} , 
 	{ "Name" : "RoundKey_6", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE"} , 
 	{ "Name" : "RoundKey_7", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE"} , 
 	{ "Name" : "RoundKey_8", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE"} , 
 	{ "Name" : "RoundKey_9", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE"} , 
 	{ "Name" : "RoundKey_10", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE"} , 
 	{ "Name" : "RoundKey_11", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE"} , 
 	{ "Name" : "RoundKey_12", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE"} , 
 	{ "Name" : "RoundKey_13", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE"} , 
 	{ "Name" : "RoundKey_14", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE"} , 
 	{ "Name" : "RoundKey_15", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE"} , 
 	{ "Name" : "Key_0_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "Key_1_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "Key_2_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "Key_3_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "Key_4_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "Key_5_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "Key_6_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "Key_7_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "Key_8_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "Key_9_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "Key_10_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "Key_11_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "Key_12_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "Key_13_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "Key_14_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "Key_15_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 102
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ RoundKey_0_address0 sc_out sc_lv 4 signal 0 } 
	{ RoundKey_0_ce0 sc_out sc_logic 1 signal 0 } 
	{ RoundKey_0_we0 sc_out sc_logic 1 signal 0 } 
	{ RoundKey_0_d0 sc_out sc_lv 8 signal 0 } 
	{ RoundKey_0_q0 sc_in sc_lv 8 signal 0 } 
	{ RoundKey_1_address0 sc_out sc_lv 4 signal 1 } 
	{ RoundKey_1_ce0 sc_out sc_logic 1 signal 1 } 
	{ RoundKey_1_we0 sc_out sc_logic 1 signal 1 } 
	{ RoundKey_1_d0 sc_out sc_lv 8 signal 1 } 
	{ RoundKey_1_q0 sc_in sc_lv 8 signal 1 } 
	{ RoundKey_2_address0 sc_out sc_lv 4 signal 2 } 
	{ RoundKey_2_ce0 sc_out sc_logic 1 signal 2 } 
	{ RoundKey_2_we0 sc_out sc_logic 1 signal 2 } 
	{ RoundKey_2_d0 sc_out sc_lv 8 signal 2 } 
	{ RoundKey_2_q0 sc_in sc_lv 8 signal 2 } 
	{ RoundKey_3_address0 sc_out sc_lv 4 signal 3 } 
	{ RoundKey_3_ce0 sc_out sc_logic 1 signal 3 } 
	{ RoundKey_3_we0 sc_out sc_logic 1 signal 3 } 
	{ RoundKey_3_d0 sc_out sc_lv 8 signal 3 } 
	{ RoundKey_3_q0 sc_in sc_lv 8 signal 3 } 
	{ RoundKey_4_address0 sc_out sc_lv 4 signal 4 } 
	{ RoundKey_4_ce0 sc_out sc_logic 1 signal 4 } 
	{ RoundKey_4_we0 sc_out sc_logic 1 signal 4 } 
	{ RoundKey_4_d0 sc_out sc_lv 8 signal 4 } 
	{ RoundKey_4_q0 sc_in sc_lv 8 signal 4 } 
	{ RoundKey_5_address0 sc_out sc_lv 4 signal 5 } 
	{ RoundKey_5_ce0 sc_out sc_logic 1 signal 5 } 
	{ RoundKey_5_we0 sc_out sc_logic 1 signal 5 } 
	{ RoundKey_5_d0 sc_out sc_lv 8 signal 5 } 
	{ RoundKey_5_q0 sc_in sc_lv 8 signal 5 } 
	{ RoundKey_6_address0 sc_out sc_lv 4 signal 6 } 
	{ RoundKey_6_ce0 sc_out sc_logic 1 signal 6 } 
	{ RoundKey_6_we0 sc_out sc_logic 1 signal 6 } 
	{ RoundKey_6_d0 sc_out sc_lv 8 signal 6 } 
	{ RoundKey_6_q0 sc_in sc_lv 8 signal 6 } 
	{ RoundKey_7_address0 sc_out sc_lv 4 signal 7 } 
	{ RoundKey_7_ce0 sc_out sc_logic 1 signal 7 } 
	{ RoundKey_7_we0 sc_out sc_logic 1 signal 7 } 
	{ RoundKey_7_d0 sc_out sc_lv 8 signal 7 } 
	{ RoundKey_7_q0 sc_in sc_lv 8 signal 7 } 
	{ RoundKey_8_address0 sc_out sc_lv 4 signal 8 } 
	{ RoundKey_8_ce0 sc_out sc_logic 1 signal 8 } 
	{ RoundKey_8_we0 sc_out sc_logic 1 signal 8 } 
	{ RoundKey_8_d0 sc_out sc_lv 8 signal 8 } 
	{ RoundKey_8_q0 sc_in sc_lv 8 signal 8 } 
	{ RoundKey_9_address0 sc_out sc_lv 4 signal 9 } 
	{ RoundKey_9_ce0 sc_out sc_logic 1 signal 9 } 
	{ RoundKey_9_we0 sc_out sc_logic 1 signal 9 } 
	{ RoundKey_9_d0 sc_out sc_lv 8 signal 9 } 
	{ RoundKey_9_q0 sc_in sc_lv 8 signal 9 } 
	{ RoundKey_10_address0 sc_out sc_lv 4 signal 10 } 
	{ RoundKey_10_ce0 sc_out sc_logic 1 signal 10 } 
	{ RoundKey_10_we0 sc_out sc_logic 1 signal 10 } 
	{ RoundKey_10_d0 sc_out sc_lv 8 signal 10 } 
	{ RoundKey_10_q0 sc_in sc_lv 8 signal 10 } 
	{ RoundKey_11_address0 sc_out sc_lv 4 signal 11 } 
	{ RoundKey_11_ce0 sc_out sc_logic 1 signal 11 } 
	{ RoundKey_11_we0 sc_out sc_logic 1 signal 11 } 
	{ RoundKey_11_d0 sc_out sc_lv 8 signal 11 } 
	{ RoundKey_11_q0 sc_in sc_lv 8 signal 11 } 
	{ RoundKey_12_address0 sc_out sc_lv 4 signal 12 } 
	{ RoundKey_12_ce0 sc_out sc_logic 1 signal 12 } 
	{ RoundKey_12_we0 sc_out sc_logic 1 signal 12 } 
	{ RoundKey_12_d0 sc_out sc_lv 8 signal 12 } 
	{ RoundKey_12_q0 sc_in sc_lv 8 signal 12 } 
	{ RoundKey_13_address0 sc_out sc_lv 4 signal 13 } 
	{ RoundKey_13_ce0 sc_out sc_logic 1 signal 13 } 
	{ RoundKey_13_we0 sc_out sc_logic 1 signal 13 } 
	{ RoundKey_13_d0 sc_out sc_lv 8 signal 13 } 
	{ RoundKey_13_q0 sc_in sc_lv 8 signal 13 } 
	{ RoundKey_14_address0 sc_out sc_lv 4 signal 14 } 
	{ RoundKey_14_ce0 sc_out sc_logic 1 signal 14 } 
	{ RoundKey_14_we0 sc_out sc_logic 1 signal 14 } 
	{ RoundKey_14_d0 sc_out sc_lv 8 signal 14 } 
	{ RoundKey_14_q0 sc_in sc_lv 8 signal 14 } 
	{ RoundKey_15_address0 sc_out sc_lv 4 signal 15 } 
	{ RoundKey_15_ce0 sc_out sc_logic 1 signal 15 } 
	{ RoundKey_15_we0 sc_out sc_logic 1 signal 15 } 
	{ RoundKey_15_d0 sc_out sc_lv 8 signal 15 } 
	{ RoundKey_15_q0 sc_in sc_lv 8 signal 15 } 
	{ Key_0_read sc_in sc_lv 8 signal 16 } 
	{ Key_1_read sc_in sc_lv 8 signal 17 } 
	{ Key_2_read sc_in sc_lv 8 signal 18 } 
	{ Key_3_read sc_in sc_lv 8 signal 19 } 
	{ Key_4_read sc_in sc_lv 8 signal 20 } 
	{ Key_5_read sc_in sc_lv 8 signal 21 } 
	{ Key_6_read sc_in sc_lv 8 signal 22 } 
	{ Key_7_read sc_in sc_lv 8 signal 23 } 
	{ Key_8_read sc_in sc_lv 8 signal 24 } 
	{ Key_9_read sc_in sc_lv 8 signal 25 } 
	{ Key_10_read sc_in sc_lv 8 signal 26 } 
	{ Key_11_read sc_in sc_lv 8 signal 27 } 
	{ Key_12_read sc_in sc_lv 8 signal 28 } 
	{ Key_13_read sc_in sc_lv 8 signal 29 } 
	{ Key_14_read sc_in sc_lv 8 signal 30 } 
	{ Key_15_read sc_in sc_lv 8 signal 31 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "RoundKey_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "RoundKey_0", "role": "address0" }} , 
 	{ "name": "RoundKey_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_0", "role": "ce0" }} , 
 	{ "name": "RoundKey_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_0", "role": "we0" }} , 
 	{ "name": "RoundKey_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_0", "role": "d0" }} , 
 	{ "name": "RoundKey_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_0", "role": "q0" }} , 
 	{ "name": "RoundKey_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "RoundKey_1", "role": "address0" }} , 
 	{ "name": "RoundKey_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_1", "role": "ce0" }} , 
 	{ "name": "RoundKey_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_1", "role": "we0" }} , 
 	{ "name": "RoundKey_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_1", "role": "d0" }} , 
 	{ "name": "RoundKey_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_1", "role": "q0" }} , 
 	{ "name": "RoundKey_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "RoundKey_2", "role": "address0" }} , 
 	{ "name": "RoundKey_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_2", "role": "ce0" }} , 
 	{ "name": "RoundKey_2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_2", "role": "we0" }} , 
 	{ "name": "RoundKey_2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_2", "role": "d0" }} , 
 	{ "name": "RoundKey_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_2", "role": "q0" }} , 
 	{ "name": "RoundKey_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "RoundKey_3", "role": "address0" }} , 
 	{ "name": "RoundKey_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_3", "role": "ce0" }} , 
 	{ "name": "RoundKey_3_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_3", "role": "we0" }} , 
 	{ "name": "RoundKey_3_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_3", "role": "d0" }} , 
 	{ "name": "RoundKey_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_3", "role": "q0" }} , 
 	{ "name": "RoundKey_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "RoundKey_4", "role": "address0" }} , 
 	{ "name": "RoundKey_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_4", "role": "ce0" }} , 
 	{ "name": "RoundKey_4_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_4", "role": "we0" }} , 
 	{ "name": "RoundKey_4_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_4", "role": "d0" }} , 
 	{ "name": "RoundKey_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_4", "role": "q0" }} , 
 	{ "name": "RoundKey_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "RoundKey_5", "role": "address0" }} , 
 	{ "name": "RoundKey_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_5", "role": "ce0" }} , 
 	{ "name": "RoundKey_5_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_5", "role": "we0" }} , 
 	{ "name": "RoundKey_5_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_5", "role": "d0" }} , 
 	{ "name": "RoundKey_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_5", "role": "q0" }} , 
 	{ "name": "RoundKey_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "RoundKey_6", "role": "address0" }} , 
 	{ "name": "RoundKey_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_6", "role": "ce0" }} , 
 	{ "name": "RoundKey_6_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_6", "role": "we0" }} , 
 	{ "name": "RoundKey_6_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_6", "role": "d0" }} , 
 	{ "name": "RoundKey_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_6", "role": "q0" }} , 
 	{ "name": "RoundKey_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "RoundKey_7", "role": "address0" }} , 
 	{ "name": "RoundKey_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_7", "role": "ce0" }} , 
 	{ "name": "RoundKey_7_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_7", "role": "we0" }} , 
 	{ "name": "RoundKey_7_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_7", "role": "d0" }} , 
 	{ "name": "RoundKey_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_7", "role": "q0" }} , 
 	{ "name": "RoundKey_8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "RoundKey_8", "role": "address0" }} , 
 	{ "name": "RoundKey_8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_8", "role": "ce0" }} , 
 	{ "name": "RoundKey_8_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_8", "role": "we0" }} , 
 	{ "name": "RoundKey_8_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_8", "role": "d0" }} , 
 	{ "name": "RoundKey_8_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_8", "role": "q0" }} , 
 	{ "name": "RoundKey_9_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "RoundKey_9", "role": "address0" }} , 
 	{ "name": "RoundKey_9_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_9", "role": "ce0" }} , 
 	{ "name": "RoundKey_9_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_9", "role": "we0" }} , 
 	{ "name": "RoundKey_9_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_9", "role": "d0" }} , 
 	{ "name": "RoundKey_9_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_9", "role": "q0" }} , 
 	{ "name": "RoundKey_10_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "RoundKey_10", "role": "address0" }} , 
 	{ "name": "RoundKey_10_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_10", "role": "ce0" }} , 
 	{ "name": "RoundKey_10_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_10", "role": "we0" }} , 
 	{ "name": "RoundKey_10_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_10", "role": "d0" }} , 
 	{ "name": "RoundKey_10_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_10", "role": "q0" }} , 
 	{ "name": "RoundKey_11_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "RoundKey_11", "role": "address0" }} , 
 	{ "name": "RoundKey_11_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_11", "role": "ce0" }} , 
 	{ "name": "RoundKey_11_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_11", "role": "we0" }} , 
 	{ "name": "RoundKey_11_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_11", "role": "d0" }} , 
 	{ "name": "RoundKey_11_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_11", "role": "q0" }} , 
 	{ "name": "RoundKey_12_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "RoundKey_12", "role": "address0" }} , 
 	{ "name": "RoundKey_12_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_12", "role": "ce0" }} , 
 	{ "name": "RoundKey_12_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_12", "role": "we0" }} , 
 	{ "name": "RoundKey_12_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_12", "role": "d0" }} , 
 	{ "name": "RoundKey_12_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_12", "role": "q0" }} , 
 	{ "name": "RoundKey_13_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "RoundKey_13", "role": "address0" }} , 
 	{ "name": "RoundKey_13_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_13", "role": "ce0" }} , 
 	{ "name": "RoundKey_13_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_13", "role": "we0" }} , 
 	{ "name": "RoundKey_13_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_13", "role": "d0" }} , 
 	{ "name": "RoundKey_13_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_13", "role": "q0" }} , 
 	{ "name": "RoundKey_14_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "RoundKey_14", "role": "address0" }} , 
 	{ "name": "RoundKey_14_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_14", "role": "ce0" }} , 
 	{ "name": "RoundKey_14_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_14", "role": "we0" }} , 
 	{ "name": "RoundKey_14_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_14", "role": "d0" }} , 
 	{ "name": "RoundKey_14_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_14", "role": "q0" }} , 
 	{ "name": "RoundKey_15_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "RoundKey_15", "role": "address0" }} , 
 	{ "name": "RoundKey_15_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_15", "role": "ce0" }} , 
 	{ "name": "RoundKey_15_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_15", "role": "we0" }} , 
 	{ "name": "RoundKey_15_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_15", "role": "d0" }} , 
 	{ "name": "RoundKey_15_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_15", "role": "q0" }} , 
 	{ "name": "Key_0_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_0_read", "role": "default" }} , 
 	{ "name": "Key_1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_1_read", "role": "default" }} , 
 	{ "name": "Key_2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_2_read", "role": "default" }} , 
 	{ "name": "Key_3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_3_read", "role": "default" }} , 
 	{ "name": "Key_4_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_4_read", "role": "default" }} , 
 	{ "name": "Key_5_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_5_read", "role": "default" }} , 
 	{ "name": "Key_6_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_6_read", "role": "default" }} , 
 	{ "name": "Key_7_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_7_read", "role": "default" }} , 
 	{ "name": "Key_8_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_8_read", "role": "default" }} , 
 	{ "name": "Key_9_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_9_read", "role": "default" }} , 
 	{ "name": "Key_10_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_10_read", "role": "default" }} , 
 	{ "name": "Key_11_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_11_read", "role": "default" }} , 
 	{ "name": "Key_12_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_12_read", "role": "default" }} , 
 	{ "name": "Key_13_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_13_read", "role": "default" }} , 
 	{ "name": "Key_14_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_14_read", "role": "default" }} , 
 	{ "name": "Key_15_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_15_read", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17"],
		"CDFG" : "KeyExpansion",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "32", "EstimateLatencyMax" : "32",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "RoundKey_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "RoundKey_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "RoundKey_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "RoundKey_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "RoundKey_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "RoundKey_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "RoundKey_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "RoundKey_7", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "RoundKey_8", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "RoundKey_9", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "RoundKey_10", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "RoundKey_11", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "RoundKey_12", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "RoundKey_13", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "RoundKey_14", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "RoundKey_15", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "Key_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "Key_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "Key_2_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "Key_3_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "Key_4_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "Key_5_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "Key_6_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "Key_7_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "Key_8_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "Key_9_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "Key_10_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "Key_11_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "Key_12_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "Key_13_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "Key_14_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "Key_15_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "sbox_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sbox_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sbox_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sbox_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sbox_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sbox_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sbox_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sbox_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sbox_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sbox_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sbox_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sbox_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sbox_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sbox_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sbox_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sbox_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Rcon", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sbox_0_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sbox_1_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sbox_2_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sbox_3_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sbox_4_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sbox_5_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sbox_6_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sbox_7_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sbox_8_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sbox_9_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sbox_10_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sbox_11_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sbox_12_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sbox_13_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sbox_14_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sbox_15_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Rcon_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	KeyExpansion {
		RoundKey_0 {Type IO LastRead 1 FirstWrite 0}
		RoundKey_1 {Type IO LastRead 1 FirstWrite 0}
		RoundKey_2 {Type IO LastRead 1 FirstWrite 0}
		RoundKey_3 {Type IO LastRead 1 FirstWrite 0}
		RoundKey_4 {Type IO LastRead 1 FirstWrite 0}
		RoundKey_5 {Type IO LastRead 1 FirstWrite 0}
		RoundKey_6 {Type IO LastRead 1 FirstWrite 0}
		RoundKey_7 {Type IO LastRead 1 FirstWrite 0}
		RoundKey_8 {Type IO LastRead 1 FirstWrite 0}
		RoundKey_9 {Type IO LastRead 1 FirstWrite 0}
		RoundKey_10 {Type IO LastRead 1 FirstWrite 0}
		RoundKey_11 {Type IO LastRead 1 FirstWrite 0}
		RoundKey_12 {Type IO LastRead 1 FirstWrite 0}
		RoundKey_13 {Type IO LastRead 1 FirstWrite 0}
		RoundKey_14 {Type IO LastRead 1 FirstWrite 0}
		RoundKey_15 {Type IO LastRead 1 FirstWrite 0}
		Key_0_read {Type I LastRead 0 FirstWrite -1}
		Key_1_read {Type I LastRead 0 FirstWrite -1}
		Key_2_read {Type I LastRead 0 FirstWrite -1}
		Key_3_read {Type I LastRead 0 FirstWrite -1}
		Key_4_read {Type I LastRead 0 FirstWrite -1}
		Key_5_read {Type I LastRead 0 FirstWrite -1}
		Key_6_read {Type I LastRead 0 FirstWrite -1}
		Key_7_read {Type I LastRead 0 FirstWrite -1}
		Key_8_read {Type I LastRead 0 FirstWrite -1}
		Key_9_read {Type I LastRead 0 FirstWrite -1}
		Key_10_read {Type I LastRead 0 FirstWrite -1}
		Key_11_read {Type I LastRead 0 FirstWrite -1}
		Key_12_read {Type I LastRead 0 FirstWrite -1}
		Key_13_read {Type I LastRead 0 FirstWrite -1}
		Key_14_read {Type I LastRead 0 FirstWrite -1}
		Key_15_read {Type I LastRead 0 FirstWrite -1}
		sbox_0 {Type I LastRead -1 FirstWrite -1}
		sbox_1 {Type I LastRead -1 FirstWrite -1}
		sbox_2 {Type I LastRead -1 FirstWrite -1}
		sbox_3 {Type I LastRead -1 FirstWrite -1}
		sbox_4 {Type I LastRead -1 FirstWrite -1}
		sbox_5 {Type I LastRead -1 FirstWrite -1}
		sbox_6 {Type I LastRead -1 FirstWrite -1}
		sbox_7 {Type I LastRead -1 FirstWrite -1}
		sbox_8 {Type I LastRead -1 FirstWrite -1}
		sbox_9 {Type I LastRead -1 FirstWrite -1}
		sbox_10 {Type I LastRead -1 FirstWrite -1}
		sbox_11 {Type I LastRead -1 FirstWrite -1}
		sbox_12 {Type I LastRead -1 FirstWrite -1}
		sbox_13 {Type I LastRead -1 FirstWrite -1}
		sbox_14 {Type I LastRead -1 FirstWrite -1}
		sbox_15 {Type I LastRead -1 FirstWrite -1}
		Rcon {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "32", "Max" : "32"}
	, {"Name" : "Interval", "Min" : "32", "Max" : "32"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	RoundKey_0 { ap_memory {  { RoundKey_0_address0 mem_address 1 4 }  { RoundKey_0_ce0 mem_ce 1 1 }  { RoundKey_0_we0 mem_we 1 1 }  { RoundKey_0_d0 mem_din 1 8 }  { RoundKey_0_q0 mem_dout 0 8 } } }
	RoundKey_1 { ap_memory {  { RoundKey_1_address0 mem_address 1 4 }  { RoundKey_1_ce0 mem_ce 1 1 }  { RoundKey_1_we0 mem_we 1 1 }  { RoundKey_1_d0 mem_din 1 8 }  { RoundKey_1_q0 mem_dout 0 8 } } }
	RoundKey_2 { ap_memory {  { RoundKey_2_address0 mem_address 1 4 }  { RoundKey_2_ce0 mem_ce 1 1 }  { RoundKey_2_we0 mem_we 1 1 }  { RoundKey_2_d0 mem_din 1 8 }  { RoundKey_2_q0 mem_dout 0 8 } } }
	RoundKey_3 { ap_memory {  { RoundKey_3_address0 mem_address 1 4 }  { RoundKey_3_ce0 mem_ce 1 1 }  { RoundKey_3_we0 mem_we 1 1 }  { RoundKey_3_d0 mem_din 1 8 }  { RoundKey_3_q0 mem_dout 0 8 } } }
	RoundKey_4 { ap_memory {  { RoundKey_4_address0 mem_address 1 4 }  { RoundKey_4_ce0 mem_ce 1 1 }  { RoundKey_4_we0 mem_we 1 1 }  { RoundKey_4_d0 mem_din 1 8 }  { RoundKey_4_q0 mem_dout 0 8 } } }
	RoundKey_5 { ap_memory {  { RoundKey_5_address0 mem_address 1 4 }  { RoundKey_5_ce0 mem_ce 1 1 }  { RoundKey_5_we0 mem_we 1 1 }  { RoundKey_5_d0 mem_din 1 8 }  { RoundKey_5_q0 mem_dout 0 8 } } }
	RoundKey_6 { ap_memory {  { RoundKey_6_address0 mem_address 1 4 }  { RoundKey_6_ce0 mem_ce 1 1 }  { RoundKey_6_we0 mem_we 1 1 }  { RoundKey_6_d0 mem_din 1 8 }  { RoundKey_6_q0 mem_dout 0 8 } } }
	RoundKey_7 { ap_memory {  { RoundKey_7_address0 mem_address 1 4 }  { RoundKey_7_ce0 mem_ce 1 1 }  { RoundKey_7_we0 mem_we 1 1 }  { RoundKey_7_d0 mem_din 1 8 }  { RoundKey_7_q0 mem_dout 0 8 } } }
	RoundKey_8 { ap_memory {  { RoundKey_8_address0 mem_address 1 4 }  { RoundKey_8_ce0 mem_ce 1 1 }  { RoundKey_8_we0 mem_we 1 1 }  { RoundKey_8_d0 mem_din 1 8 }  { RoundKey_8_q0 mem_dout 0 8 } } }
	RoundKey_9 { ap_memory {  { RoundKey_9_address0 mem_address 1 4 }  { RoundKey_9_ce0 mem_ce 1 1 }  { RoundKey_9_we0 mem_we 1 1 }  { RoundKey_9_d0 mem_din 1 8 }  { RoundKey_9_q0 mem_dout 0 8 } } }
	RoundKey_10 { ap_memory {  { RoundKey_10_address0 mem_address 1 4 }  { RoundKey_10_ce0 mem_ce 1 1 }  { RoundKey_10_we0 mem_we 1 1 }  { RoundKey_10_d0 mem_din 1 8 }  { RoundKey_10_q0 mem_dout 0 8 } } }
	RoundKey_11 { ap_memory {  { RoundKey_11_address0 mem_address 1 4 }  { RoundKey_11_ce0 mem_ce 1 1 }  { RoundKey_11_we0 mem_we 1 1 }  { RoundKey_11_d0 mem_din 1 8 }  { RoundKey_11_q0 mem_dout 0 8 } } }
	RoundKey_12 { ap_memory {  { RoundKey_12_address0 mem_address 1 4 }  { RoundKey_12_ce0 mem_ce 1 1 }  { RoundKey_12_we0 mem_we 1 1 }  { RoundKey_12_d0 mem_din 1 8 }  { RoundKey_12_q0 mem_dout 0 8 } } }
	RoundKey_13 { ap_memory {  { RoundKey_13_address0 mem_address 1 4 }  { RoundKey_13_ce0 mem_ce 1 1 }  { RoundKey_13_we0 mem_we 1 1 }  { RoundKey_13_d0 mem_din 1 8 }  { RoundKey_13_q0 mem_dout 0 8 } } }
	RoundKey_14 { ap_memory {  { RoundKey_14_address0 mem_address 1 4 }  { RoundKey_14_ce0 mem_ce 1 1 }  { RoundKey_14_we0 mem_we 1 1 }  { RoundKey_14_d0 mem_din 1 8 }  { RoundKey_14_q0 mem_dout 0 8 } } }
	RoundKey_15 { ap_memory {  { RoundKey_15_address0 mem_address 1 4 }  { RoundKey_15_ce0 mem_ce 1 1 }  { RoundKey_15_we0 mem_we 1 1 }  { RoundKey_15_d0 mem_din 1 8 }  { RoundKey_15_q0 mem_dout 0 8 } } }
	Key_0_read { ap_none {  { Key_0_read in_data 0 8 } } }
	Key_1_read { ap_none {  { Key_1_read in_data 0 8 } } }
	Key_2_read { ap_none {  { Key_2_read in_data 0 8 } } }
	Key_3_read { ap_none {  { Key_3_read in_data 0 8 } } }
	Key_4_read { ap_none {  { Key_4_read in_data 0 8 } } }
	Key_5_read { ap_none {  { Key_5_read in_data 0 8 } } }
	Key_6_read { ap_none {  { Key_6_read in_data 0 8 } } }
	Key_7_read { ap_none {  { Key_7_read in_data 0 8 } } }
	Key_8_read { ap_none {  { Key_8_read in_data 0 8 } } }
	Key_9_read { ap_none {  { Key_9_read in_data 0 8 } } }
	Key_10_read { ap_none {  { Key_10_read in_data 0 8 } } }
	Key_11_read { ap_none {  { Key_11_read in_data 0 8 } } }
	Key_12_read { ap_none {  { Key_12_read in_data 0 8 } } }
	Key_13_read { ap_none {  { Key_13_read in_data 0 8 } } }
	Key_14_read { ap_none {  { Key_14_read in_data 0 8 } } }
	Key_15_read { ap_none {  { Key_15_read in_data 0 8 } } }
}
