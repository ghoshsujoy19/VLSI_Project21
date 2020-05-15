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
	{ RoundKey_0 int 8 regular {array 60 { 2 3 } 1 1 }  }
	{ RoundKey_1 int 8 regular {array 60 { 2 3 } 1 1 }  }
	{ RoundKey_2 int 8 regular {array 60 { 2 3 } 1 1 }  }
	{ RoundKey_3 int 8 regular {array 60 { 2 3 } 1 1 }  }
	{ Key_0 int 8 regular {array 4 { 1 3 } 1 1 }  }
	{ Key_1 int 8 regular {array 4 { 1 3 } 1 1 }  }
	{ Key_2 int 8 regular {array 4 { 1 3 } 1 1 }  }
	{ Key_3 int 8 regular {array 4 { 1 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "RoundKey_0", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 236,"step" : 4}]}]}]} , 
 	{ "Name" : "RoundKey_1", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 1,"up" : 237,"step" : 4}]}]}]} , 
 	{ "Name" : "RoundKey_2", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 2,"up" : 238,"step" : 4}]}]}]} , 
 	{ "Name" : "RoundKey_3", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "RoundKey","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 3,"up" : 239,"step" : 4}]}]}]} , 
 	{ "Name" : "Key_0", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "Key","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 12,"step" : 4}]}]}]} , 
 	{ "Name" : "Key_1", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "Key","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 1,"up" : 13,"step" : 4}]}]}]} , 
 	{ "Name" : "Key_2", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "Key","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 2,"up" : 14,"step" : 4}]}]}]} , 
 	{ "Name" : "Key_3", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "Key","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 3,"up" : 15,"step" : 4}]}]}]} ]}
# RTL Port declarations: 
set portNum 38
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ RoundKey_0_address0 sc_out sc_lv 6 signal 0 } 
	{ RoundKey_0_ce0 sc_out sc_logic 1 signal 0 } 
	{ RoundKey_0_we0 sc_out sc_logic 1 signal 0 } 
	{ RoundKey_0_d0 sc_out sc_lv 8 signal 0 } 
	{ RoundKey_0_q0 sc_in sc_lv 8 signal 0 } 
	{ RoundKey_1_address0 sc_out sc_lv 6 signal 1 } 
	{ RoundKey_1_ce0 sc_out sc_logic 1 signal 1 } 
	{ RoundKey_1_we0 sc_out sc_logic 1 signal 1 } 
	{ RoundKey_1_d0 sc_out sc_lv 8 signal 1 } 
	{ RoundKey_1_q0 sc_in sc_lv 8 signal 1 } 
	{ RoundKey_2_address0 sc_out sc_lv 6 signal 2 } 
	{ RoundKey_2_ce0 sc_out sc_logic 1 signal 2 } 
	{ RoundKey_2_we0 sc_out sc_logic 1 signal 2 } 
	{ RoundKey_2_d0 sc_out sc_lv 8 signal 2 } 
	{ RoundKey_2_q0 sc_in sc_lv 8 signal 2 } 
	{ RoundKey_3_address0 sc_out sc_lv 6 signal 3 } 
	{ RoundKey_3_ce0 sc_out sc_logic 1 signal 3 } 
	{ RoundKey_3_we0 sc_out sc_logic 1 signal 3 } 
	{ RoundKey_3_d0 sc_out sc_lv 8 signal 3 } 
	{ RoundKey_3_q0 sc_in sc_lv 8 signal 3 } 
	{ Key_0_address0 sc_out sc_lv 2 signal 4 } 
	{ Key_0_ce0 sc_out sc_logic 1 signal 4 } 
	{ Key_0_q0 sc_in sc_lv 8 signal 4 } 
	{ Key_1_address0 sc_out sc_lv 2 signal 5 } 
	{ Key_1_ce0 sc_out sc_logic 1 signal 5 } 
	{ Key_1_q0 sc_in sc_lv 8 signal 5 } 
	{ Key_2_address0 sc_out sc_lv 2 signal 6 } 
	{ Key_2_ce0 sc_out sc_logic 1 signal 6 } 
	{ Key_2_q0 sc_in sc_lv 8 signal 6 } 
	{ Key_3_address0 sc_out sc_lv 2 signal 7 } 
	{ Key_3_ce0 sc_out sc_logic 1 signal 7 } 
	{ Key_3_q0 sc_in sc_lv 8 signal 7 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "RoundKey_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "RoundKey_0", "role": "address0" }} , 
 	{ "name": "RoundKey_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_0", "role": "ce0" }} , 
 	{ "name": "RoundKey_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_0", "role": "we0" }} , 
 	{ "name": "RoundKey_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_0", "role": "d0" }} , 
 	{ "name": "RoundKey_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_0", "role": "q0" }} , 
 	{ "name": "RoundKey_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "RoundKey_1", "role": "address0" }} , 
 	{ "name": "RoundKey_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_1", "role": "ce0" }} , 
 	{ "name": "RoundKey_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_1", "role": "we0" }} , 
 	{ "name": "RoundKey_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_1", "role": "d0" }} , 
 	{ "name": "RoundKey_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_1", "role": "q0" }} , 
 	{ "name": "RoundKey_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "RoundKey_2", "role": "address0" }} , 
 	{ "name": "RoundKey_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_2", "role": "ce0" }} , 
 	{ "name": "RoundKey_2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_2", "role": "we0" }} , 
 	{ "name": "RoundKey_2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_2", "role": "d0" }} , 
 	{ "name": "RoundKey_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_2", "role": "q0" }} , 
 	{ "name": "RoundKey_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "RoundKey_3", "role": "address0" }} , 
 	{ "name": "RoundKey_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_3", "role": "ce0" }} , 
 	{ "name": "RoundKey_3_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "RoundKey_3", "role": "we0" }} , 
 	{ "name": "RoundKey_3_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_3", "role": "d0" }} , 
 	{ "name": "RoundKey_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "RoundKey_3", "role": "q0" }} , 
 	{ "name": "Key_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "Key_0", "role": "address0" }} , 
 	{ "name": "Key_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Key_0", "role": "ce0" }} , 
 	{ "name": "Key_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_0", "role": "q0" }} , 
 	{ "name": "Key_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "Key_1", "role": "address0" }} , 
 	{ "name": "Key_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Key_1", "role": "ce0" }} , 
 	{ "name": "Key_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_1", "role": "q0" }} , 
 	{ "name": "Key_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "Key_2", "role": "address0" }} , 
 	{ "name": "Key_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Key_2", "role": "ce0" }} , 
 	{ "name": "Key_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_2", "role": "q0" }} , 
 	{ "name": "Key_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "Key_3", "role": "address0" }} , 
 	{ "name": "Key_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Key_3", "role": "ce0" }} , 
 	{ "name": "Key_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "Key_3", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2"],
		"CDFG" : "KeyExpansion",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "130", "EstimateLatencyMax" : "130",
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
			{"Name" : "Key_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Key_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Key_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Key_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sbox", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Rcon", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sbox_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Rcon_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	KeyExpansion {
		RoundKey_0 {Type IO LastRead 3 FirstWrite 2}
		RoundKey_1 {Type IO LastRead 3 FirstWrite 2}
		RoundKey_2 {Type IO LastRead 3 FirstWrite 2}
		RoundKey_3 {Type IO LastRead 3 FirstWrite 2}
		Key_0 {Type I LastRead 1 FirstWrite -1}
		Key_1 {Type I LastRead 1 FirstWrite -1}
		Key_2 {Type I LastRead 1 FirstWrite -1}
		Key_3 {Type I LastRead 1 FirstWrite -1}
		sbox {Type I LastRead -1 FirstWrite -1}
		Rcon {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "130", "Max" : "130"}
	, {"Name" : "Interval", "Min" : "131", "Max" : "131"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	RoundKey_0 { ap_memory {  { RoundKey_0_address0 mem_address 1 6 }  { RoundKey_0_ce0 mem_ce 1 1 }  { RoundKey_0_we0 mem_we 1 1 }  { RoundKey_0_d0 mem_din 1 8 }  { RoundKey_0_q0 mem_dout 0 8 } } }
	RoundKey_1 { ap_memory {  { RoundKey_1_address0 mem_address 1 6 }  { RoundKey_1_ce0 mem_ce 1 1 }  { RoundKey_1_we0 mem_we 1 1 }  { RoundKey_1_d0 mem_din 1 8 }  { RoundKey_1_q0 mem_dout 0 8 } } }
	RoundKey_2 { ap_memory {  { RoundKey_2_address0 mem_address 1 6 }  { RoundKey_2_ce0 mem_ce 1 1 }  { RoundKey_2_we0 mem_we 1 1 }  { RoundKey_2_d0 mem_din 1 8 }  { RoundKey_2_q0 mem_dout 0 8 } } }
	RoundKey_3 { ap_memory {  { RoundKey_3_address0 mem_address 1 6 }  { RoundKey_3_ce0 mem_ce 1 1 }  { RoundKey_3_we0 mem_we 1 1 }  { RoundKey_3_d0 mem_din 1 8 }  { RoundKey_3_q0 mem_dout 0 8 } } }
	Key_0 { ap_memory {  { Key_0_address0 mem_address 1 2 }  { Key_0_ce0 mem_ce 1 1 }  { Key_0_q0 mem_dout 0 8 } } }
	Key_1 { ap_memory {  { Key_1_address0 mem_address 1 2 }  { Key_1_ce0 mem_ce 1 1 }  { Key_1_q0 mem_dout 0 8 } } }
	Key_2 { ap_memory {  { Key_2_address0 mem_address 1 2 }  { Key_2_ce0 mem_ce 1 1 }  { Key_2_q0 mem_dout 0 8 } } }
	Key_3 { ap_memory {  { Key_3_address0 mem_address 1 2 }  { Key_3_ce0 mem_ce 1 1 }  { Key_3_q0 mem_dout 0 8 } } }
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
