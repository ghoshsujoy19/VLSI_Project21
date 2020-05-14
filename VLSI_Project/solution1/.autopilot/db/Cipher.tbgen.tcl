set moduleName Cipher
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
set C_modelName {Cipher}
set C_modelType { int 128 }
set C_modelArgList {
	{ state_0_0_read int 8 regular  }
	{ state_0_1_read int 8 regular  }
	{ state_0_2_read int 8 regular  }
	{ state_0_3_read int 8 regular  }
	{ state_1_0_read int 8 regular  }
	{ state_1_1_read int 8 regular  }
	{ state_1_2_read int 8 regular  }
	{ state_1_3_read int 8 regular  }
	{ state_2_0_read int 8 regular  }
	{ state_2_1_read int 8 regular  }
	{ state_2_2_read int 8 regular  }
	{ state_2_3_read int 8 regular  }
	{ state_3_0_read int 8 regular  }
	{ state_3_1_read int 8 regular  }
	{ state_3_2_read int 8 regular  }
	{ state_3_3_read int 8 regular  }
	{ RoundKey_0 int 8 regular {array 11 { 1 3 } 1 1 }  }
	{ RoundKey_1 int 8 regular {array 11 { 1 3 } 1 1 }  }
	{ RoundKey_2 int 8 regular {array 11 { 1 3 } 1 1 }  }
	{ RoundKey_3 int 8 regular {array 11 { 1 3 } 1 1 }  }
	{ RoundKey_4 int 8 regular {array 11 { 1 3 } 1 1 }  }
	{ RoundKey_5 int 8 regular {array 11 { 1 3 } 1 1 }  }
	{ RoundKey_6 int 8 regular {array 11 { 1 3 } 1 1 }  }
	{ RoundKey_7 int 8 regular {array 11 { 1 3 } 1 1 }  }
	{ RoundKey_8 int 8 regular {array 11 { 1 3 } 1 1 }  }
	{ RoundKey_9 int 8 regular {array 11 { 1 3 } 1 1 }  }
	{ RoundKey_10 int 8 regular {array 11 { 1 3 } 1 1 }  }
	{ RoundKey_11 int 8 regular {array 11 { 1 3 } 1 1 }  }
	{ RoundKey_12 int 8 regular {array 11 { 1 3 } 1 1 }  }
	{ RoundKey_13 int 8 regular {array 11 { 1 3 } 1 1 }  }
	{ RoundKey_14 int 8 regular {array 11 { 1 3 } 1 1 }  }
	{ RoundKey_15 int 8 regular {array 11 { 1 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "state_0_0_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "state_0_1_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "state_0_2_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "state_0_3_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "state_1_0_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "state_1_1_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "state_1_2_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "state_1_3_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "state_2_0_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "state_2_1_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "state_2_2_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "state_2_3_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "state_3_0_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "state_3_1_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "state_3_2_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "state_3_3_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "RoundKey_0", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "RoundKey_1", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "RoundKey_2", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "RoundKey_3", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "RoundKey_4", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "RoundKey_5", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "RoundKey_6", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "RoundKey_7", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "RoundKey_8", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "RoundKey_9", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "RoundKey_10", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "RoundKey_11", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "RoundKey_12", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "RoundKey_13", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "RoundKey_14", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "RoundKey_15", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 128} ]}
# RTL Port declarations: 
set portNum 86
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ state_0_0_read sc_in sc_lv 8 signal 0 } 
	{ state_0_1_read sc_in sc_lv 8 signal 1 } 
	{ state_0_2_read sc_in sc_lv 8 signal 2 } 
	{ state_0_3_read sc_in sc_lv 8 signal 3 } 
	{ state_1_0_read sc_in sc_lv 8 signal 4 } 
	{ state_1_1_read sc_in sc_lv 8 signal 5 } 
	{ state_1_2_read sc_in sc_lv 8 signal 6 } 
	{ state_1_3_read sc_in sc_lv 8 signal 7 } 
	{ state_2_0_read sc_in sc_lv 8 signal 8 } 
	{ state_2_1_read sc_in sc_lv 8 signal 9 } 
	{ state_2_2_read sc_in sc_lv 8 signal 10 } 
	{ state_2_3_read sc_in sc_lv 8 signal 11 } 
	{ state_3_0_read sc_in sc_lv 8 signal 12 } 
	{ state_3_1_read sc_in sc_lv 8 signal 13 } 
	{ state_3_2_read sc_in sc_lv 8 signal 14 } 
	{ state_3_3_read sc_in sc_lv 8 signal 15 } 
	{ RoundKey_0_address0 sc_out sc_lv 4 signal 16 } 
	{ RoundKey_0_ce0 sc_out sc_logic 1 signal 16 } 
	{ RoundKey_0_q0 sc_in sc_lv 8 signal 16 } 
	{ RoundKey_1_address0 sc_out sc_lv 4 signal 17 } 
	{ RoundKey_1_ce0 sc_out sc_logic 1 signal 17 } 
	{ RoundKey_1_q0 sc_in sc_lv 8 signal 17 } 
	{ RoundKey_2_address0 sc_out sc_lv 4 signal 18 } 
	{ RoundKey_2_ce0 sc_out sc_logic 1 signal 18 } 
	{ RoundKey_2_q0 sc_in sc_lv 8 signal 18 } 
	{ RoundKey_3_address0 sc_out sc_lv 4 signal 19 } 
	{ RoundKey_3_ce0 sc_out sc_logic 1 signal 19 } 
	{ RoundKey_3_q0 sc_in sc_lv 8 signal 19 } 
	{ RoundKey_4_address0 sc_out sc_lv 4 signal 20 } 
	{ RoundKey_4_ce0 sc_out sc_logic 1 signal 20 } 
	{ RoundKey_4_q0 sc_in sc_lv 8 signal 20 } 
	{ RoundKey_5_address0 sc_out sc_lv 4 signal 21 } 
	{ RoundKey_5_ce0 sc_out sc_logic 1 signal 21 } 
	{ RoundKey_5_q0 sc_in sc_lv 8 signal 21 } 
	{ RoundKey_6_address0 sc_out sc_lv 4 signal 22 } 
	{ RoundKey_6_ce0 sc_out sc_logic 1 signal 22 } 
	{ RoundKey_6_q0 sc_in sc_lv 8 signal 22 } 
	{ RoundKey_7_address0 sc_out sc_lv 4 signal 23 } 
	{ RoundKey_7_ce0 sc_out sc_logic 1 signal 23 } 
	{ RoundKey_7_q0 sc_in sc_lv 8 signal 23 } 
	{ RoundKey_8_address0 sc_out sc_lv 4 signal 24 } 
	{ RoundKey_8_ce0 sc_out sc_logic 1 signal 24 } 
	{ RoundKey_8_q0 sc_in sc_lv 8 signal 24 } 
	{ RoundKey_9_address0 sc_out sc_lv 4 signal 25 } 
	{ RoundKey_9_ce0 sc_out sc_logic 1 signal 25 } 
	{ RoundKey_9_q0 sc_in sc_lv 8 signal 25 } 
	{ RoundKey_10_address0 sc_out sc_lv 4 signal 26 } 
	{ RoundKey_10_ce0 sc_out sc_logic 1 signal 26 } 
	{ RoundKey_10_q0 sc_in sc_lv 8 signal 26 } 
	{ RoundKey_11_address0 sc_out sc_lv 4 signal 27 } 
	{ RoundKey_11_ce0 sc_out sc_logic 1 signal 27 } 
	{ RoundKey_11_q0 sc_in sc_lv 8 signal 27 } 
	{ RoundKey_12_address0 sc_out sc_lv 4 signal 28 } 
	{ RoundKey_12_ce0 sc_out sc_logic 1 signal 28 } 
	{ RoundKey_12_q0 sc_in sc_lv 8 signal 28 } 
	{ RoundKey_13_address0 sc_out sc_lv 4 signal 29 } 
	{ RoundKey_13_ce0 sc_out sc_logic 1 signal 29 } 
	{ RoundKey_13_q0 sc_in sc_lv 8 signal 29 } 
	{ RoundKey_14_address0 sc_out sc_lv 4 signal 30 } 
	{ RoundKey_14_ce0 sc_out sc_logic 1 signal 30 } 
	{ RoundKey_14_q0 sc_in sc_lv 8 signal 30 } 
	{ RoundKey_15_address0 sc_out sc_lv 4 signal 31 } 
	{ RoundKey_15_ce0 sc_out sc_logic 1 signal 31 } 
	{ RoundKey_15_q0 sc_in sc_lv 8 signal 31 } 
	{ ap_return_0 sc_out sc_lv 8 signal -1 } 
	{ ap_return_1 sc_out sc_lv 8 signal -1 } 
	{ ap_return_2 sc_out sc_lv 8 signal -1 } 
	{ ap_return_3 sc_out sc_lv 8 signal -1 } 
	{ ap_return_4 sc_out sc_lv 8 signal -1 } 
	{ ap_return_5 sc_out sc_lv 8 signal -1 } 
	{ ap_return_6 sc_out sc_lv 8 signal -1 } 
	{ ap_return_7 sc_out sc_lv 8 signal -1 } 
	{ ap_return_8 sc_out sc_lv 8 signal -1 } 
	{ ap_return_9 sc_out sc_lv 8 signal -1 } 
	{ ap_return_10 sc_out sc_lv 8 signal -1 } 
	{ ap_return_11 sc_out sc_lv 8 signal -1 } 
	{ ap_return_12 sc_out sc_lv 8 signal -1 } 
	{ ap_return_13 sc_out sc_lv 8 signal -1 } 
	{ ap_return_14 sc_out sc_lv 8 signal -1 } 
	{ ap_return_15 sc_out sc_lv 8 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "state_0_0_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_0_0_read", "role": "default" }} , 
 	{ "name": "state_0_1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_0_1_read", "role": "default" }} , 
 	{ "name": "state_0_2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_0_2_read", "role": "default" }} , 
 	{ "name": "state_0_3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_0_3_read", "role": "default" }} , 
 	{ "name": "state_1_0_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_1_0_read", "role": "default" }} , 
 	{ "name": "state_1_1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_1_1_read", "role": "default" }} , 
 	{ "name": "state_1_2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_1_2_read", "role": "default" }} , 
 	{ "name": "state_1_3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_1_3_read", "role": "default" }} , 
 	{ "name": "state_2_0_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_2_0_read", "role": "default" }} , 
 	{ "name": "state_2_1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_2_1_read", "role": "default" }} , 
 	{ "name": "state_2_2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_2_2_read", "role": "default" }} , 
 	{ "name": "state_2_3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_2_3_read", "role": "default" }} , 
 	{ "name": "state_3_0_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_3_0_read", "role": "default" }} , 
 	{ "name": "state_3_1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_3_1_read", "role": "default" }} , 
 	{ "name": "state_3_2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_3_2_read", "role": "default" }} , 
 	{ "name": "state_3_3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_3_3_read", "role": "default" }} , 
 	{ "name": "RoundKey_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "RoundKey_0", "role": "address0" }} , 
 	{ "name": "RoundKey_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_0", "role": "ce0" }} , 
 	{ "name": "RoundKey_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_0", "role": "q0" }} , 
 	{ "name": "RoundKey_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "RoundKey_1", "role": "address0" }} , 
 	{ "name": "RoundKey_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_1", "role": "ce0" }} , 
 	{ "name": "RoundKey_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_1", "role": "q0" }} , 
 	{ "name": "RoundKey_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "RoundKey_2", "role": "address0" }} , 
 	{ "name": "RoundKey_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_2", "role": "ce0" }} , 
 	{ "name": "RoundKey_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_2", "role": "q0" }} , 
 	{ "name": "RoundKey_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "RoundKey_3", "role": "address0" }} , 
 	{ "name": "RoundKey_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_3", "role": "ce0" }} , 
 	{ "name": "RoundKey_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_3", "role": "q0" }} , 
 	{ "name": "RoundKey_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "RoundKey_4", "role": "address0" }} , 
 	{ "name": "RoundKey_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_4", "role": "ce0" }} , 
 	{ "name": "RoundKey_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_4", "role": "q0" }} , 
 	{ "name": "RoundKey_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "RoundKey_5", "role": "address0" }} , 
 	{ "name": "RoundKey_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_5", "role": "ce0" }} , 
 	{ "name": "RoundKey_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_5", "role": "q0" }} , 
 	{ "name": "RoundKey_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "RoundKey_6", "role": "address0" }} , 
 	{ "name": "RoundKey_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_6", "role": "ce0" }} , 
 	{ "name": "RoundKey_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_6", "role": "q0" }} , 
 	{ "name": "RoundKey_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "RoundKey_7", "role": "address0" }} , 
 	{ "name": "RoundKey_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_7", "role": "ce0" }} , 
 	{ "name": "RoundKey_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_7", "role": "q0" }} , 
 	{ "name": "RoundKey_8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "RoundKey_8", "role": "address0" }} , 
 	{ "name": "RoundKey_8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_8", "role": "ce0" }} , 
 	{ "name": "RoundKey_8_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_8", "role": "q0" }} , 
 	{ "name": "RoundKey_9_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "RoundKey_9", "role": "address0" }} , 
 	{ "name": "RoundKey_9_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_9", "role": "ce0" }} , 
 	{ "name": "RoundKey_9_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_9", "role": "q0" }} , 
 	{ "name": "RoundKey_10_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "RoundKey_10", "role": "address0" }} , 
 	{ "name": "RoundKey_10_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_10", "role": "ce0" }} , 
 	{ "name": "RoundKey_10_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_10", "role": "q0" }} , 
 	{ "name": "RoundKey_11_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "RoundKey_11", "role": "address0" }} , 
 	{ "name": "RoundKey_11_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_11", "role": "ce0" }} , 
 	{ "name": "RoundKey_11_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_11", "role": "q0" }} , 
 	{ "name": "RoundKey_12_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "RoundKey_12", "role": "address0" }} , 
 	{ "name": "RoundKey_12_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_12", "role": "ce0" }} , 
 	{ "name": "RoundKey_12_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_12", "role": "q0" }} , 
 	{ "name": "RoundKey_13_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "RoundKey_13", "role": "address0" }} , 
 	{ "name": "RoundKey_13_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_13", "role": "ce0" }} , 
 	{ "name": "RoundKey_13_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_13", "role": "q0" }} , 
 	{ "name": "RoundKey_14_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "RoundKey_14", "role": "address0" }} , 
 	{ "name": "RoundKey_14_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_14", "role": "ce0" }} , 
 	{ "name": "RoundKey_14_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_14", "role": "q0" }} , 
 	{ "name": "RoundKey_15_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "RoundKey_15", "role": "address0" }} , 
 	{ "name": "RoundKey_15_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_15", "role": "ce0" }} , 
 	{ "name": "RoundKey_15_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_15", "role": "q0" }} , 
 	{ "name": "ap_return_0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_0", "role": "default" }} , 
 	{ "name": "ap_return_1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_1", "role": "default" }} , 
 	{ "name": "ap_return_2", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_2", "role": "default" }} , 
 	{ "name": "ap_return_3", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_3", "role": "default" }} , 
 	{ "name": "ap_return_4", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_4", "role": "default" }} , 
 	{ "name": "ap_return_5", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_5", "role": "default" }} , 
 	{ "name": "ap_return_6", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_6", "role": "default" }} , 
 	{ "name": "ap_return_7", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_7", "role": "default" }} , 
 	{ "name": "ap_return_8", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_8", "role": "default" }} , 
 	{ "name": "ap_return_9", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_9", "role": "default" }} , 
 	{ "name": "ap_return_10", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_10", "role": "default" }} , 
 	{ "name": "ap_return_11", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_11", "role": "default" }} , 
 	{ "name": "ap_return_12", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_12", "role": "default" }} , 
 	{ "name": "ap_return_13", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_13", "role": "default" }} , 
 	{ "name": "ap_return_14", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_14", "role": "default" }} , 
 	{ "name": "ap_return_15", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_15", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16"],
		"CDFG" : "Cipher",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "65", "EstimateLatencyMax" : "65",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "state_0_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "state_0_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "state_0_2_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "state_0_3_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "state_1_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "state_1_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "state_1_2_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "state_1_3_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "state_2_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "state_2_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "state_2_2_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "state_2_3_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "state_3_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "state_3_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "state_3_2_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "state_3_3_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "RoundKey_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "RoundKey_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "RoundKey_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "RoundKey_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "RoundKey_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "RoundKey_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "RoundKey_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "RoundKey_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "RoundKey_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "RoundKey_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "RoundKey_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "RoundKey_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "RoundKey_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "RoundKey_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "RoundKey_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "RoundKey_15", "Type" : "Memory", "Direction" : "I"},
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
			{"Name" : "sbox_15", "Type" : "Memory", "Direction" : "I"}]},
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
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sbox_15_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	Cipher {
		state_0_0_read {Type I LastRead 1 FirstWrite -1}
		state_0_1_read {Type I LastRead 1 FirstWrite -1}
		state_0_2_read {Type I LastRead 1 FirstWrite -1}
		state_0_3_read {Type I LastRead 1 FirstWrite -1}
		state_1_0_read {Type I LastRead 1 FirstWrite -1}
		state_1_1_read {Type I LastRead 1 FirstWrite -1}
		state_1_2_read {Type I LastRead 1 FirstWrite -1}
		state_1_3_read {Type I LastRead 1 FirstWrite -1}
		state_2_0_read {Type I LastRead 1 FirstWrite -1}
		state_2_1_read {Type I LastRead 1 FirstWrite -1}
		state_2_2_read {Type I LastRead 1 FirstWrite -1}
		state_2_3_read {Type I LastRead 1 FirstWrite -1}
		state_3_0_read {Type I LastRead 1 FirstWrite -1}
		state_3_1_read {Type I LastRead 1 FirstWrite -1}
		state_3_2_read {Type I LastRead 1 FirstWrite -1}
		state_3_3_read {Type I LastRead 1 FirstWrite -1}
		RoundKey_0 {Type I LastRead 19 FirstWrite -1}
		RoundKey_1 {Type I LastRead 19 FirstWrite -1}
		RoundKey_2 {Type I LastRead 19 FirstWrite -1}
		RoundKey_3 {Type I LastRead 19 FirstWrite -1}
		RoundKey_4 {Type I LastRead 19 FirstWrite -1}
		RoundKey_5 {Type I LastRead 19 FirstWrite -1}
		RoundKey_6 {Type I LastRead 19 FirstWrite -1}
		RoundKey_7 {Type I LastRead 19 FirstWrite -1}
		RoundKey_8 {Type I LastRead 19 FirstWrite -1}
		RoundKey_9 {Type I LastRead 19 FirstWrite -1}
		RoundKey_10 {Type I LastRead 19 FirstWrite -1}
		RoundKey_11 {Type I LastRead 19 FirstWrite -1}
		RoundKey_12 {Type I LastRead 19 FirstWrite -1}
		RoundKey_13 {Type I LastRead 19 FirstWrite -1}
		RoundKey_14 {Type I LastRead 19 FirstWrite -1}
		RoundKey_15 {Type I LastRead 19 FirstWrite -1}
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
		sbox_15 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "65", "Max" : "65"}
	, {"Name" : "Interval", "Min" : "65", "Max" : "65"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	state_0_0_read { ap_none {  { state_0_0_read in_data 0 8 } } }
	state_0_1_read { ap_none {  { state_0_1_read in_data 0 8 } } }
	state_0_2_read { ap_none {  { state_0_2_read in_data 0 8 } } }
	state_0_3_read { ap_none {  { state_0_3_read in_data 0 8 } } }
	state_1_0_read { ap_none {  { state_1_0_read in_data 0 8 } } }
	state_1_1_read { ap_none {  { state_1_1_read in_data 0 8 } } }
	state_1_2_read { ap_none {  { state_1_2_read in_data 0 8 } } }
	state_1_3_read { ap_none {  { state_1_3_read in_data 0 8 } } }
	state_2_0_read { ap_none {  { state_2_0_read in_data 0 8 } } }
	state_2_1_read { ap_none {  { state_2_1_read in_data 0 8 } } }
	state_2_2_read { ap_none {  { state_2_2_read in_data 0 8 } } }
	state_2_3_read { ap_none {  { state_2_3_read in_data 0 8 } } }
	state_3_0_read { ap_none {  { state_3_0_read in_data 0 8 } } }
	state_3_1_read { ap_none {  { state_3_1_read in_data 0 8 } } }
	state_3_2_read { ap_none {  { state_3_2_read in_data 0 8 } } }
	state_3_3_read { ap_none {  { state_3_3_read in_data 0 8 } } }
	RoundKey_0 { ap_memory {  { RoundKey_0_address0 mem_address 1 4 }  { RoundKey_0_ce0 mem_ce 1 1 }  { RoundKey_0_q0 mem_dout 0 8 } } }
	RoundKey_1 { ap_memory {  { RoundKey_1_address0 mem_address 1 4 }  { RoundKey_1_ce0 mem_ce 1 1 }  { RoundKey_1_q0 mem_dout 0 8 } } }
	RoundKey_2 { ap_memory {  { RoundKey_2_address0 mem_address 1 4 }  { RoundKey_2_ce0 mem_ce 1 1 }  { RoundKey_2_q0 mem_dout 0 8 } } }
	RoundKey_3 { ap_memory {  { RoundKey_3_address0 mem_address 1 4 }  { RoundKey_3_ce0 mem_ce 1 1 }  { RoundKey_3_q0 mem_dout 0 8 } } }
	RoundKey_4 { ap_memory {  { RoundKey_4_address0 mem_address 1 4 }  { RoundKey_4_ce0 mem_ce 1 1 }  { RoundKey_4_q0 mem_dout 0 8 } } }
	RoundKey_5 { ap_memory {  { RoundKey_5_address0 mem_address 1 4 }  { RoundKey_5_ce0 mem_ce 1 1 }  { RoundKey_5_q0 mem_dout 0 8 } } }
	RoundKey_6 { ap_memory {  { RoundKey_6_address0 mem_address 1 4 }  { RoundKey_6_ce0 mem_ce 1 1 }  { RoundKey_6_q0 mem_dout 0 8 } } }
	RoundKey_7 { ap_memory {  { RoundKey_7_address0 mem_address 1 4 }  { RoundKey_7_ce0 mem_ce 1 1 }  { RoundKey_7_q0 mem_dout 0 8 } } }
	RoundKey_8 { ap_memory {  { RoundKey_8_address0 mem_address 1 4 }  { RoundKey_8_ce0 mem_ce 1 1 }  { RoundKey_8_q0 mem_dout 0 8 } } }
	RoundKey_9 { ap_memory {  { RoundKey_9_address0 mem_address 1 4 }  { RoundKey_9_ce0 mem_ce 1 1 }  { RoundKey_9_q0 mem_dout 0 8 } } }
	RoundKey_10 { ap_memory {  { RoundKey_10_address0 mem_address 1 4 }  { RoundKey_10_ce0 mem_ce 1 1 }  { RoundKey_10_q0 mem_dout 0 8 } } }
	RoundKey_11 { ap_memory {  { RoundKey_11_address0 mem_address 1 4 }  { RoundKey_11_ce0 mem_ce 1 1 }  { RoundKey_11_q0 mem_dout 0 8 } } }
	RoundKey_12 { ap_memory {  { RoundKey_12_address0 mem_address 1 4 }  { RoundKey_12_ce0 mem_ce 1 1 }  { RoundKey_12_q0 mem_dout 0 8 } } }
	RoundKey_13 { ap_memory {  { RoundKey_13_address0 mem_address 1 4 }  { RoundKey_13_ce0 mem_ce 1 1 }  { RoundKey_13_q0 mem_dout 0 8 } } }
	RoundKey_14 { ap_memory {  { RoundKey_14_address0 mem_address 1 4 }  { RoundKey_14_ce0 mem_ce 1 1 }  { RoundKey_14_q0 mem_dout 0 8 } } }
	RoundKey_15 { ap_memory {  { RoundKey_15_address0 mem_address 1 4 }  { RoundKey_15_ce0 mem_ce 1 1 }  { RoundKey_15_q0 mem_dout 0 8 } } }
}
