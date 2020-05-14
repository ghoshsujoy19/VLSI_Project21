// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->
    typedef struct {
        unsigned char RoundKey[176];
        unsigned char Iv[16];
       } AES_ctx;



// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "ctx_RoundKey_0"
#define AUTOTB_TVIN_ctx_RoundKey_0  "../tv/cdatafile/c.AES.autotvin_ctx_RoundKey_0.dat"
#define AUTOTB_TVOUT_ctx_RoundKey_0  "../tv/cdatafile/c.AES.autotvout_ctx_RoundKey_0.dat"
// wrapc file define: "ctx_RoundKey_1"
#define AUTOTB_TVIN_ctx_RoundKey_1  "../tv/cdatafile/c.AES.autotvin_ctx_RoundKey_1.dat"
#define AUTOTB_TVOUT_ctx_RoundKey_1  "../tv/cdatafile/c.AES.autotvout_ctx_RoundKey_1.dat"
// wrapc file define: "ctx_RoundKey_2"
#define AUTOTB_TVIN_ctx_RoundKey_2  "../tv/cdatafile/c.AES.autotvin_ctx_RoundKey_2.dat"
#define AUTOTB_TVOUT_ctx_RoundKey_2  "../tv/cdatafile/c.AES.autotvout_ctx_RoundKey_2.dat"
// wrapc file define: "ctx_RoundKey_3"
#define AUTOTB_TVIN_ctx_RoundKey_3  "../tv/cdatafile/c.AES.autotvin_ctx_RoundKey_3.dat"
#define AUTOTB_TVOUT_ctx_RoundKey_3  "../tv/cdatafile/c.AES.autotvout_ctx_RoundKey_3.dat"
// wrapc file define: "ctx_RoundKey_4"
#define AUTOTB_TVIN_ctx_RoundKey_4  "../tv/cdatafile/c.AES.autotvin_ctx_RoundKey_4.dat"
#define AUTOTB_TVOUT_ctx_RoundKey_4  "../tv/cdatafile/c.AES.autotvout_ctx_RoundKey_4.dat"
// wrapc file define: "ctx_RoundKey_5"
#define AUTOTB_TVIN_ctx_RoundKey_5  "../tv/cdatafile/c.AES.autotvin_ctx_RoundKey_5.dat"
#define AUTOTB_TVOUT_ctx_RoundKey_5  "../tv/cdatafile/c.AES.autotvout_ctx_RoundKey_5.dat"
// wrapc file define: "ctx_RoundKey_6"
#define AUTOTB_TVIN_ctx_RoundKey_6  "../tv/cdatafile/c.AES.autotvin_ctx_RoundKey_6.dat"
#define AUTOTB_TVOUT_ctx_RoundKey_6  "../tv/cdatafile/c.AES.autotvout_ctx_RoundKey_6.dat"
// wrapc file define: "ctx_RoundKey_7"
#define AUTOTB_TVIN_ctx_RoundKey_7  "../tv/cdatafile/c.AES.autotvin_ctx_RoundKey_7.dat"
#define AUTOTB_TVOUT_ctx_RoundKey_7  "../tv/cdatafile/c.AES.autotvout_ctx_RoundKey_7.dat"
// wrapc file define: "ctx_RoundKey_8"
#define AUTOTB_TVIN_ctx_RoundKey_8  "../tv/cdatafile/c.AES.autotvin_ctx_RoundKey_8.dat"
#define AUTOTB_TVOUT_ctx_RoundKey_8  "../tv/cdatafile/c.AES.autotvout_ctx_RoundKey_8.dat"
// wrapc file define: "ctx_RoundKey_9"
#define AUTOTB_TVIN_ctx_RoundKey_9  "../tv/cdatafile/c.AES.autotvin_ctx_RoundKey_9.dat"
#define AUTOTB_TVOUT_ctx_RoundKey_9  "../tv/cdatafile/c.AES.autotvout_ctx_RoundKey_9.dat"
// wrapc file define: "ctx_RoundKey_10"
#define AUTOTB_TVIN_ctx_RoundKey_10  "../tv/cdatafile/c.AES.autotvin_ctx_RoundKey_10.dat"
#define AUTOTB_TVOUT_ctx_RoundKey_10  "../tv/cdatafile/c.AES.autotvout_ctx_RoundKey_10.dat"
// wrapc file define: "ctx_RoundKey_11"
#define AUTOTB_TVIN_ctx_RoundKey_11  "../tv/cdatafile/c.AES.autotvin_ctx_RoundKey_11.dat"
#define AUTOTB_TVOUT_ctx_RoundKey_11  "../tv/cdatafile/c.AES.autotvout_ctx_RoundKey_11.dat"
// wrapc file define: "ctx_RoundKey_12"
#define AUTOTB_TVIN_ctx_RoundKey_12  "../tv/cdatafile/c.AES.autotvin_ctx_RoundKey_12.dat"
#define AUTOTB_TVOUT_ctx_RoundKey_12  "../tv/cdatafile/c.AES.autotvout_ctx_RoundKey_12.dat"
// wrapc file define: "ctx_RoundKey_13"
#define AUTOTB_TVIN_ctx_RoundKey_13  "../tv/cdatafile/c.AES.autotvin_ctx_RoundKey_13.dat"
#define AUTOTB_TVOUT_ctx_RoundKey_13  "../tv/cdatafile/c.AES.autotvout_ctx_RoundKey_13.dat"
// wrapc file define: "ctx_RoundKey_14"
#define AUTOTB_TVIN_ctx_RoundKey_14  "../tv/cdatafile/c.AES.autotvin_ctx_RoundKey_14.dat"
#define AUTOTB_TVOUT_ctx_RoundKey_14  "../tv/cdatafile/c.AES.autotvout_ctx_RoundKey_14.dat"
// wrapc file define: "ctx_RoundKey_15"
#define AUTOTB_TVIN_ctx_RoundKey_15  "../tv/cdatafile/c.AES.autotvin_ctx_RoundKey_15.dat"
#define AUTOTB_TVOUT_ctx_RoundKey_15  "../tv/cdatafile/c.AES.autotvout_ctx_RoundKey_15.dat"
// wrapc file define: "key_0"
#define AUTOTB_TVIN_key_0  "../tv/cdatafile/c.AES.autotvin_key_0.dat"
// wrapc file define: "key_1"
#define AUTOTB_TVIN_key_1  "../tv/cdatafile/c.AES.autotvin_key_1.dat"
// wrapc file define: "key_2"
#define AUTOTB_TVIN_key_2  "../tv/cdatafile/c.AES.autotvin_key_2.dat"
// wrapc file define: "key_3"
#define AUTOTB_TVIN_key_3  "../tv/cdatafile/c.AES.autotvin_key_3.dat"
// wrapc file define: "key_4"
#define AUTOTB_TVIN_key_4  "../tv/cdatafile/c.AES.autotvin_key_4.dat"
// wrapc file define: "key_5"
#define AUTOTB_TVIN_key_5  "../tv/cdatafile/c.AES.autotvin_key_5.dat"
// wrapc file define: "key_6"
#define AUTOTB_TVIN_key_6  "../tv/cdatafile/c.AES.autotvin_key_6.dat"
// wrapc file define: "key_7"
#define AUTOTB_TVIN_key_7  "../tv/cdatafile/c.AES.autotvin_key_7.dat"
// wrapc file define: "key_8"
#define AUTOTB_TVIN_key_8  "../tv/cdatafile/c.AES.autotvin_key_8.dat"
// wrapc file define: "key_9"
#define AUTOTB_TVIN_key_9  "../tv/cdatafile/c.AES.autotvin_key_9.dat"
// wrapc file define: "key_10"
#define AUTOTB_TVIN_key_10  "../tv/cdatafile/c.AES.autotvin_key_10.dat"
// wrapc file define: "key_11"
#define AUTOTB_TVIN_key_11  "../tv/cdatafile/c.AES.autotvin_key_11.dat"
// wrapc file define: "key_12"
#define AUTOTB_TVIN_key_12  "../tv/cdatafile/c.AES.autotvin_key_12.dat"
// wrapc file define: "key_13"
#define AUTOTB_TVIN_key_13  "../tv/cdatafile/c.AES.autotvin_key_13.dat"
// wrapc file define: "key_14"
#define AUTOTB_TVIN_key_14  "../tv/cdatafile/c.AES.autotvin_key_14.dat"
// wrapc file define: "key_15"
#define AUTOTB_TVIN_key_15  "../tv/cdatafile/c.AES.autotvin_key_15.dat"
// wrapc file define: "in_0_0"
#define AUTOTB_TVIN_in_0_0  "../tv/cdatafile/c.AES.autotvin_in_0_0.dat"
#define AUTOTB_TVOUT_in_0_0  "../tv/cdatafile/c.AES.autotvout_in_0_0.dat"
// wrapc file define: "in_0_1"
#define AUTOTB_TVIN_in_0_1  "../tv/cdatafile/c.AES.autotvin_in_0_1.dat"
#define AUTOTB_TVOUT_in_0_1  "../tv/cdatafile/c.AES.autotvout_in_0_1.dat"
// wrapc file define: "in_0_2"
#define AUTOTB_TVIN_in_0_2  "../tv/cdatafile/c.AES.autotvin_in_0_2.dat"
#define AUTOTB_TVOUT_in_0_2  "../tv/cdatafile/c.AES.autotvout_in_0_2.dat"
// wrapc file define: "in_0_3"
#define AUTOTB_TVIN_in_0_3  "../tv/cdatafile/c.AES.autotvin_in_0_3.dat"
#define AUTOTB_TVOUT_in_0_3  "../tv/cdatafile/c.AES.autotvout_in_0_3.dat"
// wrapc file define: "in_1_0"
#define AUTOTB_TVIN_in_1_0  "../tv/cdatafile/c.AES.autotvin_in_1_0.dat"
#define AUTOTB_TVOUT_in_1_0  "../tv/cdatafile/c.AES.autotvout_in_1_0.dat"
// wrapc file define: "in_1_1"
#define AUTOTB_TVIN_in_1_1  "../tv/cdatafile/c.AES.autotvin_in_1_1.dat"
#define AUTOTB_TVOUT_in_1_1  "../tv/cdatafile/c.AES.autotvout_in_1_1.dat"
// wrapc file define: "in_1_2"
#define AUTOTB_TVIN_in_1_2  "../tv/cdatafile/c.AES.autotvin_in_1_2.dat"
#define AUTOTB_TVOUT_in_1_2  "../tv/cdatafile/c.AES.autotvout_in_1_2.dat"
// wrapc file define: "in_1_3"
#define AUTOTB_TVIN_in_1_3  "../tv/cdatafile/c.AES.autotvin_in_1_3.dat"
#define AUTOTB_TVOUT_in_1_3  "../tv/cdatafile/c.AES.autotvout_in_1_3.dat"
// wrapc file define: "in_2_0"
#define AUTOTB_TVIN_in_2_0  "../tv/cdatafile/c.AES.autotvin_in_2_0.dat"
#define AUTOTB_TVOUT_in_2_0  "../tv/cdatafile/c.AES.autotvout_in_2_0.dat"
// wrapc file define: "in_2_1"
#define AUTOTB_TVIN_in_2_1  "../tv/cdatafile/c.AES.autotvin_in_2_1.dat"
#define AUTOTB_TVOUT_in_2_1  "../tv/cdatafile/c.AES.autotvout_in_2_1.dat"
// wrapc file define: "in_2_2"
#define AUTOTB_TVIN_in_2_2  "../tv/cdatafile/c.AES.autotvin_in_2_2.dat"
#define AUTOTB_TVOUT_in_2_2  "../tv/cdatafile/c.AES.autotvout_in_2_2.dat"
// wrapc file define: "in_2_3"
#define AUTOTB_TVIN_in_2_3  "../tv/cdatafile/c.AES.autotvin_in_2_3.dat"
#define AUTOTB_TVOUT_in_2_3  "../tv/cdatafile/c.AES.autotvout_in_2_3.dat"
// wrapc file define: "in_3_0"
#define AUTOTB_TVIN_in_3_0  "../tv/cdatafile/c.AES.autotvin_in_3_0.dat"
#define AUTOTB_TVOUT_in_3_0  "../tv/cdatafile/c.AES.autotvout_in_3_0.dat"
// wrapc file define: "in_3_1"
#define AUTOTB_TVIN_in_3_1  "../tv/cdatafile/c.AES.autotvin_in_3_1.dat"
#define AUTOTB_TVOUT_in_3_1  "../tv/cdatafile/c.AES.autotvout_in_3_1.dat"
// wrapc file define: "in_3_2"
#define AUTOTB_TVIN_in_3_2  "../tv/cdatafile/c.AES.autotvin_in_3_2.dat"
#define AUTOTB_TVOUT_in_3_2  "../tv/cdatafile/c.AES.autotvout_in_3_2.dat"
// wrapc file define: "in_3_3"
#define AUTOTB_TVIN_in_3_3  "../tv/cdatafile/c.AES.autotvin_in_3_3.dat"
#define AUTOTB_TVOUT_in_3_3  "../tv/cdatafile/c.AES.autotvout_in_3_3.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "ctx_RoundKey_0"
#define AUTOTB_TVOUT_PC_ctx_RoundKey_0  "../tv/rtldatafile/rtl.AES.autotvout_ctx_RoundKey_0.dat"
// tvout file define: "ctx_RoundKey_1"
#define AUTOTB_TVOUT_PC_ctx_RoundKey_1  "../tv/rtldatafile/rtl.AES.autotvout_ctx_RoundKey_1.dat"
// tvout file define: "ctx_RoundKey_2"
#define AUTOTB_TVOUT_PC_ctx_RoundKey_2  "../tv/rtldatafile/rtl.AES.autotvout_ctx_RoundKey_2.dat"
// tvout file define: "ctx_RoundKey_3"
#define AUTOTB_TVOUT_PC_ctx_RoundKey_3  "../tv/rtldatafile/rtl.AES.autotvout_ctx_RoundKey_3.dat"
// tvout file define: "ctx_RoundKey_4"
#define AUTOTB_TVOUT_PC_ctx_RoundKey_4  "../tv/rtldatafile/rtl.AES.autotvout_ctx_RoundKey_4.dat"
// tvout file define: "ctx_RoundKey_5"
#define AUTOTB_TVOUT_PC_ctx_RoundKey_5  "../tv/rtldatafile/rtl.AES.autotvout_ctx_RoundKey_5.dat"
// tvout file define: "ctx_RoundKey_6"
#define AUTOTB_TVOUT_PC_ctx_RoundKey_6  "../tv/rtldatafile/rtl.AES.autotvout_ctx_RoundKey_6.dat"
// tvout file define: "ctx_RoundKey_7"
#define AUTOTB_TVOUT_PC_ctx_RoundKey_7  "../tv/rtldatafile/rtl.AES.autotvout_ctx_RoundKey_7.dat"
// tvout file define: "ctx_RoundKey_8"
#define AUTOTB_TVOUT_PC_ctx_RoundKey_8  "../tv/rtldatafile/rtl.AES.autotvout_ctx_RoundKey_8.dat"
// tvout file define: "ctx_RoundKey_9"
#define AUTOTB_TVOUT_PC_ctx_RoundKey_9  "../tv/rtldatafile/rtl.AES.autotvout_ctx_RoundKey_9.dat"
// tvout file define: "ctx_RoundKey_10"
#define AUTOTB_TVOUT_PC_ctx_RoundKey_10  "../tv/rtldatafile/rtl.AES.autotvout_ctx_RoundKey_10.dat"
// tvout file define: "ctx_RoundKey_11"
#define AUTOTB_TVOUT_PC_ctx_RoundKey_11  "../tv/rtldatafile/rtl.AES.autotvout_ctx_RoundKey_11.dat"
// tvout file define: "ctx_RoundKey_12"
#define AUTOTB_TVOUT_PC_ctx_RoundKey_12  "../tv/rtldatafile/rtl.AES.autotvout_ctx_RoundKey_12.dat"
// tvout file define: "ctx_RoundKey_13"
#define AUTOTB_TVOUT_PC_ctx_RoundKey_13  "../tv/rtldatafile/rtl.AES.autotvout_ctx_RoundKey_13.dat"
// tvout file define: "ctx_RoundKey_14"
#define AUTOTB_TVOUT_PC_ctx_RoundKey_14  "../tv/rtldatafile/rtl.AES.autotvout_ctx_RoundKey_14.dat"
// tvout file define: "ctx_RoundKey_15"
#define AUTOTB_TVOUT_PC_ctx_RoundKey_15  "../tv/rtldatafile/rtl.AES.autotvout_ctx_RoundKey_15.dat"
// tvout file define: "in_0_0"
#define AUTOTB_TVOUT_PC_in_0_0  "../tv/rtldatafile/rtl.AES.autotvout_in_0_0.dat"
// tvout file define: "in_0_1"
#define AUTOTB_TVOUT_PC_in_0_1  "../tv/rtldatafile/rtl.AES.autotvout_in_0_1.dat"
// tvout file define: "in_0_2"
#define AUTOTB_TVOUT_PC_in_0_2  "../tv/rtldatafile/rtl.AES.autotvout_in_0_2.dat"
// tvout file define: "in_0_3"
#define AUTOTB_TVOUT_PC_in_0_3  "../tv/rtldatafile/rtl.AES.autotvout_in_0_3.dat"
// tvout file define: "in_1_0"
#define AUTOTB_TVOUT_PC_in_1_0  "../tv/rtldatafile/rtl.AES.autotvout_in_1_0.dat"
// tvout file define: "in_1_1"
#define AUTOTB_TVOUT_PC_in_1_1  "../tv/rtldatafile/rtl.AES.autotvout_in_1_1.dat"
// tvout file define: "in_1_2"
#define AUTOTB_TVOUT_PC_in_1_2  "../tv/rtldatafile/rtl.AES.autotvout_in_1_2.dat"
// tvout file define: "in_1_3"
#define AUTOTB_TVOUT_PC_in_1_3  "../tv/rtldatafile/rtl.AES.autotvout_in_1_3.dat"
// tvout file define: "in_2_0"
#define AUTOTB_TVOUT_PC_in_2_0  "../tv/rtldatafile/rtl.AES.autotvout_in_2_0.dat"
// tvout file define: "in_2_1"
#define AUTOTB_TVOUT_PC_in_2_1  "../tv/rtldatafile/rtl.AES.autotvout_in_2_1.dat"
// tvout file define: "in_2_2"
#define AUTOTB_TVOUT_PC_in_2_2  "../tv/rtldatafile/rtl.AES.autotvout_in_2_2.dat"
// tvout file define: "in_2_3"
#define AUTOTB_TVOUT_PC_in_2_3  "../tv/rtldatafile/rtl.AES.autotvout_in_2_3.dat"
// tvout file define: "in_3_0"
#define AUTOTB_TVOUT_PC_in_3_0  "../tv/rtldatafile/rtl.AES.autotvout_in_3_0.dat"
// tvout file define: "in_3_1"
#define AUTOTB_TVOUT_PC_in_3_1  "../tv/rtldatafile/rtl.AES.autotvout_in_3_1.dat"
// tvout file define: "in_3_2"
#define AUTOTB_TVOUT_PC_in_3_2  "../tv/rtldatafile/rtl.AES.autotvout_in_3_2.dat"
// tvout file define: "in_3_3"
#define AUTOTB_TVOUT_PC_in_3_3  "../tv/rtldatafile/rtl.AES.autotvout_in_3_3.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			ctx_RoundKey_0_depth = 0;
			ctx_RoundKey_1_depth = 0;
			ctx_RoundKey_2_depth = 0;
			ctx_RoundKey_3_depth = 0;
			ctx_RoundKey_4_depth = 0;
			ctx_RoundKey_5_depth = 0;
			ctx_RoundKey_6_depth = 0;
			ctx_RoundKey_7_depth = 0;
			ctx_RoundKey_8_depth = 0;
			ctx_RoundKey_9_depth = 0;
			ctx_RoundKey_10_depth = 0;
			ctx_RoundKey_11_depth = 0;
			ctx_RoundKey_12_depth = 0;
			ctx_RoundKey_13_depth = 0;
			ctx_RoundKey_14_depth = 0;
			ctx_RoundKey_15_depth = 0;
			key_0_depth = 0;
			key_1_depth = 0;
			key_2_depth = 0;
			key_3_depth = 0;
			key_4_depth = 0;
			key_5_depth = 0;
			key_6_depth = 0;
			key_7_depth = 0;
			key_8_depth = 0;
			key_9_depth = 0;
			key_10_depth = 0;
			key_11_depth = 0;
			key_12_depth = 0;
			key_13_depth = 0;
			key_14_depth = 0;
			key_15_depth = 0;
			in_0_0_depth = 0;
			in_0_1_depth = 0;
			in_0_2_depth = 0;
			in_0_3_depth = 0;
			in_1_0_depth = 0;
			in_1_1_depth = 0;
			in_1_2_depth = 0;
			in_1_3_depth = 0;
			in_2_0_depth = 0;
			in_2_1_depth = 0;
			in_2_2_depth = 0;
			in_2_3_depth = 0;
			in_3_0_depth = 0;
			in_3_1_depth = 0;
			in_3_2_depth = 0;
			in_3_3_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{ctx_RoundKey_0 " << ctx_RoundKey_0_depth << "}\n";
			total_list << "{ctx_RoundKey_1 " << ctx_RoundKey_1_depth << "}\n";
			total_list << "{ctx_RoundKey_2 " << ctx_RoundKey_2_depth << "}\n";
			total_list << "{ctx_RoundKey_3 " << ctx_RoundKey_3_depth << "}\n";
			total_list << "{ctx_RoundKey_4 " << ctx_RoundKey_4_depth << "}\n";
			total_list << "{ctx_RoundKey_5 " << ctx_RoundKey_5_depth << "}\n";
			total_list << "{ctx_RoundKey_6 " << ctx_RoundKey_6_depth << "}\n";
			total_list << "{ctx_RoundKey_7 " << ctx_RoundKey_7_depth << "}\n";
			total_list << "{ctx_RoundKey_8 " << ctx_RoundKey_8_depth << "}\n";
			total_list << "{ctx_RoundKey_9 " << ctx_RoundKey_9_depth << "}\n";
			total_list << "{ctx_RoundKey_10 " << ctx_RoundKey_10_depth << "}\n";
			total_list << "{ctx_RoundKey_11 " << ctx_RoundKey_11_depth << "}\n";
			total_list << "{ctx_RoundKey_12 " << ctx_RoundKey_12_depth << "}\n";
			total_list << "{ctx_RoundKey_13 " << ctx_RoundKey_13_depth << "}\n";
			total_list << "{ctx_RoundKey_14 " << ctx_RoundKey_14_depth << "}\n";
			total_list << "{ctx_RoundKey_15 " << ctx_RoundKey_15_depth << "}\n";
			total_list << "{key_0 " << key_0_depth << "}\n";
			total_list << "{key_1 " << key_1_depth << "}\n";
			total_list << "{key_2 " << key_2_depth << "}\n";
			total_list << "{key_3 " << key_3_depth << "}\n";
			total_list << "{key_4 " << key_4_depth << "}\n";
			total_list << "{key_5 " << key_5_depth << "}\n";
			total_list << "{key_6 " << key_6_depth << "}\n";
			total_list << "{key_7 " << key_7_depth << "}\n";
			total_list << "{key_8 " << key_8_depth << "}\n";
			total_list << "{key_9 " << key_9_depth << "}\n";
			total_list << "{key_10 " << key_10_depth << "}\n";
			total_list << "{key_11 " << key_11_depth << "}\n";
			total_list << "{key_12 " << key_12_depth << "}\n";
			total_list << "{key_13 " << key_13_depth << "}\n";
			total_list << "{key_14 " << key_14_depth << "}\n";
			total_list << "{key_15 " << key_15_depth << "}\n";
			total_list << "{in_0_0 " << in_0_0_depth << "}\n";
			total_list << "{in_0_1 " << in_0_1_depth << "}\n";
			total_list << "{in_0_2 " << in_0_2_depth << "}\n";
			total_list << "{in_0_3 " << in_0_3_depth << "}\n";
			total_list << "{in_1_0 " << in_1_0_depth << "}\n";
			total_list << "{in_1_1 " << in_1_1_depth << "}\n";
			total_list << "{in_1_2 " << in_1_2_depth << "}\n";
			total_list << "{in_1_3 " << in_1_3_depth << "}\n";
			total_list << "{in_2_0 " << in_2_0_depth << "}\n";
			total_list << "{in_2_1 " << in_2_1_depth << "}\n";
			total_list << "{in_2_2 " << in_2_2_depth << "}\n";
			total_list << "{in_2_3 " << in_2_3_depth << "}\n";
			total_list << "{in_3_0 " << in_3_0_depth << "}\n";
			total_list << "{in_3_1 " << in_3_1_depth << "}\n";
			total_list << "{in_3_2 " << in_3_2_depth << "}\n";
			total_list << "{in_3_3 " << in_3_3_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int ctx_RoundKey_0_depth;
		int ctx_RoundKey_1_depth;
		int ctx_RoundKey_2_depth;
		int ctx_RoundKey_3_depth;
		int ctx_RoundKey_4_depth;
		int ctx_RoundKey_5_depth;
		int ctx_RoundKey_6_depth;
		int ctx_RoundKey_7_depth;
		int ctx_RoundKey_8_depth;
		int ctx_RoundKey_9_depth;
		int ctx_RoundKey_10_depth;
		int ctx_RoundKey_11_depth;
		int ctx_RoundKey_12_depth;
		int ctx_RoundKey_13_depth;
		int ctx_RoundKey_14_depth;
		int ctx_RoundKey_15_depth;
		int key_0_depth;
		int key_1_depth;
		int key_2_depth;
		int key_3_depth;
		int key_4_depth;
		int key_5_depth;
		int key_6_depth;
		int key_7_depth;
		int key_8_depth;
		int key_9_depth;
		int key_10_depth;
		int key_11_depth;
		int key_12_depth;
		int key_13_depth;
		int key_14_depth;
		int key_15_depth;
		int in_0_0_depth;
		int in_0_1_depth;
		int in_0_2_depth;
		int in_0_3_depth;
		int in_1_0_depth;
		int in_1_1_depth;
		int in_1_2_depth;
		int in_1_3_depth;
		int in_2_0_depth;
		int in_2_1_depth;
		int in_2_2_depth;
		int in_2_3_depth;
		int in_3_0_depth;
		int in_3_1_depth;
		int in_3_2_depth;
		int in_3_3_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern "C" void AES (
AES_ctx* ctx,
char key[16],
char in[4][4]);

extern "C" void AESL_WRAP_AES (
AES_ctx* ctx,
char key[16],
char in[4][4])
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;


		// output port post check: "ctx_RoundKey_0"
		aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_0, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_0, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_0, AESL_token); // data

			sc_bv<8> *ctx_RoundKey_0_pc_buffer = new sc_bv<8>[11];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ctx_RoundKey_0', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ctx_RoundKey_0', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					ctx_RoundKey_0_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_0, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_ctx_RoundKey_0))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: ctx_RoundKey_0
				{
					// bitslice(7, 0)
					// {
						// celement: ctx.RoundKey(7, 0)
						// {
							sc_lv<8>* ctx_RoundKey_lv0_0_160_16 = new sc_lv<8>[11];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: ctx.RoundKey(7, 0)
						{
							// carray: (0) => (160) @ (16)
							for (int i_0 = 0; i_0 <= 160; i_0 += 16)
							{
								if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									ctx_RoundKey_lv0_0_160_16[hls_map_index].range(7, 0) = sc_bv<8>(ctx_RoundKey_0_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: ctx.RoundKey(7, 0)
						{
							// carray: (0) => (160) @ (16)
							for (int i_0 = 0; i_0 <= 160; i_0 += 16)
							{
								// sub                    : i_0
								// ori_name               : ctx->RoundKey[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : ctx->RoundKey[0]
								// output_left_conversion : ctx->RoundKey[i_0]
								// output_type_conversion : (ctx_RoundKey_lv0_0_160_16[hls_map_index]).to_uint64()
								if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									ctx->RoundKey[i_0] = (ctx_RoundKey_lv0_0_160_16[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] ctx_RoundKey_0_pc_buffer;
		}

		// output port post check: "ctx_RoundKey_1"
		aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_1, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_1, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_1, AESL_token); // data

			sc_bv<8> *ctx_RoundKey_1_pc_buffer = new sc_bv<8>[11];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ctx_RoundKey_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ctx_RoundKey_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					ctx_RoundKey_1_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_1, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_ctx_RoundKey_1))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: ctx_RoundKey_1
				{
					// bitslice(7, 0)
					// {
						// celement: ctx.RoundKey(7, 0)
						// {
							sc_lv<8>* ctx_RoundKey_lv0_1_161_16 = new sc_lv<8>[11];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: ctx.RoundKey(7, 0)
						{
							// carray: (1) => (161) @ (16)
							for (int i_0 = 1; i_0 <= 161; i_0 += 16)
							{
								if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									ctx_RoundKey_lv0_1_161_16[hls_map_index].range(7, 0) = sc_bv<8>(ctx_RoundKey_1_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: ctx.RoundKey(7, 0)
						{
							// carray: (1) => (161) @ (16)
							for (int i_0 = 1; i_0 <= 161; i_0 += 16)
							{
								// sub                    : i_0
								// ori_name               : ctx->RoundKey[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : ctx->RoundKey[0]
								// output_left_conversion : ctx->RoundKey[i_0]
								// output_type_conversion : (ctx_RoundKey_lv0_1_161_16[hls_map_index]).to_uint64()
								if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									ctx->RoundKey[i_0] = (ctx_RoundKey_lv0_1_161_16[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] ctx_RoundKey_1_pc_buffer;
		}

		// output port post check: "ctx_RoundKey_2"
		aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_2, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_2, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_2, AESL_token); // data

			sc_bv<8> *ctx_RoundKey_2_pc_buffer = new sc_bv<8>[11];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ctx_RoundKey_2', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ctx_RoundKey_2', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					ctx_RoundKey_2_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_2, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_ctx_RoundKey_2))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: ctx_RoundKey_2
				{
					// bitslice(7, 0)
					// {
						// celement: ctx.RoundKey(7, 0)
						// {
							sc_lv<8>* ctx_RoundKey_lv0_2_162_16 = new sc_lv<8>[11];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: ctx.RoundKey(7, 0)
						{
							// carray: (2) => (162) @ (16)
							for (int i_0 = 2; i_0 <= 162; i_0 += 16)
							{
								if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									ctx_RoundKey_lv0_2_162_16[hls_map_index].range(7, 0) = sc_bv<8>(ctx_RoundKey_2_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: ctx.RoundKey(7, 0)
						{
							// carray: (2) => (162) @ (16)
							for (int i_0 = 2; i_0 <= 162; i_0 += 16)
							{
								// sub                    : i_0
								// ori_name               : ctx->RoundKey[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : ctx->RoundKey[0]
								// output_left_conversion : ctx->RoundKey[i_0]
								// output_type_conversion : (ctx_RoundKey_lv0_2_162_16[hls_map_index]).to_uint64()
								if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									ctx->RoundKey[i_0] = (ctx_RoundKey_lv0_2_162_16[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] ctx_RoundKey_2_pc_buffer;
		}

		// output port post check: "ctx_RoundKey_3"
		aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_3, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_3, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_3, AESL_token); // data

			sc_bv<8> *ctx_RoundKey_3_pc_buffer = new sc_bv<8>[11];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ctx_RoundKey_3', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ctx_RoundKey_3', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					ctx_RoundKey_3_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_3, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_ctx_RoundKey_3))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: ctx_RoundKey_3
				{
					// bitslice(7, 0)
					// {
						// celement: ctx.RoundKey(7, 0)
						// {
							sc_lv<8>* ctx_RoundKey_lv0_3_163_16 = new sc_lv<8>[11];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: ctx.RoundKey(7, 0)
						{
							// carray: (3) => (163) @ (16)
							for (int i_0 = 3; i_0 <= 163; i_0 += 16)
							{
								if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									ctx_RoundKey_lv0_3_163_16[hls_map_index].range(7, 0) = sc_bv<8>(ctx_RoundKey_3_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: ctx.RoundKey(7, 0)
						{
							// carray: (3) => (163) @ (16)
							for (int i_0 = 3; i_0 <= 163; i_0 += 16)
							{
								// sub                    : i_0
								// ori_name               : ctx->RoundKey[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : ctx->RoundKey[0]
								// output_left_conversion : ctx->RoundKey[i_0]
								// output_type_conversion : (ctx_RoundKey_lv0_3_163_16[hls_map_index]).to_uint64()
								if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									ctx->RoundKey[i_0] = (ctx_RoundKey_lv0_3_163_16[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] ctx_RoundKey_3_pc_buffer;
		}

		// output port post check: "ctx_RoundKey_4"
		aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_4, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_4, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_4, AESL_token); // data

			sc_bv<8> *ctx_RoundKey_4_pc_buffer = new sc_bv<8>[11];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ctx_RoundKey_4', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ctx_RoundKey_4', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					ctx_RoundKey_4_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_4, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_ctx_RoundKey_4))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: ctx_RoundKey_4
				{
					// bitslice(7, 0)
					// {
						// celement: ctx.RoundKey(7, 0)
						// {
							sc_lv<8>* ctx_RoundKey_lv0_4_164_16 = new sc_lv<8>[11];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: ctx.RoundKey(7, 0)
						{
							// carray: (4) => (164) @ (16)
							for (int i_0 = 4; i_0 <= 164; i_0 += 16)
							{
								if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									ctx_RoundKey_lv0_4_164_16[hls_map_index].range(7, 0) = sc_bv<8>(ctx_RoundKey_4_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: ctx.RoundKey(7, 0)
						{
							// carray: (4) => (164) @ (16)
							for (int i_0 = 4; i_0 <= 164; i_0 += 16)
							{
								// sub                    : i_0
								// ori_name               : ctx->RoundKey[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : ctx->RoundKey[0]
								// output_left_conversion : ctx->RoundKey[i_0]
								// output_type_conversion : (ctx_RoundKey_lv0_4_164_16[hls_map_index]).to_uint64()
								if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									ctx->RoundKey[i_0] = (ctx_RoundKey_lv0_4_164_16[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] ctx_RoundKey_4_pc_buffer;
		}

		// output port post check: "ctx_RoundKey_5"
		aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_5, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_5, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_5, AESL_token); // data

			sc_bv<8> *ctx_RoundKey_5_pc_buffer = new sc_bv<8>[11];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ctx_RoundKey_5', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ctx_RoundKey_5', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					ctx_RoundKey_5_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_5, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_ctx_RoundKey_5))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: ctx_RoundKey_5
				{
					// bitslice(7, 0)
					// {
						// celement: ctx.RoundKey(7, 0)
						// {
							sc_lv<8>* ctx_RoundKey_lv0_5_165_16 = new sc_lv<8>[11];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: ctx.RoundKey(7, 0)
						{
							// carray: (5) => (165) @ (16)
							for (int i_0 = 5; i_0 <= 165; i_0 += 16)
							{
								if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									ctx_RoundKey_lv0_5_165_16[hls_map_index].range(7, 0) = sc_bv<8>(ctx_RoundKey_5_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: ctx.RoundKey(7, 0)
						{
							// carray: (5) => (165) @ (16)
							for (int i_0 = 5; i_0 <= 165; i_0 += 16)
							{
								// sub                    : i_0
								// ori_name               : ctx->RoundKey[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : ctx->RoundKey[0]
								// output_left_conversion : ctx->RoundKey[i_0]
								// output_type_conversion : (ctx_RoundKey_lv0_5_165_16[hls_map_index]).to_uint64()
								if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									ctx->RoundKey[i_0] = (ctx_RoundKey_lv0_5_165_16[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] ctx_RoundKey_5_pc_buffer;
		}

		// output port post check: "ctx_RoundKey_6"
		aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_6, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_6, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_6, AESL_token); // data

			sc_bv<8> *ctx_RoundKey_6_pc_buffer = new sc_bv<8>[11];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ctx_RoundKey_6', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ctx_RoundKey_6', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					ctx_RoundKey_6_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_6, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_ctx_RoundKey_6))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: ctx_RoundKey_6
				{
					// bitslice(7, 0)
					// {
						// celement: ctx.RoundKey(7, 0)
						// {
							sc_lv<8>* ctx_RoundKey_lv0_6_166_16 = new sc_lv<8>[11];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: ctx.RoundKey(7, 0)
						{
							// carray: (6) => (166) @ (16)
							for (int i_0 = 6; i_0 <= 166; i_0 += 16)
							{
								if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									ctx_RoundKey_lv0_6_166_16[hls_map_index].range(7, 0) = sc_bv<8>(ctx_RoundKey_6_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: ctx.RoundKey(7, 0)
						{
							// carray: (6) => (166) @ (16)
							for (int i_0 = 6; i_0 <= 166; i_0 += 16)
							{
								// sub                    : i_0
								// ori_name               : ctx->RoundKey[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : ctx->RoundKey[0]
								// output_left_conversion : ctx->RoundKey[i_0]
								// output_type_conversion : (ctx_RoundKey_lv0_6_166_16[hls_map_index]).to_uint64()
								if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									ctx->RoundKey[i_0] = (ctx_RoundKey_lv0_6_166_16[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] ctx_RoundKey_6_pc_buffer;
		}

		// output port post check: "ctx_RoundKey_7"
		aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_7, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_7, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_7, AESL_token); // data

			sc_bv<8> *ctx_RoundKey_7_pc_buffer = new sc_bv<8>[11];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ctx_RoundKey_7', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ctx_RoundKey_7', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					ctx_RoundKey_7_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_7, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_ctx_RoundKey_7))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: ctx_RoundKey_7
				{
					// bitslice(7, 0)
					// {
						// celement: ctx.RoundKey(7, 0)
						// {
							sc_lv<8>* ctx_RoundKey_lv0_7_167_16 = new sc_lv<8>[11];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: ctx.RoundKey(7, 0)
						{
							// carray: (7) => (167) @ (16)
							for (int i_0 = 7; i_0 <= 167; i_0 += 16)
							{
								if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									ctx_RoundKey_lv0_7_167_16[hls_map_index].range(7, 0) = sc_bv<8>(ctx_RoundKey_7_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: ctx.RoundKey(7, 0)
						{
							// carray: (7) => (167) @ (16)
							for (int i_0 = 7; i_0 <= 167; i_0 += 16)
							{
								// sub                    : i_0
								// ori_name               : ctx->RoundKey[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : ctx->RoundKey[0]
								// output_left_conversion : ctx->RoundKey[i_0]
								// output_type_conversion : (ctx_RoundKey_lv0_7_167_16[hls_map_index]).to_uint64()
								if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									ctx->RoundKey[i_0] = (ctx_RoundKey_lv0_7_167_16[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] ctx_RoundKey_7_pc_buffer;
		}

		// output port post check: "ctx_RoundKey_8"
		aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_8, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_8, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_8, AESL_token); // data

			sc_bv<8> *ctx_RoundKey_8_pc_buffer = new sc_bv<8>[11];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ctx_RoundKey_8', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ctx_RoundKey_8', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					ctx_RoundKey_8_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_8, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_ctx_RoundKey_8))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: ctx_RoundKey_8
				{
					// bitslice(7, 0)
					// {
						// celement: ctx.RoundKey(7, 0)
						// {
							sc_lv<8>* ctx_RoundKey_lv0_8_168_16 = new sc_lv<8>[11];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: ctx.RoundKey(7, 0)
						{
							// carray: (8) => (168) @ (16)
							for (int i_0 = 8; i_0 <= 168; i_0 += 16)
							{
								if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									ctx_RoundKey_lv0_8_168_16[hls_map_index].range(7, 0) = sc_bv<8>(ctx_RoundKey_8_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: ctx.RoundKey(7, 0)
						{
							// carray: (8) => (168) @ (16)
							for (int i_0 = 8; i_0 <= 168; i_0 += 16)
							{
								// sub                    : i_0
								// ori_name               : ctx->RoundKey[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : ctx->RoundKey[0]
								// output_left_conversion : ctx->RoundKey[i_0]
								// output_type_conversion : (ctx_RoundKey_lv0_8_168_16[hls_map_index]).to_uint64()
								if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									ctx->RoundKey[i_0] = (ctx_RoundKey_lv0_8_168_16[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] ctx_RoundKey_8_pc_buffer;
		}

		// output port post check: "ctx_RoundKey_9"
		aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_9, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_9, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_9, AESL_token); // data

			sc_bv<8> *ctx_RoundKey_9_pc_buffer = new sc_bv<8>[11];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ctx_RoundKey_9', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ctx_RoundKey_9', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					ctx_RoundKey_9_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_9, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_ctx_RoundKey_9))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: ctx_RoundKey_9
				{
					// bitslice(7, 0)
					// {
						// celement: ctx.RoundKey(7, 0)
						// {
							sc_lv<8>* ctx_RoundKey_lv0_9_169_16 = new sc_lv<8>[11];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: ctx.RoundKey(7, 0)
						{
							// carray: (9) => (169) @ (16)
							for (int i_0 = 9; i_0 <= 169; i_0 += 16)
							{
								if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									ctx_RoundKey_lv0_9_169_16[hls_map_index].range(7, 0) = sc_bv<8>(ctx_RoundKey_9_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: ctx.RoundKey(7, 0)
						{
							// carray: (9) => (169) @ (16)
							for (int i_0 = 9; i_0 <= 169; i_0 += 16)
							{
								// sub                    : i_0
								// ori_name               : ctx->RoundKey[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : ctx->RoundKey[0]
								// output_left_conversion : ctx->RoundKey[i_0]
								// output_type_conversion : (ctx_RoundKey_lv0_9_169_16[hls_map_index]).to_uint64()
								if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									ctx->RoundKey[i_0] = (ctx_RoundKey_lv0_9_169_16[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] ctx_RoundKey_9_pc_buffer;
		}

		// output port post check: "ctx_RoundKey_10"
		aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_10, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_10, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_10, AESL_token); // data

			sc_bv<8> *ctx_RoundKey_10_pc_buffer = new sc_bv<8>[11];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ctx_RoundKey_10', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ctx_RoundKey_10', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					ctx_RoundKey_10_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_10, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_ctx_RoundKey_10))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: ctx_RoundKey_10
				{
					// bitslice(7, 0)
					// {
						// celement: ctx.RoundKey(7, 0)
						// {
							sc_lv<8>* ctx_RoundKey_lv0_10_170_16 = new sc_lv<8>[11];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: ctx.RoundKey(7, 0)
						{
							// carray: (10) => (170) @ (16)
							for (int i_0 = 10; i_0 <= 170; i_0 += 16)
							{
								if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									ctx_RoundKey_lv0_10_170_16[hls_map_index].range(7, 0) = sc_bv<8>(ctx_RoundKey_10_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: ctx.RoundKey(7, 0)
						{
							// carray: (10) => (170) @ (16)
							for (int i_0 = 10; i_0 <= 170; i_0 += 16)
							{
								// sub                    : i_0
								// ori_name               : ctx->RoundKey[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : ctx->RoundKey[0]
								// output_left_conversion : ctx->RoundKey[i_0]
								// output_type_conversion : (ctx_RoundKey_lv0_10_170_16[hls_map_index]).to_uint64()
								if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									ctx->RoundKey[i_0] = (ctx_RoundKey_lv0_10_170_16[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] ctx_RoundKey_10_pc_buffer;
		}

		// output port post check: "ctx_RoundKey_11"
		aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_11, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_11, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_11, AESL_token); // data

			sc_bv<8> *ctx_RoundKey_11_pc_buffer = new sc_bv<8>[11];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ctx_RoundKey_11', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ctx_RoundKey_11', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					ctx_RoundKey_11_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_11, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_ctx_RoundKey_11))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: ctx_RoundKey_11
				{
					// bitslice(7, 0)
					// {
						// celement: ctx.RoundKey(7, 0)
						// {
							sc_lv<8>* ctx_RoundKey_lv0_11_171_16 = new sc_lv<8>[11];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: ctx.RoundKey(7, 0)
						{
							// carray: (11) => (171) @ (16)
							for (int i_0 = 11; i_0 <= 171; i_0 += 16)
							{
								if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									ctx_RoundKey_lv0_11_171_16[hls_map_index].range(7, 0) = sc_bv<8>(ctx_RoundKey_11_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: ctx.RoundKey(7, 0)
						{
							// carray: (11) => (171) @ (16)
							for (int i_0 = 11; i_0 <= 171; i_0 += 16)
							{
								// sub                    : i_0
								// ori_name               : ctx->RoundKey[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : ctx->RoundKey[0]
								// output_left_conversion : ctx->RoundKey[i_0]
								// output_type_conversion : (ctx_RoundKey_lv0_11_171_16[hls_map_index]).to_uint64()
								if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									ctx->RoundKey[i_0] = (ctx_RoundKey_lv0_11_171_16[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] ctx_RoundKey_11_pc_buffer;
		}

		// output port post check: "ctx_RoundKey_12"
		aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_12, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_12, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_12, AESL_token); // data

			sc_bv<8> *ctx_RoundKey_12_pc_buffer = new sc_bv<8>[11];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ctx_RoundKey_12', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ctx_RoundKey_12', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					ctx_RoundKey_12_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_12, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_ctx_RoundKey_12))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: ctx_RoundKey_12
				{
					// bitslice(7, 0)
					// {
						// celement: ctx.RoundKey(7, 0)
						// {
							sc_lv<8>* ctx_RoundKey_lv0_12_172_16 = new sc_lv<8>[11];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: ctx.RoundKey(7, 0)
						{
							// carray: (12) => (172) @ (16)
							for (int i_0 = 12; i_0 <= 172; i_0 += 16)
							{
								if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									ctx_RoundKey_lv0_12_172_16[hls_map_index].range(7, 0) = sc_bv<8>(ctx_RoundKey_12_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: ctx.RoundKey(7, 0)
						{
							// carray: (12) => (172) @ (16)
							for (int i_0 = 12; i_0 <= 172; i_0 += 16)
							{
								// sub                    : i_0
								// ori_name               : ctx->RoundKey[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : ctx->RoundKey[0]
								// output_left_conversion : ctx->RoundKey[i_0]
								// output_type_conversion : (ctx_RoundKey_lv0_12_172_16[hls_map_index]).to_uint64()
								if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									ctx->RoundKey[i_0] = (ctx_RoundKey_lv0_12_172_16[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] ctx_RoundKey_12_pc_buffer;
		}

		// output port post check: "ctx_RoundKey_13"
		aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_13, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_13, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_13, AESL_token); // data

			sc_bv<8> *ctx_RoundKey_13_pc_buffer = new sc_bv<8>[11];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ctx_RoundKey_13', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ctx_RoundKey_13', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					ctx_RoundKey_13_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_13, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_ctx_RoundKey_13))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: ctx_RoundKey_13
				{
					// bitslice(7, 0)
					// {
						// celement: ctx.RoundKey(7, 0)
						// {
							sc_lv<8>* ctx_RoundKey_lv0_13_173_16 = new sc_lv<8>[11];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: ctx.RoundKey(7, 0)
						{
							// carray: (13) => (173) @ (16)
							for (int i_0 = 13; i_0 <= 173; i_0 += 16)
							{
								if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									ctx_RoundKey_lv0_13_173_16[hls_map_index].range(7, 0) = sc_bv<8>(ctx_RoundKey_13_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: ctx.RoundKey(7, 0)
						{
							// carray: (13) => (173) @ (16)
							for (int i_0 = 13; i_0 <= 173; i_0 += 16)
							{
								// sub                    : i_0
								// ori_name               : ctx->RoundKey[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : ctx->RoundKey[0]
								// output_left_conversion : ctx->RoundKey[i_0]
								// output_type_conversion : (ctx_RoundKey_lv0_13_173_16[hls_map_index]).to_uint64()
								if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									ctx->RoundKey[i_0] = (ctx_RoundKey_lv0_13_173_16[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] ctx_RoundKey_13_pc_buffer;
		}

		// output port post check: "ctx_RoundKey_14"
		aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_14, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_14, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_14, AESL_token); // data

			sc_bv<8> *ctx_RoundKey_14_pc_buffer = new sc_bv<8>[11];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ctx_RoundKey_14', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ctx_RoundKey_14', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					ctx_RoundKey_14_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_14, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_ctx_RoundKey_14))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: ctx_RoundKey_14
				{
					// bitslice(7, 0)
					// {
						// celement: ctx.RoundKey(7, 0)
						// {
							sc_lv<8>* ctx_RoundKey_lv0_14_174_16 = new sc_lv<8>[11];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: ctx.RoundKey(7, 0)
						{
							// carray: (14) => (174) @ (16)
							for (int i_0 = 14; i_0 <= 174; i_0 += 16)
							{
								if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									ctx_RoundKey_lv0_14_174_16[hls_map_index].range(7, 0) = sc_bv<8>(ctx_RoundKey_14_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: ctx.RoundKey(7, 0)
						{
							// carray: (14) => (174) @ (16)
							for (int i_0 = 14; i_0 <= 174; i_0 += 16)
							{
								// sub                    : i_0
								// ori_name               : ctx->RoundKey[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : ctx->RoundKey[0]
								// output_left_conversion : ctx->RoundKey[i_0]
								// output_type_conversion : (ctx_RoundKey_lv0_14_174_16[hls_map_index]).to_uint64()
								if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									ctx->RoundKey[i_0] = (ctx_RoundKey_lv0_14_174_16[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] ctx_RoundKey_14_pc_buffer;
		}

		// output port post check: "ctx_RoundKey_15"
		aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_15, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_15, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_15, AESL_token); // data

			sc_bv<8> *ctx_RoundKey_15_pc_buffer = new sc_bv<8>[11];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ctx_RoundKey_15', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ctx_RoundKey_15', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					ctx_RoundKey_15_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_ctx_RoundKey_15, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_ctx_RoundKey_15))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: ctx_RoundKey_15
				{
					// bitslice(7, 0)
					// {
						// celement: ctx.RoundKey(7, 0)
						// {
							sc_lv<8>* ctx_RoundKey_lv0_15_175_16 = new sc_lv<8>[11];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: ctx.RoundKey(7, 0)
						{
							// carray: (15) => (175) @ (16)
							for (int i_0 = 15; i_0 <= 175; i_0 += 16)
							{
								if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									ctx_RoundKey_lv0_15_175_16[hls_map_index].range(7, 0) = sc_bv<8>(ctx_RoundKey_15_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: ctx.RoundKey(7, 0)
						{
							// carray: (15) => (175) @ (16)
							for (int i_0 = 15; i_0 <= 175; i_0 += 16)
							{
								// sub                    : i_0
								// ori_name               : ctx->RoundKey[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : ctx->RoundKey[0]
								// output_left_conversion : ctx->RoundKey[i_0]
								// output_type_conversion : (ctx_RoundKey_lv0_15_175_16[hls_map_index]).to_uint64()
								if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									ctx->RoundKey[i_0] = (ctx_RoundKey_lv0_15_175_16[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] ctx_RoundKey_15_pc_buffer;
		}

		// output port post check: "in_0_0"
		aesl_fh.read(AUTOTB_TVOUT_PC_in_0_0, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_in_0_0, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_in_0_0, AESL_token); // data

			sc_bv<8> *in_0_0_pc_buffer = new sc_bv<8>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'in_0_0', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'in_0_0', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					in_0_0_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_in_0_0, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_in_0_0))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: in_0_0
				{
					// bitslice(7, 0)
					// {
						// celement: in(7, 0)
						// {
							sc_lv<8>* in_lv0_0_0_2_lv1_0_0_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: in(7, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								// carray: (0) => (0) @ (2)
								for (int i_1 = 0; i_1 <= 0; i_1 += 2)
								{
									if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
									{
										in_lv0_0_0_2_lv1_0_0_2[hls_map_index].range(7, 0) = sc_bv<8>(in_0_0_pc_buffer[hls_map_index].range(7, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: in(7, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								// carray: (0) => (0) @ (2)
								for (int i_1 = 0; i_1 <= 0; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : in[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : in[0][0]
									// output_left_conversion : in[i_0][i_1]
									// output_type_conversion : (in_lv0_0_0_2_lv1_0_0_2[hls_map_index]).to_uint64()
									if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
									{
										in[i_0][i_1] = (in_lv0_0_0_2_lv1_0_0_2[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] in_0_0_pc_buffer;
		}

		// output port post check: "in_0_1"
		aesl_fh.read(AUTOTB_TVOUT_PC_in_0_1, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_in_0_1, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_in_0_1, AESL_token); // data

			sc_bv<8> *in_0_1_pc_buffer = new sc_bv<8>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'in_0_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'in_0_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					in_0_1_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_in_0_1, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_in_0_1))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: in_0_1
				{
					// bitslice(7, 0)
					// {
						// celement: in(7, 0)
						// {
							sc_lv<8>* in_lv0_0_0_2_lv1_1_1_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: in(7, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								// carray: (1) => (1) @ (2)
								for (int i_1 = 1; i_1 <= 1; i_1 += 2)
								{
									if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
									{
										in_lv0_0_0_2_lv1_1_1_2[hls_map_index].range(7, 0) = sc_bv<8>(in_0_1_pc_buffer[hls_map_index].range(7, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: in(7, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								// carray: (1) => (1) @ (2)
								for (int i_1 = 1; i_1 <= 1; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : in[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : in[0][0]
									// output_left_conversion : in[i_0][i_1]
									// output_type_conversion : (in_lv0_0_0_2_lv1_1_1_2[hls_map_index]).to_uint64()
									if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
									{
										in[i_0][i_1] = (in_lv0_0_0_2_lv1_1_1_2[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] in_0_1_pc_buffer;
		}

		// output port post check: "in_0_2"
		aesl_fh.read(AUTOTB_TVOUT_PC_in_0_2, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_in_0_2, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_in_0_2, AESL_token); // data

			sc_bv<8> *in_0_2_pc_buffer = new sc_bv<8>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'in_0_2', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'in_0_2', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					in_0_2_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_in_0_2, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_in_0_2))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: in_0_2
				{
					// bitslice(7, 0)
					// {
						// celement: in(7, 0)
						// {
							sc_lv<8>* in_lv0_0_0_2_lv1_2_2_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: in(7, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								// carray: (2) => (2) @ (2)
								for (int i_1 = 2; i_1 <= 2; i_1 += 2)
								{
									if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
									{
										in_lv0_0_0_2_lv1_2_2_2[hls_map_index].range(7, 0) = sc_bv<8>(in_0_2_pc_buffer[hls_map_index].range(7, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: in(7, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								// carray: (2) => (2) @ (2)
								for (int i_1 = 2; i_1 <= 2; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : in[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : in[0][0]
									// output_left_conversion : in[i_0][i_1]
									// output_type_conversion : (in_lv0_0_0_2_lv1_2_2_2[hls_map_index]).to_uint64()
									if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
									{
										in[i_0][i_1] = (in_lv0_0_0_2_lv1_2_2_2[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] in_0_2_pc_buffer;
		}

		// output port post check: "in_0_3"
		aesl_fh.read(AUTOTB_TVOUT_PC_in_0_3, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_in_0_3, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_in_0_3, AESL_token); // data

			sc_bv<8> *in_0_3_pc_buffer = new sc_bv<8>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'in_0_3', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'in_0_3', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					in_0_3_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_in_0_3, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_in_0_3))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: in_0_3
				{
					// bitslice(7, 0)
					// {
						// celement: in(7, 0)
						// {
							sc_lv<8>* in_lv0_0_0_2_lv1_3_3_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: in(7, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								// carray: (3) => (3) @ (2)
								for (int i_1 = 3; i_1 <= 3; i_1 += 2)
								{
									if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
									{
										in_lv0_0_0_2_lv1_3_3_2[hls_map_index].range(7, 0) = sc_bv<8>(in_0_3_pc_buffer[hls_map_index].range(7, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: in(7, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								// carray: (3) => (3) @ (2)
								for (int i_1 = 3; i_1 <= 3; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : in[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : in[0][0]
									// output_left_conversion : in[i_0][i_1]
									// output_type_conversion : (in_lv0_0_0_2_lv1_3_3_2[hls_map_index]).to_uint64()
									if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
									{
										in[i_0][i_1] = (in_lv0_0_0_2_lv1_3_3_2[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] in_0_3_pc_buffer;
		}

		// output port post check: "in_1_0"
		aesl_fh.read(AUTOTB_TVOUT_PC_in_1_0, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_in_1_0, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_in_1_0, AESL_token); // data

			sc_bv<8> *in_1_0_pc_buffer = new sc_bv<8>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'in_1_0', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'in_1_0', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					in_1_0_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_in_1_0, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_in_1_0))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: in_1_0
				{
					// bitslice(7, 0)
					// {
						// celement: in(7, 0)
						// {
							sc_lv<8>* in_lv0_1_1_2_lv1_0_0_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: in(7, 0)
						{
							// carray: (1) => (1) @ (2)
							for (int i_0 = 1; i_0 <= 1; i_0 += 2)
							{
								// carray: (0) => (0) @ (2)
								for (int i_1 = 0; i_1 <= 0; i_1 += 2)
								{
									if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
									{
										in_lv0_1_1_2_lv1_0_0_2[hls_map_index].range(7, 0) = sc_bv<8>(in_1_0_pc_buffer[hls_map_index].range(7, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: in(7, 0)
						{
							// carray: (1) => (1) @ (2)
							for (int i_0 = 1; i_0 <= 1; i_0 += 2)
							{
								// carray: (0) => (0) @ (2)
								for (int i_1 = 0; i_1 <= 0; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : in[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : in[0][0]
									// output_left_conversion : in[i_0][i_1]
									// output_type_conversion : (in_lv0_1_1_2_lv1_0_0_2[hls_map_index]).to_uint64()
									if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
									{
										in[i_0][i_1] = (in_lv0_1_1_2_lv1_0_0_2[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] in_1_0_pc_buffer;
		}

		// output port post check: "in_1_1"
		aesl_fh.read(AUTOTB_TVOUT_PC_in_1_1, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_in_1_1, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_in_1_1, AESL_token); // data

			sc_bv<8> *in_1_1_pc_buffer = new sc_bv<8>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'in_1_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'in_1_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					in_1_1_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_in_1_1, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_in_1_1))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: in_1_1
				{
					// bitslice(7, 0)
					// {
						// celement: in(7, 0)
						// {
							sc_lv<8>* in_lv0_1_1_2_lv1_1_1_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: in(7, 0)
						{
							// carray: (1) => (1) @ (2)
							for (int i_0 = 1; i_0 <= 1; i_0 += 2)
							{
								// carray: (1) => (1) @ (2)
								for (int i_1 = 1; i_1 <= 1; i_1 += 2)
								{
									if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
									{
										in_lv0_1_1_2_lv1_1_1_2[hls_map_index].range(7, 0) = sc_bv<8>(in_1_1_pc_buffer[hls_map_index].range(7, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: in(7, 0)
						{
							// carray: (1) => (1) @ (2)
							for (int i_0 = 1; i_0 <= 1; i_0 += 2)
							{
								// carray: (1) => (1) @ (2)
								for (int i_1 = 1; i_1 <= 1; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : in[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : in[0][0]
									// output_left_conversion : in[i_0][i_1]
									// output_type_conversion : (in_lv0_1_1_2_lv1_1_1_2[hls_map_index]).to_uint64()
									if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
									{
										in[i_0][i_1] = (in_lv0_1_1_2_lv1_1_1_2[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] in_1_1_pc_buffer;
		}

		// output port post check: "in_1_2"
		aesl_fh.read(AUTOTB_TVOUT_PC_in_1_2, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_in_1_2, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_in_1_2, AESL_token); // data

			sc_bv<8> *in_1_2_pc_buffer = new sc_bv<8>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'in_1_2', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'in_1_2', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					in_1_2_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_in_1_2, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_in_1_2))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: in_1_2
				{
					// bitslice(7, 0)
					// {
						// celement: in(7, 0)
						// {
							sc_lv<8>* in_lv0_1_1_2_lv1_2_2_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: in(7, 0)
						{
							// carray: (1) => (1) @ (2)
							for (int i_0 = 1; i_0 <= 1; i_0 += 2)
							{
								// carray: (2) => (2) @ (2)
								for (int i_1 = 2; i_1 <= 2; i_1 += 2)
								{
									if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
									{
										in_lv0_1_1_2_lv1_2_2_2[hls_map_index].range(7, 0) = sc_bv<8>(in_1_2_pc_buffer[hls_map_index].range(7, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: in(7, 0)
						{
							// carray: (1) => (1) @ (2)
							for (int i_0 = 1; i_0 <= 1; i_0 += 2)
							{
								// carray: (2) => (2) @ (2)
								for (int i_1 = 2; i_1 <= 2; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : in[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : in[0][0]
									// output_left_conversion : in[i_0][i_1]
									// output_type_conversion : (in_lv0_1_1_2_lv1_2_2_2[hls_map_index]).to_uint64()
									if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
									{
										in[i_0][i_1] = (in_lv0_1_1_2_lv1_2_2_2[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] in_1_2_pc_buffer;
		}

		// output port post check: "in_1_3"
		aesl_fh.read(AUTOTB_TVOUT_PC_in_1_3, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_in_1_3, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_in_1_3, AESL_token); // data

			sc_bv<8> *in_1_3_pc_buffer = new sc_bv<8>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'in_1_3', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'in_1_3', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					in_1_3_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_in_1_3, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_in_1_3))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: in_1_3
				{
					// bitslice(7, 0)
					// {
						// celement: in(7, 0)
						// {
							sc_lv<8>* in_lv0_1_1_2_lv1_3_3_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: in(7, 0)
						{
							// carray: (1) => (1) @ (2)
							for (int i_0 = 1; i_0 <= 1; i_0 += 2)
							{
								// carray: (3) => (3) @ (2)
								for (int i_1 = 3; i_1 <= 3; i_1 += 2)
								{
									if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
									{
										in_lv0_1_1_2_lv1_3_3_2[hls_map_index].range(7, 0) = sc_bv<8>(in_1_3_pc_buffer[hls_map_index].range(7, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: in(7, 0)
						{
							// carray: (1) => (1) @ (2)
							for (int i_0 = 1; i_0 <= 1; i_0 += 2)
							{
								// carray: (3) => (3) @ (2)
								for (int i_1 = 3; i_1 <= 3; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : in[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : in[0][0]
									// output_left_conversion : in[i_0][i_1]
									// output_type_conversion : (in_lv0_1_1_2_lv1_3_3_2[hls_map_index]).to_uint64()
									if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
									{
										in[i_0][i_1] = (in_lv0_1_1_2_lv1_3_3_2[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] in_1_3_pc_buffer;
		}

		// output port post check: "in_2_0"
		aesl_fh.read(AUTOTB_TVOUT_PC_in_2_0, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_in_2_0, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_in_2_0, AESL_token); // data

			sc_bv<8> *in_2_0_pc_buffer = new sc_bv<8>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'in_2_0', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'in_2_0', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					in_2_0_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_in_2_0, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_in_2_0))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: in_2_0
				{
					// bitslice(7, 0)
					// {
						// celement: in(7, 0)
						// {
							sc_lv<8>* in_lv0_2_2_2_lv1_0_0_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: in(7, 0)
						{
							// carray: (2) => (2) @ (2)
							for (int i_0 = 2; i_0 <= 2; i_0 += 2)
							{
								// carray: (0) => (0) @ (2)
								for (int i_1 = 0; i_1 <= 0; i_1 += 2)
								{
									if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
									{
										in_lv0_2_2_2_lv1_0_0_2[hls_map_index].range(7, 0) = sc_bv<8>(in_2_0_pc_buffer[hls_map_index].range(7, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: in(7, 0)
						{
							// carray: (2) => (2) @ (2)
							for (int i_0 = 2; i_0 <= 2; i_0 += 2)
							{
								// carray: (0) => (0) @ (2)
								for (int i_1 = 0; i_1 <= 0; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : in[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : in[0][0]
									// output_left_conversion : in[i_0][i_1]
									// output_type_conversion : (in_lv0_2_2_2_lv1_0_0_2[hls_map_index]).to_uint64()
									if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
									{
										in[i_0][i_1] = (in_lv0_2_2_2_lv1_0_0_2[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] in_2_0_pc_buffer;
		}

		// output port post check: "in_2_1"
		aesl_fh.read(AUTOTB_TVOUT_PC_in_2_1, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_in_2_1, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_in_2_1, AESL_token); // data

			sc_bv<8> *in_2_1_pc_buffer = new sc_bv<8>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'in_2_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'in_2_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					in_2_1_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_in_2_1, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_in_2_1))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: in_2_1
				{
					// bitslice(7, 0)
					// {
						// celement: in(7, 0)
						// {
							sc_lv<8>* in_lv0_2_2_2_lv1_1_1_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: in(7, 0)
						{
							// carray: (2) => (2) @ (2)
							for (int i_0 = 2; i_0 <= 2; i_0 += 2)
							{
								// carray: (1) => (1) @ (2)
								for (int i_1 = 1; i_1 <= 1; i_1 += 2)
								{
									if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
									{
										in_lv0_2_2_2_lv1_1_1_2[hls_map_index].range(7, 0) = sc_bv<8>(in_2_1_pc_buffer[hls_map_index].range(7, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: in(7, 0)
						{
							// carray: (2) => (2) @ (2)
							for (int i_0 = 2; i_0 <= 2; i_0 += 2)
							{
								// carray: (1) => (1) @ (2)
								for (int i_1 = 1; i_1 <= 1; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : in[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : in[0][0]
									// output_left_conversion : in[i_0][i_1]
									// output_type_conversion : (in_lv0_2_2_2_lv1_1_1_2[hls_map_index]).to_uint64()
									if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
									{
										in[i_0][i_1] = (in_lv0_2_2_2_lv1_1_1_2[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] in_2_1_pc_buffer;
		}

		// output port post check: "in_2_2"
		aesl_fh.read(AUTOTB_TVOUT_PC_in_2_2, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_in_2_2, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_in_2_2, AESL_token); // data

			sc_bv<8> *in_2_2_pc_buffer = new sc_bv<8>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'in_2_2', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'in_2_2', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					in_2_2_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_in_2_2, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_in_2_2))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: in_2_2
				{
					// bitslice(7, 0)
					// {
						// celement: in(7, 0)
						// {
							sc_lv<8>* in_lv0_2_2_2_lv1_2_2_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: in(7, 0)
						{
							// carray: (2) => (2) @ (2)
							for (int i_0 = 2; i_0 <= 2; i_0 += 2)
							{
								// carray: (2) => (2) @ (2)
								for (int i_1 = 2; i_1 <= 2; i_1 += 2)
								{
									if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
									{
										in_lv0_2_2_2_lv1_2_2_2[hls_map_index].range(7, 0) = sc_bv<8>(in_2_2_pc_buffer[hls_map_index].range(7, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: in(7, 0)
						{
							// carray: (2) => (2) @ (2)
							for (int i_0 = 2; i_0 <= 2; i_0 += 2)
							{
								// carray: (2) => (2) @ (2)
								for (int i_1 = 2; i_1 <= 2; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : in[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : in[0][0]
									// output_left_conversion : in[i_0][i_1]
									// output_type_conversion : (in_lv0_2_2_2_lv1_2_2_2[hls_map_index]).to_uint64()
									if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
									{
										in[i_0][i_1] = (in_lv0_2_2_2_lv1_2_2_2[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] in_2_2_pc_buffer;
		}

		// output port post check: "in_2_3"
		aesl_fh.read(AUTOTB_TVOUT_PC_in_2_3, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_in_2_3, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_in_2_3, AESL_token); // data

			sc_bv<8> *in_2_3_pc_buffer = new sc_bv<8>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'in_2_3', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'in_2_3', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					in_2_3_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_in_2_3, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_in_2_3))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: in_2_3
				{
					// bitslice(7, 0)
					// {
						// celement: in(7, 0)
						// {
							sc_lv<8>* in_lv0_2_2_2_lv1_3_3_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: in(7, 0)
						{
							// carray: (2) => (2) @ (2)
							for (int i_0 = 2; i_0 <= 2; i_0 += 2)
							{
								// carray: (3) => (3) @ (2)
								for (int i_1 = 3; i_1 <= 3; i_1 += 2)
								{
									if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
									{
										in_lv0_2_2_2_lv1_3_3_2[hls_map_index].range(7, 0) = sc_bv<8>(in_2_3_pc_buffer[hls_map_index].range(7, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: in(7, 0)
						{
							// carray: (2) => (2) @ (2)
							for (int i_0 = 2; i_0 <= 2; i_0 += 2)
							{
								// carray: (3) => (3) @ (2)
								for (int i_1 = 3; i_1 <= 3; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : in[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : in[0][0]
									// output_left_conversion : in[i_0][i_1]
									// output_type_conversion : (in_lv0_2_2_2_lv1_3_3_2[hls_map_index]).to_uint64()
									if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
									{
										in[i_0][i_1] = (in_lv0_2_2_2_lv1_3_3_2[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] in_2_3_pc_buffer;
		}

		// output port post check: "in_3_0"
		aesl_fh.read(AUTOTB_TVOUT_PC_in_3_0, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_in_3_0, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_in_3_0, AESL_token); // data

			sc_bv<8> *in_3_0_pc_buffer = new sc_bv<8>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'in_3_0', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'in_3_0', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					in_3_0_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_in_3_0, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_in_3_0))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: in_3_0
				{
					// bitslice(7, 0)
					// {
						// celement: in(7, 0)
						// {
							sc_lv<8>* in_lv0_3_3_2_lv1_0_0_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: in(7, 0)
						{
							// carray: (3) => (3) @ (2)
							for (int i_0 = 3; i_0 <= 3; i_0 += 2)
							{
								// carray: (0) => (0) @ (2)
								for (int i_1 = 0; i_1 <= 0; i_1 += 2)
								{
									if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
									{
										in_lv0_3_3_2_lv1_0_0_2[hls_map_index].range(7, 0) = sc_bv<8>(in_3_0_pc_buffer[hls_map_index].range(7, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: in(7, 0)
						{
							// carray: (3) => (3) @ (2)
							for (int i_0 = 3; i_0 <= 3; i_0 += 2)
							{
								// carray: (0) => (0) @ (2)
								for (int i_1 = 0; i_1 <= 0; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : in[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : in[0][0]
									// output_left_conversion : in[i_0][i_1]
									// output_type_conversion : (in_lv0_3_3_2_lv1_0_0_2[hls_map_index]).to_uint64()
									if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
									{
										in[i_0][i_1] = (in_lv0_3_3_2_lv1_0_0_2[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] in_3_0_pc_buffer;
		}

		// output port post check: "in_3_1"
		aesl_fh.read(AUTOTB_TVOUT_PC_in_3_1, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_in_3_1, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_in_3_1, AESL_token); // data

			sc_bv<8> *in_3_1_pc_buffer = new sc_bv<8>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'in_3_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'in_3_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					in_3_1_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_in_3_1, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_in_3_1))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: in_3_1
				{
					// bitslice(7, 0)
					// {
						// celement: in(7, 0)
						// {
							sc_lv<8>* in_lv0_3_3_2_lv1_1_1_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: in(7, 0)
						{
							// carray: (3) => (3) @ (2)
							for (int i_0 = 3; i_0 <= 3; i_0 += 2)
							{
								// carray: (1) => (1) @ (2)
								for (int i_1 = 1; i_1 <= 1; i_1 += 2)
								{
									if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
									{
										in_lv0_3_3_2_lv1_1_1_2[hls_map_index].range(7, 0) = sc_bv<8>(in_3_1_pc_buffer[hls_map_index].range(7, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: in(7, 0)
						{
							// carray: (3) => (3) @ (2)
							for (int i_0 = 3; i_0 <= 3; i_0 += 2)
							{
								// carray: (1) => (1) @ (2)
								for (int i_1 = 1; i_1 <= 1; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : in[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : in[0][0]
									// output_left_conversion : in[i_0][i_1]
									// output_type_conversion : (in_lv0_3_3_2_lv1_1_1_2[hls_map_index]).to_uint64()
									if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
									{
										in[i_0][i_1] = (in_lv0_3_3_2_lv1_1_1_2[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] in_3_1_pc_buffer;
		}

		// output port post check: "in_3_2"
		aesl_fh.read(AUTOTB_TVOUT_PC_in_3_2, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_in_3_2, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_in_3_2, AESL_token); // data

			sc_bv<8> *in_3_2_pc_buffer = new sc_bv<8>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'in_3_2', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'in_3_2', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					in_3_2_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_in_3_2, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_in_3_2))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: in_3_2
				{
					// bitslice(7, 0)
					// {
						// celement: in(7, 0)
						// {
							sc_lv<8>* in_lv0_3_3_2_lv1_2_2_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: in(7, 0)
						{
							// carray: (3) => (3) @ (2)
							for (int i_0 = 3; i_0 <= 3; i_0 += 2)
							{
								// carray: (2) => (2) @ (2)
								for (int i_1 = 2; i_1 <= 2; i_1 += 2)
								{
									if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
									{
										in_lv0_3_3_2_lv1_2_2_2[hls_map_index].range(7, 0) = sc_bv<8>(in_3_2_pc_buffer[hls_map_index].range(7, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: in(7, 0)
						{
							// carray: (3) => (3) @ (2)
							for (int i_0 = 3; i_0 <= 3; i_0 += 2)
							{
								// carray: (2) => (2) @ (2)
								for (int i_1 = 2; i_1 <= 2; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : in[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : in[0][0]
									// output_left_conversion : in[i_0][i_1]
									// output_type_conversion : (in_lv0_3_3_2_lv1_2_2_2[hls_map_index]).to_uint64()
									if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
									{
										in[i_0][i_1] = (in_lv0_3_3_2_lv1_2_2_2[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] in_3_2_pc_buffer;
		}

		// output port post check: "in_3_3"
		aesl_fh.read(AUTOTB_TVOUT_PC_in_3_3, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_in_3_3, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_in_3_3, AESL_token); // data

			sc_bv<8> *in_3_3_pc_buffer = new sc_bv<8>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'in_3_3', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'in_3_3', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					in_3_3_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_in_3_3, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_in_3_3))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: in_3_3
				{
					// bitslice(7, 0)
					// {
						// celement: in(7, 0)
						// {
							sc_lv<8>* in_lv0_3_3_2_lv1_3_3_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: in(7, 0)
						{
							// carray: (3) => (3) @ (2)
							for (int i_0 = 3; i_0 <= 3; i_0 += 2)
							{
								// carray: (3) => (3) @ (2)
								for (int i_1 = 3; i_1 <= 3; i_1 += 2)
								{
									if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
									{
										in_lv0_3_3_2_lv1_3_3_2[hls_map_index].range(7, 0) = sc_bv<8>(in_3_3_pc_buffer[hls_map_index].range(7, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: in(7, 0)
						{
							// carray: (3) => (3) @ (2)
							for (int i_0 = 3; i_0 <= 3; i_0 += 2)
							{
								// carray: (3) => (3) @ (2)
								for (int i_1 = 3; i_1 <= 3; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : in[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : in[0][0]
									// output_left_conversion : in[i_0][i_1]
									// output_type_conversion : (in_lv0_3_3_2_lv1_3_3_2[hls_map_index]).to_uint64()
									if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
									{
										in[i_0][i_1] = (in_lv0_3_3_2_lv1_3_3_2[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] in_3_3_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "ctx_RoundKey_0"
		char* tvin_ctx_RoundKey_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_ctx_RoundKey_0);
		char* tvout_ctx_RoundKey_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_ctx_RoundKey_0);

		// "ctx_RoundKey_1"
		char* tvin_ctx_RoundKey_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_ctx_RoundKey_1);
		char* tvout_ctx_RoundKey_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_ctx_RoundKey_1);

		// "ctx_RoundKey_2"
		char* tvin_ctx_RoundKey_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_ctx_RoundKey_2);
		char* tvout_ctx_RoundKey_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_ctx_RoundKey_2);

		// "ctx_RoundKey_3"
		char* tvin_ctx_RoundKey_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_ctx_RoundKey_3);
		char* tvout_ctx_RoundKey_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_ctx_RoundKey_3);

		// "ctx_RoundKey_4"
		char* tvin_ctx_RoundKey_4 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_ctx_RoundKey_4);
		char* tvout_ctx_RoundKey_4 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_ctx_RoundKey_4);

		// "ctx_RoundKey_5"
		char* tvin_ctx_RoundKey_5 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_ctx_RoundKey_5);
		char* tvout_ctx_RoundKey_5 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_ctx_RoundKey_5);

		// "ctx_RoundKey_6"
		char* tvin_ctx_RoundKey_6 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_ctx_RoundKey_6);
		char* tvout_ctx_RoundKey_6 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_ctx_RoundKey_6);

		// "ctx_RoundKey_7"
		char* tvin_ctx_RoundKey_7 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_ctx_RoundKey_7);
		char* tvout_ctx_RoundKey_7 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_ctx_RoundKey_7);

		// "ctx_RoundKey_8"
		char* tvin_ctx_RoundKey_8 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_ctx_RoundKey_8);
		char* tvout_ctx_RoundKey_8 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_ctx_RoundKey_8);

		// "ctx_RoundKey_9"
		char* tvin_ctx_RoundKey_9 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_ctx_RoundKey_9);
		char* tvout_ctx_RoundKey_9 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_ctx_RoundKey_9);

		// "ctx_RoundKey_10"
		char* tvin_ctx_RoundKey_10 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_ctx_RoundKey_10);
		char* tvout_ctx_RoundKey_10 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_ctx_RoundKey_10);

		// "ctx_RoundKey_11"
		char* tvin_ctx_RoundKey_11 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_ctx_RoundKey_11);
		char* tvout_ctx_RoundKey_11 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_ctx_RoundKey_11);

		// "ctx_RoundKey_12"
		char* tvin_ctx_RoundKey_12 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_ctx_RoundKey_12);
		char* tvout_ctx_RoundKey_12 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_ctx_RoundKey_12);

		// "ctx_RoundKey_13"
		char* tvin_ctx_RoundKey_13 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_ctx_RoundKey_13);
		char* tvout_ctx_RoundKey_13 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_ctx_RoundKey_13);

		// "ctx_RoundKey_14"
		char* tvin_ctx_RoundKey_14 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_ctx_RoundKey_14);
		char* tvout_ctx_RoundKey_14 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_ctx_RoundKey_14);

		// "ctx_RoundKey_15"
		char* tvin_ctx_RoundKey_15 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_ctx_RoundKey_15);
		char* tvout_ctx_RoundKey_15 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_ctx_RoundKey_15);

		// "key_0"
		char* tvin_key_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_key_0);

		// "key_1"
		char* tvin_key_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_key_1);

		// "key_2"
		char* tvin_key_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_key_2);

		// "key_3"
		char* tvin_key_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_key_3);

		// "key_4"
		char* tvin_key_4 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_key_4);

		// "key_5"
		char* tvin_key_5 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_key_5);

		// "key_6"
		char* tvin_key_6 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_key_6);

		// "key_7"
		char* tvin_key_7 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_key_7);

		// "key_8"
		char* tvin_key_8 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_key_8);

		// "key_9"
		char* tvin_key_9 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_key_9);

		// "key_10"
		char* tvin_key_10 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_key_10);

		// "key_11"
		char* tvin_key_11 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_key_11);

		// "key_12"
		char* tvin_key_12 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_key_12);

		// "key_13"
		char* tvin_key_13 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_key_13);

		// "key_14"
		char* tvin_key_14 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_key_14);

		// "key_15"
		char* tvin_key_15 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_key_15);

		// "in_0_0"
		char* tvin_in_0_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_0_0);
		char* tvout_in_0_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_in_0_0);

		// "in_0_1"
		char* tvin_in_0_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_0_1);
		char* tvout_in_0_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_in_0_1);

		// "in_0_2"
		char* tvin_in_0_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_0_2);
		char* tvout_in_0_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_in_0_2);

		// "in_0_3"
		char* tvin_in_0_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_0_3);
		char* tvout_in_0_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_in_0_3);

		// "in_1_0"
		char* tvin_in_1_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_1_0);
		char* tvout_in_1_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_in_1_0);

		// "in_1_1"
		char* tvin_in_1_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_1_1);
		char* tvout_in_1_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_in_1_1);

		// "in_1_2"
		char* tvin_in_1_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_1_2);
		char* tvout_in_1_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_in_1_2);

		// "in_1_3"
		char* tvin_in_1_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_1_3);
		char* tvout_in_1_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_in_1_3);

		// "in_2_0"
		char* tvin_in_2_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_2_0);
		char* tvout_in_2_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_in_2_0);

		// "in_2_1"
		char* tvin_in_2_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_2_1);
		char* tvout_in_2_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_in_2_1);

		// "in_2_2"
		char* tvin_in_2_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_2_2);
		char* tvout_in_2_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_in_2_2);

		// "in_2_3"
		char* tvin_in_2_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_2_3);
		char* tvout_in_2_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_in_2_3);

		// "in_3_0"
		char* tvin_in_3_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_3_0);
		char* tvout_in_3_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_in_3_0);

		// "in_3_1"
		char* tvin_in_3_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_3_1);
		char* tvout_in_3_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_in_3_1);

		// "in_3_2"
		char* tvin_in_3_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_3_2);
		char* tvout_in_3_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_in_3_2);

		// "in_3_3"
		char* tvin_in_3_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_3_3);
		char* tvout_in_3_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_in_3_3);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_ctx_RoundKey_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_0, tvin_ctx_RoundKey_0);

		sc_bv<8>* ctx_RoundKey_0_tvin_wrapc_buffer = new sc_bv<8>[11];

		// RTL Name: ctx_RoundKey_0
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: ctx.RoundKey(7, 0)
				{
					// carray: (0) => (160) @ (16)
					for (int i_0 = 0; i_0 <= 160; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : ctx->RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : ctx->RoundKey[0]
						// regulate_c_name       : ctx_RoundKey
						// input_type_conversion : ctx->RoundKey[i_0]
						if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> ctx_RoundKey_tmp_mem;
							ctx_RoundKey_tmp_mem = ctx->RoundKey[i_0];
							ctx_RoundKey_0_tvin_wrapc_buffer[hls_map_index].range(7, 0) = ctx_RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 11; i++)
		{
			sprintf(tvin_ctx_RoundKey_0, "%s\n", (ctx_RoundKey_0_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_0, tvin_ctx_RoundKey_0);
		}

		tcl_file.set_num(11, &tcl_file.ctx_RoundKey_0_depth);
		sprintf(tvin_ctx_RoundKey_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_0, tvin_ctx_RoundKey_0);

		// release memory allocation
		delete [] ctx_RoundKey_0_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_ctx_RoundKey_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_1, tvin_ctx_RoundKey_1);

		sc_bv<8>* ctx_RoundKey_1_tvin_wrapc_buffer = new sc_bv<8>[11];

		// RTL Name: ctx_RoundKey_1
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: ctx.RoundKey(7, 0)
				{
					// carray: (1) => (161) @ (16)
					for (int i_0 = 1; i_0 <= 161; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : ctx->RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : ctx->RoundKey[0]
						// regulate_c_name       : ctx_RoundKey
						// input_type_conversion : ctx->RoundKey[i_0]
						if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> ctx_RoundKey_tmp_mem;
							ctx_RoundKey_tmp_mem = ctx->RoundKey[i_0];
							ctx_RoundKey_1_tvin_wrapc_buffer[hls_map_index].range(7, 0) = ctx_RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 11; i++)
		{
			sprintf(tvin_ctx_RoundKey_1, "%s\n", (ctx_RoundKey_1_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_1, tvin_ctx_RoundKey_1);
		}

		tcl_file.set_num(11, &tcl_file.ctx_RoundKey_1_depth);
		sprintf(tvin_ctx_RoundKey_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_1, tvin_ctx_RoundKey_1);

		// release memory allocation
		delete [] ctx_RoundKey_1_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_ctx_RoundKey_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_2, tvin_ctx_RoundKey_2);

		sc_bv<8>* ctx_RoundKey_2_tvin_wrapc_buffer = new sc_bv<8>[11];

		// RTL Name: ctx_RoundKey_2
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: ctx.RoundKey(7, 0)
				{
					// carray: (2) => (162) @ (16)
					for (int i_0 = 2; i_0 <= 162; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : ctx->RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : ctx->RoundKey[0]
						// regulate_c_name       : ctx_RoundKey
						// input_type_conversion : ctx->RoundKey[i_0]
						if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> ctx_RoundKey_tmp_mem;
							ctx_RoundKey_tmp_mem = ctx->RoundKey[i_0];
							ctx_RoundKey_2_tvin_wrapc_buffer[hls_map_index].range(7, 0) = ctx_RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 11; i++)
		{
			sprintf(tvin_ctx_RoundKey_2, "%s\n", (ctx_RoundKey_2_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_2, tvin_ctx_RoundKey_2);
		}

		tcl_file.set_num(11, &tcl_file.ctx_RoundKey_2_depth);
		sprintf(tvin_ctx_RoundKey_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_2, tvin_ctx_RoundKey_2);

		// release memory allocation
		delete [] ctx_RoundKey_2_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_ctx_RoundKey_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_3, tvin_ctx_RoundKey_3);

		sc_bv<8>* ctx_RoundKey_3_tvin_wrapc_buffer = new sc_bv<8>[11];

		// RTL Name: ctx_RoundKey_3
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: ctx.RoundKey(7, 0)
				{
					// carray: (3) => (163) @ (16)
					for (int i_0 = 3; i_0 <= 163; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : ctx->RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : ctx->RoundKey[0]
						// regulate_c_name       : ctx_RoundKey
						// input_type_conversion : ctx->RoundKey[i_0]
						if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> ctx_RoundKey_tmp_mem;
							ctx_RoundKey_tmp_mem = ctx->RoundKey[i_0];
							ctx_RoundKey_3_tvin_wrapc_buffer[hls_map_index].range(7, 0) = ctx_RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 11; i++)
		{
			sprintf(tvin_ctx_RoundKey_3, "%s\n", (ctx_RoundKey_3_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_3, tvin_ctx_RoundKey_3);
		}

		tcl_file.set_num(11, &tcl_file.ctx_RoundKey_3_depth);
		sprintf(tvin_ctx_RoundKey_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_3, tvin_ctx_RoundKey_3);

		// release memory allocation
		delete [] ctx_RoundKey_3_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_ctx_RoundKey_4, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_4, tvin_ctx_RoundKey_4);

		sc_bv<8>* ctx_RoundKey_4_tvin_wrapc_buffer = new sc_bv<8>[11];

		// RTL Name: ctx_RoundKey_4
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: ctx.RoundKey(7, 0)
				{
					// carray: (4) => (164) @ (16)
					for (int i_0 = 4; i_0 <= 164; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : ctx->RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : ctx->RoundKey[0]
						// regulate_c_name       : ctx_RoundKey
						// input_type_conversion : ctx->RoundKey[i_0]
						if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> ctx_RoundKey_tmp_mem;
							ctx_RoundKey_tmp_mem = ctx->RoundKey[i_0];
							ctx_RoundKey_4_tvin_wrapc_buffer[hls_map_index].range(7, 0) = ctx_RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 11; i++)
		{
			sprintf(tvin_ctx_RoundKey_4, "%s\n", (ctx_RoundKey_4_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_4, tvin_ctx_RoundKey_4);
		}

		tcl_file.set_num(11, &tcl_file.ctx_RoundKey_4_depth);
		sprintf(tvin_ctx_RoundKey_4, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_4, tvin_ctx_RoundKey_4);

		// release memory allocation
		delete [] ctx_RoundKey_4_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_ctx_RoundKey_5, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_5, tvin_ctx_RoundKey_5);

		sc_bv<8>* ctx_RoundKey_5_tvin_wrapc_buffer = new sc_bv<8>[11];

		// RTL Name: ctx_RoundKey_5
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: ctx.RoundKey(7, 0)
				{
					// carray: (5) => (165) @ (16)
					for (int i_0 = 5; i_0 <= 165; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : ctx->RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : ctx->RoundKey[0]
						// regulate_c_name       : ctx_RoundKey
						// input_type_conversion : ctx->RoundKey[i_0]
						if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> ctx_RoundKey_tmp_mem;
							ctx_RoundKey_tmp_mem = ctx->RoundKey[i_0];
							ctx_RoundKey_5_tvin_wrapc_buffer[hls_map_index].range(7, 0) = ctx_RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 11; i++)
		{
			sprintf(tvin_ctx_RoundKey_5, "%s\n", (ctx_RoundKey_5_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_5, tvin_ctx_RoundKey_5);
		}

		tcl_file.set_num(11, &tcl_file.ctx_RoundKey_5_depth);
		sprintf(tvin_ctx_RoundKey_5, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_5, tvin_ctx_RoundKey_5);

		// release memory allocation
		delete [] ctx_RoundKey_5_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_ctx_RoundKey_6, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_6, tvin_ctx_RoundKey_6);

		sc_bv<8>* ctx_RoundKey_6_tvin_wrapc_buffer = new sc_bv<8>[11];

		// RTL Name: ctx_RoundKey_6
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: ctx.RoundKey(7, 0)
				{
					// carray: (6) => (166) @ (16)
					for (int i_0 = 6; i_0 <= 166; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : ctx->RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : ctx->RoundKey[0]
						// regulate_c_name       : ctx_RoundKey
						// input_type_conversion : ctx->RoundKey[i_0]
						if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> ctx_RoundKey_tmp_mem;
							ctx_RoundKey_tmp_mem = ctx->RoundKey[i_0];
							ctx_RoundKey_6_tvin_wrapc_buffer[hls_map_index].range(7, 0) = ctx_RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 11; i++)
		{
			sprintf(tvin_ctx_RoundKey_6, "%s\n", (ctx_RoundKey_6_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_6, tvin_ctx_RoundKey_6);
		}

		tcl_file.set_num(11, &tcl_file.ctx_RoundKey_6_depth);
		sprintf(tvin_ctx_RoundKey_6, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_6, tvin_ctx_RoundKey_6);

		// release memory allocation
		delete [] ctx_RoundKey_6_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_ctx_RoundKey_7, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_7, tvin_ctx_RoundKey_7);

		sc_bv<8>* ctx_RoundKey_7_tvin_wrapc_buffer = new sc_bv<8>[11];

		// RTL Name: ctx_RoundKey_7
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: ctx.RoundKey(7, 0)
				{
					// carray: (7) => (167) @ (16)
					for (int i_0 = 7; i_0 <= 167; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : ctx->RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : ctx->RoundKey[0]
						// regulate_c_name       : ctx_RoundKey
						// input_type_conversion : ctx->RoundKey[i_0]
						if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> ctx_RoundKey_tmp_mem;
							ctx_RoundKey_tmp_mem = ctx->RoundKey[i_0];
							ctx_RoundKey_7_tvin_wrapc_buffer[hls_map_index].range(7, 0) = ctx_RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 11; i++)
		{
			sprintf(tvin_ctx_RoundKey_7, "%s\n", (ctx_RoundKey_7_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_7, tvin_ctx_RoundKey_7);
		}

		tcl_file.set_num(11, &tcl_file.ctx_RoundKey_7_depth);
		sprintf(tvin_ctx_RoundKey_7, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_7, tvin_ctx_RoundKey_7);

		// release memory allocation
		delete [] ctx_RoundKey_7_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_ctx_RoundKey_8, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_8, tvin_ctx_RoundKey_8);

		sc_bv<8>* ctx_RoundKey_8_tvin_wrapc_buffer = new sc_bv<8>[11];

		// RTL Name: ctx_RoundKey_8
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: ctx.RoundKey(7, 0)
				{
					// carray: (8) => (168) @ (16)
					for (int i_0 = 8; i_0 <= 168; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : ctx->RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : ctx->RoundKey[0]
						// regulate_c_name       : ctx_RoundKey
						// input_type_conversion : ctx->RoundKey[i_0]
						if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> ctx_RoundKey_tmp_mem;
							ctx_RoundKey_tmp_mem = ctx->RoundKey[i_0];
							ctx_RoundKey_8_tvin_wrapc_buffer[hls_map_index].range(7, 0) = ctx_RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 11; i++)
		{
			sprintf(tvin_ctx_RoundKey_8, "%s\n", (ctx_RoundKey_8_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_8, tvin_ctx_RoundKey_8);
		}

		tcl_file.set_num(11, &tcl_file.ctx_RoundKey_8_depth);
		sprintf(tvin_ctx_RoundKey_8, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_8, tvin_ctx_RoundKey_8);

		// release memory allocation
		delete [] ctx_RoundKey_8_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_ctx_RoundKey_9, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_9, tvin_ctx_RoundKey_9);

		sc_bv<8>* ctx_RoundKey_9_tvin_wrapc_buffer = new sc_bv<8>[11];

		// RTL Name: ctx_RoundKey_9
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: ctx.RoundKey(7, 0)
				{
					// carray: (9) => (169) @ (16)
					for (int i_0 = 9; i_0 <= 169; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : ctx->RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : ctx->RoundKey[0]
						// regulate_c_name       : ctx_RoundKey
						// input_type_conversion : ctx->RoundKey[i_0]
						if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> ctx_RoundKey_tmp_mem;
							ctx_RoundKey_tmp_mem = ctx->RoundKey[i_0];
							ctx_RoundKey_9_tvin_wrapc_buffer[hls_map_index].range(7, 0) = ctx_RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 11; i++)
		{
			sprintf(tvin_ctx_RoundKey_9, "%s\n", (ctx_RoundKey_9_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_9, tvin_ctx_RoundKey_9);
		}

		tcl_file.set_num(11, &tcl_file.ctx_RoundKey_9_depth);
		sprintf(tvin_ctx_RoundKey_9, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_9, tvin_ctx_RoundKey_9);

		// release memory allocation
		delete [] ctx_RoundKey_9_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_ctx_RoundKey_10, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_10, tvin_ctx_RoundKey_10);

		sc_bv<8>* ctx_RoundKey_10_tvin_wrapc_buffer = new sc_bv<8>[11];

		// RTL Name: ctx_RoundKey_10
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: ctx.RoundKey(7, 0)
				{
					// carray: (10) => (170) @ (16)
					for (int i_0 = 10; i_0 <= 170; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : ctx->RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : ctx->RoundKey[0]
						// regulate_c_name       : ctx_RoundKey
						// input_type_conversion : ctx->RoundKey[i_0]
						if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> ctx_RoundKey_tmp_mem;
							ctx_RoundKey_tmp_mem = ctx->RoundKey[i_0];
							ctx_RoundKey_10_tvin_wrapc_buffer[hls_map_index].range(7, 0) = ctx_RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 11; i++)
		{
			sprintf(tvin_ctx_RoundKey_10, "%s\n", (ctx_RoundKey_10_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_10, tvin_ctx_RoundKey_10);
		}

		tcl_file.set_num(11, &tcl_file.ctx_RoundKey_10_depth);
		sprintf(tvin_ctx_RoundKey_10, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_10, tvin_ctx_RoundKey_10);

		// release memory allocation
		delete [] ctx_RoundKey_10_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_ctx_RoundKey_11, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_11, tvin_ctx_RoundKey_11);

		sc_bv<8>* ctx_RoundKey_11_tvin_wrapc_buffer = new sc_bv<8>[11];

		// RTL Name: ctx_RoundKey_11
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: ctx.RoundKey(7, 0)
				{
					// carray: (11) => (171) @ (16)
					for (int i_0 = 11; i_0 <= 171; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : ctx->RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : ctx->RoundKey[0]
						// regulate_c_name       : ctx_RoundKey
						// input_type_conversion : ctx->RoundKey[i_0]
						if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> ctx_RoundKey_tmp_mem;
							ctx_RoundKey_tmp_mem = ctx->RoundKey[i_0];
							ctx_RoundKey_11_tvin_wrapc_buffer[hls_map_index].range(7, 0) = ctx_RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 11; i++)
		{
			sprintf(tvin_ctx_RoundKey_11, "%s\n", (ctx_RoundKey_11_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_11, tvin_ctx_RoundKey_11);
		}

		tcl_file.set_num(11, &tcl_file.ctx_RoundKey_11_depth);
		sprintf(tvin_ctx_RoundKey_11, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_11, tvin_ctx_RoundKey_11);

		// release memory allocation
		delete [] ctx_RoundKey_11_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_ctx_RoundKey_12, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_12, tvin_ctx_RoundKey_12);

		sc_bv<8>* ctx_RoundKey_12_tvin_wrapc_buffer = new sc_bv<8>[11];

		// RTL Name: ctx_RoundKey_12
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: ctx.RoundKey(7, 0)
				{
					// carray: (12) => (172) @ (16)
					for (int i_0 = 12; i_0 <= 172; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : ctx->RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : ctx->RoundKey[0]
						// regulate_c_name       : ctx_RoundKey
						// input_type_conversion : ctx->RoundKey[i_0]
						if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> ctx_RoundKey_tmp_mem;
							ctx_RoundKey_tmp_mem = ctx->RoundKey[i_0];
							ctx_RoundKey_12_tvin_wrapc_buffer[hls_map_index].range(7, 0) = ctx_RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 11; i++)
		{
			sprintf(tvin_ctx_RoundKey_12, "%s\n", (ctx_RoundKey_12_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_12, tvin_ctx_RoundKey_12);
		}

		tcl_file.set_num(11, &tcl_file.ctx_RoundKey_12_depth);
		sprintf(tvin_ctx_RoundKey_12, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_12, tvin_ctx_RoundKey_12);

		// release memory allocation
		delete [] ctx_RoundKey_12_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_ctx_RoundKey_13, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_13, tvin_ctx_RoundKey_13);

		sc_bv<8>* ctx_RoundKey_13_tvin_wrapc_buffer = new sc_bv<8>[11];

		// RTL Name: ctx_RoundKey_13
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: ctx.RoundKey(7, 0)
				{
					// carray: (13) => (173) @ (16)
					for (int i_0 = 13; i_0 <= 173; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : ctx->RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : ctx->RoundKey[0]
						// regulate_c_name       : ctx_RoundKey
						// input_type_conversion : ctx->RoundKey[i_0]
						if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> ctx_RoundKey_tmp_mem;
							ctx_RoundKey_tmp_mem = ctx->RoundKey[i_0];
							ctx_RoundKey_13_tvin_wrapc_buffer[hls_map_index].range(7, 0) = ctx_RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 11; i++)
		{
			sprintf(tvin_ctx_RoundKey_13, "%s\n", (ctx_RoundKey_13_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_13, tvin_ctx_RoundKey_13);
		}

		tcl_file.set_num(11, &tcl_file.ctx_RoundKey_13_depth);
		sprintf(tvin_ctx_RoundKey_13, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_13, tvin_ctx_RoundKey_13);

		// release memory allocation
		delete [] ctx_RoundKey_13_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_ctx_RoundKey_14, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_14, tvin_ctx_RoundKey_14);

		sc_bv<8>* ctx_RoundKey_14_tvin_wrapc_buffer = new sc_bv<8>[11];

		// RTL Name: ctx_RoundKey_14
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: ctx.RoundKey(7, 0)
				{
					// carray: (14) => (174) @ (16)
					for (int i_0 = 14; i_0 <= 174; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : ctx->RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : ctx->RoundKey[0]
						// regulate_c_name       : ctx_RoundKey
						// input_type_conversion : ctx->RoundKey[i_0]
						if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> ctx_RoundKey_tmp_mem;
							ctx_RoundKey_tmp_mem = ctx->RoundKey[i_0];
							ctx_RoundKey_14_tvin_wrapc_buffer[hls_map_index].range(7, 0) = ctx_RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 11; i++)
		{
			sprintf(tvin_ctx_RoundKey_14, "%s\n", (ctx_RoundKey_14_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_14, tvin_ctx_RoundKey_14);
		}

		tcl_file.set_num(11, &tcl_file.ctx_RoundKey_14_depth);
		sprintf(tvin_ctx_RoundKey_14, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_14, tvin_ctx_RoundKey_14);

		// release memory allocation
		delete [] ctx_RoundKey_14_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_ctx_RoundKey_15, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_15, tvin_ctx_RoundKey_15);

		sc_bv<8>* ctx_RoundKey_15_tvin_wrapc_buffer = new sc_bv<8>[11];

		// RTL Name: ctx_RoundKey_15
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: ctx.RoundKey(7, 0)
				{
					// carray: (15) => (175) @ (16)
					for (int i_0 = 15; i_0 <= 175; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : ctx->RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : ctx->RoundKey[0]
						// regulate_c_name       : ctx_RoundKey
						// input_type_conversion : ctx->RoundKey[i_0]
						if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> ctx_RoundKey_tmp_mem;
							ctx_RoundKey_tmp_mem = ctx->RoundKey[i_0];
							ctx_RoundKey_15_tvin_wrapc_buffer[hls_map_index].range(7, 0) = ctx_RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 11; i++)
		{
			sprintf(tvin_ctx_RoundKey_15, "%s\n", (ctx_RoundKey_15_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_15, tvin_ctx_RoundKey_15);
		}

		tcl_file.set_num(11, &tcl_file.ctx_RoundKey_15_depth);
		sprintf(tvin_ctx_RoundKey_15, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_ctx_RoundKey_15, tvin_ctx_RoundKey_15);

		// release memory allocation
		delete [] ctx_RoundKey_15_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_key_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_key_0, tvin_key_0);

		sc_bv<8>* key_0_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: key_0
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: key(7, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : key[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : key[0]
						// regulate_c_name       : key
						// input_type_conversion : key[i_0]
						if (&(key[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> key_tmp_mem;
							key_tmp_mem = key[i_0];
							key_0_tvin_wrapc_buffer[hls_map_index].range(7, 0) = key_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_key_0, "%s\n", (key_0_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_key_0, tvin_key_0);
		}

		tcl_file.set_num(1, &tcl_file.key_0_depth);
		sprintf(tvin_key_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_key_0, tvin_key_0);

		// release memory allocation
		delete [] key_0_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_key_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_key_1, tvin_key_1);

		sc_bv<8>* key_1_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: key_1
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: key(7, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : key[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : key[0]
						// regulate_c_name       : key
						// input_type_conversion : key[i_0]
						if (&(key[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> key_tmp_mem;
							key_tmp_mem = key[i_0];
							key_1_tvin_wrapc_buffer[hls_map_index].range(7, 0) = key_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_key_1, "%s\n", (key_1_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_key_1, tvin_key_1);
		}

		tcl_file.set_num(1, &tcl_file.key_1_depth);
		sprintf(tvin_key_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_key_1, tvin_key_1);

		// release memory allocation
		delete [] key_1_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_key_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_key_2, tvin_key_2);

		sc_bv<8>* key_2_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: key_2
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: key(7, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : key[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : key[0]
						// regulate_c_name       : key
						// input_type_conversion : key[i_0]
						if (&(key[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> key_tmp_mem;
							key_tmp_mem = key[i_0];
							key_2_tvin_wrapc_buffer[hls_map_index].range(7, 0) = key_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_key_2, "%s\n", (key_2_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_key_2, tvin_key_2);
		}

		tcl_file.set_num(1, &tcl_file.key_2_depth);
		sprintf(tvin_key_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_key_2, tvin_key_2);

		// release memory allocation
		delete [] key_2_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_key_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_key_3, tvin_key_3);

		sc_bv<8>* key_3_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: key_3
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: key(7, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : key[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : key[0]
						// regulate_c_name       : key
						// input_type_conversion : key[i_0]
						if (&(key[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> key_tmp_mem;
							key_tmp_mem = key[i_0];
							key_3_tvin_wrapc_buffer[hls_map_index].range(7, 0) = key_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_key_3, "%s\n", (key_3_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_key_3, tvin_key_3);
		}

		tcl_file.set_num(1, &tcl_file.key_3_depth);
		sprintf(tvin_key_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_key_3, tvin_key_3);

		// release memory allocation
		delete [] key_3_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_key_4, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_key_4, tvin_key_4);

		sc_bv<8>* key_4_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: key_4
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: key(7, 0)
				{
					// carray: (4) => (4) @ (2)
					for (int i_0 = 4; i_0 <= 4; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : key[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : key[0]
						// regulate_c_name       : key
						// input_type_conversion : key[i_0]
						if (&(key[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> key_tmp_mem;
							key_tmp_mem = key[i_0];
							key_4_tvin_wrapc_buffer[hls_map_index].range(7, 0) = key_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_key_4, "%s\n", (key_4_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_key_4, tvin_key_4);
		}

		tcl_file.set_num(1, &tcl_file.key_4_depth);
		sprintf(tvin_key_4, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_key_4, tvin_key_4);

		// release memory allocation
		delete [] key_4_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_key_5, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_key_5, tvin_key_5);

		sc_bv<8>* key_5_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: key_5
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: key(7, 0)
				{
					// carray: (5) => (5) @ (2)
					for (int i_0 = 5; i_0 <= 5; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : key[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : key[0]
						// regulate_c_name       : key
						// input_type_conversion : key[i_0]
						if (&(key[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> key_tmp_mem;
							key_tmp_mem = key[i_0];
							key_5_tvin_wrapc_buffer[hls_map_index].range(7, 0) = key_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_key_5, "%s\n", (key_5_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_key_5, tvin_key_5);
		}

		tcl_file.set_num(1, &tcl_file.key_5_depth);
		sprintf(tvin_key_5, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_key_5, tvin_key_5);

		// release memory allocation
		delete [] key_5_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_key_6, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_key_6, tvin_key_6);

		sc_bv<8>* key_6_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: key_6
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: key(7, 0)
				{
					// carray: (6) => (6) @ (2)
					for (int i_0 = 6; i_0 <= 6; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : key[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : key[0]
						// regulate_c_name       : key
						// input_type_conversion : key[i_0]
						if (&(key[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> key_tmp_mem;
							key_tmp_mem = key[i_0];
							key_6_tvin_wrapc_buffer[hls_map_index].range(7, 0) = key_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_key_6, "%s\n", (key_6_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_key_6, tvin_key_6);
		}

		tcl_file.set_num(1, &tcl_file.key_6_depth);
		sprintf(tvin_key_6, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_key_6, tvin_key_6);

		// release memory allocation
		delete [] key_6_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_key_7, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_key_7, tvin_key_7);

		sc_bv<8>* key_7_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: key_7
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: key(7, 0)
				{
					// carray: (7) => (7) @ (2)
					for (int i_0 = 7; i_0 <= 7; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : key[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : key[0]
						// regulate_c_name       : key
						// input_type_conversion : key[i_0]
						if (&(key[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> key_tmp_mem;
							key_tmp_mem = key[i_0];
							key_7_tvin_wrapc_buffer[hls_map_index].range(7, 0) = key_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_key_7, "%s\n", (key_7_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_key_7, tvin_key_7);
		}

		tcl_file.set_num(1, &tcl_file.key_7_depth);
		sprintf(tvin_key_7, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_key_7, tvin_key_7);

		// release memory allocation
		delete [] key_7_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_key_8, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_key_8, tvin_key_8);

		sc_bv<8>* key_8_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: key_8
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: key(7, 0)
				{
					// carray: (8) => (8) @ (2)
					for (int i_0 = 8; i_0 <= 8; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : key[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : key[0]
						// regulate_c_name       : key
						// input_type_conversion : key[i_0]
						if (&(key[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> key_tmp_mem;
							key_tmp_mem = key[i_0];
							key_8_tvin_wrapc_buffer[hls_map_index].range(7, 0) = key_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_key_8, "%s\n", (key_8_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_key_8, tvin_key_8);
		}

		tcl_file.set_num(1, &tcl_file.key_8_depth);
		sprintf(tvin_key_8, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_key_8, tvin_key_8);

		// release memory allocation
		delete [] key_8_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_key_9, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_key_9, tvin_key_9);

		sc_bv<8>* key_9_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: key_9
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: key(7, 0)
				{
					// carray: (9) => (9) @ (2)
					for (int i_0 = 9; i_0 <= 9; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : key[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : key[0]
						// regulate_c_name       : key
						// input_type_conversion : key[i_0]
						if (&(key[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> key_tmp_mem;
							key_tmp_mem = key[i_0];
							key_9_tvin_wrapc_buffer[hls_map_index].range(7, 0) = key_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_key_9, "%s\n", (key_9_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_key_9, tvin_key_9);
		}

		tcl_file.set_num(1, &tcl_file.key_9_depth);
		sprintf(tvin_key_9, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_key_9, tvin_key_9);

		// release memory allocation
		delete [] key_9_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_key_10, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_key_10, tvin_key_10);

		sc_bv<8>* key_10_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: key_10
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: key(7, 0)
				{
					// carray: (10) => (10) @ (2)
					for (int i_0 = 10; i_0 <= 10; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : key[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : key[0]
						// regulate_c_name       : key
						// input_type_conversion : key[i_0]
						if (&(key[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> key_tmp_mem;
							key_tmp_mem = key[i_0];
							key_10_tvin_wrapc_buffer[hls_map_index].range(7, 0) = key_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_key_10, "%s\n", (key_10_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_key_10, tvin_key_10);
		}

		tcl_file.set_num(1, &tcl_file.key_10_depth);
		sprintf(tvin_key_10, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_key_10, tvin_key_10);

		// release memory allocation
		delete [] key_10_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_key_11, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_key_11, tvin_key_11);

		sc_bv<8>* key_11_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: key_11
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: key(7, 0)
				{
					// carray: (11) => (11) @ (2)
					for (int i_0 = 11; i_0 <= 11; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : key[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : key[0]
						// regulate_c_name       : key
						// input_type_conversion : key[i_0]
						if (&(key[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> key_tmp_mem;
							key_tmp_mem = key[i_0];
							key_11_tvin_wrapc_buffer[hls_map_index].range(7, 0) = key_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_key_11, "%s\n", (key_11_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_key_11, tvin_key_11);
		}

		tcl_file.set_num(1, &tcl_file.key_11_depth);
		sprintf(tvin_key_11, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_key_11, tvin_key_11);

		// release memory allocation
		delete [] key_11_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_key_12, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_key_12, tvin_key_12);

		sc_bv<8>* key_12_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: key_12
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: key(7, 0)
				{
					// carray: (12) => (12) @ (2)
					for (int i_0 = 12; i_0 <= 12; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : key[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : key[0]
						// regulate_c_name       : key
						// input_type_conversion : key[i_0]
						if (&(key[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> key_tmp_mem;
							key_tmp_mem = key[i_0];
							key_12_tvin_wrapc_buffer[hls_map_index].range(7, 0) = key_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_key_12, "%s\n", (key_12_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_key_12, tvin_key_12);
		}

		tcl_file.set_num(1, &tcl_file.key_12_depth);
		sprintf(tvin_key_12, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_key_12, tvin_key_12);

		// release memory allocation
		delete [] key_12_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_key_13, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_key_13, tvin_key_13);

		sc_bv<8>* key_13_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: key_13
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: key(7, 0)
				{
					// carray: (13) => (13) @ (2)
					for (int i_0 = 13; i_0 <= 13; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : key[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : key[0]
						// regulate_c_name       : key
						// input_type_conversion : key[i_0]
						if (&(key[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> key_tmp_mem;
							key_tmp_mem = key[i_0];
							key_13_tvin_wrapc_buffer[hls_map_index].range(7, 0) = key_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_key_13, "%s\n", (key_13_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_key_13, tvin_key_13);
		}

		tcl_file.set_num(1, &tcl_file.key_13_depth);
		sprintf(tvin_key_13, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_key_13, tvin_key_13);

		// release memory allocation
		delete [] key_13_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_key_14, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_key_14, tvin_key_14);

		sc_bv<8>* key_14_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: key_14
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: key(7, 0)
				{
					// carray: (14) => (14) @ (2)
					for (int i_0 = 14; i_0 <= 14; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : key[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : key[0]
						// regulate_c_name       : key
						// input_type_conversion : key[i_0]
						if (&(key[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> key_tmp_mem;
							key_tmp_mem = key[i_0];
							key_14_tvin_wrapc_buffer[hls_map_index].range(7, 0) = key_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_key_14, "%s\n", (key_14_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_key_14, tvin_key_14);
		}

		tcl_file.set_num(1, &tcl_file.key_14_depth);
		sprintf(tvin_key_14, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_key_14, tvin_key_14);

		// release memory allocation
		delete [] key_14_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_key_15, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_key_15, tvin_key_15);

		sc_bv<8>* key_15_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: key_15
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: key(7, 0)
				{
					// carray: (15) => (15) @ (2)
					for (int i_0 = 15; i_0 <= 15; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : key[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : key[0]
						// regulate_c_name       : key
						// input_type_conversion : key[i_0]
						if (&(key[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> key_tmp_mem;
							key_tmp_mem = key[i_0];
							key_15_tvin_wrapc_buffer[hls_map_index].range(7, 0) = key_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_key_15, "%s\n", (key_15_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_key_15, tvin_key_15);
		}

		tcl_file.set_num(1, &tcl_file.key_15_depth);
		sprintf(tvin_key_15, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_key_15, tvin_key_15);

		// release memory allocation
		delete [] key_15_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_0_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_0_0, tvin_in_0_0);

		sc_bv<8>* in_0_0_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: in_0_0
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: in(7, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// carray: (0) => (0) @ (2)
						for (int i_1 = 0; i_1 <= 0; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : in[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : in[0][0]
							// regulate_c_name       : in
							// input_type_conversion : in[i_0][i_1]
							if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> in_tmp_mem;
								in_tmp_mem = in[i_0][i_1];
								in_0_0_tvin_wrapc_buffer[hls_map_index].range(7, 0) = in_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_0_0, "%s\n", (in_0_0_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_0_0, tvin_in_0_0);
		}

		tcl_file.set_num(1, &tcl_file.in_0_0_depth);
		sprintf(tvin_in_0_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_0_0, tvin_in_0_0);

		// release memory allocation
		delete [] in_0_0_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_0_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_0_1, tvin_in_0_1);

		sc_bv<8>* in_0_1_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: in_0_1
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: in(7, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// carray: (1) => (1) @ (2)
						for (int i_1 = 1; i_1 <= 1; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : in[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : in[0][0]
							// regulate_c_name       : in
							// input_type_conversion : in[i_0][i_1]
							if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> in_tmp_mem;
								in_tmp_mem = in[i_0][i_1];
								in_0_1_tvin_wrapc_buffer[hls_map_index].range(7, 0) = in_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_0_1, "%s\n", (in_0_1_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_0_1, tvin_in_0_1);
		}

		tcl_file.set_num(1, &tcl_file.in_0_1_depth);
		sprintf(tvin_in_0_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_0_1, tvin_in_0_1);

		// release memory allocation
		delete [] in_0_1_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_0_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_0_2, tvin_in_0_2);

		sc_bv<8>* in_0_2_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: in_0_2
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: in(7, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// carray: (2) => (2) @ (2)
						for (int i_1 = 2; i_1 <= 2; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : in[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : in[0][0]
							// regulate_c_name       : in
							// input_type_conversion : in[i_0][i_1]
							if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> in_tmp_mem;
								in_tmp_mem = in[i_0][i_1];
								in_0_2_tvin_wrapc_buffer[hls_map_index].range(7, 0) = in_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_0_2, "%s\n", (in_0_2_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_0_2, tvin_in_0_2);
		}

		tcl_file.set_num(1, &tcl_file.in_0_2_depth);
		sprintf(tvin_in_0_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_0_2, tvin_in_0_2);

		// release memory allocation
		delete [] in_0_2_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_0_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_0_3, tvin_in_0_3);

		sc_bv<8>* in_0_3_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: in_0_3
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: in(7, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// carray: (3) => (3) @ (2)
						for (int i_1 = 3; i_1 <= 3; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : in[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : in[0][0]
							// regulate_c_name       : in
							// input_type_conversion : in[i_0][i_1]
							if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> in_tmp_mem;
								in_tmp_mem = in[i_0][i_1];
								in_0_3_tvin_wrapc_buffer[hls_map_index].range(7, 0) = in_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_0_3, "%s\n", (in_0_3_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_0_3, tvin_in_0_3);
		}

		tcl_file.set_num(1, &tcl_file.in_0_3_depth);
		sprintf(tvin_in_0_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_0_3, tvin_in_0_3);

		// release memory allocation
		delete [] in_0_3_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_1_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_1_0, tvin_in_1_0);

		sc_bv<8>* in_1_0_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: in_1_0
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: in(7, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// carray: (0) => (0) @ (2)
						for (int i_1 = 0; i_1 <= 0; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : in[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : in[0][0]
							// regulate_c_name       : in
							// input_type_conversion : in[i_0][i_1]
							if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> in_tmp_mem;
								in_tmp_mem = in[i_0][i_1];
								in_1_0_tvin_wrapc_buffer[hls_map_index].range(7, 0) = in_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_1_0, "%s\n", (in_1_0_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_1_0, tvin_in_1_0);
		}

		tcl_file.set_num(1, &tcl_file.in_1_0_depth);
		sprintf(tvin_in_1_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_1_0, tvin_in_1_0);

		// release memory allocation
		delete [] in_1_0_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_1_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_1_1, tvin_in_1_1);

		sc_bv<8>* in_1_1_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: in_1_1
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: in(7, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// carray: (1) => (1) @ (2)
						for (int i_1 = 1; i_1 <= 1; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : in[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : in[0][0]
							// regulate_c_name       : in
							// input_type_conversion : in[i_0][i_1]
							if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> in_tmp_mem;
								in_tmp_mem = in[i_0][i_1];
								in_1_1_tvin_wrapc_buffer[hls_map_index].range(7, 0) = in_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_1_1, "%s\n", (in_1_1_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_1_1, tvin_in_1_1);
		}

		tcl_file.set_num(1, &tcl_file.in_1_1_depth);
		sprintf(tvin_in_1_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_1_1, tvin_in_1_1);

		// release memory allocation
		delete [] in_1_1_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_1_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_1_2, tvin_in_1_2);

		sc_bv<8>* in_1_2_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: in_1_2
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: in(7, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// carray: (2) => (2) @ (2)
						for (int i_1 = 2; i_1 <= 2; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : in[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : in[0][0]
							// regulate_c_name       : in
							// input_type_conversion : in[i_0][i_1]
							if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> in_tmp_mem;
								in_tmp_mem = in[i_0][i_1];
								in_1_2_tvin_wrapc_buffer[hls_map_index].range(7, 0) = in_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_1_2, "%s\n", (in_1_2_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_1_2, tvin_in_1_2);
		}

		tcl_file.set_num(1, &tcl_file.in_1_2_depth);
		sprintf(tvin_in_1_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_1_2, tvin_in_1_2);

		// release memory allocation
		delete [] in_1_2_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_1_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_1_3, tvin_in_1_3);

		sc_bv<8>* in_1_3_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: in_1_3
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: in(7, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// carray: (3) => (3) @ (2)
						for (int i_1 = 3; i_1 <= 3; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : in[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : in[0][0]
							// regulate_c_name       : in
							// input_type_conversion : in[i_0][i_1]
							if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> in_tmp_mem;
								in_tmp_mem = in[i_0][i_1];
								in_1_3_tvin_wrapc_buffer[hls_map_index].range(7, 0) = in_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_1_3, "%s\n", (in_1_3_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_1_3, tvin_in_1_3);
		}

		tcl_file.set_num(1, &tcl_file.in_1_3_depth);
		sprintf(tvin_in_1_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_1_3, tvin_in_1_3);

		// release memory allocation
		delete [] in_1_3_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_2_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_2_0, tvin_in_2_0);

		sc_bv<8>* in_2_0_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: in_2_0
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: in(7, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// carray: (0) => (0) @ (2)
						for (int i_1 = 0; i_1 <= 0; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : in[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : in[0][0]
							// regulate_c_name       : in
							// input_type_conversion : in[i_0][i_1]
							if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> in_tmp_mem;
								in_tmp_mem = in[i_0][i_1];
								in_2_0_tvin_wrapc_buffer[hls_map_index].range(7, 0) = in_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_2_0, "%s\n", (in_2_0_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_2_0, tvin_in_2_0);
		}

		tcl_file.set_num(1, &tcl_file.in_2_0_depth);
		sprintf(tvin_in_2_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_2_0, tvin_in_2_0);

		// release memory allocation
		delete [] in_2_0_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_2_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_2_1, tvin_in_2_1);

		sc_bv<8>* in_2_1_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: in_2_1
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: in(7, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// carray: (1) => (1) @ (2)
						for (int i_1 = 1; i_1 <= 1; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : in[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : in[0][0]
							// regulate_c_name       : in
							// input_type_conversion : in[i_0][i_1]
							if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> in_tmp_mem;
								in_tmp_mem = in[i_0][i_1];
								in_2_1_tvin_wrapc_buffer[hls_map_index].range(7, 0) = in_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_2_1, "%s\n", (in_2_1_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_2_1, tvin_in_2_1);
		}

		tcl_file.set_num(1, &tcl_file.in_2_1_depth);
		sprintf(tvin_in_2_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_2_1, tvin_in_2_1);

		// release memory allocation
		delete [] in_2_1_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_2_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_2_2, tvin_in_2_2);

		sc_bv<8>* in_2_2_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: in_2_2
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: in(7, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// carray: (2) => (2) @ (2)
						for (int i_1 = 2; i_1 <= 2; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : in[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : in[0][0]
							// regulate_c_name       : in
							// input_type_conversion : in[i_0][i_1]
							if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> in_tmp_mem;
								in_tmp_mem = in[i_0][i_1];
								in_2_2_tvin_wrapc_buffer[hls_map_index].range(7, 0) = in_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_2_2, "%s\n", (in_2_2_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_2_2, tvin_in_2_2);
		}

		tcl_file.set_num(1, &tcl_file.in_2_2_depth);
		sprintf(tvin_in_2_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_2_2, tvin_in_2_2);

		// release memory allocation
		delete [] in_2_2_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_2_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_2_3, tvin_in_2_3);

		sc_bv<8>* in_2_3_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: in_2_3
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: in(7, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// carray: (3) => (3) @ (2)
						for (int i_1 = 3; i_1 <= 3; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : in[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : in[0][0]
							// regulate_c_name       : in
							// input_type_conversion : in[i_0][i_1]
							if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> in_tmp_mem;
								in_tmp_mem = in[i_0][i_1];
								in_2_3_tvin_wrapc_buffer[hls_map_index].range(7, 0) = in_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_2_3, "%s\n", (in_2_3_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_2_3, tvin_in_2_3);
		}

		tcl_file.set_num(1, &tcl_file.in_2_3_depth);
		sprintf(tvin_in_2_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_2_3, tvin_in_2_3);

		// release memory allocation
		delete [] in_2_3_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_3_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_3_0, tvin_in_3_0);

		sc_bv<8>* in_3_0_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: in_3_0
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: in(7, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// carray: (0) => (0) @ (2)
						for (int i_1 = 0; i_1 <= 0; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : in[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : in[0][0]
							// regulate_c_name       : in
							// input_type_conversion : in[i_0][i_1]
							if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> in_tmp_mem;
								in_tmp_mem = in[i_0][i_1];
								in_3_0_tvin_wrapc_buffer[hls_map_index].range(7, 0) = in_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_3_0, "%s\n", (in_3_0_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_3_0, tvin_in_3_0);
		}

		tcl_file.set_num(1, &tcl_file.in_3_0_depth);
		sprintf(tvin_in_3_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_3_0, tvin_in_3_0);

		// release memory allocation
		delete [] in_3_0_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_3_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_3_1, tvin_in_3_1);

		sc_bv<8>* in_3_1_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: in_3_1
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: in(7, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// carray: (1) => (1) @ (2)
						for (int i_1 = 1; i_1 <= 1; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : in[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : in[0][0]
							// regulate_c_name       : in
							// input_type_conversion : in[i_0][i_1]
							if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> in_tmp_mem;
								in_tmp_mem = in[i_0][i_1];
								in_3_1_tvin_wrapc_buffer[hls_map_index].range(7, 0) = in_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_3_1, "%s\n", (in_3_1_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_3_1, tvin_in_3_1);
		}

		tcl_file.set_num(1, &tcl_file.in_3_1_depth);
		sprintf(tvin_in_3_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_3_1, tvin_in_3_1);

		// release memory allocation
		delete [] in_3_1_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_3_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_3_2, tvin_in_3_2);

		sc_bv<8>* in_3_2_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: in_3_2
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: in(7, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// carray: (2) => (2) @ (2)
						for (int i_1 = 2; i_1 <= 2; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : in[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : in[0][0]
							// regulate_c_name       : in
							// input_type_conversion : in[i_0][i_1]
							if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> in_tmp_mem;
								in_tmp_mem = in[i_0][i_1];
								in_3_2_tvin_wrapc_buffer[hls_map_index].range(7, 0) = in_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_3_2, "%s\n", (in_3_2_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_3_2, tvin_in_3_2);
		}

		tcl_file.set_num(1, &tcl_file.in_3_2_depth);
		sprintf(tvin_in_3_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_3_2, tvin_in_3_2);

		// release memory allocation
		delete [] in_3_2_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_3_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_3_3, tvin_in_3_3);

		sc_bv<8>* in_3_3_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: in_3_3
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: in(7, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// carray: (3) => (3) @ (2)
						for (int i_1 = 3; i_1 <= 3; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : in[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : in[0][0]
							// regulate_c_name       : in
							// input_type_conversion : in[i_0][i_1]
							if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> in_tmp_mem;
								in_tmp_mem = in[i_0][i_1];
								in_3_3_tvin_wrapc_buffer[hls_map_index].range(7, 0) = in_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_3_3, "%s\n", (in_3_3_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_3_3, tvin_in_3_3);
		}

		tcl_file.set_num(1, &tcl_file.in_3_3_depth);
		sprintf(tvin_in_3_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_3_3, tvin_in_3_3);

		// release memory allocation
		delete [] in_3_3_tvin_wrapc_buffer;

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		AES(ctx, key, in);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_ctx_RoundKey_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_0, tvout_ctx_RoundKey_0);

		sc_bv<8>* ctx_RoundKey_0_tvout_wrapc_buffer = new sc_bv<8>[11];

		// RTL Name: ctx_RoundKey_0
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: ctx.RoundKey(7, 0)
				{
					// carray: (0) => (160) @ (16)
					for (int i_0 = 0; i_0 <= 160; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : ctx->RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : ctx->RoundKey[0]
						// regulate_c_name       : ctx_RoundKey
						// input_type_conversion : ctx->RoundKey[i_0]
						if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> ctx_RoundKey_tmp_mem;
							ctx_RoundKey_tmp_mem = ctx->RoundKey[i_0];
							ctx_RoundKey_0_tvout_wrapc_buffer[hls_map_index].range(7, 0) = ctx_RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 11; i++)
		{
			sprintf(tvout_ctx_RoundKey_0, "%s\n", (ctx_RoundKey_0_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_0, tvout_ctx_RoundKey_0);
		}

		tcl_file.set_num(11, &tcl_file.ctx_RoundKey_0_depth);
		sprintf(tvout_ctx_RoundKey_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_0, tvout_ctx_RoundKey_0);

		// release memory allocation
		delete [] ctx_RoundKey_0_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_ctx_RoundKey_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_1, tvout_ctx_RoundKey_1);

		sc_bv<8>* ctx_RoundKey_1_tvout_wrapc_buffer = new sc_bv<8>[11];

		// RTL Name: ctx_RoundKey_1
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: ctx.RoundKey(7, 0)
				{
					// carray: (1) => (161) @ (16)
					for (int i_0 = 1; i_0 <= 161; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : ctx->RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : ctx->RoundKey[0]
						// regulate_c_name       : ctx_RoundKey
						// input_type_conversion : ctx->RoundKey[i_0]
						if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> ctx_RoundKey_tmp_mem;
							ctx_RoundKey_tmp_mem = ctx->RoundKey[i_0];
							ctx_RoundKey_1_tvout_wrapc_buffer[hls_map_index].range(7, 0) = ctx_RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 11; i++)
		{
			sprintf(tvout_ctx_RoundKey_1, "%s\n", (ctx_RoundKey_1_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_1, tvout_ctx_RoundKey_1);
		}

		tcl_file.set_num(11, &tcl_file.ctx_RoundKey_1_depth);
		sprintf(tvout_ctx_RoundKey_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_1, tvout_ctx_RoundKey_1);

		// release memory allocation
		delete [] ctx_RoundKey_1_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_ctx_RoundKey_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_2, tvout_ctx_RoundKey_2);

		sc_bv<8>* ctx_RoundKey_2_tvout_wrapc_buffer = new sc_bv<8>[11];

		// RTL Name: ctx_RoundKey_2
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: ctx.RoundKey(7, 0)
				{
					// carray: (2) => (162) @ (16)
					for (int i_0 = 2; i_0 <= 162; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : ctx->RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : ctx->RoundKey[0]
						// regulate_c_name       : ctx_RoundKey
						// input_type_conversion : ctx->RoundKey[i_0]
						if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> ctx_RoundKey_tmp_mem;
							ctx_RoundKey_tmp_mem = ctx->RoundKey[i_0];
							ctx_RoundKey_2_tvout_wrapc_buffer[hls_map_index].range(7, 0) = ctx_RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 11; i++)
		{
			sprintf(tvout_ctx_RoundKey_2, "%s\n", (ctx_RoundKey_2_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_2, tvout_ctx_RoundKey_2);
		}

		tcl_file.set_num(11, &tcl_file.ctx_RoundKey_2_depth);
		sprintf(tvout_ctx_RoundKey_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_2, tvout_ctx_RoundKey_2);

		// release memory allocation
		delete [] ctx_RoundKey_2_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_ctx_RoundKey_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_3, tvout_ctx_RoundKey_3);

		sc_bv<8>* ctx_RoundKey_3_tvout_wrapc_buffer = new sc_bv<8>[11];

		// RTL Name: ctx_RoundKey_3
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: ctx.RoundKey(7, 0)
				{
					// carray: (3) => (163) @ (16)
					for (int i_0 = 3; i_0 <= 163; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : ctx->RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : ctx->RoundKey[0]
						// regulate_c_name       : ctx_RoundKey
						// input_type_conversion : ctx->RoundKey[i_0]
						if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> ctx_RoundKey_tmp_mem;
							ctx_RoundKey_tmp_mem = ctx->RoundKey[i_0];
							ctx_RoundKey_3_tvout_wrapc_buffer[hls_map_index].range(7, 0) = ctx_RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 11; i++)
		{
			sprintf(tvout_ctx_RoundKey_3, "%s\n", (ctx_RoundKey_3_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_3, tvout_ctx_RoundKey_3);
		}

		tcl_file.set_num(11, &tcl_file.ctx_RoundKey_3_depth);
		sprintf(tvout_ctx_RoundKey_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_3, tvout_ctx_RoundKey_3);

		// release memory allocation
		delete [] ctx_RoundKey_3_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_ctx_RoundKey_4, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_4, tvout_ctx_RoundKey_4);

		sc_bv<8>* ctx_RoundKey_4_tvout_wrapc_buffer = new sc_bv<8>[11];

		// RTL Name: ctx_RoundKey_4
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: ctx.RoundKey(7, 0)
				{
					// carray: (4) => (164) @ (16)
					for (int i_0 = 4; i_0 <= 164; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : ctx->RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : ctx->RoundKey[0]
						// regulate_c_name       : ctx_RoundKey
						// input_type_conversion : ctx->RoundKey[i_0]
						if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> ctx_RoundKey_tmp_mem;
							ctx_RoundKey_tmp_mem = ctx->RoundKey[i_0];
							ctx_RoundKey_4_tvout_wrapc_buffer[hls_map_index].range(7, 0) = ctx_RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 11; i++)
		{
			sprintf(tvout_ctx_RoundKey_4, "%s\n", (ctx_RoundKey_4_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_4, tvout_ctx_RoundKey_4);
		}

		tcl_file.set_num(11, &tcl_file.ctx_RoundKey_4_depth);
		sprintf(tvout_ctx_RoundKey_4, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_4, tvout_ctx_RoundKey_4);

		// release memory allocation
		delete [] ctx_RoundKey_4_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_ctx_RoundKey_5, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_5, tvout_ctx_RoundKey_5);

		sc_bv<8>* ctx_RoundKey_5_tvout_wrapc_buffer = new sc_bv<8>[11];

		// RTL Name: ctx_RoundKey_5
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: ctx.RoundKey(7, 0)
				{
					// carray: (5) => (165) @ (16)
					for (int i_0 = 5; i_0 <= 165; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : ctx->RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : ctx->RoundKey[0]
						// regulate_c_name       : ctx_RoundKey
						// input_type_conversion : ctx->RoundKey[i_0]
						if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> ctx_RoundKey_tmp_mem;
							ctx_RoundKey_tmp_mem = ctx->RoundKey[i_0];
							ctx_RoundKey_5_tvout_wrapc_buffer[hls_map_index].range(7, 0) = ctx_RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 11; i++)
		{
			sprintf(tvout_ctx_RoundKey_5, "%s\n", (ctx_RoundKey_5_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_5, tvout_ctx_RoundKey_5);
		}

		tcl_file.set_num(11, &tcl_file.ctx_RoundKey_5_depth);
		sprintf(tvout_ctx_RoundKey_5, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_5, tvout_ctx_RoundKey_5);

		// release memory allocation
		delete [] ctx_RoundKey_5_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_ctx_RoundKey_6, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_6, tvout_ctx_RoundKey_6);

		sc_bv<8>* ctx_RoundKey_6_tvout_wrapc_buffer = new sc_bv<8>[11];

		// RTL Name: ctx_RoundKey_6
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: ctx.RoundKey(7, 0)
				{
					// carray: (6) => (166) @ (16)
					for (int i_0 = 6; i_0 <= 166; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : ctx->RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : ctx->RoundKey[0]
						// regulate_c_name       : ctx_RoundKey
						// input_type_conversion : ctx->RoundKey[i_0]
						if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> ctx_RoundKey_tmp_mem;
							ctx_RoundKey_tmp_mem = ctx->RoundKey[i_0];
							ctx_RoundKey_6_tvout_wrapc_buffer[hls_map_index].range(7, 0) = ctx_RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 11; i++)
		{
			sprintf(tvout_ctx_RoundKey_6, "%s\n", (ctx_RoundKey_6_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_6, tvout_ctx_RoundKey_6);
		}

		tcl_file.set_num(11, &tcl_file.ctx_RoundKey_6_depth);
		sprintf(tvout_ctx_RoundKey_6, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_6, tvout_ctx_RoundKey_6);

		// release memory allocation
		delete [] ctx_RoundKey_6_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_ctx_RoundKey_7, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_7, tvout_ctx_RoundKey_7);

		sc_bv<8>* ctx_RoundKey_7_tvout_wrapc_buffer = new sc_bv<8>[11];

		// RTL Name: ctx_RoundKey_7
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: ctx.RoundKey(7, 0)
				{
					// carray: (7) => (167) @ (16)
					for (int i_0 = 7; i_0 <= 167; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : ctx->RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : ctx->RoundKey[0]
						// regulate_c_name       : ctx_RoundKey
						// input_type_conversion : ctx->RoundKey[i_0]
						if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> ctx_RoundKey_tmp_mem;
							ctx_RoundKey_tmp_mem = ctx->RoundKey[i_0];
							ctx_RoundKey_7_tvout_wrapc_buffer[hls_map_index].range(7, 0) = ctx_RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 11; i++)
		{
			sprintf(tvout_ctx_RoundKey_7, "%s\n", (ctx_RoundKey_7_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_7, tvout_ctx_RoundKey_7);
		}

		tcl_file.set_num(11, &tcl_file.ctx_RoundKey_7_depth);
		sprintf(tvout_ctx_RoundKey_7, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_7, tvout_ctx_RoundKey_7);

		// release memory allocation
		delete [] ctx_RoundKey_7_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_ctx_RoundKey_8, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_8, tvout_ctx_RoundKey_8);

		sc_bv<8>* ctx_RoundKey_8_tvout_wrapc_buffer = new sc_bv<8>[11];

		// RTL Name: ctx_RoundKey_8
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: ctx.RoundKey(7, 0)
				{
					// carray: (8) => (168) @ (16)
					for (int i_0 = 8; i_0 <= 168; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : ctx->RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : ctx->RoundKey[0]
						// regulate_c_name       : ctx_RoundKey
						// input_type_conversion : ctx->RoundKey[i_0]
						if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> ctx_RoundKey_tmp_mem;
							ctx_RoundKey_tmp_mem = ctx->RoundKey[i_0];
							ctx_RoundKey_8_tvout_wrapc_buffer[hls_map_index].range(7, 0) = ctx_RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 11; i++)
		{
			sprintf(tvout_ctx_RoundKey_8, "%s\n", (ctx_RoundKey_8_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_8, tvout_ctx_RoundKey_8);
		}

		tcl_file.set_num(11, &tcl_file.ctx_RoundKey_8_depth);
		sprintf(tvout_ctx_RoundKey_8, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_8, tvout_ctx_RoundKey_8);

		// release memory allocation
		delete [] ctx_RoundKey_8_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_ctx_RoundKey_9, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_9, tvout_ctx_RoundKey_9);

		sc_bv<8>* ctx_RoundKey_9_tvout_wrapc_buffer = new sc_bv<8>[11];

		// RTL Name: ctx_RoundKey_9
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: ctx.RoundKey(7, 0)
				{
					// carray: (9) => (169) @ (16)
					for (int i_0 = 9; i_0 <= 169; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : ctx->RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : ctx->RoundKey[0]
						// regulate_c_name       : ctx_RoundKey
						// input_type_conversion : ctx->RoundKey[i_0]
						if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> ctx_RoundKey_tmp_mem;
							ctx_RoundKey_tmp_mem = ctx->RoundKey[i_0];
							ctx_RoundKey_9_tvout_wrapc_buffer[hls_map_index].range(7, 0) = ctx_RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 11; i++)
		{
			sprintf(tvout_ctx_RoundKey_9, "%s\n", (ctx_RoundKey_9_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_9, tvout_ctx_RoundKey_9);
		}

		tcl_file.set_num(11, &tcl_file.ctx_RoundKey_9_depth);
		sprintf(tvout_ctx_RoundKey_9, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_9, tvout_ctx_RoundKey_9);

		// release memory allocation
		delete [] ctx_RoundKey_9_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_ctx_RoundKey_10, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_10, tvout_ctx_RoundKey_10);

		sc_bv<8>* ctx_RoundKey_10_tvout_wrapc_buffer = new sc_bv<8>[11];

		// RTL Name: ctx_RoundKey_10
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: ctx.RoundKey(7, 0)
				{
					// carray: (10) => (170) @ (16)
					for (int i_0 = 10; i_0 <= 170; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : ctx->RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : ctx->RoundKey[0]
						// regulate_c_name       : ctx_RoundKey
						// input_type_conversion : ctx->RoundKey[i_0]
						if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> ctx_RoundKey_tmp_mem;
							ctx_RoundKey_tmp_mem = ctx->RoundKey[i_0];
							ctx_RoundKey_10_tvout_wrapc_buffer[hls_map_index].range(7, 0) = ctx_RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 11; i++)
		{
			sprintf(tvout_ctx_RoundKey_10, "%s\n", (ctx_RoundKey_10_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_10, tvout_ctx_RoundKey_10);
		}

		tcl_file.set_num(11, &tcl_file.ctx_RoundKey_10_depth);
		sprintf(tvout_ctx_RoundKey_10, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_10, tvout_ctx_RoundKey_10);

		// release memory allocation
		delete [] ctx_RoundKey_10_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_ctx_RoundKey_11, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_11, tvout_ctx_RoundKey_11);

		sc_bv<8>* ctx_RoundKey_11_tvout_wrapc_buffer = new sc_bv<8>[11];

		// RTL Name: ctx_RoundKey_11
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: ctx.RoundKey(7, 0)
				{
					// carray: (11) => (171) @ (16)
					for (int i_0 = 11; i_0 <= 171; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : ctx->RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : ctx->RoundKey[0]
						// regulate_c_name       : ctx_RoundKey
						// input_type_conversion : ctx->RoundKey[i_0]
						if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> ctx_RoundKey_tmp_mem;
							ctx_RoundKey_tmp_mem = ctx->RoundKey[i_0];
							ctx_RoundKey_11_tvout_wrapc_buffer[hls_map_index].range(7, 0) = ctx_RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 11; i++)
		{
			sprintf(tvout_ctx_RoundKey_11, "%s\n", (ctx_RoundKey_11_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_11, tvout_ctx_RoundKey_11);
		}

		tcl_file.set_num(11, &tcl_file.ctx_RoundKey_11_depth);
		sprintf(tvout_ctx_RoundKey_11, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_11, tvout_ctx_RoundKey_11);

		// release memory allocation
		delete [] ctx_RoundKey_11_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_ctx_RoundKey_12, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_12, tvout_ctx_RoundKey_12);

		sc_bv<8>* ctx_RoundKey_12_tvout_wrapc_buffer = new sc_bv<8>[11];

		// RTL Name: ctx_RoundKey_12
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: ctx.RoundKey(7, 0)
				{
					// carray: (12) => (172) @ (16)
					for (int i_0 = 12; i_0 <= 172; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : ctx->RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : ctx->RoundKey[0]
						// regulate_c_name       : ctx_RoundKey
						// input_type_conversion : ctx->RoundKey[i_0]
						if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> ctx_RoundKey_tmp_mem;
							ctx_RoundKey_tmp_mem = ctx->RoundKey[i_0];
							ctx_RoundKey_12_tvout_wrapc_buffer[hls_map_index].range(7, 0) = ctx_RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 11; i++)
		{
			sprintf(tvout_ctx_RoundKey_12, "%s\n", (ctx_RoundKey_12_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_12, tvout_ctx_RoundKey_12);
		}

		tcl_file.set_num(11, &tcl_file.ctx_RoundKey_12_depth);
		sprintf(tvout_ctx_RoundKey_12, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_12, tvout_ctx_RoundKey_12);

		// release memory allocation
		delete [] ctx_RoundKey_12_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_ctx_RoundKey_13, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_13, tvout_ctx_RoundKey_13);

		sc_bv<8>* ctx_RoundKey_13_tvout_wrapc_buffer = new sc_bv<8>[11];

		// RTL Name: ctx_RoundKey_13
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: ctx.RoundKey(7, 0)
				{
					// carray: (13) => (173) @ (16)
					for (int i_0 = 13; i_0 <= 173; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : ctx->RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : ctx->RoundKey[0]
						// regulate_c_name       : ctx_RoundKey
						// input_type_conversion : ctx->RoundKey[i_0]
						if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> ctx_RoundKey_tmp_mem;
							ctx_RoundKey_tmp_mem = ctx->RoundKey[i_0];
							ctx_RoundKey_13_tvout_wrapc_buffer[hls_map_index].range(7, 0) = ctx_RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 11; i++)
		{
			sprintf(tvout_ctx_RoundKey_13, "%s\n", (ctx_RoundKey_13_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_13, tvout_ctx_RoundKey_13);
		}

		tcl_file.set_num(11, &tcl_file.ctx_RoundKey_13_depth);
		sprintf(tvout_ctx_RoundKey_13, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_13, tvout_ctx_RoundKey_13);

		// release memory allocation
		delete [] ctx_RoundKey_13_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_ctx_RoundKey_14, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_14, tvout_ctx_RoundKey_14);

		sc_bv<8>* ctx_RoundKey_14_tvout_wrapc_buffer = new sc_bv<8>[11];

		// RTL Name: ctx_RoundKey_14
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: ctx.RoundKey(7, 0)
				{
					// carray: (14) => (174) @ (16)
					for (int i_0 = 14; i_0 <= 174; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : ctx->RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : ctx->RoundKey[0]
						// regulate_c_name       : ctx_RoundKey
						// input_type_conversion : ctx->RoundKey[i_0]
						if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> ctx_RoundKey_tmp_mem;
							ctx_RoundKey_tmp_mem = ctx->RoundKey[i_0];
							ctx_RoundKey_14_tvout_wrapc_buffer[hls_map_index].range(7, 0) = ctx_RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 11; i++)
		{
			sprintf(tvout_ctx_RoundKey_14, "%s\n", (ctx_RoundKey_14_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_14, tvout_ctx_RoundKey_14);
		}

		tcl_file.set_num(11, &tcl_file.ctx_RoundKey_14_depth);
		sprintf(tvout_ctx_RoundKey_14, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_14, tvout_ctx_RoundKey_14);

		// release memory allocation
		delete [] ctx_RoundKey_14_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_ctx_RoundKey_15, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_15, tvout_ctx_RoundKey_15);

		sc_bv<8>* ctx_RoundKey_15_tvout_wrapc_buffer = new sc_bv<8>[11];

		// RTL Name: ctx_RoundKey_15
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: ctx.RoundKey(7, 0)
				{
					// carray: (15) => (175) @ (16)
					for (int i_0 = 15; i_0 <= 175; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : ctx->RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : ctx->RoundKey[0]
						// regulate_c_name       : ctx_RoundKey
						// input_type_conversion : ctx->RoundKey[i_0]
						if (&(ctx->RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> ctx_RoundKey_tmp_mem;
							ctx_RoundKey_tmp_mem = ctx->RoundKey[i_0];
							ctx_RoundKey_15_tvout_wrapc_buffer[hls_map_index].range(7, 0) = ctx_RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 11; i++)
		{
			sprintf(tvout_ctx_RoundKey_15, "%s\n", (ctx_RoundKey_15_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_15, tvout_ctx_RoundKey_15);
		}

		tcl_file.set_num(11, &tcl_file.ctx_RoundKey_15_depth);
		sprintf(tvout_ctx_RoundKey_15, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_ctx_RoundKey_15, tvout_ctx_RoundKey_15);

		// release memory allocation
		delete [] ctx_RoundKey_15_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_in_0_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_in_0_0, tvout_in_0_0);

		sc_bv<8>* in_0_0_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: in_0_0
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: in(7, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// carray: (0) => (0) @ (2)
						for (int i_1 = 0; i_1 <= 0; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : in[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : in[0][0]
							// regulate_c_name       : in
							// input_type_conversion : in[i_0][i_1]
							if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> in_tmp_mem;
								in_tmp_mem = in[i_0][i_1];
								in_0_0_tvout_wrapc_buffer[hls_map_index].range(7, 0) = in_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_in_0_0, "%s\n", (in_0_0_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_in_0_0, tvout_in_0_0);
		}

		tcl_file.set_num(1, &tcl_file.in_0_0_depth);
		sprintf(tvout_in_0_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_in_0_0, tvout_in_0_0);

		// release memory allocation
		delete [] in_0_0_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_in_0_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_in_0_1, tvout_in_0_1);

		sc_bv<8>* in_0_1_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: in_0_1
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: in(7, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// carray: (1) => (1) @ (2)
						for (int i_1 = 1; i_1 <= 1; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : in[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : in[0][0]
							// regulate_c_name       : in
							// input_type_conversion : in[i_0][i_1]
							if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> in_tmp_mem;
								in_tmp_mem = in[i_0][i_1];
								in_0_1_tvout_wrapc_buffer[hls_map_index].range(7, 0) = in_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_in_0_1, "%s\n", (in_0_1_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_in_0_1, tvout_in_0_1);
		}

		tcl_file.set_num(1, &tcl_file.in_0_1_depth);
		sprintf(tvout_in_0_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_in_0_1, tvout_in_0_1);

		// release memory allocation
		delete [] in_0_1_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_in_0_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_in_0_2, tvout_in_0_2);

		sc_bv<8>* in_0_2_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: in_0_2
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: in(7, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// carray: (2) => (2) @ (2)
						for (int i_1 = 2; i_1 <= 2; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : in[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : in[0][0]
							// regulate_c_name       : in
							// input_type_conversion : in[i_0][i_1]
							if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> in_tmp_mem;
								in_tmp_mem = in[i_0][i_1];
								in_0_2_tvout_wrapc_buffer[hls_map_index].range(7, 0) = in_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_in_0_2, "%s\n", (in_0_2_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_in_0_2, tvout_in_0_2);
		}

		tcl_file.set_num(1, &tcl_file.in_0_2_depth);
		sprintf(tvout_in_0_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_in_0_2, tvout_in_0_2);

		// release memory allocation
		delete [] in_0_2_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_in_0_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_in_0_3, tvout_in_0_3);

		sc_bv<8>* in_0_3_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: in_0_3
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: in(7, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// carray: (3) => (3) @ (2)
						for (int i_1 = 3; i_1 <= 3; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : in[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : in[0][0]
							// regulate_c_name       : in
							// input_type_conversion : in[i_0][i_1]
							if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> in_tmp_mem;
								in_tmp_mem = in[i_0][i_1];
								in_0_3_tvout_wrapc_buffer[hls_map_index].range(7, 0) = in_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_in_0_3, "%s\n", (in_0_3_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_in_0_3, tvout_in_0_3);
		}

		tcl_file.set_num(1, &tcl_file.in_0_3_depth);
		sprintf(tvout_in_0_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_in_0_3, tvout_in_0_3);

		// release memory allocation
		delete [] in_0_3_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_in_1_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_in_1_0, tvout_in_1_0);

		sc_bv<8>* in_1_0_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: in_1_0
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: in(7, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// carray: (0) => (0) @ (2)
						for (int i_1 = 0; i_1 <= 0; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : in[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : in[0][0]
							// regulate_c_name       : in
							// input_type_conversion : in[i_0][i_1]
							if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> in_tmp_mem;
								in_tmp_mem = in[i_0][i_1];
								in_1_0_tvout_wrapc_buffer[hls_map_index].range(7, 0) = in_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_in_1_0, "%s\n", (in_1_0_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_in_1_0, tvout_in_1_0);
		}

		tcl_file.set_num(1, &tcl_file.in_1_0_depth);
		sprintf(tvout_in_1_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_in_1_0, tvout_in_1_0);

		// release memory allocation
		delete [] in_1_0_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_in_1_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_in_1_1, tvout_in_1_1);

		sc_bv<8>* in_1_1_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: in_1_1
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: in(7, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// carray: (1) => (1) @ (2)
						for (int i_1 = 1; i_1 <= 1; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : in[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : in[0][0]
							// regulate_c_name       : in
							// input_type_conversion : in[i_0][i_1]
							if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> in_tmp_mem;
								in_tmp_mem = in[i_0][i_1];
								in_1_1_tvout_wrapc_buffer[hls_map_index].range(7, 0) = in_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_in_1_1, "%s\n", (in_1_1_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_in_1_1, tvout_in_1_1);
		}

		tcl_file.set_num(1, &tcl_file.in_1_1_depth);
		sprintf(tvout_in_1_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_in_1_1, tvout_in_1_1);

		// release memory allocation
		delete [] in_1_1_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_in_1_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_in_1_2, tvout_in_1_2);

		sc_bv<8>* in_1_2_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: in_1_2
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: in(7, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// carray: (2) => (2) @ (2)
						for (int i_1 = 2; i_1 <= 2; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : in[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : in[0][0]
							// regulate_c_name       : in
							// input_type_conversion : in[i_0][i_1]
							if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> in_tmp_mem;
								in_tmp_mem = in[i_0][i_1];
								in_1_2_tvout_wrapc_buffer[hls_map_index].range(7, 0) = in_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_in_1_2, "%s\n", (in_1_2_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_in_1_2, tvout_in_1_2);
		}

		tcl_file.set_num(1, &tcl_file.in_1_2_depth);
		sprintf(tvout_in_1_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_in_1_2, tvout_in_1_2);

		// release memory allocation
		delete [] in_1_2_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_in_1_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_in_1_3, tvout_in_1_3);

		sc_bv<8>* in_1_3_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: in_1_3
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: in(7, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// carray: (3) => (3) @ (2)
						for (int i_1 = 3; i_1 <= 3; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : in[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : in[0][0]
							// regulate_c_name       : in
							// input_type_conversion : in[i_0][i_1]
							if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> in_tmp_mem;
								in_tmp_mem = in[i_0][i_1];
								in_1_3_tvout_wrapc_buffer[hls_map_index].range(7, 0) = in_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_in_1_3, "%s\n", (in_1_3_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_in_1_3, tvout_in_1_3);
		}

		tcl_file.set_num(1, &tcl_file.in_1_3_depth);
		sprintf(tvout_in_1_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_in_1_3, tvout_in_1_3);

		// release memory allocation
		delete [] in_1_3_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_in_2_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_in_2_0, tvout_in_2_0);

		sc_bv<8>* in_2_0_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: in_2_0
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: in(7, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// carray: (0) => (0) @ (2)
						for (int i_1 = 0; i_1 <= 0; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : in[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : in[0][0]
							// regulate_c_name       : in
							// input_type_conversion : in[i_0][i_1]
							if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> in_tmp_mem;
								in_tmp_mem = in[i_0][i_1];
								in_2_0_tvout_wrapc_buffer[hls_map_index].range(7, 0) = in_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_in_2_0, "%s\n", (in_2_0_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_in_2_0, tvout_in_2_0);
		}

		tcl_file.set_num(1, &tcl_file.in_2_0_depth);
		sprintf(tvout_in_2_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_in_2_0, tvout_in_2_0);

		// release memory allocation
		delete [] in_2_0_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_in_2_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_in_2_1, tvout_in_2_1);

		sc_bv<8>* in_2_1_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: in_2_1
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: in(7, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// carray: (1) => (1) @ (2)
						for (int i_1 = 1; i_1 <= 1; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : in[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : in[0][0]
							// regulate_c_name       : in
							// input_type_conversion : in[i_0][i_1]
							if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> in_tmp_mem;
								in_tmp_mem = in[i_0][i_1];
								in_2_1_tvout_wrapc_buffer[hls_map_index].range(7, 0) = in_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_in_2_1, "%s\n", (in_2_1_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_in_2_1, tvout_in_2_1);
		}

		tcl_file.set_num(1, &tcl_file.in_2_1_depth);
		sprintf(tvout_in_2_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_in_2_1, tvout_in_2_1);

		// release memory allocation
		delete [] in_2_1_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_in_2_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_in_2_2, tvout_in_2_2);

		sc_bv<8>* in_2_2_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: in_2_2
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: in(7, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// carray: (2) => (2) @ (2)
						for (int i_1 = 2; i_1 <= 2; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : in[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : in[0][0]
							// regulate_c_name       : in
							// input_type_conversion : in[i_0][i_1]
							if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> in_tmp_mem;
								in_tmp_mem = in[i_0][i_1];
								in_2_2_tvout_wrapc_buffer[hls_map_index].range(7, 0) = in_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_in_2_2, "%s\n", (in_2_2_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_in_2_2, tvout_in_2_2);
		}

		tcl_file.set_num(1, &tcl_file.in_2_2_depth);
		sprintf(tvout_in_2_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_in_2_2, tvout_in_2_2);

		// release memory allocation
		delete [] in_2_2_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_in_2_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_in_2_3, tvout_in_2_3);

		sc_bv<8>* in_2_3_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: in_2_3
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: in(7, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// carray: (3) => (3) @ (2)
						for (int i_1 = 3; i_1 <= 3; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : in[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : in[0][0]
							// regulate_c_name       : in
							// input_type_conversion : in[i_0][i_1]
							if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> in_tmp_mem;
								in_tmp_mem = in[i_0][i_1];
								in_2_3_tvout_wrapc_buffer[hls_map_index].range(7, 0) = in_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_in_2_3, "%s\n", (in_2_3_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_in_2_3, tvout_in_2_3);
		}

		tcl_file.set_num(1, &tcl_file.in_2_3_depth);
		sprintf(tvout_in_2_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_in_2_3, tvout_in_2_3);

		// release memory allocation
		delete [] in_2_3_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_in_3_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_in_3_0, tvout_in_3_0);

		sc_bv<8>* in_3_0_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: in_3_0
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: in(7, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// carray: (0) => (0) @ (2)
						for (int i_1 = 0; i_1 <= 0; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : in[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : in[0][0]
							// regulate_c_name       : in
							// input_type_conversion : in[i_0][i_1]
							if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> in_tmp_mem;
								in_tmp_mem = in[i_0][i_1];
								in_3_0_tvout_wrapc_buffer[hls_map_index].range(7, 0) = in_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_in_3_0, "%s\n", (in_3_0_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_in_3_0, tvout_in_3_0);
		}

		tcl_file.set_num(1, &tcl_file.in_3_0_depth);
		sprintf(tvout_in_3_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_in_3_0, tvout_in_3_0);

		// release memory allocation
		delete [] in_3_0_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_in_3_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_in_3_1, tvout_in_3_1);

		sc_bv<8>* in_3_1_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: in_3_1
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: in(7, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// carray: (1) => (1) @ (2)
						for (int i_1 = 1; i_1 <= 1; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : in[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : in[0][0]
							// regulate_c_name       : in
							// input_type_conversion : in[i_0][i_1]
							if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> in_tmp_mem;
								in_tmp_mem = in[i_0][i_1];
								in_3_1_tvout_wrapc_buffer[hls_map_index].range(7, 0) = in_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_in_3_1, "%s\n", (in_3_1_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_in_3_1, tvout_in_3_1);
		}

		tcl_file.set_num(1, &tcl_file.in_3_1_depth);
		sprintf(tvout_in_3_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_in_3_1, tvout_in_3_1);

		// release memory allocation
		delete [] in_3_1_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_in_3_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_in_3_2, tvout_in_3_2);

		sc_bv<8>* in_3_2_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: in_3_2
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: in(7, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// carray: (2) => (2) @ (2)
						for (int i_1 = 2; i_1 <= 2; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : in[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : in[0][0]
							// regulate_c_name       : in
							// input_type_conversion : in[i_0][i_1]
							if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> in_tmp_mem;
								in_tmp_mem = in[i_0][i_1];
								in_3_2_tvout_wrapc_buffer[hls_map_index].range(7, 0) = in_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_in_3_2, "%s\n", (in_3_2_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_in_3_2, tvout_in_3_2);
		}

		tcl_file.set_num(1, &tcl_file.in_3_2_depth);
		sprintf(tvout_in_3_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_in_3_2, tvout_in_3_2);

		// release memory allocation
		delete [] in_3_2_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_in_3_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_in_3_3, tvout_in_3_3);

		sc_bv<8>* in_3_3_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: in_3_3
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: in(7, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// carray: (3) => (3) @ (2)
						for (int i_1 = 3; i_1 <= 3; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : in[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : in[0][0]
							// regulate_c_name       : in
							// input_type_conversion : in[i_0][i_1]
							if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> in_tmp_mem;
								in_tmp_mem = in[i_0][i_1];
								in_3_3_tvout_wrapc_buffer[hls_map_index].range(7, 0) = in_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_in_3_3, "%s\n", (in_3_3_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_in_3_3, tvout_in_3_3);
		}

		tcl_file.set_num(1, &tcl_file.in_3_3_depth);
		sprintf(tvout_in_3_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_in_3_3, tvout_in_3_3);

		// release memory allocation
		delete [] in_3_3_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "ctx_RoundKey_0"
		delete [] tvin_ctx_RoundKey_0;
		delete [] tvout_ctx_RoundKey_0;
		// release memory allocation: "ctx_RoundKey_1"
		delete [] tvin_ctx_RoundKey_1;
		delete [] tvout_ctx_RoundKey_1;
		// release memory allocation: "ctx_RoundKey_2"
		delete [] tvin_ctx_RoundKey_2;
		delete [] tvout_ctx_RoundKey_2;
		// release memory allocation: "ctx_RoundKey_3"
		delete [] tvin_ctx_RoundKey_3;
		delete [] tvout_ctx_RoundKey_3;
		// release memory allocation: "ctx_RoundKey_4"
		delete [] tvin_ctx_RoundKey_4;
		delete [] tvout_ctx_RoundKey_4;
		// release memory allocation: "ctx_RoundKey_5"
		delete [] tvin_ctx_RoundKey_5;
		delete [] tvout_ctx_RoundKey_5;
		// release memory allocation: "ctx_RoundKey_6"
		delete [] tvin_ctx_RoundKey_6;
		delete [] tvout_ctx_RoundKey_6;
		// release memory allocation: "ctx_RoundKey_7"
		delete [] tvin_ctx_RoundKey_7;
		delete [] tvout_ctx_RoundKey_7;
		// release memory allocation: "ctx_RoundKey_8"
		delete [] tvin_ctx_RoundKey_8;
		delete [] tvout_ctx_RoundKey_8;
		// release memory allocation: "ctx_RoundKey_9"
		delete [] tvin_ctx_RoundKey_9;
		delete [] tvout_ctx_RoundKey_9;
		// release memory allocation: "ctx_RoundKey_10"
		delete [] tvin_ctx_RoundKey_10;
		delete [] tvout_ctx_RoundKey_10;
		// release memory allocation: "ctx_RoundKey_11"
		delete [] tvin_ctx_RoundKey_11;
		delete [] tvout_ctx_RoundKey_11;
		// release memory allocation: "ctx_RoundKey_12"
		delete [] tvin_ctx_RoundKey_12;
		delete [] tvout_ctx_RoundKey_12;
		// release memory allocation: "ctx_RoundKey_13"
		delete [] tvin_ctx_RoundKey_13;
		delete [] tvout_ctx_RoundKey_13;
		// release memory allocation: "ctx_RoundKey_14"
		delete [] tvin_ctx_RoundKey_14;
		delete [] tvout_ctx_RoundKey_14;
		// release memory allocation: "ctx_RoundKey_15"
		delete [] tvin_ctx_RoundKey_15;
		delete [] tvout_ctx_RoundKey_15;
		// release memory allocation: "key_0"
		delete [] tvin_key_0;
		// release memory allocation: "key_1"
		delete [] tvin_key_1;
		// release memory allocation: "key_2"
		delete [] tvin_key_2;
		// release memory allocation: "key_3"
		delete [] tvin_key_3;
		// release memory allocation: "key_4"
		delete [] tvin_key_4;
		// release memory allocation: "key_5"
		delete [] tvin_key_5;
		// release memory allocation: "key_6"
		delete [] tvin_key_6;
		// release memory allocation: "key_7"
		delete [] tvin_key_7;
		// release memory allocation: "key_8"
		delete [] tvin_key_8;
		// release memory allocation: "key_9"
		delete [] tvin_key_9;
		// release memory allocation: "key_10"
		delete [] tvin_key_10;
		// release memory allocation: "key_11"
		delete [] tvin_key_11;
		// release memory allocation: "key_12"
		delete [] tvin_key_12;
		// release memory allocation: "key_13"
		delete [] tvin_key_13;
		// release memory allocation: "key_14"
		delete [] tvin_key_14;
		// release memory allocation: "key_15"
		delete [] tvin_key_15;
		// release memory allocation: "in_0_0"
		delete [] tvin_in_0_0;
		delete [] tvout_in_0_0;
		// release memory allocation: "in_0_1"
		delete [] tvin_in_0_1;
		delete [] tvout_in_0_1;
		// release memory allocation: "in_0_2"
		delete [] tvin_in_0_2;
		delete [] tvout_in_0_2;
		// release memory allocation: "in_0_3"
		delete [] tvin_in_0_3;
		delete [] tvout_in_0_3;
		// release memory allocation: "in_1_0"
		delete [] tvin_in_1_0;
		delete [] tvout_in_1_0;
		// release memory allocation: "in_1_1"
		delete [] tvin_in_1_1;
		delete [] tvout_in_1_1;
		// release memory allocation: "in_1_2"
		delete [] tvin_in_1_2;
		delete [] tvout_in_1_2;
		// release memory allocation: "in_1_3"
		delete [] tvin_in_1_3;
		delete [] tvout_in_1_3;
		// release memory allocation: "in_2_0"
		delete [] tvin_in_2_0;
		delete [] tvout_in_2_0;
		// release memory allocation: "in_2_1"
		delete [] tvin_in_2_1;
		delete [] tvout_in_2_1;
		// release memory allocation: "in_2_2"
		delete [] tvin_in_2_2;
		delete [] tvout_in_2_2;
		// release memory allocation: "in_2_3"
		delete [] tvin_in_2_3;
		delete [] tvout_in_2_3;
		// release memory allocation: "in_3_0"
		delete [] tvin_in_3_0;
		delete [] tvout_in_3_0;
		// release memory allocation: "in_3_1"
		delete [] tvin_in_3_1;
		delete [] tvout_in_3_1;
		// release memory allocation: "in_3_2"
		delete [] tvin_in_3_2;
		delete [] tvout_in_3_2;
		// release memory allocation: "in_3_3"
		delete [] tvin_in_3_3;
		delete [] tvout_in_3_3;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

