set moduleName SubBytes
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
set C_modelName {SubBytes}
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
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 128} ]}
# RTL Port declarations: 
set portNum 38
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
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18"],
		"CDFG" : "SubBytes",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "41", "EstimateLatencyMax" : "41",
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
			{"Name" : "sbox", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sbox_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Cipher_mux_165_8_bkb_U34", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Cipher_mux_42_8_1_1_U35", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Cipher_mux_42_8_1_1_U36", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Cipher_mux_42_8_1_1_U37", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Cipher_mux_42_8_1_1_U38", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Cipher_mux_42_8_1_1_U39", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Cipher_mux_42_8_1_1_U40", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Cipher_mux_42_8_1_1_U41", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Cipher_mux_42_8_1_1_U42", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Cipher_mux_42_8_1_1_U43", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Cipher_mux_42_8_1_1_U44", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Cipher_mux_42_8_1_1_U45", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Cipher_mux_42_8_1_1_U46", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Cipher_mux_42_8_1_1_U47", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Cipher_mux_42_8_1_1_U48", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Cipher_mux_42_8_1_1_U49", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Cipher_mux_42_8_1_1_U50", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	SubBytes {
		state_0_0_read {Type I LastRead 0 FirstWrite -1}
		state_0_1_read {Type I LastRead 0 FirstWrite -1}
		state_0_2_read {Type I LastRead 0 FirstWrite -1}
		state_0_3_read {Type I LastRead 0 FirstWrite -1}
		state_1_0_read {Type I LastRead 0 FirstWrite -1}
		state_1_1_read {Type I LastRead 0 FirstWrite -1}
		state_1_2_read {Type I LastRead 0 FirstWrite -1}
		state_1_3_read {Type I LastRead 0 FirstWrite -1}
		state_2_0_read {Type I LastRead 0 FirstWrite -1}
		state_2_1_read {Type I LastRead 0 FirstWrite -1}
		state_2_2_read {Type I LastRead 0 FirstWrite -1}
		state_2_3_read {Type I LastRead 0 FirstWrite -1}
		state_3_0_read {Type I LastRead 0 FirstWrite -1}
		state_3_1_read {Type I LastRead 0 FirstWrite -1}
		state_3_2_read {Type I LastRead 0 FirstWrite -1}
		state_3_3_read {Type I LastRead 0 FirstWrite -1}
		sbox {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "41", "Max" : "41"}
	, {"Name" : "Interval", "Min" : "41", "Max" : "41"}
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
}
