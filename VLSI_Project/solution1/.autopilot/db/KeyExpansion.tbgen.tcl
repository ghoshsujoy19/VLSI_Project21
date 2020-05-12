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
	{ RoundKey_0 int 8 regular {array 15 { 2 3 } 1 1 }  }
	{ RoundKey_1 int 8 regular {array 15 { 2 3 } 1 1 }  }
	{ RoundKey_2 int 8 regular {array 15 { 2 3 } 1 1 }  }
	{ RoundKey_3 int 8 regular {array 15 { 2 3 } 1 1 }  }
	{ RoundKey_4 int 8 regular {array 15 { 2 3 } 1 1 }  }
	{ RoundKey_5 int 8 regular {array 15 { 2 3 } 1 1 }  }
	{ RoundKey_6 int 8 regular {array 15 { 2 3 } 1 1 }  }
	{ RoundKey_7 int 8 regular {array 15 { 2 3 } 1 1 }  }
	{ RoundKey_8 int 8 regular {array 15 { 2 3 } 1 1 }  }
	{ RoundKey_9 int 8 regular {array 15 { 2 3 } 1 1 }  }
	{ RoundKey_10 int 8 regular {array 15 { 2 3 } 1 1 }  }
	{ RoundKey_11 int 8 regular {array 15 { 2 3 } 1 1 }  }
	{ RoundKey_12 int 8 regular {array 15 { 2 3 } 1 1 }  }
	{ RoundKey_13 int 8 regular {array 15 { 2 3 } 1 1 }  }
	{ RoundKey_14 int 8 regular {array 15 { 2 3 } 1 1 }  }
	{ RoundKey_15 int 8 regular {array 15 { 2 3 } 1 1 }  }
	{ Key_0 int 8 regular {pointer 0}  }
	{ Key_1 int 8 regular {pointer 0}  }
	{ Key_2 int 8 regular {pointer 0}  }
	{ Key_3 int 8 regular {pointer 0}  }
	{ Key_4 int 8 regular {pointer 0}  }
	{ Key_5 int 8 regular {pointer 0}  }
	{ Key_6 int 8 regular {pointer 0}  }
	{ Key_7 int 8 regular {pointer 0}  }
	{ Key_8 int 8 regular {pointer 0}  }
	{ Key_9 int 8 regular {pointer 0}  }
	{ Key_10 int 8 regular {pointer 0}  }
	{ Key_11 int 8 regular {pointer 0}  }
	{ Key_12 int 8 regular {pointer 0}  }
	{ Key_13 int 8 regular {pointer 0}  }
	{ Key_14 int 8 regular {pointer 0}  }
	{ Key_15 int 8 regular {pointer 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "RoundKey_0", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 224,"step" : 16}]}]}]} , 
 	{ "Name" : "RoundKey_1", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 1,"up" : 225,"step" : 16}]}]}]} , 
 	{ "Name" : "RoundKey_2", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 2,"up" : 226,"step" : 16}]}]}]} , 
 	{ "Name" : "RoundKey_3", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 3,"up" : 227,"step" : 16}]}]}]} , 
 	{ "Name" : "RoundKey_4", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 4,"up" : 228,"step" : 16}]}]}]} , 
 	{ "Name" : "RoundKey_5", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 5,"up" : 229,"step" : 16}]}]}]} , 
 	{ "Name" : "RoundKey_6", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 6,"up" : 230,"step" : 16}]}]}]} , 
 	{ "Name" : "RoundKey_7", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 7,"up" : 231,"step" : 16}]}]}]} , 
 	{ "Name" : "RoundKey_8", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 8,"up" : 232,"step" : 16}]}]}]} , 
 	{ "Name" : "RoundKey_9", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 9,"up" : 233,"step" : 16}]}]}]} , 
 	{ "Name" : "RoundKey_10", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 10,"up" : 234,"step" : 16}]}]}]} , 
 	{ "Name" : "RoundKey_11", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 11,"up" : 235,"step" : 16}]}]}]} , 
 	{ "Name" : "RoundKey_12", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 12,"up" : 236,"step" : 16}]}]}]} , 
 	{ "Name" : "RoundKey_13", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 13,"up" : 237,"step" : 16}]}]}]} , 
 	{ "Name" : "RoundKey_14", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 14,"up" : 238,"step" : 16}]}]}]} , 
 	{ "Name" : "RoundKey_15", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 15,"up" : 239,"step" : 16}]}]}]} , 
 	{ "Name" : "Key_0", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "Key","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "Key_1", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "Key","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "Key_2", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "Key","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "Key_3", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "Key","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "Key_4", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "Key","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 4,"up" : 4,"step" : 2}]}]}]} , 
 	{ "Name" : "Key_5", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "Key","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 5,"up" : 5,"step" : 2}]}]}]} , 
 	{ "Name" : "Key_6", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "Key","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 6,"up" : 6,"step" : 2}]}]}]} , 
 	{ "Name" : "Key_7", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "Key","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 7,"up" : 7,"step" : 2}]}]}]} , 
 	{ "Name" : "Key_8", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "Key","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 8,"up" : 8,"step" : 2}]}]}]} , 
 	{ "Name" : "Key_9", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "Key","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 9,"up" : 9,"step" : 2}]}]}]} , 
 	{ "Name" : "Key_10", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "Key","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 10,"up" : 10,"step" : 2}]}]}]} , 
 	{ "Name" : "Key_11", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "Key","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 11,"up" : 11,"step" : 2}]}]}]} , 
 	{ "Name" : "Key_12", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "Key","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 12,"up" : 12,"step" : 2}]}]}]} , 
 	{ "Name" : "Key_13", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "Key","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 13,"up" : 13,"step" : 2}]}]}]} , 
 	{ "Name" : "Key_14", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "Key","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 14,"up" : 14,"step" : 2}]}]}]} , 
 	{ "Name" : "Key_15", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "Key","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 15,"up" : 15,"step" : 2}]}]}]} ]}
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
	{ Key_0 sc_in sc_lv 8 signal 16 } 
	{ Key_1 sc_in sc_lv 8 signal 17 } 
	{ Key_2 sc_in sc_lv 8 signal 18 } 
	{ Key_3 sc_in sc_lv 8 signal 19 } 
	{ Key_4 sc_in sc_lv 8 signal 20 } 
	{ Key_5 sc_in sc_lv 8 signal 21 } 
	{ Key_6 sc_in sc_lv 8 signal 22 } 
	{ Key_7 sc_in sc_lv 8 signal 23 } 
	{ Key_8 sc_in sc_lv 8 signal 24 } 
	{ Key_9 sc_in sc_lv 8 signal 25 } 
	{ Key_10 sc_in sc_lv 8 signal 26 } 
	{ Key_11 sc_in sc_lv 8 signal 27 } 
	{ Key_12 sc_in sc_lv 8 signal 28 } 
	{ Key_13 sc_in sc_lv 8 signal 29 } 
	{ Key_14 sc_in sc_lv 8 signal 30 } 
	{ Key_15 sc_in sc_lv 8 signal 31 } 
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
 	{ "name": "Key_0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_0", "role": "default" }} , 
 	{ "name": "Key_1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_1", "role": "default" }} , 
 	{ "name": "Key_2", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_2", "role": "default" }} , 
 	{ "name": "Key_3", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_3", "role": "default" }} , 
 	{ "name": "Key_4", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_4", "role": "default" }} , 
 	{ "name": "Key_5", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_5", "role": "default" }} , 
 	{ "name": "Key_6", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_6", "role": "default" }} , 
 	{ "name": "Key_7", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_7", "role": "default" }} , 
 	{ "name": "Key_8", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_8", "role": "default" }} , 
 	{ "name": "Key_9", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_9", "role": "default" }} , 
 	{ "name": "Key_10", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_10", "role": "default" }} , 
 	{ "name": "Key_11", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_11", "role": "default" }} , 
 	{ "name": "Key_12", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_12", "role": "default" }} , 
 	{ "name": "Key_13", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_13", "role": "default" }} , 
 	{ "name": "Key_14", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_14", "role": "default" }} , 
 	{ "name": "Key_15", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_15", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17"],
		"CDFG" : "KeyExpansion",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "43", "EstimateLatencyMax" : "43",
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
			{"Name" : "Key_0", "Type" : "None", "Direction" : "I"},
			{"Name" : "Key_1", "Type" : "None", "Direction" : "I"},
			{"Name" : "Key_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "Key_3", "Type" : "None", "Direction" : "I"},
			{"Name" : "Key_4", "Type" : "None", "Direction" : "I"},
			{"Name" : "Key_5", "Type" : "None", "Direction" : "I"},
			{"Name" : "Key_6", "Type" : "None", "Direction" : "I"},
			{"Name" : "Key_7", "Type" : "None", "Direction" : "I"},
			{"Name" : "Key_8", "Type" : "None", "Direction" : "I"},
			{"Name" : "Key_9", "Type" : "None", "Direction" : "I"},
			{"Name" : "Key_10", "Type" : "None", "Direction" : "I"},
			{"Name" : "Key_11", "Type" : "None", "Direction" : "I"},
			{"Name" : "Key_12", "Type" : "None", "Direction" : "I"},
			{"Name" : "Key_13", "Type" : "None", "Direction" : "I"},
			{"Name" : "Key_14", "Type" : "None", "Direction" : "I"},
			{"Name" : "Key_15", "Type" : "None", "Direction" : "I"},
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
		RoundKey_1 {Type IO LastRead 2 FirstWrite 0}
		RoundKey_2 {Type IO LastRead 3 FirstWrite 0}
		RoundKey_3 {Type IO LastRead 1 FirstWrite 0}
		RoundKey_4 {Type IO LastRead 1 FirstWrite 0}
		RoundKey_5 {Type IO LastRead 2 FirstWrite 0}
		RoundKey_6 {Type IO LastRead 3 FirstWrite 0}
		RoundKey_7 {Type IO LastRead 1 FirstWrite 0}
		RoundKey_8 {Type IO LastRead 1 FirstWrite 0}
		RoundKey_9 {Type IO LastRead 2 FirstWrite 0}
		RoundKey_10 {Type IO LastRead 3 FirstWrite 0}
		RoundKey_11 {Type IO LastRead 1 FirstWrite 0}
		RoundKey_12 {Type IO LastRead 1 FirstWrite 0}
		RoundKey_13 {Type IO LastRead 2 FirstWrite 0}
		RoundKey_14 {Type IO LastRead 3 FirstWrite 0}
		RoundKey_15 {Type IO LastRead 1 FirstWrite 0}
		Key_0 {Type I LastRead 0 FirstWrite -1}
		Key_1 {Type I LastRead 0 FirstWrite -1}
		Key_2 {Type I LastRead 0 FirstWrite -1}
		Key_3 {Type I LastRead 0 FirstWrite -1}
		Key_4 {Type I LastRead 0 FirstWrite -1}
		Key_5 {Type I LastRead 0 FirstWrite -1}
		Key_6 {Type I LastRead 0 FirstWrite -1}
		Key_7 {Type I LastRead 0 FirstWrite -1}
		Key_8 {Type I LastRead 0 FirstWrite -1}
		Key_9 {Type I LastRead 0 FirstWrite -1}
		Key_10 {Type I LastRead 0 FirstWrite -1}
		Key_11 {Type I LastRead 0 FirstWrite -1}
		Key_12 {Type I LastRead 0 FirstWrite -1}
		Key_13 {Type I LastRead 0 FirstWrite -1}
		Key_14 {Type I LastRead 0 FirstWrite -1}
		Key_15 {Type I LastRead 0 FirstWrite -1}
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
	{"Name" : "Latency", "Min" : "43", "Max" : "43"}
	, {"Name" : "Interval", "Min" : "44", "Max" : "44"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
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
	Key_0 { ap_none {  { Key_0 in_data 0 8 } } }
	Key_1 { ap_none {  { Key_1 in_data 0 8 } } }
	Key_2 { ap_none {  { Key_2 in_data 0 8 } } }
	Key_3 { ap_none {  { Key_3 in_data 0 8 } } }
	Key_4 { ap_none {  { Key_4 in_data 0 8 } } }
	Key_5 { ap_none {  { Key_5 in_data 0 8 } } }
	Key_6 { ap_none {  { Key_6 in_data 0 8 } } }
	Key_7 { ap_none {  { Key_7 in_data 0 8 } } }
	Key_8 { ap_none {  { Key_8 in_data 0 8 } } }
	Key_9 { ap_none {  { Key_9 in_data 0 8 } } }
	Key_10 { ap_none {  { Key_10 in_data 0 8 } } }
	Key_11 { ap_none {  { Key_11 in_data 0 8 } } }
	Key_12 { ap_none {  { Key_12 in_data 0 8 } } }
	Key_13 { ap_none {  { Key_13 in_data 0 8 } } }
	Key_14 { ap_none {  { Key_14 in_data 0 8 } } }
	Key_15 { ap_none {  { Key_15 in_data 0 8 } } }
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
