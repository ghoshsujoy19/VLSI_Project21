set moduleName InvCipher
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
set C_modelName {InvCipher}
set C_modelType { void 0 }
set C_modelArgList {
	{ state_0_0 int 8 regular {pointer 2}  }
	{ state_0_1 int 8 regular {pointer 2}  }
	{ state_0_2 int 8 regular {pointer 2}  }
	{ state_0_3 int 8 regular {pointer 2}  }
	{ state_1_0 int 8 regular {pointer 2}  }
	{ state_1_1 int 8 regular {pointer 2}  }
	{ state_1_2 int 8 regular {pointer 2}  }
	{ state_1_3 int 8 regular {pointer 2}  }
	{ state_2_0 int 8 regular {pointer 2}  }
	{ state_2_1 int 8 regular {pointer 2}  }
	{ state_2_2 int 8 regular {pointer 2}  }
	{ state_2_3 int 8 regular {pointer 2}  }
	{ state_3_0 int 8 regular {pointer 2}  }
	{ state_3_1 int 8 regular {pointer 2}  }
	{ state_3_2 int 8 regular {pointer 2}  }
	{ state_3_3 int 8 regular {pointer 2}  }
	{ RoundKey_0 int 8 regular {array 15 { 1 3 } 1 1 }  }
	{ RoundKey_1 int 8 regular {array 15 { 1 3 } 1 1 }  }
	{ RoundKey_2 int 8 regular {array 15 { 1 3 } 1 1 }  }
	{ RoundKey_3 int 8 regular {array 15 { 1 3 } 1 1 }  }
	{ RoundKey_4 int 8 regular {array 15 { 1 3 } 1 1 }  }
	{ RoundKey_5 int 8 regular {array 15 { 1 3 } 1 1 }  }
	{ RoundKey_6 int 8 regular {array 15 { 1 3 } 1 1 }  }
	{ RoundKey_7 int 8 regular {array 15 { 1 3 } 1 1 }  }
	{ RoundKey_8 int 8 regular {array 15 { 1 3 } 1 1 }  }
	{ RoundKey_9 int 8 regular {array 15 { 1 3 } 1 1 }  }
	{ RoundKey_10 int 8 regular {array 15 { 1 3 } 1 1 }  }
	{ RoundKey_11 int 8 regular {array 15 { 1 3 } 1 1 }  }
	{ RoundKey_12 int 8 regular {array 15 { 1 3 } 1 1 }  }
	{ RoundKey_13 int 8 regular {array 15 { 1 3 } 1 1 }  }
	{ RoundKey_14 int 8 regular {array 15 { 1 3 } 1 1 }  }
	{ RoundKey_15 int 8 regular {array 15 { 1 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "state_0_0", "interface" : "wire", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "state","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 2},{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "state_0_1", "interface" : "wire", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "state","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 2},{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "state_0_2", "interface" : "wire", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "state","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 2},{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "state_0_3", "interface" : "wire", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "state","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 2},{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "state_1_0", "interface" : "wire", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "state","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 1,"up" : 1,"step" : 2},{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "state_1_1", "interface" : "wire", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "state","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 1,"up" : 1,"step" : 2},{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "state_1_2", "interface" : "wire", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "state","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 1,"up" : 1,"step" : 2},{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "state_1_3", "interface" : "wire", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "state","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 1,"up" : 1,"step" : 2},{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "state_2_0", "interface" : "wire", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "state","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 2,"up" : 2,"step" : 2},{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "state_2_1", "interface" : "wire", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "state","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 2,"up" : 2,"step" : 2},{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "state_2_2", "interface" : "wire", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "state","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 2,"up" : 2,"step" : 2},{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "state_2_3", "interface" : "wire", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "state","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 2,"up" : 2,"step" : 2},{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "state_3_0", "interface" : "wire", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "state","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 3,"up" : 3,"step" : 2},{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "state_3_1", "interface" : "wire", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "state","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 3,"up" : 3,"step" : 2},{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "state_3_2", "interface" : "wire", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "state","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 3,"up" : 3,"step" : 2},{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "state_3_3", "interface" : "wire", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "state","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 3,"up" : 3,"step" : 2},{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "RoundKey_0", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 224,"step" : 16}]}]}]} , 
 	{ "Name" : "RoundKey_1", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 1,"up" : 225,"step" : 16}]}]}]} , 
 	{ "Name" : "RoundKey_2", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 2,"up" : 226,"step" : 16}]}]}]} , 
 	{ "Name" : "RoundKey_3", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 3,"up" : 227,"step" : 16}]}]}]} , 
 	{ "Name" : "RoundKey_4", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 4,"up" : 228,"step" : 16}]}]}]} , 
 	{ "Name" : "RoundKey_5", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 5,"up" : 229,"step" : 16}]}]}]} , 
 	{ "Name" : "RoundKey_6", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 6,"up" : 230,"step" : 16}]}]}]} , 
 	{ "Name" : "RoundKey_7", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 7,"up" : 231,"step" : 16}]}]}]} , 
 	{ "Name" : "RoundKey_8", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 8,"up" : 232,"step" : 16}]}]}]} , 
 	{ "Name" : "RoundKey_9", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 9,"up" : 233,"step" : 16}]}]}]} , 
 	{ "Name" : "RoundKey_10", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 10,"up" : 234,"step" : 16}]}]}]} , 
 	{ "Name" : "RoundKey_11", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 11,"up" : 235,"step" : 16}]}]}]} , 
 	{ "Name" : "RoundKey_12", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 12,"up" : 236,"step" : 16}]}]}]} , 
 	{ "Name" : "RoundKey_13", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 13,"up" : 237,"step" : 16}]}]}]} , 
 	{ "Name" : "RoundKey_14", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 14,"up" : 238,"step" : 16}]}]}]} , 
 	{ "Name" : "RoundKey_15", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 15,"up" : 239,"step" : 16}]}]}]} ]}
# RTL Port declarations: 
set portNum 102
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ state_0_0_i sc_in sc_lv 8 signal 0 } 
	{ state_0_0_o sc_out sc_lv 8 signal 0 } 
	{ state_0_0_o_ap_vld sc_out sc_logic 1 outvld 0 } 
	{ state_0_1_i sc_in sc_lv 8 signal 1 } 
	{ state_0_1_o sc_out sc_lv 8 signal 1 } 
	{ state_0_1_o_ap_vld sc_out sc_logic 1 outvld 1 } 
	{ state_0_2_i sc_in sc_lv 8 signal 2 } 
	{ state_0_2_o sc_out sc_lv 8 signal 2 } 
	{ state_0_2_o_ap_vld sc_out sc_logic 1 outvld 2 } 
	{ state_0_3_i sc_in sc_lv 8 signal 3 } 
	{ state_0_3_o sc_out sc_lv 8 signal 3 } 
	{ state_0_3_o_ap_vld sc_out sc_logic 1 outvld 3 } 
	{ state_1_0_i sc_in sc_lv 8 signal 4 } 
	{ state_1_0_o sc_out sc_lv 8 signal 4 } 
	{ state_1_0_o_ap_vld sc_out sc_logic 1 outvld 4 } 
	{ state_1_1_i sc_in sc_lv 8 signal 5 } 
	{ state_1_1_o sc_out sc_lv 8 signal 5 } 
	{ state_1_1_o_ap_vld sc_out sc_logic 1 outvld 5 } 
	{ state_1_2_i sc_in sc_lv 8 signal 6 } 
	{ state_1_2_o sc_out sc_lv 8 signal 6 } 
	{ state_1_2_o_ap_vld sc_out sc_logic 1 outvld 6 } 
	{ state_1_3_i sc_in sc_lv 8 signal 7 } 
	{ state_1_3_o sc_out sc_lv 8 signal 7 } 
	{ state_1_3_o_ap_vld sc_out sc_logic 1 outvld 7 } 
	{ state_2_0_i sc_in sc_lv 8 signal 8 } 
	{ state_2_0_o sc_out sc_lv 8 signal 8 } 
	{ state_2_0_o_ap_vld sc_out sc_logic 1 outvld 8 } 
	{ state_2_1_i sc_in sc_lv 8 signal 9 } 
	{ state_2_1_o sc_out sc_lv 8 signal 9 } 
	{ state_2_1_o_ap_vld sc_out sc_logic 1 outvld 9 } 
	{ state_2_2_i sc_in sc_lv 8 signal 10 } 
	{ state_2_2_o sc_out sc_lv 8 signal 10 } 
	{ state_2_2_o_ap_vld sc_out sc_logic 1 outvld 10 } 
	{ state_2_3_i sc_in sc_lv 8 signal 11 } 
	{ state_2_3_o sc_out sc_lv 8 signal 11 } 
	{ state_2_3_o_ap_vld sc_out sc_logic 1 outvld 11 } 
	{ state_3_0_i sc_in sc_lv 8 signal 12 } 
	{ state_3_0_o sc_out sc_lv 8 signal 12 } 
	{ state_3_0_o_ap_vld sc_out sc_logic 1 outvld 12 } 
	{ state_3_1_i sc_in sc_lv 8 signal 13 } 
	{ state_3_1_o sc_out sc_lv 8 signal 13 } 
	{ state_3_1_o_ap_vld sc_out sc_logic 1 outvld 13 } 
	{ state_3_2_i sc_in sc_lv 8 signal 14 } 
	{ state_3_2_o sc_out sc_lv 8 signal 14 } 
	{ state_3_2_o_ap_vld sc_out sc_logic 1 outvld 14 } 
	{ state_3_3_i sc_in sc_lv 8 signal 15 } 
	{ state_3_3_o sc_out sc_lv 8 signal 15 } 
	{ state_3_3_o_ap_vld sc_out sc_logic 1 outvld 15 } 
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
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "state_0_0_i", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_0_0", "role": "i" }} , 
 	{ "name": "state_0_0_o", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_0_0", "role": "o" }} , 
 	{ "name": "state_0_0_o_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "state_0_0", "role": "o_ap_vld" }} , 
 	{ "name": "state_0_1_i", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_0_1", "role": "i" }} , 
 	{ "name": "state_0_1_o", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_0_1", "role": "o" }} , 
 	{ "name": "state_0_1_o_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "state_0_1", "role": "o_ap_vld" }} , 
 	{ "name": "state_0_2_i", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_0_2", "role": "i" }} , 
 	{ "name": "state_0_2_o", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_0_2", "role": "o" }} , 
 	{ "name": "state_0_2_o_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "state_0_2", "role": "o_ap_vld" }} , 
 	{ "name": "state_0_3_i", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_0_3", "role": "i" }} , 
 	{ "name": "state_0_3_o", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_0_3", "role": "o" }} , 
 	{ "name": "state_0_3_o_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "state_0_3", "role": "o_ap_vld" }} , 
 	{ "name": "state_1_0_i", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_1_0", "role": "i" }} , 
 	{ "name": "state_1_0_o", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_1_0", "role": "o" }} , 
 	{ "name": "state_1_0_o_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "state_1_0", "role": "o_ap_vld" }} , 
 	{ "name": "state_1_1_i", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_1_1", "role": "i" }} , 
 	{ "name": "state_1_1_o", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_1_1", "role": "o" }} , 
 	{ "name": "state_1_1_o_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "state_1_1", "role": "o_ap_vld" }} , 
 	{ "name": "state_1_2_i", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_1_2", "role": "i" }} , 
 	{ "name": "state_1_2_o", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_1_2", "role": "o" }} , 
 	{ "name": "state_1_2_o_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "state_1_2", "role": "o_ap_vld" }} , 
 	{ "name": "state_1_3_i", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_1_3", "role": "i" }} , 
 	{ "name": "state_1_3_o", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_1_3", "role": "o" }} , 
 	{ "name": "state_1_3_o_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "state_1_3", "role": "o_ap_vld" }} , 
 	{ "name": "state_2_0_i", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_2_0", "role": "i" }} , 
 	{ "name": "state_2_0_o", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_2_0", "role": "o" }} , 
 	{ "name": "state_2_0_o_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "state_2_0", "role": "o_ap_vld" }} , 
 	{ "name": "state_2_1_i", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_2_1", "role": "i" }} , 
 	{ "name": "state_2_1_o", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_2_1", "role": "o" }} , 
 	{ "name": "state_2_1_o_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "state_2_1", "role": "o_ap_vld" }} , 
 	{ "name": "state_2_2_i", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_2_2", "role": "i" }} , 
 	{ "name": "state_2_2_o", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_2_2", "role": "o" }} , 
 	{ "name": "state_2_2_o_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "state_2_2", "role": "o_ap_vld" }} , 
 	{ "name": "state_2_3_i", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_2_3", "role": "i" }} , 
 	{ "name": "state_2_3_o", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_2_3", "role": "o" }} , 
 	{ "name": "state_2_3_o_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "state_2_3", "role": "o_ap_vld" }} , 
 	{ "name": "state_3_0_i", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_3_0", "role": "i" }} , 
 	{ "name": "state_3_0_o", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_3_0", "role": "o" }} , 
 	{ "name": "state_3_0_o_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "state_3_0", "role": "o_ap_vld" }} , 
 	{ "name": "state_3_1_i", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_3_1", "role": "i" }} , 
 	{ "name": "state_3_1_o", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_3_1", "role": "o" }} , 
 	{ "name": "state_3_1_o_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "state_3_1", "role": "o_ap_vld" }} , 
 	{ "name": "state_3_2_i", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_3_2", "role": "i" }} , 
 	{ "name": "state_3_2_o", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_3_2", "role": "o" }} , 
 	{ "name": "state_3_2_o_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "state_3_2", "role": "o_ap_vld" }} , 
 	{ "name": "state_3_3_i", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_3_3", "role": "i" }} , 
 	{ "name": "state_3_3_o", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "state_3_3", "role": "o" }} , 
 	{ "name": "state_3_3_o_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "state_3_3", "role": "o_ap_vld" }} , 
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
 	{ "name": "RoundKey_15_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_15", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25"],
		"CDFG" : "InvCipher",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "33", "EstimateLatencyMax" : "33",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "state_0_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "state_0_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "state_0_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "state_0_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "state_1_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "state_1_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "state_1_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "state_1_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "state_2_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "state_2_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "state_2_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "state_2_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "state_3_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "state_3_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "state_3_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "state_3_3", "Type" : "OVld", "Direction" : "IO"},
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
			{"Name" : "rsbox", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rsbox_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_xtime_fu_1305", "Parent" : "0",
		"CDFG" : "xtime",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_xtime_fu_1310", "Parent" : "0",
		"CDFG" : "xtime",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_xtime_fu_1316", "Parent" : "0",
		"CDFG" : "xtime",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_xtime_fu_1322", "Parent" : "0",
		"CDFG" : "xtime",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_xtime_fu_1327", "Parent" : "0",
		"CDFG" : "xtime",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_xtime_fu_1333", "Parent" : "0",
		"CDFG" : "xtime",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_xtime_fu_1339", "Parent" : "0",
		"CDFG" : "xtime",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_xtime_fu_1344", "Parent" : "0",
		"CDFG" : "xtime",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_xtime_fu_1350", "Parent" : "0",
		"CDFG" : "xtime",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_xtime_fu_1356", "Parent" : "0",
		"CDFG" : "xtime",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_xtime_fu_1361", "Parent" : "0",
		"CDFG" : "xtime",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_xtime_fu_1367", "Parent" : "0",
		"CDFG" : "xtime",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_xtime_fu_1373", "Parent" : "0",
		"CDFG" : "xtime",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_xtime_fu_1378", "Parent" : "0",
		"CDFG" : "xtime",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_xtime_fu_1384", "Parent" : "0",
		"CDFG" : "xtime",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_xtime_fu_1390", "Parent" : "0",
		"CDFG" : "xtime",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_xtime_fu_1395", "Parent" : "0",
		"CDFG" : "xtime",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_xtime_fu_1401", "Parent" : "0",
		"CDFG" : "xtime",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_xtime_fu_1407", "Parent" : "0",
		"CDFG" : "xtime",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_xtime_fu_1412", "Parent" : "0",
		"CDFG" : "xtime",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_xtime_fu_1418", "Parent" : "0",
		"CDFG" : "xtime",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_xtime_fu_1424", "Parent" : "0",
		"CDFG" : "xtime",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_xtime_fu_1429", "Parent" : "0",
		"CDFG" : "xtime",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_xtime_fu_1435", "Parent" : "0",
		"CDFG" : "xtime",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	InvCipher {
		state_0_0 {Type IO LastRead 1 FirstWrite 5}
		state_0_1 {Type IO LastRead 1 FirstWrite 5}
		state_0_2 {Type IO LastRead 1 FirstWrite 5}
		state_0_3 {Type IO LastRead 1 FirstWrite 5}
		state_1_0 {Type IO LastRead 1 FirstWrite 5}
		state_1_1 {Type IO LastRead 1 FirstWrite 5}
		state_1_2 {Type IO LastRead 1 FirstWrite 5}
		state_1_3 {Type IO LastRead 1 FirstWrite 5}
		state_2_0 {Type IO LastRead 1 FirstWrite 5}
		state_2_1 {Type IO LastRead 1 FirstWrite 5}
		state_2_2 {Type IO LastRead 1 FirstWrite 5}
		state_2_3 {Type IO LastRead 1 FirstWrite 5}
		state_3_0 {Type IO LastRead 1 FirstWrite 5}
		state_3_1 {Type IO LastRead 1 FirstWrite 5}
		state_3_2 {Type IO LastRead 1 FirstWrite 5}
		state_3_3 {Type IO LastRead 1 FirstWrite 5}
		RoundKey_0 {Type I LastRead 4 FirstWrite -1}
		RoundKey_1 {Type I LastRead 4 FirstWrite -1}
		RoundKey_2 {Type I LastRead 4 FirstWrite -1}
		RoundKey_3 {Type I LastRead 4 FirstWrite -1}
		RoundKey_4 {Type I LastRead 4 FirstWrite -1}
		RoundKey_5 {Type I LastRead 4 FirstWrite -1}
		RoundKey_6 {Type I LastRead 4 FirstWrite -1}
		RoundKey_7 {Type I LastRead 4 FirstWrite -1}
		RoundKey_8 {Type I LastRead 4 FirstWrite -1}
		RoundKey_9 {Type I LastRead 4 FirstWrite -1}
		RoundKey_10 {Type I LastRead 4 FirstWrite -1}
		RoundKey_11 {Type I LastRead 4 FirstWrite -1}
		RoundKey_12 {Type I LastRead 4 FirstWrite -1}
		RoundKey_13 {Type I LastRead 4 FirstWrite -1}
		RoundKey_14 {Type I LastRead 4 FirstWrite -1}
		RoundKey_15 {Type I LastRead 4 FirstWrite -1}
		rsbox {Type I LastRead -1 FirstWrite -1}}
	xtime {
		x {Type I LastRead 0 FirstWrite -1}}
	xtime {
		x {Type I LastRead 0 FirstWrite -1}}
	xtime {
		x {Type I LastRead 0 FirstWrite -1}}
	xtime {
		x {Type I LastRead 0 FirstWrite -1}}
	xtime {
		x {Type I LastRead 0 FirstWrite -1}}
	xtime {
		x {Type I LastRead 0 FirstWrite -1}}
	xtime {
		x {Type I LastRead 0 FirstWrite -1}}
	xtime {
		x {Type I LastRead 0 FirstWrite -1}}
	xtime {
		x {Type I LastRead 0 FirstWrite -1}}
	xtime {
		x {Type I LastRead 0 FirstWrite -1}}
	xtime {
		x {Type I LastRead 0 FirstWrite -1}}
	xtime {
		x {Type I LastRead 0 FirstWrite -1}}
	xtime {
		x {Type I LastRead 0 FirstWrite -1}}
	xtime {
		x {Type I LastRead 0 FirstWrite -1}}
	xtime {
		x {Type I LastRead 0 FirstWrite -1}}
	xtime {
		x {Type I LastRead 0 FirstWrite -1}}
	xtime {
		x {Type I LastRead 0 FirstWrite -1}}
	xtime {
		x {Type I LastRead 0 FirstWrite -1}}
	xtime {
		x {Type I LastRead 0 FirstWrite -1}}
	xtime {
		x {Type I LastRead 0 FirstWrite -1}}
	xtime {
		x {Type I LastRead 0 FirstWrite -1}}
	xtime {
		x {Type I LastRead 0 FirstWrite -1}}
	xtime {
		x {Type I LastRead 0 FirstWrite -1}}
	xtime {
		x {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "33", "Max" : "33"}
	, {"Name" : "Interval", "Min" : "34", "Max" : "34"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	state_0_0 { ap_ovld {  { state_0_0_i in_data 0 8 }  { state_0_0_o out_data 1 8 }  { state_0_0_o_ap_vld out_vld 1 1 } } }
	state_0_1 { ap_ovld {  { state_0_1_i in_data 0 8 }  { state_0_1_o out_data 1 8 }  { state_0_1_o_ap_vld out_vld 1 1 } } }
	state_0_2 { ap_ovld {  { state_0_2_i in_data 0 8 }  { state_0_2_o out_data 1 8 }  { state_0_2_o_ap_vld out_vld 1 1 } } }
	state_0_3 { ap_ovld {  { state_0_3_i in_data 0 8 }  { state_0_3_o out_data 1 8 }  { state_0_3_o_ap_vld out_vld 1 1 } } }
	state_1_0 { ap_ovld {  { state_1_0_i in_data 0 8 }  { state_1_0_o out_data 1 8 }  { state_1_0_o_ap_vld out_vld 1 1 } } }
	state_1_1 { ap_ovld {  { state_1_1_i in_data 0 8 }  { state_1_1_o out_data 1 8 }  { state_1_1_o_ap_vld out_vld 1 1 } } }
	state_1_2 { ap_ovld {  { state_1_2_i in_data 0 8 }  { state_1_2_o out_data 1 8 }  { state_1_2_o_ap_vld out_vld 1 1 } } }
	state_1_3 { ap_ovld {  { state_1_3_i in_data 0 8 }  { state_1_3_o out_data 1 8 }  { state_1_3_o_ap_vld out_vld 1 1 } } }
	state_2_0 { ap_ovld {  { state_2_0_i in_data 0 8 }  { state_2_0_o out_data 1 8 }  { state_2_0_o_ap_vld out_vld 1 1 } } }
	state_2_1 { ap_ovld {  { state_2_1_i in_data 0 8 }  { state_2_1_o out_data 1 8 }  { state_2_1_o_ap_vld out_vld 1 1 } } }
	state_2_2 { ap_ovld {  { state_2_2_i in_data 0 8 }  { state_2_2_o out_data 1 8 }  { state_2_2_o_ap_vld out_vld 1 1 } } }
	state_2_3 { ap_ovld {  { state_2_3_i in_data 0 8 }  { state_2_3_o out_data 1 8 }  { state_2_3_o_ap_vld out_vld 1 1 } } }
	state_3_0 { ap_ovld {  { state_3_0_i in_data 0 8 }  { state_3_0_o out_data 1 8 }  { state_3_0_o_ap_vld out_vld 1 1 } } }
	state_3_1 { ap_ovld {  { state_3_1_i in_data 0 8 }  { state_3_1_o out_data 1 8 }  { state_3_1_o_ap_vld out_vld 1 1 } } }
	state_3_2 { ap_ovld {  { state_3_2_i in_data 0 8 }  { state_3_2_o out_data 1 8 }  { state_3_2_o_ap_vld out_vld 1 1 } } }
	state_3_3 { ap_ovld {  { state_3_3_i in_data 0 8 }  { state_3_3_o out_data 1 8 }  { state_3_3_o_ap_vld out_vld 1 1 } } }
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
