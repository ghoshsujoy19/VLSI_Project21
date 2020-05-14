set moduleName KeyExpansion
set isTopModule 1
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
	{ RoundKey_0 int 8 regular {array 30 { 2 0 } 1 1 }  }
	{ RoundKey_1 int 8 regular {array 30 { 2 0 } 1 1 }  }
	{ RoundKey_2 int 8 regular {array 30 { 2 0 } 1 1 }  }
	{ RoundKey_3 int 8 regular {array 30 { 2 0 } 1 1 }  }
	{ RoundKey_4 int 8 regular {array 30 { 2 0 } 1 1 }  }
	{ RoundKey_5 int 8 regular {array 30 { 2 0 } 1 1 }  }
	{ RoundKey_6 int 8 regular {array 30 { 2 0 } 1 1 }  }
	{ RoundKey_7 int 8 regular {array 30 { 2 0 } 1 1 }  }
	{ Key_0 int 8 regular {array 2 { 1 1 } 1 1 }  }
	{ Key_1 int 8 regular {array 2 { 1 1 } 1 1 }  }
	{ Key_2 int 8 regular {array 2 { 1 1 } 1 1 }  }
	{ Key_3 int 8 regular {array 2 { 1 1 } 1 1 }  }
	{ Key_4 int 8 regular {array 2 { 1 1 } 1 1 }  }
	{ Key_5 int 8 regular {array 2 { 1 1 } 1 1 }  }
	{ Key_6 int 8 regular {array 2 { 1 1 } 1 1 }  }
	{ Key_7 int 8 regular {array 2 { 1 1 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "RoundKey_0", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 232,"step" : 8}]}]}]} , 
 	{ "Name" : "RoundKey_1", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 1,"up" : 233,"step" : 8}]}]}]} , 
 	{ "Name" : "RoundKey_2", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 2,"up" : 234,"step" : 8}]}]}]} , 
 	{ "Name" : "RoundKey_3", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 3,"up" : 235,"step" : 8}]}]}]} , 
 	{ "Name" : "RoundKey_4", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 4,"up" : 236,"step" : 8}]}]}]} , 
 	{ "Name" : "RoundKey_5", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 5,"up" : 237,"step" : 8}]}]}]} , 
 	{ "Name" : "RoundKey_6", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 6,"up" : 238,"step" : 8}]}]}]} , 
 	{ "Name" : "RoundKey_7", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 7,"up" : 239,"step" : 8}]}]}]} , 
 	{ "Name" : "Key_0", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "Key","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 8,"step" : 8}]}]}]} , 
 	{ "Name" : "Key_1", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "Key","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 1,"up" : 9,"step" : 8}]}]}]} , 
 	{ "Name" : "Key_2", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "Key","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 2,"up" : 10,"step" : 8}]}]}]} , 
 	{ "Name" : "Key_3", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "Key","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 3,"up" : 11,"step" : 8}]}]}]} , 
 	{ "Name" : "Key_4", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "Key","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 4,"up" : 12,"step" : 8}]}]}]} , 
 	{ "Name" : "Key_5", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "Key","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 5,"up" : 13,"step" : 8}]}]}]} , 
 	{ "Name" : "Key_6", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "Key","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 6,"up" : 14,"step" : 8}]}]}]} , 
 	{ "Name" : "Key_7", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "Key","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 7,"up" : 15,"step" : 8}]}]}]} ]}
# RTL Port declarations: 
set portNum 126
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ RoundKey_0_address0 sc_out sc_lv 5 signal 0 } 
	{ RoundKey_0_ce0 sc_out sc_logic 1 signal 0 } 
	{ RoundKey_0_we0 sc_out sc_logic 1 signal 0 } 
	{ RoundKey_0_d0 sc_out sc_lv 8 signal 0 } 
	{ RoundKey_0_q0 sc_in sc_lv 8 signal 0 } 
	{ RoundKey_0_address1 sc_out sc_lv 5 signal 0 } 
	{ RoundKey_0_ce1 sc_out sc_logic 1 signal 0 } 
	{ RoundKey_0_we1 sc_out sc_logic 1 signal 0 } 
	{ RoundKey_0_d1 sc_out sc_lv 8 signal 0 } 
	{ RoundKey_1_address0 sc_out sc_lv 5 signal 1 } 
	{ RoundKey_1_ce0 sc_out sc_logic 1 signal 1 } 
	{ RoundKey_1_we0 sc_out sc_logic 1 signal 1 } 
	{ RoundKey_1_d0 sc_out sc_lv 8 signal 1 } 
	{ RoundKey_1_q0 sc_in sc_lv 8 signal 1 } 
	{ RoundKey_1_address1 sc_out sc_lv 5 signal 1 } 
	{ RoundKey_1_ce1 sc_out sc_logic 1 signal 1 } 
	{ RoundKey_1_we1 sc_out sc_logic 1 signal 1 } 
	{ RoundKey_1_d1 sc_out sc_lv 8 signal 1 } 
	{ RoundKey_2_address0 sc_out sc_lv 5 signal 2 } 
	{ RoundKey_2_ce0 sc_out sc_logic 1 signal 2 } 
	{ RoundKey_2_we0 sc_out sc_logic 1 signal 2 } 
	{ RoundKey_2_d0 sc_out sc_lv 8 signal 2 } 
	{ RoundKey_2_q0 sc_in sc_lv 8 signal 2 } 
	{ RoundKey_2_address1 sc_out sc_lv 5 signal 2 } 
	{ RoundKey_2_ce1 sc_out sc_logic 1 signal 2 } 
	{ RoundKey_2_we1 sc_out sc_logic 1 signal 2 } 
	{ RoundKey_2_d1 sc_out sc_lv 8 signal 2 } 
	{ RoundKey_3_address0 sc_out sc_lv 5 signal 3 } 
	{ RoundKey_3_ce0 sc_out sc_logic 1 signal 3 } 
	{ RoundKey_3_we0 sc_out sc_logic 1 signal 3 } 
	{ RoundKey_3_d0 sc_out sc_lv 8 signal 3 } 
	{ RoundKey_3_q0 sc_in sc_lv 8 signal 3 } 
	{ RoundKey_3_address1 sc_out sc_lv 5 signal 3 } 
	{ RoundKey_3_ce1 sc_out sc_logic 1 signal 3 } 
	{ RoundKey_3_we1 sc_out sc_logic 1 signal 3 } 
	{ RoundKey_3_d1 sc_out sc_lv 8 signal 3 } 
	{ RoundKey_4_address0 sc_out sc_lv 5 signal 4 } 
	{ RoundKey_4_ce0 sc_out sc_logic 1 signal 4 } 
	{ RoundKey_4_we0 sc_out sc_logic 1 signal 4 } 
	{ RoundKey_4_d0 sc_out sc_lv 8 signal 4 } 
	{ RoundKey_4_q0 sc_in sc_lv 8 signal 4 } 
	{ RoundKey_4_address1 sc_out sc_lv 5 signal 4 } 
	{ RoundKey_4_ce1 sc_out sc_logic 1 signal 4 } 
	{ RoundKey_4_we1 sc_out sc_logic 1 signal 4 } 
	{ RoundKey_4_d1 sc_out sc_lv 8 signal 4 } 
	{ RoundKey_5_address0 sc_out sc_lv 5 signal 5 } 
	{ RoundKey_5_ce0 sc_out sc_logic 1 signal 5 } 
	{ RoundKey_5_we0 sc_out sc_logic 1 signal 5 } 
	{ RoundKey_5_d0 sc_out sc_lv 8 signal 5 } 
	{ RoundKey_5_q0 sc_in sc_lv 8 signal 5 } 
	{ RoundKey_5_address1 sc_out sc_lv 5 signal 5 } 
	{ RoundKey_5_ce1 sc_out sc_logic 1 signal 5 } 
	{ RoundKey_5_we1 sc_out sc_logic 1 signal 5 } 
	{ RoundKey_5_d1 sc_out sc_lv 8 signal 5 } 
	{ RoundKey_6_address0 sc_out sc_lv 5 signal 6 } 
	{ RoundKey_6_ce0 sc_out sc_logic 1 signal 6 } 
	{ RoundKey_6_we0 sc_out sc_logic 1 signal 6 } 
	{ RoundKey_6_d0 sc_out sc_lv 8 signal 6 } 
	{ RoundKey_6_q0 sc_in sc_lv 8 signal 6 } 
	{ RoundKey_6_address1 sc_out sc_lv 5 signal 6 } 
	{ RoundKey_6_ce1 sc_out sc_logic 1 signal 6 } 
	{ RoundKey_6_we1 sc_out sc_logic 1 signal 6 } 
	{ RoundKey_6_d1 sc_out sc_lv 8 signal 6 } 
	{ RoundKey_7_address0 sc_out sc_lv 5 signal 7 } 
	{ RoundKey_7_ce0 sc_out sc_logic 1 signal 7 } 
	{ RoundKey_7_we0 sc_out sc_logic 1 signal 7 } 
	{ RoundKey_7_d0 sc_out sc_lv 8 signal 7 } 
	{ RoundKey_7_q0 sc_in sc_lv 8 signal 7 } 
	{ RoundKey_7_address1 sc_out sc_lv 5 signal 7 } 
	{ RoundKey_7_ce1 sc_out sc_logic 1 signal 7 } 
	{ RoundKey_7_we1 sc_out sc_logic 1 signal 7 } 
	{ RoundKey_7_d1 sc_out sc_lv 8 signal 7 } 
	{ Key_0_address0 sc_out sc_lv 1 signal 8 } 
	{ Key_0_ce0 sc_out sc_logic 1 signal 8 } 
	{ Key_0_q0 sc_in sc_lv 8 signal 8 } 
	{ Key_0_address1 sc_out sc_lv 1 signal 8 } 
	{ Key_0_ce1 sc_out sc_logic 1 signal 8 } 
	{ Key_0_q1 sc_in sc_lv 8 signal 8 } 
	{ Key_1_address0 sc_out sc_lv 1 signal 9 } 
	{ Key_1_ce0 sc_out sc_logic 1 signal 9 } 
	{ Key_1_q0 sc_in sc_lv 8 signal 9 } 
	{ Key_1_address1 sc_out sc_lv 1 signal 9 } 
	{ Key_1_ce1 sc_out sc_logic 1 signal 9 } 
	{ Key_1_q1 sc_in sc_lv 8 signal 9 } 
	{ Key_2_address0 sc_out sc_lv 1 signal 10 } 
	{ Key_2_ce0 sc_out sc_logic 1 signal 10 } 
	{ Key_2_q0 sc_in sc_lv 8 signal 10 } 
	{ Key_2_address1 sc_out sc_lv 1 signal 10 } 
	{ Key_2_ce1 sc_out sc_logic 1 signal 10 } 
	{ Key_2_q1 sc_in sc_lv 8 signal 10 } 
	{ Key_3_address0 sc_out sc_lv 1 signal 11 } 
	{ Key_3_ce0 sc_out sc_logic 1 signal 11 } 
	{ Key_3_q0 sc_in sc_lv 8 signal 11 } 
	{ Key_3_address1 sc_out sc_lv 1 signal 11 } 
	{ Key_3_ce1 sc_out sc_logic 1 signal 11 } 
	{ Key_3_q1 sc_in sc_lv 8 signal 11 } 
	{ Key_4_address0 sc_out sc_lv 1 signal 12 } 
	{ Key_4_ce0 sc_out sc_logic 1 signal 12 } 
	{ Key_4_q0 sc_in sc_lv 8 signal 12 } 
	{ Key_4_address1 sc_out sc_lv 1 signal 12 } 
	{ Key_4_ce1 sc_out sc_logic 1 signal 12 } 
	{ Key_4_q1 sc_in sc_lv 8 signal 12 } 
	{ Key_5_address0 sc_out sc_lv 1 signal 13 } 
	{ Key_5_ce0 sc_out sc_logic 1 signal 13 } 
	{ Key_5_q0 sc_in sc_lv 8 signal 13 } 
	{ Key_5_address1 sc_out sc_lv 1 signal 13 } 
	{ Key_5_ce1 sc_out sc_logic 1 signal 13 } 
	{ Key_5_q1 sc_in sc_lv 8 signal 13 } 
	{ Key_6_address0 sc_out sc_lv 1 signal 14 } 
	{ Key_6_ce0 sc_out sc_logic 1 signal 14 } 
	{ Key_6_q0 sc_in sc_lv 8 signal 14 } 
	{ Key_6_address1 sc_out sc_lv 1 signal 14 } 
	{ Key_6_ce1 sc_out sc_logic 1 signal 14 } 
	{ Key_6_q1 sc_in sc_lv 8 signal 14 } 
	{ Key_7_address0 sc_out sc_lv 1 signal 15 } 
	{ Key_7_ce0 sc_out sc_logic 1 signal 15 } 
	{ Key_7_q0 sc_in sc_lv 8 signal 15 } 
	{ Key_7_address1 sc_out sc_lv 1 signal 15 } 
	{ Key_7_ce1 sc_out sc_logic 1 signal 15 } 
	{ Key_7_q1 sc_in sc_lv 8 signal 15 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "RoundKey_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "RoundKey_0", "role": "address0" }} , 
 	{ "name": "RoundKey_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_0", "role": "ce0" }} , 
 	{ "name": "RoundKey_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_0", "role": "we0" }} , 
 	{ "name": "RoundKey_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_0", "role": "d0" }} , 
 	{ "name": "RoundKey_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_0", "role": "q0" }} , 
 	{ "name": "RoundKey_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "RoundKey_0", "role": "address1" }} , 
 	{ "name": "RoundKey_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_0", "role": "ce1" }} , 
 	{ "name": "RoundKey_0_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_0", "role": "we1" }} , 
 	{ "name": "RoundKey_0_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_0", "role": "d1" }} , 
 	{ "name": "RoundKey_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "RoundKey_1", "role": "address0" }} , 
 	{ "name": "RoundKey_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_1", "role": "ce0" }} , 
 	{ "name": "RoundKey_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_1", "role": "we0" }} , 
 	{ "name": "RoundKey_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_1", "role": "d0" }} , 
 	{ "name": "RoundKey_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_1", "role": "q0" }} , 
 	{ "name": "RoundKey_1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "RoundKey_1", "role": "address1" }} , 
 	{ "name": "RoundKey_1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_1", "role": "ce1" }} , 
 	{ "name": "RoundKey_1_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_1", "role": "we1" }} , 
 	{ "name": "RoundKey_1_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_1", "role": "d1" }} , 
 	{ "name": "RoundKey_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "RoundKey_2", "role": "address0" }} , 
 	{ "name": "RoundKey_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_2", "role": "ce0" }} , 
 	{ "name": "RoundKey_2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_2", "role": "we0" }} , 
 	{ "name": "RoundKey_2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_2", "role": "d0" }} , 
 	{ "name": "RoundKey_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_2", "role": "q0" }} , 
 	{ "name": "RoundKey_2_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "RoundKey_2", "role": "address1" }} , 
 	{ "name": "RoundKey_2_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_2", "role": "ce1" }} , 
 	{ "name": "RoundKey_2_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_2", "role": "we1" }} , 
 	{ "name": "RoundKey_2_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_2", "role": "d1" }} , 
 	{ "name": "RoundKey_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "RoundKey_3", "role": "address0" }} , 
 	{ "name": "RoundKey_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_3", "role": "ce0" }} , 
 	{ "name": "RoundKey_3_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_3", "role": "we0" }} , 
 	{ "name": "RoundKey_3_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_3", "role": "d0" }} , 
 	{ "name": "RoundKey_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_3", "role": "q0" }} , 
 	{ "name": "RoundKey_3_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "RoundKey_3", "role": "address1" }} , 
 	{ "name": "RoundKey_3_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_3", "role": "ce1" }} , 
 	{ "name": "RoundKey_3_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_3", "role": "we1" }} , 
 	{ "name": "RoundKey_3_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_3", "role": "d1" }} , 
 	{ "name": "RoundKey_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "RoundKey_4", "role": "address0" }} , 
 	{ "name": "RoundKey_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_4", "role": "ce0" }} , 
 	{ "name": "RoundKey_4_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_4", "role": "we0" }} , 
 	{ "name": "RoundKey_4_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_4", "role": "d0" }} , 
 	{ "name": "RoundKey_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_4", "role": "q0" }} , 
 	{ "name": "RoundKey_4_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "RoundKey_4", "role": "address1" }} , 
 	{ "name": "RoundKey_4_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_4", "role": "ce1" }} , 
 	{ "name": "RoundKey_4_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_4", "role": "we1" }} , 
 	{ "name": "RoundKey_4_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_4", "role": "d1" }} , 
 	{ "name": "RoundKey_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "RoundKey_5", "role": "address0" }} , 
 	{ "name": "RoundKey_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_5", "role": "ce0" }} , 
 	{ "name": "RoundKey_5_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_5", "role": "we0" }} , 
 	{ "name": "RoundKey_5_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_5", "role": "d0" }} , 
 	{ "name": "RoundKey_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_5", "role": "q0" }} , 
 	{ "name": "RoundKey_5_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "RoundKey_5", "role": "address1" }} , 
 	{ "name": "RoundKey_5_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_5", "role": "ce1" }} , 
 	{ "name": "RoundKey_5_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_5", "role": "we1" }} , 
 	{ "name": "RoundKey_5_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_5", "role": "d1" }} , 
 	{ "name": "RoundKey_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "RoundKey_6", "role": "address0" }} , 
 	{ "name": "RoundKey_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_6", "role": "ce0" }} , 
 	{ "name": "RoundKey_6_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_6", "role": "we0" }} , 
 	{ "name": "RoundKey_6_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_6", "role": "d0" }} , 
 	{ "name": "RoundKey_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_6", "role": "q0" }} , 
 	{ "name": "RoundKey_6_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "RoundKey_6", "role": "address1" }} , 
 	{ "name": "RoundKey_6_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_6", "role": "ce1" }} , 
 	{ "name": "RoundKey_6_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_6", "role": "we1" }} , 
 	{ "name": "RoundKey_6_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_6", "role": "d1" }} , 
 	{ "name": "RoundKey_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "RoundKey_7", "role": "address0" }} , 
 	{ "name": "RoundKey_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_7", "role": "ce0" }} , 
 	{ "name": "RoundKey_7_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_7", "role": "we0" }} , 
 	{ "name": "RoundKey_7_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_7", "role": "d0" }} , 
 	{ "name": "RoundKey_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_7", "role": "q0" }} , 
 	{ "name": "RoundKey_7_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "RoundKey_7", "role": "address1" }} , 
 	{ "name": "RoundKey_7_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_7", "role": "ce1" }} , 
 	{ "name": "RoundKey_7_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_7", "role": "we1" }} , 
 	{ "name": "RoundKey_7_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_7", "role": "d1" }} , 
 	{ "name": "Key_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "Key_0", "role": "address0" }} , 
 	{ "name": "Key_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Key_0", "role": "ce0" }} , 
 	{ "name": "Key_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_0", "role": "q0" }} , 
 	{ "name": "Key_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "Key_0", "role": "address1" }} , 
 	{ "name": "Key_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Key_0", "role": "ce1" }} , 
 	{ "name": "Key_0_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_0", "role": "q1" }} , 
 	{ "name": "Key_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "Key_1", "role": "address0" }} , 
 	{ "name": "Key_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Key_1", "role": "ce0" }} , 
 	{ "name": "Key_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_1", "role": "q0" }} , 
 	{ "name": "Key_1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "Key_1", "role": "address1" }} , 
 	{ "name": "Key_1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Key_1", "role": "ce1" }} , 
 	{ "name": "Key_1_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_1", "role": "q1" }} , 
 	{ "name": "Key_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "Key_2", "role": "address0" }} , 
 	{ "name": "Key_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Key_2", "role": "ce0" }} , 
 	{ "name": "Key_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_2", "role": "q0" }} , 
 	{ "name": "Key_2_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "Key_2", "role": "address1" }} , 
 	{ "name": "Key_2_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Key_2", "role": "ce1" }} , 
 	{ "name": "Key_2_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_2", "role": "q1" }} , 
 	{ "name": "Key_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "Key_3", "role": "address0" }} , 
 	{ "name": "Key_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Key_3", "role": "ce0" }} , 
 	{ "name": "Key_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_3", "role": "q0" }} , 
 	{ "name": "Key_3_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "Key_3", "role": "address1" }} , 
 	{ "name": "Key_3_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Key_3", "role": "ce1" }} , 
 	{ "name": "Key_3_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_3", "role": "q1" }} , 
 	{ "name": "Key_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "Key_4", "role": "address0" }} , 
 	{ "name": "Key_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Key_4", "role": "ce0" }} , 
 	{ "name": "Key_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_4", "role": "q0" }} , 
 	{ "name": "Key_4_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "Key_4", "role": "address1" }} , 
 	{ "name": "Key_4_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Key_4", "role": "ce1" }} , 
 	{ "name": "Key_4_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_4", "role": "q1" }} , 
 	{ "name": "Key_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "Key_5", "role": "address0" }} , 
 	{ "name": "Key_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Key_5", "role": "ce0" }} , 
 	{ "name": "Key_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_5", "role": "q0" }} , 
 	{ "name": "Key_5_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "Key_5", "role": "address1" }} , 
 	{ "name": "Key_5_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Key_5", "role": "ce1" }} , 
 	{ "name": "Key_5_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_5", "role": "q1" }} , 
 	{ "name": "Key_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "Key_6", "role": "address0" }} , 
 	{ "name": "Key_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Key_6", "role": "ce0" }} , 
 	{ "name": "Key_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_6", "role": "q0" }} , 
 	{ "name": "Key_6_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "Key_6", "role": "address1" }} , 
 	{ "name": "Key_6_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Key_6", "role": "ce1" }} , 
 	{ "name": "Key_6_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_6", "role": "q1" }} , 
 	{ "name": "Key_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "Key_7", "role": "address0" }} , 
 	{ "name": "Key_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Key_7", "role": "ce0" }} , 
 	{ "name": "Key_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_7", "role": "q0" }} , 
 	{ "name": "Key_7_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "Key_7", "role": "address1" }} , 
 	{ "name": "Key_7_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Key_7", "role": "ce1" }} , 
 	{ "name": "Key_7_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_7", "role": "q1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9"],
		"CDFG" : "KeyExpansion",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "63", "EstimateLatencyMax" : "63",
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
			{"Name" : "Key_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Key_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Key_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Key_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Key_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Key_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Key_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Key_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sbox_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sbox_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sbox_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sbox_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sbox_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sbox_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sbox_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sbox_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Rcon", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sbox_7_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sbox_0_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sbox_1_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sbox_2_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sbox_3_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sbox_4_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sbox_5_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sbox_6_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Rcon_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	KeyExpansion {
		RoundKey_0 {Type IO LastRead 2 FirstWrite 1}
		RoundKey_1 {Type IO LastRead 2 FirstWrite 1}
		RoundKey_2 {Type IO LastRead 2 FirstWrite 1}
		RoundKey_3 {Type IO LastRead 2 FirstWrite 1}
		RoundKey_4 {Type IO LastRead 2 FirstWrite 1}
		RoundKey_5 {Type IO LastRead 2 FirstWrite 1}
		RoundKey_6 {Type IO LastRead 2 FirstWrite 1}
		RoundKey_7 {Type IO LastRead 2 FirstWrite 1}
		Key_0 {Type I LastRead 1 FirstWrite -1}
		Key_1 {Type I LastRead 1 FirstWrite -1}
		Key_2 {Type I LastRead 1 FirstWrite -1}
		Key_3 {Type I LastRead 1 FirstWrite -1}
		Key_4 {Type I LastRead 1 FirstWrite -1}
		Key_5 {Type I LastRead 1 FirstWrite -1}
		Key_6 {Type I LastRead 1 FirstWrite -1}
		Key_7 {Type I LastRead 1 FirstWrite -1}
		sbox_7 {Type I LastRead -1 FirstWrite -1}
		sbox_0 {Type I LastRead -1 FirstWrite -1}
		sbox_1 {Type I LastRead -1 FirstWrite -1}
		sbox_2 {Type I LastRead -1 FirstWrite -1}
		sbox_3 {Type I LastRead -1 FirstWrite -1}
		sbox_4 {Type I LastRead -1 FirstWrite -1}
		sbox_5 {Type I LastRead -1 FirstWrite -1}
		sbox_6 {Type I LastRead -1 FirstWrite -1}
		Rcon {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "63", "Max" : "63"}
	, {"Name" : "Interval", "Min" : "64", "Max" : "64"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	RoundKey_0 { ap_memory {  { RoundKey_0_address0 mem_address 1 5 }  { RoundKey_0_ce0 mem_ce 1 1 }  { RoundKey_0_we0 mem_we 1 1 }  { RoundKey_0_d0 mem_din 1 8 }  { RoundKey_0_q0 mem_dout 0 8 }  { RoundKey_0_address1 MemPortADDR2 1 5 }  { RoundKey_0_ce1 MemPortCE2 1 1 }  { RoundKey_0_we1 MemPortWE2 1 1 }  { RoundKey_0_d1 MemPortDIN2 1 8 } } }
	RoundKey_1 { ap_memory {  { RoundKey_1_address0 mem_address 1 5 }  { RoundKey_1_ce0 mem_ce 1 1 }  { RoundKey_1_we0 mem_we 1 1 }  { RoundKey_1_d0 mem_din 1 8 }  { RoundKey_1_q0 mem_dout 0 8 }  { RoundKey_1_address1 MemPortADDR2 1 5 }  { RoundKey_1_ce1 MemPortCE2 1 1 }  { RoundKey_1_we1 MemPortWE2 1 1 }  { RoundKey_1_d1 MemPortDIN2 1 8 } } }
	RoundKey_2 { ap_memory {  { RoundKey_2_address0 mem_address 1 5 }  { RoundKey_2_ce0 mem_ce 1 1 }  { RoundKey_2_we0 mem_we 1 1 }  { RoundKey_2_d0 mem_din 1 8 }  { RoundKey_2_q0 mem_dout 0 8 }  { RoundKey_2_address1 MemPortADDR2 1 5 }  { RoundKey_2_ce1 MemPortCE2 1 1 }  { RoundKey_2_we1 MemPortWE2 1 1 }  { RoundKey_2_d1 MemPortDIN2 1 8 } } }
	RoundKey_3 { ap_memory {  { RoundKey_3_address0 mem_address 1 5 }  { RoundKey_3_ce0 mem_ce 1 1 }  { RoundKey_3_we0 mem_we 1 1 }  { RoundKey_3_d0 mem_din 1 8 }  { RoundKey_3_q0 mem_dout 0 8 }  { RoundKey_3_address1 MemPortADDR2 1 5 }  { RoundKey_3_ce1 MemPortCE2 1 1 }  { RoundKey_3_we1 MemPortWE2 1 1 }  { RoundKey_3_d1 MemPortDIN2 1 8 } } }
	RoundKey_4 { ap_memory {  { RoundKey_4_address0 mem_address 1 5 }  { RoundKey_4_ce0 mem_ce 1 1 }  { RoundKey_4_we0 mem_we 1 1 }  { RoundKey_4_d0 mem_din 1 8 }  { RoundKey_4_q0 mem_dout 0 8 }  { RoundKey_4_address1 MemPortADDR2 1 5 }  { RoundKey_4_ce1 MemPortCE2 1 1 }  { RoundKey_4_we1 MemPortWE2 1 1 }  { RoundKey_4_d1 MemPortDIN2 1 8 } } }
	RoundKey_5 { ap_memory {  { RoundKey_5_address0 mem_address 1 5 }  { RoundKey_5_ce0 mem_ce 1 1 }  { RoundKey_5_we0 mem_we 1 1 }  { RoundKey_5_d0 mem_din 1 8 }  { RoundKey_5_q0 mem_dout 0 8 }  { RoundKey_5_address1 MemPortADDR2 1 5 }  { RoundKey_5_ce1 MemPortCE2 1 1 }  { RoundKey_5_we1 MemPortWE2 1 1 }  { RoundKey_5_d1 MemPortDIN2 1 8 } } }
	RoundKey_6 { ap_memory {  { RoundKey_6_address0 mem_address 1 5 }  { RoundKey_6_ce0 mem_ce 1 1 }  { RoundKey_6_we0 mem_we 1 1 }  { RoundKey_6_d0 mem_din 1 8 }  { RoundKey_6_q0 mem_dout 0 8 }  { RoundKey_6_address1 MemPortADDR2 1 5 }  { RoundKey_6_ce1 MemPortCE2 1 1 }  { RoundKey_6_we1 MemPortWE2 1 1 }  { RoundKey_6_d1 MemPortDIN2 1 8 } } }
	RoundKey_7 { ap_memory {  { RoundKey_7_address0 mem_address 1 5 }  { RoundKey_7_ce0 mem_ce 1 1 }  { RoundKey_7_we0 mem_we 1 1 }  { RoundKey_7_d0 mem_din 1 8 }  { RoundKey_7_q0 mem_dout 0 8 }  { RoundKey_7_address1 MemPortADDR2 1 5 }  { RoundKey_7_ce1 MemPortCE2 1 1 }  { RoundKey_7_we1 MemPortWE2 1 1 }  { RoundKey_7_d1 MemPortDIN2 1 8 } } }
	Key_0 { ap_memory {  { Key_0_address0 mem_address 1 1 }  { Key_0_ce0 mem_ce 1 1 }  { Key_0_q0 mem_dout 0 8 }  { Key_0_address1 MemPortADDR2 1 1 }  { Key_0_ce1 MemPortCE2 1 1 }  { Key_0_q1 MemPortDOUT2 0 8 } } }
	Key_1 { ap_memory {  { Key_1_address0 mem_address 1 1 }  { Key_1_ce0 mem_ce 1 1 }  { Key_1_q0 mem_dout 0 8 }  { Key_1_address1 MemPortADDR2 1 1 }  { Key_1_ce1 MemPortCE2 1 1 }  { Key_1_q1 MemPortDOUT2 0 8 } } }
	Key_2 { ap_memory {  { Key_2_address0 mem_address 1 1 }  { Key_2_ce0 mem_ce 1 1 }  { Key_2_q0 mem_dout 0 8 }  { Key_2_address1 MemPortADDR2 1 1 }  { Key_2_ce1 MemPortCE2 1 1 }  { Key_2_q1 MemPortDOUT2 0 8 } } }
	Key_3 { ap_memory {  { Key_3_address0 mem_address 1 1 }  { Key_3_ce0 mem_ce 1 1 }  { Key_3_q0 mem_dout 0 8 }  { Key_3_address1 MemPortADDR2 1 1 }  { Key_3_ce1 MemPortCE2 1 1 }  { Key_3_q1 MemPortDOUT2 0 8 } } }
	Key_4 { ap_memory {  { Key_4_address0 mem_address 1 1 }  { Key_4_ce0 mem_ce 1 1 }  { Key_4_q0 mem_dout 0 8 }  { Key_4_address1 MemPortADDR2 1 1 }  { Key_4_ce1 MemPortCE2 1 1 }  { Key_4_q1 MemPortDOUT2 0 8 } } }
	Key_5 { ap_memory {  { Key_5_address0 mem_address 1 1 }  { Key_5_ce0 mem_ce 1 1 }  { Key_5_q0 mem_dout 0 8 }  { Key_5_address1 MemPortADDR2 1 1 }  { Key_5_ce1 MemPortCE2 1 1 }  { Key_5_q1 MemPortDOUT2 0 8 } } }
	Key_6 { ap_memory {  { Key_6_address0 mem_address 1 1 }  { Key_6_ce0 mem_ce 1 1 }  { Key_6_q0 mem_dout 0 8 }  { Key_6_address1 MemPortADDR2 1 1 }  { Key_6_ce1 MemPortCE2 1 1 }  { Key_6_q1 MemPortDOUT2 0 8 } } }
	Key_7 { ap_memory {  { Key_7_address0 mem_address 1 1 }  { Key_7_ce0 mem_ce 1 1 }  { Key_7_q0 mem_dout 0 8 }  { Key_7_address1 MemPortADDR2 1 1 }  { Key_7_ce1 MemPortCE2 1 1 }  { Key_7_q1 MemPortDOUT2 0 8 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
