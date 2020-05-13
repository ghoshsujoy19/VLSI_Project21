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


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "state_0_0"
#define AUTOTB_TVIN_state_0_0  "../tv/cdatafile/c.Cipher.autotvin_state_0_0.dat"
#define AUTOTB_TVOUT_state_0_0  "../tv/cdatafile/c.Cipher.autotvout_state_0_0.dat"
// wrapc file define: "state_0_1"
#define AUTOTB_TVIN_state_0_1  "../tv/cdatafile/c.Cipher.autotvin_state_0_1.dat"
#define AUTOTB_TVOUT_state_0_1  "../tv/cdatafile/c.Cipher.autotvout_state_0_1.dat"
// wrapc file define: "state_0_2"
#define AUTOTB_TVIN_state_0_2  "../tv/cdatafile/c.Cipher.autotvin_state_0_2.dat"
#define AUTOTB_TVOUT_state_0_2  "../tv/cdatafile/c.Cipher.autotvout_state_0_2.dat"
// wrapc file define: "state_0_3"
#define AUTOTB_TVIN_state_0_3  "../tv/cdatafile/c.Cipher.autotvin_state_0_3.dat"
#define AUTOTB_TVOUT_state_0_3  "../tv/cdatafile/c.Cipher.autotvout_state_0_3.dat"
// wrapc file define: "state_1_0"
#define AUTOTB_TVIN_state_1_0  "../tv/cdatafile/c.Cipher.autotvin_state_1_0.dat"
#define AUTOTB_TVOUT_state_1_0  "../tv/cdatafile/c.Cipher.autotvout_state_1_0.dat"
// wrapc file define: "state_1_1"
#define AUTOTB_TVIN_state_1_1  "../tv/cdatafile/c.Cipher.autotvin_state_1_1.dat"
#define AUTOTB_TVOUT_state_1_1  "../tv/cdatafile/c.Cipher.autotvout_state_1_1.dat"
// wrapc file define: "state_1_2"
#define AUTOTB_TVIN_state_1_2  "../tv/cdatafile/c.Cipher.autotvin_state_1_2.dat"
#define AUTOTB_TVOUT_state_1_2  "../tv/cdatafile/c.Cipher.autotvout_state_1_2.dat"
// wrapc file define: "state_1_3"
#define AUTOTB_TVIN_state_1_3  "../tv/cdatafile/c.Cipher.autotvin_state_1_3.dat"
#define AUTOTB_TVOUT_state_1_3  "../tv/cdatafile/c.Cipher.autotvout_state_1_3.dat"
// wrapc file define: "state_2_0"
#define AUTOTB_TVIN_state_2_0  "../tv/cdatafile/c.Cipher.autotvin_state_2_0.dat"
#define AUTOTB_TVOUT_state_2_0  "../tv/cdatafile/c.Cipher.autotvout_state_2_0.dat"
// wrapc file define: "state_2_1"
#define AUTOTB_TVIN_state_2_1  "../tv/cdatafile/c.Cipher.autotvin_state_2_1.dat"
#define AUTOTB_TVOUT_state_2_1  "../tv/cdatafile/c.Cipher.autotvout_state_2_1.dat"
// wrapc file define: "state_2_2"
#define AUTOTB_TVIN_state_2_2  "../tv/cdatafile/c.Cipher.autotvin_state_2_2.dat"
#define AUTOTB_TVOUT_state_2_2  "../tv/cdatafile/c.Cipher.autotvout_state_2_2.dat"
// wrapc file define: "state_2_3"
#define AUTOTB_TVIN_state_2_3  "../tv/cdatafile/c.Cipher.autotvin_state_2_3.dat"
#define AUTOTB_TVOUT_state_2_3  "../tv/cdatafile/c.Cipher.autotvout_state_2_3.dat"
// wrapc file define: "state_3_0"
#define AUTOTB_TVIN_state_3_0  "../tv/cdatafile/c.Cipher.autotvin_state_3_0.dat"
#define AUTOTB_TVOUT_state_3_0  "../tv/cdatafile/c.Cipher.autotvout_state_3_0.dat"
// wrapc file define: "state_3_1"
#define AUTOTB_TVIN_state_3_1  "../tv/cdatafile/c.Cipher.autotvin_state_3_1.dat"
#define AUTOTB_TVOUT_state_3_1  "../tv/cdatafile/c.Cipher.autotvout_state_3_1.dat"
// wrapc file define: "state_3_2"
#define AUTOTB_TVIN_state_3_2  "../tv/cdatafile/c.Cipher.autotvin_state_3_2.dat"
#define AUTOTB_TVOUT_state_3_2  "../tv/cdatafile/c.Cipher.autotvout_state_3_2.dat"
// wrapc file define: "state_3_3"
#define AUTOTB_TVIN_state_3_3  "../tv/cdatafile/c.Cipher.autotvin_state_3_3.dat"
#define AUTOTB_TVOUT_state_3_3  "../tv/cdatafile/c.Cipher.autotvout_state_3_3.dat"
// wrapc file define: "RoundKey_0"
#define AUTOTB_TVIN_RoundKey_0  "../tv/cdatafile/c.Cipher.autotvin_RoundKey_0.dat"
// wrapc file define: "RoundKey_1"
#define AUTOTB_TVIN_RoundKey_1  "../tv/cdatafile/c.Cipher.autotvin_RoundKey_1.dat"
// wrapc file define: "RoundKey_2"
#define AUTOTB_TVIN_RoundKey_2  "../tv/cdatafile/c.Cipher.autotvin_RoundKey_2.dat"
// wrapc file define: "RoundKey_3"
#define AUTOTB_TVIN_RoundKey_3  "../tv/cdatafile/c.Cipher.autotvin_RoundKey_3.dat"
// wrapc file define: "RoundKey_4"
#define AUTOTB_TVIN_RoundKey_4  "../tv/cdatafile/c.Cipher.autotvin_RoundKey_4.dat"
// wrapc file define: "RoundKey_5"
#define AUTOTB_TVIN_RoundKey_5  "../tv/cdatafile/c.Cipher.autotvin_RoundKey_5.dat"
// wrapc file define: "RoundKey_6"
#define AUTOTB_TVIN_RoundKey_6  "../tv/cdatafile/c.Cipher.autotvin_RoundKey_6.dat"
// wrapc file define: "RoundKey_7"
#define AUTOTB_TVIN_RoundKey_7  "../tv/cdatafile/c.Cipher.autotvin_RoundKey_7.dat"
// wrapc file define: "RoundKey_8"
#define AUTOTB_TVIN_RoundKey_8  "../tv/cdatafile/c.Cipher.autotvin_RoundKey_8.dat"
// wrapc file define: "RoundKey_9"
#define AUTOTB_TVIN_RoundKey_9  "../tv/cdatafile/c.Cipher.autotvin_RoundKey_9.dat"
// wrapc file define: "RoundKey_10"
#define AUTOTB_TVIN_RoundKey_10  "../tv/cdatafile/c.Cipher.autotvin_RoundKey_10.dat"
// wrapc file define: "RoundKey_11"
#define AUTOTB_TVIN_RoundKey_11  "../tv/cdatafile/c.Cipher.autotvin_RoundKey_11.dat"
// wrapc file define: "RoundKey_12"
#define AUTOTB_TVIN_RoundKey_12  "../tv/cdatafile/c.Cipher.autotvin_RoundKey_12.dat"
// wrapc file define: "RoundKey_13"
#define AUTOTB_TVIN_RoundKey_13  "../tv/cdatafile/c.Cipher.autotvin_RoundKey_13.dat"
// wrapc file define: "RoundKey_14"
#define AUTOTB_TVIN_RoundKey_14  "../tv/cdatafile/c.Cipher.autotvin_RoundKey_14.dat"
// wrapc file define: "RoundKey_15"
#define AUTOTB_TVIN_RoundKey_15  "../tv/cdatafile/c.Cipher.autotvin_RoundKey_15.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "state_0_0"
#define AUTOTB_TVOUT_PC_state_0_0  "../tv/rtldatafile/rtl.Cipher.autotvout_state_0_0.dat"
// tvout file define: "state_0_1"
#define AUTOTB_TVOUT_PC_state_0_1  "../tv/rtldatafile/rtl.Cipher.autotvout_state_0_1.dat"
// tvout file define: "state_0_2"
#define AUTOTB_TVOUT_PC_state_0_2  "../tv/rtldatafile/rtl.Cipher.autotvout_state_0_2.dat"
// tvout file define: "state_0_3"
#define AUTOTB_TVOUT_PC_state_0_3  "../tv/rtldatafile/rtl.Cipher.autotvout_state_0_3.dat"
// tvout file define: "state_1_0"
#define AUTOTB_TVOUT_PC_state_1_0  "../tv/rtldatafile/rtl.Cipher.autotvout_state_1_0.dat"
// tvout file define: "state_1_1"
#define AUTOTB_TVOUT_PC_state_1_1  "../tv/rtldatafile/rtl.Cipher.autotvout_state_1_1.dat"
// tvout file define: "state_1_2"
#define AUTOTB_TVOUT_PC_state_1_2  "../tv/rtldatafile/rtl.Cipher.autotvout_state_1_2.dat"
// tvout file define: "state_1_3"
#define AUTOTB_TVOUT_PC_state_1_3  "../tv/rtldatafile/rtl.Cipher.autotvout_state_1_3.dat"
// tvout file define: "state_2_0"
#define AUTOTB_TVOUT_PC_state_2_0  "../tv/rtldatafile/rtl.Cipher.autotvout_state_2_0.dat"
// tvout file define: "state_2_1"
#define AUTOTB_TVOUT_PC_state_2_1  "../tv/rtldatafile/rtl.Cipher.autotvout_state_2_1.dat"
// tvout file define: "state_2_2"
#define AUTOTB_TVOUT_PC_state_2_2  "../tv/rtldatafile/rtl.Cipher.autotvout_state_2_2.dat"
// tvout file define: "state_2_3"
#define AUTOTB_TVOUT_PC_state_2_3  "../tv/rtldatafile/rtl.Cipher.autotvout_state_2_3.dat"
// tvout file define: "state_3_0"
#define AUTOTB_TVOUT_PC_state_3_0  "../tv/rtldatafile/rtl.Cipher.autotvout_state_3_0.dat"
// tvout file define: "state_3_1"
#define AUTOTB_TVOUT_PC_state_3_1  "../tv/rtldatafile/rtl.Cipher.autotvout_state_3_1.dat"
// tvout file define: "state_3_2"
#define AUTOTB_TVOUT_PC_state_3_2  "../tv/rtldatafile/rtl.Cipher.autotvout_state_3_2.dat"
// tvout file define: "state_3_3"
#define AUTOTB_TVOUT_PC_state_3_3  "../tv/rtldatafile/rtl.Cipher.autotvout_state_3_3.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			state_0_0_depth = 0;
			state_0_1_depth = 0;
			state_0_2_depth = 0;
			state_0_3_depth = 0;
			state_1_0_depth = 0;
			state_1_1_depth = 0;
			state_1_2_depth = 0;
			state_1_3_depth = 0;
			state_2_0_depth = 0;
			state_2_1_depth = 0;
			state_2_2_depth = 0;
			state_2_3_depth = 0;
			state_3_0_depth = 0;
			state_3_1_depth = 0;
			state_3_2_depth = 0;
			state_3_3_depth = 0;
			RoundKey_0_depth = 0;
			RoundKey_1_depth = 0;
			RoundKey_2_depth = 0;
			RoundKey_3_depth = 0;
			RoundKey_4_depth = 0;
			RoundKey_5_depth = 0;
			RoundKey_6_depth = 0;
			RoundKey_7_depth = 0;
			RoundKey_8_depth = 0;
			RoundKey_9_depth = 0;
			RoundKey_10_depth = 0;
			RoundKey_11_depth = 0;
			RoundKey_12_depth = 0;
			RoundKey_13_depth = 0;
			RoundKey_14_depth = 0;
			RoundKey_15_depth = 0;
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
			total_list << "{state_0_0 " << state_0_0_depth << "}\n";
			total_list << "{state_0_1 " << state_0_1_depth << "}\n";
			total_list << "{state_0_2 " << state_0_2_depth << "}\n";
			total_list << "{state_0_3 " << state_0_3_depth << "}\n";
			total_list << "{state_1_0 " << state_1_0_depth << "}\n";
			total_list << "{state_1_1 " << state_1_1_depth << "}\n";
			total_list << "{state_1_2 " << state_1_2_depth << "}\n";
			total_list << "{state_1_3 " << state_1_3_depth << "}\n";
			total_list << "{state_2_0 " << state_2_0_depth << "}\n";
			total_list << "{state_2_1 " << state_2_1_depth << "}\n";
			total_list << "{state_2_2 " << state_2_2_depth << "}\n";
			total_list << "{state_2_3 " << state_2_3_depth << "}\n";
			total_list << "{state_3_0 " << state_3_0_depth << "}\n";
			total_list << "{state_3_1 " << state_3_1_depth << "}\n";
			total_list << "{state_3_2 " << state_3_2_depth << "}\n";
			total_list << "{state_3_3 " << state_3_3_depth << "}\n";
			total_list << "{RoundKey_0 " << RoundKey_0_depth << "}\n";
			total_list << "{RoundKey_1 " << RoundKey_1_depth << "}\n";
			total_list << "{RoundKey_2 " << RoundKey_2_depth << "}\n";
			total_list << "{RoundKey_3 " << RoundKey_3_depth << "}\n";
			total_list << "{RoundKey_4 " << RoundKey_4_depth << "}\n";
			total_list << "{RoundKey_5 " << RoundKey_5_depth << "}\n";
			total_list << "{RoundKey_6 " << RoundKey_6_depth << "}\n";
			total_list << "{RoundKey_7 " << RoundKey_7_depth << "}\n";
			total_list << "{RoundKey_8 " << RoundKey_8_depth << "}\n";
			total_list << "{RoundKey_9 " << RoundKey_9_depth << "}\n";
			total_list << "{RoundKey_10 " << RoundKey_10_depth << "}\n";
			total_list << "{RoundKey_11 " << RoundKey_11_depth << "}\n";
			total_list << "{RoundKey_12 " << RoundKey_12_depth << "}\n";
			total_list << "{RoundKey_13 " << RoundKey_13_depth << "}\n";
			total_list << "{RoundKey_14 " << RoundKey_14_depth << "}\n";
			total_list << "{RoundKey_15 " << RoundKey_15_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int state_0_0_depth;
		int state_0_1_depth;
		int state_0_2_depth;
		int state_0_3_depth;
		int state_1_0_depth;
		int state_1_1_depth;
		int state_1_2_depth;
		int state_1_3_depth;
		int state_2_0_depth;
		int state_2_1_depth;
		int state_2_2_depth;
		int state_2_3_depth;
		int state_3_0_depth;
		int state_3_1_depth;
		int state_3_2_depth;
		int state_3_3_depth;
		int RoundKey_0_depth;
		int RoundKey_1_depth;
		int RoundKey_2_depth;
		int RoundKey_3_depth;
		int RoundKey_4_depth;
		int RoundKey_5_depth;
		int RoundKey_6_depth;
		int RoundKey_7_depth;
		int RoundKey_8_depth;
		int RoundKey_9_depth;
		int RoundKey_10_depth;
		int RoundKey_11_depth;
		int RoundKey_12_depth;
		int RoundKey_13_depth;
		int RoundKey_14_depth;
		int RoundKey_15_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern "C" void Cipher (
char state[4][4],
char RoundKey[240]);

extern "C" void AESL_WRAP_Cipher (
char state[4][4],
char RoundKey[240])
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


		// output port post check: "state_0_0"
		aesl_fh.read(AUTOTB_TVOUT_PC_state_0_0, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_state_0_0, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_state_0_0, AESL_token); // data

			sc_bv<8> *state_0_0_pc_buffer = new sc_bv<8>[1];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'state_0_0', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'state_0_0', possible cause: There are uninitialized variables in the C design." << endl;
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
					state_0_0_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_state_0_0, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_state_0_0))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: state_0_0
				{
					// bitslice(7, 0)
					// {
						// celement: state(7, 0)
						// {
							sc_lv<8>* state_lv0_0_0_2_lv1_0_0_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: state(7, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								// carray: (0) => (0) @ (2)
								for (int i_1 = 0; i_1 <= 0; i_1 += 2)
								{
									if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
									{
										state_lv0_0_0_2_lv1_0_0_2[hls_map_index].range(7, 0) = sc_bv<8>(state_0_0_pc_buffer[hls_map_index].range(7, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: state(7, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								// carray: (0) => (0) @ (2)
								for (int i_1 = 0; i_1 <= 0; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : state[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : state[0][0]
									// output_left_conversion : state[i_0][i_1]
									// output_type_conversion : (state_lv0_0_0_2_lv1_0_0_2[hls_map_index]).to_uint64()
									if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
									{
										state[i_0][i_1] = (state_lv0_0_0_2_lv1_0_0_2[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] state_0_0_pc_buffer;
		}

		// output port post check: "state_0_1"
		aesl_fh.read(AUTOTB_TVOUT_PC_state_0_1, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_state_0_1, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_state_0_1, AESL_token); // data

			sc_bv<8> *state_0_1_pc_buffer = new sc_bv<8>[1];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'state_0_1', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'state_0_1', possible cause: There are uninitialized variables in the C design." << endl;
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
					state_0_1_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_state_0_1, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_state_0_1))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: state_0_1
				{
					// bitslice(7, 0)
					// {
						// celement: state(7, 0)
						// {
							sc_lv<8>* state_lv0_0_0_2_lv1_1_1_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: state(7, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								// carray: (1) => (1) @ (2)
								for (int i_1 = 1; i_1 <= 1; i_1 += 2)
								{
									if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
									{
										state_lv0_0_0_2_lv1_1_1_2[hls_map_index].range(7, 0) = sc_bv<8>(state_0_1_pc_buffer[hls_map_index].range(7, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: state(7, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								// carray: (1) => (1) @ (2)
								for (int i_1 = 1; i_1 <= 1; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : state[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : state[0][0]
									// output_left_conversion : state[i_0][i_1]
									// output_type_conversion : (state_lv0_0_0_2_lv1_1_1_2[hls_map_index]).to_uint64()
									if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
									{
										state[i_0][i_1] = (state_lv0_0_0_2_lv1_1_1_2[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] state_0_1_pc_buffer;
		}

		// output port post check: "state_0_2"
		aesl_fh.read(AUTOTB_TVOUT_PC_state_0_2, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_state_0_2, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_state_0_2, AESL_token); // data

			sc_bv<8> *state_0_2_pc_buffer = new sc_bv<8>[1];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'state_0_2', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'state_0_2', possible cause: There are uninitialized variables in the C design." << endl;
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
					state_0_2_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_state_0_2, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_state_0_2))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: state_0_2
				{
					// bitslice(7, 0)
					// {
						// celement: state(7, 0)
						// {
							sc_lv<8>* state_lv0_0_0_2_lv1_2_2_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: state(7, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								// carray: (2) => (2) @ (2)
								for (int i_1 = 2; i_1 <= 2; i_1 += 2)
								{
									if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
									{
										state_lv0_0_0_2_lv1_2_2_2[hls_map_index].range(7, 0) = sc_bv<8>(state_0_2_pc_buffer[hls_map_index].range(7, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: state(7, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								// carray: (2) => (2) @ (2)
								for (int i_1 = 2; i_1 <= 2; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : state[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : state[0][0]
									// output_left_conversion : state[i_0][i_1]
									// output_type_conversion : (state_lv0_0_0_2_lv1_2_2_2[hls_map_index]).to_uint64()
									if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
									{
										state[i_0][i_1] = (state_lv0_0_0_2_lv1_2_2_2[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] state_0_2_pc_buffer;
		}

		// output port post check: "state_0_3"
		aesl_fh.read(AUTOTB_TVOUT_PC_state_0_3, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_state_0_3, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_state_0_3, AESL_token); // data

			sc_bv<8> *state_0_3_pc_buffer = new sc_bv<8>[1];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'state_0_3', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'state_0_3', possible cause: There are uninitialized variables in the C design." << endl;
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
					state_0_3_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_state_0_3, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_state_0_3))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: state_0_3
				{
					// bitslice(7, 0)
					// {
						// celement: state(7, 0)
						// {
							sc_lv<8>* state_lv0_0_0_2_lv1_3_3_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: state(7, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								// carray: (3) => (3) @ (2)
								for (int i_1 = 3; i_1 <= 3; i_1 += 2)
								{
									if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
									{
										state_lv0_0_0_2_lv1_3_3_2[hls_map_index].range(7, 0) = sc_bv<8>(state_0_3_pc_buffer[hls_map_index].range(7, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: state(7, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								// carray: (3) => (3) @ (2)
								for (int i_1 = 3; i_1 <= 3; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : state[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : state[0][0]
									// output_left_conversion : state[i_0][i_1]
									// output_type_conversion : (state_lv0_0_0_2_lv1_3_3_2[hls_map_index]).to_uint64()
									if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
									{
										state[i_0][i_1] = (state_lv0_0_0_2_lv1_3_3_2[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] state_0_3_pc_buffer;
		}

		// output port post check: "state_1_0"
		aesl_fh.read(AUTOTB_TVOUT_PC_state_1_0, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_state_1_0, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_state_1_0, AESL_token); // data

			sc_bv<8> *state_1_0_pc_buffer = new sc_bv<8>[1];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'state_1_0', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'state_1_0', possible cause: There are uninitialized variables in the C design." << endl;
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
					state_1_0_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_state_1_0, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_state_1_0))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: state_1_0
				{
					// bitslice(7, 0)
					// {
						// celement: state(7, 0)
						// {
							sc_lv<8>* state_lv0_1_1_2_lv1_0_0_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: state(7, 0)
						{
							// carray: (1) => (1) @ (2)
							for (int i_0 = 1; i_0 <= 1; i_0 += 2)
							{
								// carray: (0) => (0) @ (2)
								for (int i_1 = 0; i_1 <= 0; i_1 += 2)
								{
									if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
									{
										state_lv0_1_1_2_lv1_0_0_2[hls_map_index].range(7, 0) = sc_bv<8>(state_1_0_pc_buffer[hls_map_index].range(7, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: state(7, 0)
						{
							// carray: (1) => (1) @ (2)
							for (int i_0 = 1; i_0 <= 1; i_0 += 2)
							{
								// carray: (0) => (0) @ (2)
								for (int i_1 = 0; i_1 <= 0; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : state[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : state[0][0]
									// output_left_conversion : state[i_0][i_1]
									// output_type_conversion : (state_lv0_1_1_2_lv1_0_0_2[hls_map_index]).to_uint64()
									if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
									{
										state[i_0][i_1] = (state_lv0_1_1_2_lv1_0_0_2[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] state_1_0_pc_buffer;
		}

		// output port post check: "state_1_1"
		aesl_fh.read(AUTOTB_TVOUT_PC_state_1_1, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_state_1_1, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_state_1_1, AESL_token); // data

			sc_bv<8> *state_1_1_pc_buffer = new sc_bv<8>[1];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'state_1_1', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'state_1_1', possible cause: There are uninitialized variables in the C design." << endl;
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
					state_1_1_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_state_1_1, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_state_1_1))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: state_1_1
				{
					// bitslice(7, 0)
					// {
						// celement: state(7, 0)
						// {
							sc_lv<8>* state_lv0_1_1_2_lv1_1_1_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: state(7, 0)
						{
							// carray: (1) => (1) @ (2)
							for (int i_0 = 1; i_0 <= 1; i_0 += 2)
							{
								// carray: (1) => (1) @ (2)
								for (int i_1 = 1; i_1 <= 1; i_1 += 2)
								{
									if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
									{
										state_lv0_1_1_2_lv1_1_1_2[hls_map_index].range(7, 0) = sc_bv<8>(state_1_1_pc_buffer[hls_map_index].range(7, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: state(7, 0)
						{
							// carray: (1) => (1) @ (2)
							for (int i_0 = 1; i_0 <= 1; i_0 += 2)
							{
								// carray: (1) => (1) @ (2)
								for (int i_1 = 1; i_1 <= 1; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : state[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : state[0][0]
									// output_left_conversion : state[i_0][i_1]
									// output_type_conversion : (state_lv0_1_1_2_lv1_1_1_2[hls_map_index]).to_uint64()
									if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
									{
										state[i_0][i_1] = (state_lv0_1_1_2_lv1_1_1_2[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] state_1_1_pc_buffer;
		}

		// output port post check: "state_1_2"
		aesl_fh.read(AUTOTB_TVOUT_PC_state_1_2, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_state_1_2, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_state_1_2, AESL_token); // data

			sc_bv<8> *state_1_2_pc_buffer = new sc_bv<8>[1];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'state_1_2', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'state_1_2', possible cause: There are uninitialized variables in the C design." << endl;
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
					state_1_2_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_state_1_2, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_state_1_2))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: state_1_2
				{
					// bitslice(7, 0)
					// {
						// celement: state(7, 0)
						// {
							sc_lv<8>* state_lv0_1_1_2_lv1_2_2_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: state(7, 0)
						{
							// carray: (1) => (1) @ (2)
							for (int i_0 = 1; i_0 <= 1; i_0 += 2)
							{
								// carray: (2) => (2) @ (2)
								for (int i_1 = 2; i_1 <= 2; i_1 += 2)
								{
									if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
									{
										state_lv0_1_1_2_lv1_2_2_2[hls_map_index].range(7, 0) = sc_bv<8>(state_1_2_pc_buffer[hls_map_index].range(7, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: state(7, 0)
						{
							// carray: (1) => (1) @ (2)
							for (int i_0 = 1; i_0 <= 1; i_0 += 2)
							{
								// carray: (2) => (2) @ (2)
								for (int i_1 = 2; i_1 <= 2; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : state[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : state[0][0]
									// output_left_conversion : state[i_0][i_1]
									// output_type_conversion : (state_lv0_1_1_2_lv1_2_2_2[hls_map_index]).to_uint64()
									if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
									{
										state[i_0][i_1] = (state_lv0_1_1_2_lv1_2_2_2[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] state_1_2_pc_buffer;
		}

		// output port post check: "state_1_3"
		aesl_fh.read(AUTOTB_TVOUT_PC_state_1_3, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_state_1_3, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_state_1_3, AESL_token); // data

			sc_bv<8> *state_1_3_pc_buffer = new sc_bv<8>[1];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'state_1_3', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'state_1_3', possible cause: There are uninitialized variables in the C design." << endl;
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
					state_1_3_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_state_1_3, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_state_1_3))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: state_1_3
				{
					// bitslice(7, 0)
					// {
						// celement: state(7, 0)
						// {
							sc_lv<8>* state_lv0_1_1_2_lv1_3_3_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: state(7, 0)
						{
							// carray: (1) => (1) @ (2)
							for (int i_0 = 1; i_0 <= 1; i_0 += 2)
							{
								// carray: (3) => (3) @ (2)
								for (int i_1 = 3; i_1 <= 3; i_1 += 2)
								{
									if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
									{
										state_lv0_1_1_2_lv1_3_3_2[hls_map_index].range(7, 0) = sc_bv<8>(state_1_3_pc_buffer[hls_map_index].range(7, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: state(7, 0)
						{
							// carray: (1) => (1) @ (2)
							for (int i_0 = 1; i_0 <= 1; i_0 += 2)
							{
								// carray: (3) => (3) @ (2)
								for (int i_1 = 3; i_1 <= 3; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : state[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : state[0][0]
									// output_left_conversion : state[i_0][i_1]
									// output_type_conversion : (state_lv0_1_1_2_lv1_3_3_2[hls_map_index]).to_uint64()
									if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
									{
										state[i_0][i_1] = (state_lv0_1_1_2_lv1_3_3_2[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] state_1_3_pc_buffer;
		}

		// output port post check: "state_2_0"
		aesl_fh.read(AUTOTB_TVOUT_PC_state_2_0, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_state_2_0, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_state_2_0, AESL_token); // data

			sc_bv<8> *state_2_0_pc_buffer = new sc_bv<8>[1];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'state_2_0', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'state_2_0', possible cause: There are uninitialized variables in the C design." << endl;
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
					state_2_0_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_state_2_0, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_state_2_0))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: state_2_0
				{
					// bitslice(7, 0)
					// {
						// celement: state(7, 0)
						// {
							sc_lv<8>* state_lv0_2_2_2_lv1_0_0_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: state(7, 0)
						{
							// carray: (2) => (2) @ (2)
							for (int i_0 = 2; i_0 <= 2; i_0 += 2)
							{
								// carray: (0) => (0) @ (2)
								for (int i_1 = 0; i_1 <= 0; i_1 += 2)
								{
									if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
									{
										state_lv0_2_2_2_lv1_0_0_2[hls_map_index].range(7, 0) = sc_bv<8>(state_2_0_pc_buffer[hls_map_index].range(7, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: state(7, 0)
						{
							// carray: (2) => (2) @ (2)
							for (int i_0 = 2; i_0 <= 2; i_0 += 2)
							{
								// carray: (0) => (0) @ (2)
								for (int i_1 = 0; i_1 <= 0; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : state[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : state[0][0]
									// output_left_conversion : state[i_0][i_1]
									// output_type_conversion : (state_lv0_2_2_2_lv1_0_0_2[hls_map_index]).to_uint64()
									if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
									{
										state[i_0][i_1] = (state_lv0_2_2_2_lv1_0_0_2[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] state_2_0_pc_buffer;
		}

		// output port post check: "state_2_1"
		aesl_fh.read(AUTOTB_TVOUT_PC_state_2_1, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_state_2_1, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_state_2_1, AESL_token); // data

			sc_bv<8> *state_2_1_pc_buffer = new sc_bv<8>[1];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'state_2_1', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'state_2_1', possible cause: There are uninitialized variables in the C design." << endl;
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
					state_2_1_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_state_2_1, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_state_2_1))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: state_2_1
				{
					// bitslice(7, 0)
					// {
						// celement: state(7, 0)
						// {
							sc_lv<8>* state_lv0_2_2_2_lv1_1_1_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: state(7, 0)
						{
							// carray: (2) => (2) @ (2)
							for (int i_0 = 2; i_0 <= 2; i_0 += 2)
							{
								// carray: (1) => (1) @ (2)
								for (int i_1 = 1; i_1 <= 1; i_1 += 2)
								{
									if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
									{
										state_lv0_2_2_2_lv1_1_1_2[hls_map_index].range(7, 0) = sc_bv<8>(state_2_1_pc_buffer[hls_map_index].range(7, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: state(7, 0)
						{
							// carray: (2) => (2) @ (2)
							for (int i_0 = 2; i_0 <= 2; i_0 += 2)
							{
								// carray: (1) => (1) @ (2)
								for (int i_1 = 1; i_1 <= 1; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : state[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : state[0][0]
									// output_left_conversion : state[i_0][i_1]
									// output_type_conversion : (state_lv0_2_2_2_lv1_1_1_2[hls_map_index]).to_uint64()
									if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
									{
										state[i_0][i_1] = (state_lv0_2_2_2_lv1_1_1_2[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] state_2_1_pc_buffer;
		}

		// output port post check: "state_2_2"
		aesl_fh.read(AUTOTB_TVOUT_PC_state_2_2, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_state_2_2, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_state_2_2, AESL_token); // data

			sc_bv<8> *state_2_2_pc_buffer = new sc_bv<8>[1];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'state_2_2', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'state_2_2', possible cause: There are uninitialized variables in the C design." << endl;
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
					state_2_2_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_state_2_2, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_state_2_2))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: state_2_2
				{
					// bitslice(7, 0)
					// {
						// celement: state(7, 0)
						// {
							sc_lv<8>* state_lv0_2_2_2_lv1_2_2_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: state(7, 0)
						{
							// carray: (2) => (2) @ (2)
							for (int i_0 = 2; i_0 <= 2; i_0 += 2)
							{
								// carray: (2) => (2) @ (2)
								for (int i_1 = 2; i_1 <= 2; i_1 += 2)
								{
									if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
									{
										state_lv0_2_2_2_lv1_2_2_2[hls_map_index].range(7, 0) = sc_bv<8>(state_2_2_pc_buffer[hls_map_index].range(7, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: state(7, 0)
						{
							// carray: (2) => (2) @ (2)
							for (int i_0 = 2; i_0 <= 2; i_0 += 2)
							{
								// carray: (2) => (2) @ (2)
								for (int i_1 = 2; i_1 <= 2; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : state[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : state[0][0]
									// output_left_conversion : state[i_0][i_1]
									// output_type_conversion : (state_lv0_2_2_2_lv1_2_2_2[hls_map_index]).to_uint64()
									if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
									{
										state[i_0][i_1] = (state_lv0_2_2_2_lv1_2_2_2[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] state_2_2_pc_buffer;
		}

		// output port post check: "state_2_3"
		aesl_fh.read(AUTOTB_TVOUT_PC_state_2_3, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_state_2_3, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_state_2_3, AESL_token); // data

			sc_bv<8> *state_2_3_pc_buffer = new sc_bv<8>[1];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'state_2_3', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'state_2_3', possible cause: There are uninitialized variables in the C design." << endl;
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
					state_2_3_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_state_2_3, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_state_2_3))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: state_2_3
				{
					// bitslice(7, 0)
					// {
						// celement: state(7, 0)
						// {
							sc_lv<8>* state_lv0_2_2_2_lv1_3_3_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: state(7, 0)
						{
							// carray: (2) => (2) @ (2)
							for (int i_0 = 2; i_0 <= 2; i_0 += 2)
							{
								// carray: (3) => (3) @ (2)
								for (int i_1 = 3; i_1 <= 3; i_1 += 2)
								{
									if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
									{
										state_lv0_2_2_2_lv1_3_3_2[hls_map_index].range(7, 0) = sc_bv<8>(state_2_3_pc_buffer[hls_map_index].range(7, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: state(7, 0)
						{
							// carray: (2) => (2) @ (2)
							for (int i_0 = 2; i_0 <= 2; i_0 += 2)
							{
								// carray: (3) => (3) @ (2)
								for (int i_1 = 3; i_1 <= 3; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : state[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : state[0][0]
									// output_left_conversion : state[i_0][i_1]
									// output_type_conversion : (state_lv0_2_2_2_lv1_3_3_2[hls_map_index]).to_uint64()
									if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
									{
										state[i_0][i_1] = (state_lv0_2_2_2_lv1_3_3_2[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] state_2_3_pc_buffer;
		}

		// output port post check: "state_3_0"
		aesl_fh.read(AUTOTB_TVOUT_PC_state_3_0, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_state_3_0, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_state_3_0, AESL_token); // data

			sc_bv<8> *state_3_0_pc_buffer = new sc_bv<8>[1];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'state_3_0', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'state_3_0', possible cause: There are uninitialized variables in the C design." << endl;
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
					state_3_0_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_state_3_0, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_state_3_0))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: state_3_0
				{
					// bitslice(7, 0)
					// {
						// celement: state(7, 0)
						// {
							sc_lv<8>* state_lv0_3_3_2_lv1_0_0_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: state(7, 0)
						{
							// carray: (3) => (3) @ (2)
							for (int i_0 = 3; i_0 <= 3; i_0 += 2)
							{
								// carray: (0) => (0) @ (2)
								for (int i_1 = 0; i_1 <= 0; i_1 += 2)
								{
									if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
									{
										state_lv0_3_3_2_lv1_0_0_2[hls_map_index].range(7, 0) = sc_bv<8>(state_3_0_pc_buffer[hls_map_index].range(7, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: state(7, 0)
						{
							// carray: (3) => (3) @ (2)
							for (int i_0 = 3; i_0 <= 3; i_0 += 2)
							{
								// carray: (0) => (0) @ (2)
								for (int i_1 = 0; i_1 <= 0; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : state[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : state[0][0]
									// output_left_conversion : state[i_0][i_1]
									// output_type_conversion : (state_lv0_3_3_2_lv1_0_0_2[hls_map_index]).to_uint64()
									if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
									{
										state[i_0][i_1] = (state_lv0_3_3_2_lv1_0_0_2[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] state_3_0_pc_buffer;
		}

		// output port post check: "state_3_1"
		aesl_fh.read(AUTOTB_TVOUT_PC_state_3_1, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_state_3_1, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_state_3_1, AESL_token); // data

			sc_bv<8> *state_3_1_pc_buffer = new sc_bv<8>[1];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'state_3_1', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'state_3_1', possible cause: There are uninitialized variables in the C design." << endl;
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
					state_3_1_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_state_3_1, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_state_3_1))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: state_3_1
				{
					// bitslice(7, 0)
					// {
						// celement: state(7, 0)
						// {
							sc_lv<8>* state_lv0_3_3_2_lv1_1_1_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: state(7, 0)
						{
							// carray: (3) => (3) @ (2)
							for (int i_0 = 3; i_0 <= 3; i_0 += 2)
							{
								// carray: (1) => (1) @ (2)
								for (int i_1 = 1; i_1 <= 1; i_1 += 2)
								{
									if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
									{
										state_lv0_3_3_2_lv1_1_1_2[hls_map_index].range(7, 0) = sc_bv<8>(state_3_1_pc_buffer[hls_map_index].range(7, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: state(7, 0)
						{
							// carray: (3) => (3) @ (2)
							for (int i_0 = 3; i_0 <= 3; i_0 += 2)
							{
								// carray: (1) => (1) @ (2)
								for (int i_1 = 1; i_1 <= 1; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : state[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : state[0][0]
									// output_left_conversion : state[i_0][i_1]
									// output_type_conversion : (state_lv0_3_3_2_lv1_1_1_2[hls_map_index]).to_uint64()
									if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
									{
										state[i_0][i_1] = (state_lv0_3_3_2_lv1_1_1_2[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] state_3_1_pc_buffer;
		}

		// output port post check: "state_3_2"
		aesl_fh.read(AUTOTB_TVOUT_PC_state_3_2, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_state_3_2, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_state_3_2, AESL_token); // data

			sc_bv<8> *state_3_2_pc_buffer = new sc_bv<8>[1];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'state_3_2', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'state_3_2', possible cause: There are uninitialized variables in the C design." << endl;
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
					state_3_2_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_state_3_2, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_state_3_2))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: state_3_2
				{
					// bitslice(7, 0)
					// {
						// celement: state(7, 0)
						// {
							sc_lv<8>* state_lv0_3_3_2_lv1_2_2_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: state(7, 0)
						{
							// carray: (3) => (3) @ (2)
							for (int i_0 = 3; i_0 <= 3; i_0 += 2)
							{
								// carray: (2) => (2) @ (2)
								for (int i_1 = 2; i_1 <= 2; i_1 += 2)
								{
									if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
									{
										state_lv0_3_3_2_lv1_2_2_2[hls_map_index].range(7, 0) = sc_bv<8>(state_3_2_pc_buffer[hls_map_index].range(7, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: state(7, 0)
						{
							// carray: (3) => (3) @ (2)
							for (int i_0 = 3; i_0 <= 3; i_0 += 2)
							{
								// carray: (2) => (2) @ (2)
								for (int i_1 = 2; i_1 <= 2; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : state[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : state[0][0]
									// output_left_conversion : state[i_0][i_1]
									// output_type_conversion : (state_lv0_3_3_2_lv1_2_2_2[hls_map_index]).to_uint64()
									if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
									{
										state[i_0][i_1] = (state_lv0_3_3_2_lv1_2_2_2[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] state_3_2_pc_buffer;
		}

		// output port post check: "state_3_3"
		aesl_fh.read(AUTOTB_TVOUT_PC_state_3_3, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_state_3_3, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_state_3_3, AESL_token); // data

			sc_bv<8> *state_3_3_pc_buffer = new sc_bv<8>[1];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'state_3_3', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'state_3_3', possible cause: There are uninitialized variables in the C design." << endl;
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
					state_3_3_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_state_3_3, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_state_3_3))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: state_3_3
				{
					// bitslice(7, 0)
					// {
						// celement: state(7, 0)
						// {
							sc_lv<8>* state_lv0_3_3_2_lv1_3_3_2 = new sc_lv<8>[1];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: state(7, 0)
						{
							// carray: (3) => (3) @ (2)
							for (int i_0 = 3; i_0 <= 3; i_0 += 2)
							{
								// carray: (3) => (3) @ (2)
								for (int i_1 = 3; i_1 <= 3; i_1 += 2)
								{
									if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
									{
										state_lv0_3_3_2_lv1_3_3_2[hls_map_index].range(7, 0) = sc_bv<8>(state_3_3_pc_buffer[hls_map_index].range(7, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: state(7, 0)
						{
							// carray: (3) => (3) @ (2)
							for (int i_0 = 3; i_0 <= 3; i_0 += 2)
							{
								// carray: (3) => (3) @ (2)
								for (int i_1 = 3; i_1 <= 3; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : state[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : state[0][0]
									// output_left_conversion : state[i_0][i_1]
									// output_type_conversion : (state_lv0_3_3_2_lv1_3_3_2[hls_map_index]).to_uint64()
									if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
									{
										state[i_0][i_1] = (state_lv0_3_3_2_lv1_3_3_2[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] state_3_3_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "state_0_0"
		char* tvin_state_0_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_state_0_0);
		char* tvout_state_0_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_state_0_0);

		// "state_0_1"
		char* tvin_state_0_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_state_0_1);
		char* tvout_state_0_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_state_0_1);

		// "state_0_2"
		char* tvin_state_0_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_state_0_2);
		char* tvout_state_0_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_state_0_2);

		// "state_0_3"
		char* tvin_state_0_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_state_0_3);
		char* tvout_state_0_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_state_0_3);

		// "state_1_0"
		char* tvin_state_1_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_state_1_0);
		char* tvout_state_1_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_state_1_0);

		// "state_1_1"
		char* tvin_state_1_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_state_1_1);
		char* tvout_state_1_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_state_1_1);

		// "state_1_2"
		char* tvin_state_1_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_state_1_2);
		char* tvout_state_1_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_state_1_2);

		// "state_1_3"
		char* tvin_state_1_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_state_1_3);
		char* tvout_state_1_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_state_1_3);

		// "state_2_0"
		char* tvin_state_2_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_state_2_0);
		char* tvout_state_2_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_state_2_0);

		// "state_2_1"
		char* tvin_state_2_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_state_2_1);
		char* tvout_state_2_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_state_2_1);

		// "state_2_2"
		char* tvin_state_2_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_state_2_2);
		char* tvout_state_2_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_state_2_2);

		// "state_2_3"
		char* tvin_state_2_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_state_2_3);
		char* tvout_state_2_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_state_2_3);

		// "state_3_0"
		char* tvin_state_3_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_state_3_0);
		char* tvout_state_3_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_state_3_0);

		// "state_3_1"
		char* tvin_state_3_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_state_3_1);
		char* tvout_state_3_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_state_3_1);

		// "state_3_2"
		char* tvin_state_3_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_state_3_2);
		char* tvout_state_3_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_state_3_2);

		// "state_3_3"
		char* tvin_state_3_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_state_3_3);
		char* tvout_state_3_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_state_3_3);

		// "RoundKey_0"
		char* tvin_RoundKey_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_RoundKey_0);

		// "RoundKey_1"
		char* tvin_RoundKey_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_RoundKey_1);

		// "RoundKey_2"
		char* tvin_RoundKey_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_RoundKey_2);

		// "RoundKey_3"
		char* tvin_RoundKey_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_RoundKey_3);

		// "RoundKey_4"
		char* tvin_RoundKey_4 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_RoundKey_4);

		// "RoundKey_5"
		char* tvin_RoundKey_5 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_RoundKey_5);

		// "RoundKey_6"
		char* tvin_RoundKey_6 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_RoundKey_6);

		// "RoundKey_7"
		char* tvin_RoundKey_7 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_RoundKey_7);

		// "RoundKey_8"
		char* tvin_RoundKey_8 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_RoundKey_8);

		// "RoundKey_9"
		char* tvin_RoundKey_9 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_RoundKey_9);

		// "RoundKey_10"
		char* tvin_RoundKey_10 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_RoundKey_10);

		// "RoundKey_11"
		char* tvin_RoundKey_11 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_RoundKey_11);

		// "RoundKey_12"
		char* tvin_RoundKey_12 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_RoundKey_12);

		// "RoundKey_13"
		char* tvin_RoundKey_13 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_RoundKey_13);

		// "RoundKey_14"
		char* tvin_RoundKey_14 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_RoundKey_14);

		// "RoundKey_15"
		char* tvin_RoundKey_15 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_RoundKey_15);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_state_0_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_state_0_0, tvin_state_0_0);

		sc_bv<8>* state_0_0_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: state_0_0
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: state(7, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// carray: (0) => (0) @ (2)
						for (int i_1 = 0; i_1 <= 0; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : state[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : state[0][0]
							// regulate_c_name       : state
							// input_type_conversion : state[i_0][i_1]
							if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> state_tmp_mem;
								state_tmp_mem = state[i_0][i_1];
								state_0_0_tvin_wrapc_buffer[hls_map_index].range(7, 0) = state_tmp_mem.range(7, 0);
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
			sprintf(tvin_state_0_0, "%s\n", (state_0_0_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_state_0_0, tvin_state_0_0);
		}

		tcl_file.set_num(1, &tcl_file.state_0_0_depth);
		sprintf(tvin_state_0_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_state_0_0, tvin_state_0_0);

		// release memory allocation
		delete [] state_0_0_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_state_0_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_state_0_1, tvin_state_0_1);

		sc_bv<8>* state_0_1_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: state_0_1
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: state(7, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// carray: (1) => (1) @ (2)
						for (int i_1 = 1; i_1 <= 1; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : state[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : state[0][0]
							// regulate_c_name       : state
							// input_type_conversion : state[i_0][i_1]
							if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> state_tmp_mem;
								state_tmp_mem = state[i_0][i_1];
								state_0_1_tvin_wrapc_buffer[hls_map_index].range(7, 0) = state_tmp_mem.range(7, 0);
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
			sprintf(tvin_state_0_1, "%s\n", (state_0_1_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_state_0_1, tvin_state_0_1);
		}

		tcl_file.set_num(1, &tcl_file.state_0_1_depth);
		sprintf(tvin_state_0_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_state_0_1, tvin_state_0_1);

		// release memory allocation
		delete [] state_0_1_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_state_0_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_state_0_2, tvin_state_0_2);

		sc_bv<8>* state_0_2_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: state_0_2
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: state(7, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// carray: (2) => (2) @ (2)
						for (int i_1 = 2; i_1 <= 2; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : state[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : state[0][0]
							// regulate_c_name       : state
							// input_type_conversion : state[i_0][i_1]
							if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> state_tmp_mem;
								state_tmp_mem = state[i_0][i_1];
								state_0_2_tvin_wrapc_buffer[hls_map_index].range(7, 0) = state_tmp_mem.range(7, 0);
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
			sprintf(tvin_state_0_2, "%s\n", (state_0_2_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_state_0_2, tvin_state_0_2);
		}

		tcl_file.set_num(1, &tcl_file.state_0_2_depth);
		sprintf(tvin_state_0_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_state_0_2, tvin_state_0_2);

		// release memory allocation
		delete [] state_0_2_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_state_0_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_state_0_3, tvin_state_0_3);

		sc_bv<8>* state_0_3_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: state_0_3
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: state(7, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// carray: (3) => (3) @ (2)
						for (int i_1 = 3; i_1 <= 3; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : state[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : state[0][0]
							// regulate_c_name       : state
							// input_type_conversion : state[i_0][i_1]
							if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> state_tmp_mem;
								state_tmp_mem = state[i_0][i_1];
								state_0_3_tvin_wrapc_buffer[hls_map_index].range(7, 0) = state_tmp_mem.range(7, 0);
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
			sprintf(tvin_state_0_3, "%s\n", (state_0_3_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_state_0_3, tvin_state_0_3);
		}

		tcl_file.set_num(1, &tcl_file.state_0_3_depth);
		sprintf(tvin_state_0_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_state_0_3, tvin_state_0_3);

		// release memory allocation
		delete [] state_0_3_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_state_1_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_state_1_0, tvin_state_1_0);

		sc_bv<8>* state_1_0_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: state_1_0
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: state(7, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// carray: (0) => (0) @ (2)
						for (int i_1 = 0; i_1 <= 0; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : state[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : state[0][0]
							// regulate_c_name       : state
							// input_type_conversion : state[i_0][i_1]
							if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> state_tmp_mem;
								state_tmp_mem = state[i_0][i_1];
								state_1_0_tvin_wrapc_buffer[hls_map_index].range(7, 0) = state_tmp_mem.range(7, 0);
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
			sprintf(tvin_state_1_0, "%s\n", (state_1_0_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_state_1_0, tvin_state_1_0);
		}

		tcl_file.set_num(1, &tcl_file.state_1_0_depth);
		sprintf(tvin_state_1_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_state_1_0, tvin_state_1_0);

		// release memory allocation
		delete [] state_1_0_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_state_1_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_state_1_1, tvin_state_1_1);

		sc_bv<8>* state_1_1_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: state_1_1
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: state(7, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// carray: (1) => (1) @ (2)
						for (int i_1 = 1; i_1 <= 1; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : state[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : state[0][0]
							// regulate_c_name       : state
							// input_type_conversion : state[i_0][i_1]
							if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> state_tmp_mem;
								state_tmp_mem = state[i_0][i_1];
								state_1_1_tvin_wrapc_buffer[hls_map_index].range(7, 0) = state_tmp_mem.range(7, 0);
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
			sprintf(tvin_state_1_1, "%s\n", (state_1_1_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_state_1_1, tvin_state_1_1);
		}

		tcl_file.set_num(1, &tcl_file.state_1_1_depth);
		sprintf(tvin_state_1_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_state_1_1, tvin_state_1_1);

		// release memory allocation
		delete [] state_1_1_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_state_1_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_state_1_2, tvin_state_1_2);

		sc_bv<8>* state_1_2_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: state_1_2
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: state(7, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// carray: (2) => (2) @ (2)
						for (int i_1 = 2; i_1 <= 2; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : state[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : state[0][0]
							// regulate_c_name       : state
							// input_type_conversion : state[i_0][i_1]
							if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> state_tmp_mem;
								state_tmp_mem = state[i_0][i_1];
								state_1_2_tvin_wrapc_buffer[hls_map_index].range(7, 0) = state_tmp_mem.range(7, 0);
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
			sprintf(tvin_state_1_2, "%s\n", (state_1_2_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_state_1_2, tvin_state_1_2);
		}

		tcl_file.set_num(1, &tcl_file.state_1_2_depth);
		sprintf(tvin_state_1_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_state_1_2, tvin_state_1_2);

		// release memory allocation
		delete [] state_1_2_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_state_1_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_state_1_3, tvin_state_1_3);

		sc_bv<8>* state_1_3_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: state_1_3
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: state(7, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// carray: (3) => (3) @ (2)
						for (int i_1 = 3; i_1 <= 3; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : state[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : state[0][0]
							// regulate_c_name       : state
							// input_type_conversion : state[i_0][i_1]
							if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> state_tmp_mem;
								state_tmp_mem = state[i_0][i_1];
								state_1_3_tvin_wrapc_buffer[hls_map_index].range(7, 0) = state_tmp_mem.range(7, 0);
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
			sprintf(tvin_state_1_3, "%s\n", (state_1_3_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_state_1_3, tvin_state_1_3);
		}

		tcl_file.set_num(1, &tcl_file.state_1_3_depth);
		sprintf(tvin_state_1_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_state_1_3, tvin_state_1_3);

		// release memory allocation
		delete [] state_1_3_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_state_2_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_state_2_0, tvin_state_2_0);

		sc_bv<8>* state_2_0_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: state_2_0
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: state(7, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// carray: (0) => (0) @ (2)
						for (int i_1 = 0; i_1 <= 0; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : state[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : state[0][0]
							// regulate_c_name       : state
							// input_type_conversion : state[i_0][i_1]
							if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> state_tmp_mem;
								state_tmp_mem = state[i_0][i_1];
								state_2_0_tvin_wrapc_buffer[hls_map_index].range(7, 0) = state_tmp_mem.range(7, 0);
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
			sprintf(tvin_state_2_0, "%s\n", (state_2_0_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_state_2_0, tvin_state_2_0);
		}

		tcl_file.set_num(1, &tcl_file.state_2_0_depth);
		sprintf(tvin_state_2_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_state_2_0, tvin_state_2_0);

		// release memory allocation
		delete [] state_2_0_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_state_2_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_state_2_1, tvin_state_2_1);

		sc_bv<8>* state_2_1_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: state_2_1
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: state(7, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// carray: (1) => (1) @ (2)
						for (int i_1 = 1; i_1 <= 1; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : state[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : state[0][0]
							// regulate_c_name       : state
							// input_type_conversion : state[i_0][i_1]
							if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> state_tmp_mem;
								state_tmp_mem = state[i_0][i_1];
								state_2_1_tvin_wrapc_buffer[hls_map_index].range(7, 0) = state_tmp_mem.range(7, 0);
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
			sprintf(tvin_state_2_1, "%s\n", (state_2_1_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_state_2_1, tvin_state_2_1);
		}

		tcl_file.set_num(1, &tcl_file.state_2_1_depth);
		sprintf(tvin_state_2_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_state_2_1, tvin_state_2_1);

		// release memory allocation
		delete [] state_2_1_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_state_2_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_state_2_2, tvin_state_2_2);

		sc_bv<8>* state_2_2_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: state_2_2
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: state(7, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// carray: (2) => (2) @ (2)
						for (int i_1 = 2; i_1 <= 2; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : state[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : state[0][0]
							// regulate_c_name       : state
							// input_type_conversion : state[i_0][i_1]
							if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> state_tmp_mem;
								state_tmp_mem = state[i_0][i_1];
								state_2_2_tvin_wrapc_buffer[hls_map_index].range(7, 0) = state_tmp_mem.range(7, 0);
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
			sprintf(tvin_state_2_2, "%s\n", (state_2_2_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_state_2_2, tvin_state_2_2);
		}

		tcl_file.set_num(1, &tcl_file.state_2_2_depth);
		sprintf(tvin_state_2_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_state_2_2, tvin_state_2_2);

		// release memory allocation
		delete [] state_2_2_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_state_2_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_state_2_3, tvin_state_2_3);

		sc_bv<8>* state_2_3_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: state_2_3
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: state(7, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// carray: (3) => (3) @ (2)
						for (int i_1 = 3; i_1 <= 3; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : state[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : state[0][0]
							// regulate_c_name       : state
							// input_type_conversion : state[i_0][i_1]
							if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> state_tmp_mem;
								state_tmp_mem = state[i_0][i_1];
								state_2_3_tvin_wrapc_buffer[hls_map_index].range(7, 0) = state_tmp_mem.range(7, 0);
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
			sprintf(tvin_state_2_3, "%s\n", (state_2_3_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_state_2_3, tvin_state_2_3);
		}

		tcl_file.set_num(1, &tcl_file.state_2_3_depth);
		sprintf(tvin_state_2_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_state_2_3, tvin_state_2_3);

		// release memory allocation
		delete [] state_2_3_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_state_3_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_state_3_0, tvin_state_3_0);

		sc_bv<8>* state_3_0_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: state_3_0
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: state(7, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// carray: (0) => (0) @ (2)
						for (int i_1 = 0; i_1 <= 0; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : state[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : state[0][0]
							// regulate_c_name       : state
							// input_type_conversion : state[i_0][i_1]
							if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> state_tmp_mem;
								state_tmp_mem = state[i_0][i_1];
								state_3_0_tvin_wrapc_buffer[hls_map_index].range(7, 0) = state_tmp_mem.range(7, 0);
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
			sprintf(tvin_state_3_0, "%s\n", (state_3_0_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_state_3_0, tvin_state_3_0);
		}

		tcl_file.set_num(1, &tcl_file.state_3_0_depth);
		sprintf(tvin_state_3_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_state_3_0, tvin_state_3_0);

		// release memory allocation
		delete [] state_3_0_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_state_3_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_state_3_1, tvin_state_3_1);

		sc_bv<8>* state_3_1_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: state_3_1
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: state(7, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// carray: (1) => (1) @ (2)
						for (int i_1 = 1; i_1 <= 1; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : state[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : state[0][0]
							// regulate_c_name       : state
							// input_type_conversion : state[i_0][i_1]
							if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> state_tmp_mem;
								state_tmp_mem = state[i_0][i_1];
								state_3_1_tvin_wrapc_buffer[hls_map_index].range(7, 0) = state_tmp_mem.range(7, 0);
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
			sprintf(tvin_state_3_1, "%s\n", (state_3_1_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_state_3_1, tvin_state_3_1);
		}

		tcl_file.set_num(1, &tcl_file.state_3_1_depth);
		sprintf(tvin_state_3_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_state_3_1, tvin_state_3_1);

		// release memory allocation
		delete [] state_3_1_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_state_3_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_state_3_2, tvin_state_3_2);

		sc_bv<8>* state_3_2_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: state_3_2
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: state(7, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// carray: (2) => (2) @ (2)
						for (int i_1 = 2; i_1 <= 2; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : state[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : state[0][0]
							// regulate_c_name       : state
							// input_type_conversion : state[i_0][i_1]
							if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> state_tmp_mem;
								state_tmp_mem = state[i_0][i_1];
								state_3_2_tvin_wrapc_buffer[hls_map_index].range(7, 0) = state_tmp_mem.range(7, 0);
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
			sprintf(tvin_state_3_2, "%s\n", (state_3_2_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_state_3_2, tvin_state_3_2);
		}

		tcl_file.set_num(1, &tcl_file.state_3_2_depth);
		sprintf(tvin_state_3_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_state_3_2, tvin_state_3_2);

		// release memory allocation
		delete [] state_3_2_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_state_3_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_state_3_3, tvin_state_3_3);

		sc_bv<8>* state_3_3_tvin_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: state_3_3
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: state(7, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// carray: (3) => (3) @ (2)
						for (int i_1 = 3; i_1 <= 3; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : state[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : state[0][0]
							// regulate_c_name       : state
							// input_type_conversion : state[i_0][i_1]
							if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> state_tmp_mem;
								state_tmp_mem = state[i_0][i_1];
								state_3_3_tvin_wrapc_buffer[hls_map_index].range(7, 0) = state_tmp_mem.range(7, 0);
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
			sprintf(tvin_state_3_3, "%s\n", (state_3_3_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_state_3_3, tvin_state_3_3);
		}

		tcl_file.set_num(1, &tcl_file.state_3_3_depth);
		sprintf(tvin_state_3_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_state_3_3, tvin_state_3_3);

		// release memory allocation
		delete [] state_3_3_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_RoundKey_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_RoundKey_0, tvin_RoundKey_0);

		sc_bv<8>* RoundKey_0_tvin_wrapc_buffer = new sc_bv<8>[15];

		// RTL Name: RoundKey_0
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (0) => (224) @ (16)
					for (int i_0 = 0; i_0 <= 224; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : RoundKey[0]
						// regulate_c_name       : RoundKey
						// input_type_conversion : RoundKey[i_0]
						if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> RoundKey_tmp_mem;
							RoundKey_tmp_mem = RoundKey[i_0];
							RoundKey_0_tvin_wrapc_buffer[hls_map_index].range(7, 0) = RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 15; i++)
		{
			sprintf(tvin_RoundKey_0, "%s\n", (RoundKey_0_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_RoundKey_0, tvin_RoundKey_0);
		}

		tcl_file.set_num(15, &tcl_file.RoundKey_0_depth);
		sprintf(tvin_RoundKey_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_RoundKey_0, tvin_RoundKey_0);

		// release memory allocation
		delete [] RoundKey_0_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_RoundKey_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_RoundKey_1, tvin_RoundKey_1);

		sc_bv<8>* RoundKey_1_tvin_wrapc_buffer = new sc_bv<8>[15];

		// RTL Name: RoundKey_1
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (1) => (225) @ (16)
					for (int i_0 = 1; i_0 <= 225; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : RoundKey[0]
						// regulate_c_name       : RoundKey
						// input_type_conversion : RoundKey[i_0]
						if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> RoundKey_tmp_mem;
							RoundKey_tmp_mem = RoundKey[i_0];
							RoundKey_1_tvin_wrapc_buffer[hls_map_index].range(7, 0) = RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 15; i++)
		{
			sprintf(tvin_RoundKey_1, "%s\n", (RoundKey_1_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_RoundKey_1, tvin_RoundKey_1);
		}

		tcl_file.set_num(15, &tcl_file.RoundKey_1_depth);
		sprintf(tvin_RoundKey_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_RoundKey_1, tvin_RoundKey_1);

		// release memory allocation
		delete [] RoundKey_1_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_RoundKey_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_RoundKey_2, tvin_RoundKey_2);

		sc_bv<8>* RoundKey_2_tvin_wrapc_buffer = new sc_bv<8>[15];

		// RTL Name: RoundKey_2
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (2) => (226) @ (16)
					for (int i_0 = 2; i_0 <= 226; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : RoundKey[0]
						// regulate_c_name       : RoundKey
						// input_type_conversion : RoundKey[i_0]
						if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> RoundKey_tmp_mem;
							RoundKey_tmp_mem = RoundKey[i_0];
							RoundKey_2_tvin_wrapc_buffer[hls_map_index].range(7, 0) = RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 15; i++)
		{
			sprintf(tvin_RoundKey_2, "%s\n", (RoundKey_2_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_RoundKey_2, tvin_RoundKey_2);
		}

		tcl_file.set_num(15, &tcl_file.RoundKey_2_depth);
		sprintf(tvin_RoundKey_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_RoundKey_2, tvin_RoundKey_2);

		// release memory allocation
		delete [] RoundKey_2_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_RoundKey_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_RoundKey_3, tvin_RoundKey_3);

		sc_bv<8>* RoundKey_3_tvin_wrapc_buffer = new sc_bv<8>[15];

		// RTL Name: RoundKey_3
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (3) => (227) @ (16)
					for (int i_0 = 3; i_0 <= 227; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : RoundKey[0]
						// regulate_c_name       : RoundKey
						// input_type_conversion : RoundKey[i_0]
						if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> RoundKey_tmp_mem;
							RoundKey_tmp_mem = RoundKey[i_0];
							RoundKey_3_tvin_wrapc_buffer[hls_map_index].range(7, 0) = RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 15; i++)
		{
			sprintf(tvin_RoundKey_3, "%s\n", (RoundKey_3_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_RoundKey_3, tvin_RoundKey_3);
		}

		tcl_file.set_num(15, &tcl_file.RoundKey_3_depth);
		sprintf(tvin_RoundKey_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_RoundKey_3, tvin_RoundKey_3);

		// release memory allocation
		delete [] RoundKey_3_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_RoundKey_4, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_RoundKey_4, tvin_RoundKey_4);

		sc_bv<8>* RoundKey_4_tvin_wrapc_buffer = new sc_bv<8>[15];

		// RTL Name: RoundKey_4
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (4) => (228) @ (16)
					for (int i_0 = 4; i_0 <= 228; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : RoundKey[0]
						// regulate_c_name       : RoundKey
						// input_type_conversion : RoundKey[i_0]
						if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> RoundKey_tmp_mem;
							RoundKey_tmp_mem = RoundKey[i_0];
							RoundKey_4_tvin_wrapc_buffer[hls_map_index].range(7, 0) = RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 15; i++)
		{
			sprintf(tvin_RoundKey_4, "%s\n", (RoundKey_4_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_RoundKey_4, tvin_RoundKey_4);
		}

		tcl_file.set_num(15, &tcl_file.RoundKey_4_depth);
		sprintf(tvin_RoundKey_4, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_RoundKey_4, tvin_RoundKey_4);

		// release memory allocation
		delete [] RoundKey_4_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_RoundKey_5, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_RoundKey_5, tvin_RoundKey_5);

		sc_bv<8>* RoundKey_5_tvin_wrapc_buffer = new sc_bv<8>[15];

		// RTL Name: RoundKey_5
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (5) => (229) @ (16)
					for (int i_0 = 5; i_0 <= 229; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : RoundKey[0]
						// regulate_c_name       : RoundKey
						// input_type_conversion : RoundKey[i_0]
						if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> RoundKey_tmp_mem;
							RoundKey_tmp_mem = RoundKey[i_0];
							RoundKey_5_tvin_wrapc_buffer[hls_map_index].range(7, 0) = RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 15; i++)
		{
			sprintf(tvin_RoundKey_5, "%s\n", (RoundKey_5_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_RoundKey_5, tvin_RoundKey_5);
		}

		tcl_file.set_num(15, &tcl_file.RoundKey_5_depth);
		sprintf(tvin_RoundKey_5, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_RoundKey_5, tvin_RoundKey_5);

		// release memory allocation
		delete [] RoundKey_5_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_RoundKey_6, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_RoundKey_6, tvin_RoundKey_6);

		sc_bv<8>* RoundKey_6_tvin_wrapc_buffer = new sc_bv<8>[15];

		// RTL Name: RoundKey_6
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (6) => (230) @ (16)
					for (int i_0 = 6; i_0 <= 230; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : RoundKey[0]
						// regulate_c_name       : RoundKey
						// input_type_conversion : RoundKey[i_0]
						if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> RoundKey_tmp_mem;
							RoundKey_tmp_mem = RoundKey[i_0];
							RoundKey_6_tvin_wrapc_buffer[hls_map_index].range(7, 0) = RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 15; i++)
		{
			sprintf(tvin_RoundKey_6, "%s\n", (RoundKey_6_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_RoundKey_6, tvin_RoundKey_6);
		}

		tcl_file.set_num(15, &tcl_file.RoundKey_6_depth);
		sprintf(tvin_RoundKey_6, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_RoundKey_6, tvin_RoundKey_6);

		// release memory allocation
		delete [] RoundKey_6_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_RoundKey_7, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_RoundKey_7, tvin_RoundKey_7);

		sc_bv<8>* RoundKey_7_tvin_wrapc_buffer = new sc_bv<8>[15];

		// RTL Name: RoundKey_7
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (7) => (231) @ (16)
					for (int i_0 = 7; i_0 <= 231; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : RoundKey[0]
						// regulate_c_name       : RoundKey
						// input_type_conversion : RoundKey[i_0]
						if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> RoundKey_tmp_mem;
							RoundKey_tmp_mem = RoundKey[i_0];
							RoundKey_7_tvin_wrapc_buffer[hls_map_index].range(7, 0) = RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 15; i++)
		{
			sprintf(tvin_RoundKey_7, "%s\n", (RoundKey_7_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_RoundKey_7, tvin_RoundKey_7);
		}

		tcl_file.set_num(15, &tcl_file.RoundKey_7_depth);
		sprintf(tvin_RoundKey_7, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_RoundKey_7, tvin_RoundKey_7);

		// release memory allocation
		delete [] RoundKey_7_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_RoundKey_8, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_RoundKey_8, tvin_RoundKey_8);

		sc_bv<8>* RoundKey_8_tvin_wrapc_buffer = new sc_bv<8>[15];

		// RTL Name: RoundKey_8
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (8) => (232) @ (16)
					for (int i_0 = 8; i_0 <= 232; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : RoundKey[0]
						// regulate_c_name       : RoundKey
						// input_type_conversion : RoundKey[i_0]
						if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> RoundKey_tmp_mem;
							RoundKey_tmp_mem = RoundKey[i_0];
							RoundKey_8_tvin_wrapc_buffer[hls_map_index].range(7, 0) = RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 15; i++)
		{
			sprintf(tvin_RoundKey_8, "%s\n", (RoundKey_8_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_RoundKey_8, tvin_RoundKey_8);
		}

		tcl_file.set_num(15, &tcl_file.RoundKey_8_depth);
		sprintf(tvin_RoundKey_8, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_RoundKey_8, tvin_RoundKey_8);

		// release memory allocation
		delete [] RoundKey_8_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_RoundKey_9, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_RoundKey_9, tvin_RoundKey_9);

		sc_bv<8>* RoundKey_9_tvin_wrapc_buffer = new sc_bv<8>[15];

		// RTL Name: RoundKey_9
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (9) => (233) @ (16)
					for (int i_0 = 9; i_0 <= 233; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : RoundKey[0]
						// regulate_c_name       : RoundKey
						// input_type_conversion : RoundKey[i_0]
						if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> RoundKey_tmp_mem;
							RoundKey_tmp_mem = RoundKey[i_0];
							RoundKey_9_tvin_wrapc_buffer[hls_map_index].range(7, 0) = RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 15; i++)
		{
			sprintf(tvin_RoundKey_9, "%s\n", (RoundKey_9_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_RoundKey_9, tvin_RoundKey_9);
		}

		tcl_file.set_num(15, &tcl_file.RoundKey_9_depth);
		sprintf(tvin_RoundKey_9, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_RoundKey_9, tvin_RoundKey_9);

		// release memory allocation
		delete [] RoundKey_9_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_RoundKey_10, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_RoundKey_10, tvin_RoundKey_10);

		sc_bv<8>* RoundKey_10_tvin_wrapc_buffer = new sc_bv<8>[15];

		// RTL Name: RoundKey_10
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (10) => (234) @ (16)
					for (int i_0 = 10; i_0 <= 234; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : RoundKey[0]
						// regulate_c_name       : RoundKey
						// input_type_conversion : RoundKey[i_0]
						if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> RoundKey_tmp_mem;
							RoundKey_tmp_mem = RoundKey[i_0];
							RoundKey_10_tvin_wrapc_buffer[hls_map_index].range(7, 0) = RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 15; i++)
		{
			sprintf(tvin_RoundKey_10, "%s\n", (RoundKey_10_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_RoundKey_10, tvin_RoundKey_10);
		}

		tcl_file.set_num(15, &tcl_file.RoundKey_10_depth);
		sprintf(tvin_RoundKey_10, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_RoundKey_10, tvin_RoundKey_10);

		// release memory allocation
		delete [] RoundKey_10_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_RoundKey_11, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_RoundKey_11, tvin_RoundKey_11);

		sc_bv<8>* RoundKey_11_tvin_wrapc_buffer = new sc_bv<8>[15];

		// RTL Name: RoundKey_11
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (11) => (235) @ (16)
					for (int i_0 = 11; i_0 <= 235; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : RoundKey[0]
						// regulate_c_name       : RoundKey
						// input_type_conversion : RoundKey[i_0]
						if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> RoundKey_tmp_mem;
							RoundKey_tmp_mem = RoundKey[i_0];
							RoundKey_11_tvin_wrapc_buffer[hls_map_index].range(7, 0) = RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 15; i++)
		{
			sprintf(tvin_RoundKey_11, "%s\n", (RoundKey_11_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_RoundKey_11, tvin_RoundKey_11);
		}

		tcl_file.set_num(15, &tcl_file.RoundKey_11_depth);
		sprintf(tvin_RoundKey_11, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_RoundKey_11, tvin_RoundKey_11);

		// release memory allocation
		delete [] RoundKey_11_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_RoundKey_12, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_RoundKey_12, tvin_RoundKey_12);

		sc_bv<8>* RoundKey_12_tvin_wrapc_buffer = new sc_bv<8>[15];

		// RTL Name: RoundKey_12
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (12) => (236) @ (16)
					for (int i_0 = 12; i_0 <= 236; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : RoundKey[0]
						// regulate_c_name       : RoundKey
						// input_type_conversion : RoundKey[i_0]
						if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> RoundKey_tmp_mem;
							RoundKey_tmp_mem = RoundKey[i_0];
							RoundKey_12_tvin_wrapc_buffer[hls_map_index].range(7, 0) = RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 15; i++)
		{
			sprintf(tvin_RoundKey_12, "%s\n", (RoundKey_12_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_RoundKey_12, tvin_RoundKey_12);
		}

		tcl_file.set_num(15, &tcl_file.RoundKey_12_depth);
		sprintf(tvin_RoundKey_12, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_RoundKey_12, tvin_RoundKey_12);

		// release memory allocation
		delete [] RoundKey_12_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_RoundKey_13, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_RoundKey_13, tvin_RoundKey_13);

		sc_bv<8>* RoundKey_13_tvin_wrapc_buffer = new sc_bv<8>[15];

		// RTL Name: RoundKey_13
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (13) => (237) @ (16)
					for (int i_0 = 13; i_0 <= 237; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : RoundKey[0]
						// regulate_c_name       : RoundKey
						// input_type_conversion : RoundKey[i_0]
						if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> RoundKey_tmp_mem;
							RoundKey_tmp_mem = RoundKey[i_0];
							RoundKey_13_tvin_wrapc_buffer[hls_map_index].range(7, 0) = RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 15; i++)
		{
			sprintf(tvin_RoundKey_13, "%s\n", (RoundKey_13_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_RoundKey_13, tvin_RoundKey_13);
		}

		tcl_file.set_num(15, &tcl_file.RoundKey_13_depth);
		sprintf(tvin_RoundKey_13, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_RoundKey_13, tvin_RoundKey_13);

		// release memory allocation
		delete [] RoundKey_13_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_RoundKey_14, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_RoundKey_14, tvin_RoundKey_14);

		sc_bv<8>* RoundKey_14_tvin_wrapc_buffer = new sc_bv<8>[15];

		// RTL Name: RoundKey_14
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (14) => (238) @ (16)
					for (int i_0 = 14; i_0 <= 238; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : RoundKey[0]
						// regulate_c_name       : RoundKey
						// input_type_conversion : RoundKey[i_0]
						if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> RoundKey_tmp_mem;
							RoundKey_tmp_mem = RoundKey[i_0];
							RoundKey_14_tvin_wrapc_buffer[hls_map_index].range(7, 0) = RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 15; i++)
		{
			sprintf(tvin_RoundKey_14, "%s\n", (RoundKey_14_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_RoundKey_14, tvin_RoundKey_14);
		}

		tcl_file.set_num(15, &tcl_file.RoundKey_14_depth);
		sprintf(tvin_RoundKey_14, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_RoundKey_14, tvin_RoundKey_14);

		// release memory allocation
		delete [] RoundKey_14_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_RoundKey_15, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_RoundKey_15, tvin_RoundKey_15);

		sc_bv<8>* RoundKey_15_tvin_wrapc_buffer = new sc_bv<8>[15];

		// RTL Name: RoundKey_15
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (15) => (239) @ (16)
					for (int i_0 = 15; i_0 <= 239; i_0 += 16)
					{
						// sub                   : i_0
						// ori_name              : RoundKey[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : RoundKey[0]
						// regulate_c_name       : RoundKey
						// input_type_conversion : RoundKey[i_0]
						if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> RoundKey_tmp_mem;
							RoundKey_tmp_mem = RoundKey[i_0];
							RoundKey_15_tvin_wrapc_buffer[hls_map_index].range(7, 0) = RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 15; i++)
		{
			sprintf(tvin_RoundKey_15, "%s\n", (RoundKey_15_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_RoundKey_15, tvin_RoundKey_15);
		}

		tcl_file.set_num(15, &tcl_file.RoundKey_15_depth);
		sprintf(tvin_RoundKey_15, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_RoundKey_15, tvin_RoundKey_15);

		// release memory allocation
		delete [] RoundKey_15_tvin_wrapc_buffer;

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		Cipher(state, RoundKey);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_state_0_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_state_0_0, tvout_state_0_0);

		sc_bv<8>* state_0_0_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: state_0_0
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: state(7, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// carray: (0) => (0) @ (2)
						for (int i_1 = 0; i_1 <= 0; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : state[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : state[0][0]
							// regulate_c_name       : state
							// input_type_conversion : state[i_0][i_1]
							if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> state_tmp_mem;
								state_tmp_mem = state[i_0][i_1];
								state_0_0_tvout_wrapc_buffer[hls_map_index].range(7, 0) = state_tmp_mem.range(7, 0);
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
			sprintf(tvout_state_0_0, "%s\n", (state_0_0_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_state_0_0, tvout_state_0_0);
		}

		tcl_file.set_num(1, &tcl_file.state_0_0_depth);
		sprintf(tvout_state_0_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_state_0_0, tvout_state_0_0);

		// release memory allocation
		delete [] state_0_0_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_state_0_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_state_0_1, tvout_state_0_1);

		sc_bv<8>* state_0_1_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: state_0_1
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: state(7, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// carray: (1) => (1) @ (2)
						for (int i_1 = 1; i_1 <= 1; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : state[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : state[0][0]
							// regulate_c_name       : state
							// input_type_conversion : state[i_0][i_1]
							if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> state_tmp_mem;
								state_tmp_mem = state[i_0][i_1];
								state_0_1_tvout_wrapc_buffer[hls_map_index].range(7, 0) = state_tmp_mem.range(7, 0);
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
			sprintf(tvout_state_0_1, "%s\n", (state_0_1_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_state_0_1, tvout_state_0_1);
		}

		tcl_file.set_num(1, &tcl_file.state_0_1_depth);
		sprintf(tvout_state_0_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_state_0_1, tvout_state_0_1);

		// release memory allocation
		delete [] state_0_1_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_state_0_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_state_0_2, tvout_state_0_2);

		sc_bv<8>* state_0_2_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: state_0_2
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: state(7, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// carray: (2) => (2) @ (2)
						for (int i_1 = 2; i_1 <= 2; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : state[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : state[0][0]
							// regulate_c_name       : state
							// input_type_conversion : state[i_0][i_1]
							if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> state_tmp_mem;
								state_tmp_mem = state[i_0][i_1];
								state_0_2_tvout_wrapc_buffer[hls_map_index].range(7, 0) = state_tmp_mem.range(7, 0);
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
			sprintf(tvout_state_0_2, "%s\n", (state_0_2_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_state_0_2, tvout_state_0_2);
		}

		tcl_file.set_num(1, &tcl_file.state_0_2_depth);
		sprintf(tvout_state_0_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_state_0_2, tvout_state_0_2);

		// release memory allocation
		delete [] state_0_2_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_state_0_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_state_0_3, tvout_state_0_3);

		sc_bv<8>* state_0_3_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: state_0_3
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: state(7, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// carray: (3) => (3) @ (2)
						for (int i_1 = 3; i_1 <= 3; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : state[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : state[0][0]
							// regulate_c_name       : state
							// input_type_conversion : state[i_0][i_1]
							if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> state_tmp_mem;
								state_tmp_mem = state[i_0][i_1];
								state_0_3_tvout_wrapc_buffer[hls_map_index].range(7, 0) = state_tmp_mem.range(7, 0);
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
			sprintf(tvout_state_0_3, "%s\n", (state_0_3_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_state_0_3, tvout_state_0_3);
		}

		tcl_file.set_num(1, &tcl_file.state_0_3_depth);
		sprintf(tvout_state_0_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_state_0_3, tvout_state_0_3);

		// release memory allocation
		delete [] state_0_3_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_state_1_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_state_1_0, tvout_state_1_0);

		sc_bv<8>* state_1_0_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: state_1_0
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: state(7, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// carray: (0) => (0) @ (2)
						for (int i_1 = 0; i_1 <= 0; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : state[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : state[0][0]
							// regulate_c_name       : state
							// input_type_conversion : state[i_0][i_1]
							if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> state_tmp_mem;
								state_tmp_mem = state[i_0][i_1];
								state_1_0_tvout_wrapc_buffer[hls_map_index].range(7, 0) = state_tmp_mem.range(7, 0);
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
			sprintf(tvout_state_1_0, "%s\n", (state_1_0_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_state_1_0, tvout_state_1_0);
		}

		tcl_file.set_num(1, &tcl_file.state_1_0_depth);
		sprintf(tvout_state_1_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_state_1_0, tvout_state_1_0);

		// release memory allocation
		delete [] state_1_0_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_state_1_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_state_1_1, tvout_state_1_1);

		sc_bv<8>* state_1_1_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: state_1_1
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: state(7, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// carray: (1) => (1) @ (2)
						for (int i_1 = 1; i_1 <= 1; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : state[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : state[0][0]
							// regulate_c_name       : state
							// input_type_conversion : state[i_0][i_1]
							if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> state_tmp_mem;
								state_tmp_mem = state[i_0][i_1];
								state_1_1_tvout_wrapc_buffer[hls_map_index].range(7, 0) = state_tmp_mem.range(7, 0);
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
			sprintf(tvout_state_1_1, "%s\n", (state_1_1_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_state_1_1, tvout_state_1_1);
		}

		tcl_file.set_num(1, &tcl_file.state_1_1_depth);
		sprintf(tvout_state_1_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_state_1_1, tvout_state_1_1);

		// release memory allocation
		delete [] state_1_1_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_state_1_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_state_1_2, tvout_state_1_2);

		sc_bv<8>* state_1_2_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: state_1_2
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: state(7, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// carray: (2) => (2) @ (2)
						for (int i_1 = 2; i_1 <= 2; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : state[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : state[0][0]
							// regulate_c_name       : state
							// input_type_conversion : state[i_0][i_1]
							if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> state_tmp_mem;
								state_tmp_mem = state[i_0][i_1];
								state_1_2_tvout_wrapc_buffer[hls_map_index].range(7, 0) = state_tmp_mem.range(7, 0);
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
			sprintf(tvout_state_1_2, "%s\n", (state_1_2_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_state_1_2, tvout_state_1_2);
		}

		tcl_file.set_num(1, &tcl_file.state_1_2_depth);
		sprintf(tvout_state_1_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_state_1_2, tvout_state_1_2);

		// release memory allocation
		delete [] state_1_2_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_state_1_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_state_1_3, tvout_state_1_3);

		sc_bv<8>* state_1_3_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: state_1_3
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: state(7, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// carray: (3) => (3) @ (2)
						for (int i_1 = 3; i_1 <= 3; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : state[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : state[0][0]
							// regulate_c_name       : state
							// input_type_conversion : state[i_0][i_1]
							if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> state_tmp_mem;
								state_tmp_mem = state[i_0][i_1];
								state_1_3_tvout_wrapc_buffer[hls_map_index].range(7, 0) = state_tmp_mem.range(7, 0);
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
			sprintf(tvout_state_1_3, "%s\n", (state_1_3_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_state_1_3, tvout_state_1_3);
		}

		tcl_file.set_num(1, &tcl_file.state_1_3_depth);
		sprintf(tvout_state_1_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_state_1_3, tvout_state_1_3);

		// release memory allocation
		delete [] state_1_3_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_state_2_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_state_2_0, tvout_state_2_0);

		sc_bv<8>* state_2_0_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: state_2_0
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: state(7, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// carray: (0) => (0) @ (2)
						for (int i_1 = 0; i_1 <= 0; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : state[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : state[0][0]
							// regulate_c_name       : state
							// input_type_conversion : state[i_0][i_1]
							if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> state_tmp_mem;
								state_tmp_mem = state[i_0][i_1];
								state_2_0_tvout_wrapc_buffer[hls_map_index].range(7, 0) = state_tmp_mem.range(7, 0);
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
			sprintf(tvout_state_2_0, "%s\n", (state_2_0_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_state_2_0, tvout_state_2_0);
		}

		tcl_file.set_num(1, &tcl_file.state_2_0_depth);
		sprintf(tvout_state_2_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_state_2_0, tvout_state_2_0);

		// release memory allocation
		delete [] state_2_0_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_state_2_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_state_2_1, tvout_state_2_1);

		sc_bv<8>* state_2_1_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: state_2_1
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: state(7, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// carray: (1) => (1) @ (2)
						for (int i_1 = 1; i_1 <= 1; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : state[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : state[0][0]
							// regulate_c_name       : state
							// input_type_conversion : state[i_0][i_1]
							if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> state_tmp_mem;
								state_tmp_mem = state[i_0][i_1];
								state_2_1_tvout_wrapc_buffer[hls_map_index].range(7, 0) = state_tmp_mem.range(7, 0);
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
			sprintf(tvout_state_2_1, "%s\n", (state_2_1_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_state_2_1, tvout_state_2_1);
		}

		tcl_file.set_num(1, &tcl_file.state_2_1_depth);
		sprintf(tvout_state_2_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_state_2_1, tvout_state_2_1);

		// release memory allocation
		delete [] state_2_1_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_state_2_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_state_2_2, tvout_state_2_2);

		sc_bv<8>* state_2_2_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: state_2_2
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: state(7, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// carray: (2) => (2) @ (2)
						for (int i_1 = 2; i_1 <= 2; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : state[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : state[0][0]
							// regulate_c_name       : state
							// input_type_conversion : state[i_0][i_1]
							if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> state_tmp_mem;
								state_tmp_mem = state[i_0][i_1];
								state_2_2_tvout_wrapc_buffer[hls_map_index].range(7, 0) = state_tmp_mem.range(7, 0);
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
			sprintf(tvout_state_2_2, "%s\n", (state_2_2_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_state_2_2, tvout_state_2_2);
		}

		tcl_file.set_num(1, &tcl_file.state_2_2_depth);
		sprintf(tvout_state_2_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_state_2_2, tvout_state_2_2);

		// release memory allocation
		delete [] state_2_2_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_state_2_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_state_2_3, tvout_state_2_3);

		sc_bv<8>* state_2_3_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: state_2_3
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: state(7, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// carray: (3) => (3) @ (2)
						for (int i_1 = 3; i_1 <= 3; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : state[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : state[0][0]
							// regulate_c_name       : state
							// input_type_conversion : state[i_0][i_1]
							if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> state_tmp_mem;
								state_tmp_mem = state[i_0][i_1];
								state_2_3_tvout_wrapc_buffer[hls_map_index].range(7, 0) = state_tmp_mem.range(7, 0);
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
			sprintf(tvout_state_2_3, "%s\n", (state_2_3_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_state_2_3, tvout_state_2_3);
		}

		tcl_file.set_num(1, &tcl_file.state_2_3_depth);
		sprintf(tvout_state_2_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_state_2_3, tvout_state_2_3);

		// release memory allocation
		delete [] state_2_3_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_state_3_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_state_3_0, tvout_state_3_0);

		sc_bv<8>* state_3_0_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: state_3_0
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: state(7, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// carray: (0) => (0) @ (2)
						for (int i_1 = 0; i_1 <= 0; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : state[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : state[0][0]
							// regulate_c_name       : state
							// input_type_conversion : state[i_0][i_1]
							if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> state_tmp_mem;
								state_tmp_mem = state[i_0][i_1];
								state_3_0_tvout_wrapc_buffer[hls_map_index].range(7, 0) = state_tmp_mem.range(7, 0);
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
			sprintf(tvout_state_3_0, "%s\n", (state_3_0_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_state_3_0, tvout_state_3_0);
		}

		tcl_file.set_num(1, &tcl_file.state_3_0_depth);
		sprintf(tvout_state_3_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_state_3_0, tvout_state_3_0);

		// release memory allocation
		delete [] state_3_0_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_state_3_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_state_3_1, tvout_state_3_1);

		sc_bv<8>* state_3_1_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: state_3_1
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: state(7, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// carray: (1) => (1) @ (2)
						for (int i_1 = 1; i_1 <= 1; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : state[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : state[0][0]
							// regulate_c_name       : state
							// input_type_conversion : state[i_0][i_1]
							if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> state_tmp_mem;
								state_tmp_mem = state[i_0][i_1];
								state_3_1_tvout_wrapc_buffer[hls_map_index].range(7, 0) = state_tmp_mem.range(7, 0);
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
			sprintf(tvout_state_3_1, "%s\n", (state_3_1_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_state_3_1, tvout_state_3_1);
		}

		tcl_file.set_num(1, &tcl_file.state_3_1_depth);
		sprintf(tvout_state_3_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_state_3_1, tvout_state_3_1);

		// release memory allocation
		delete [] state_3_1_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_state_3_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_state_3_2, tvout_state_3_2);

		sc_bv<8>* state_3_2_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: state_3_2
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: state(7, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// carray: (2) => (2) @ (2)
						for (int i_1 = 2; i_1 <= 2; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : state[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : state[0][0]
							// regulate_c_name       : state
							// input_type_conversion : state[i_0][i_1]
							if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> state_tmp_mem;
								state_tmp_mem = state[i_0][i_1];
								state_3_2_tvout_wrapc_buffer[hls_map_index].range(7, 0) = state_tmp_mem.range(7, 0);
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
			sprintf(tvout_state_3_2, "%s\n", (state_3_2_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_state_3_2, tvout_state_3_2);
		}

		tcl_file.set_num(1, &tcl_file.state_3_2_depth);
		sprintf(tvout_state_3_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_state_3_2, tvout_state_3_2);

		// release memory allocation
		delete [] state_3_2_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_state_3_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_state_3_3, tvout_state_3_3);

		sc_bv<8>* state_3_3_tvout_wrapc_buffer = new sc_bv<8>[1];

		// RTL Name: state_3_3
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: state(7, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// carray: (3) => (3) @ (2)
						for (int i_1 = 3; i_1 <= 3; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : state[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : state[0][0]
							// regulate_c_name       : state
							// input_type_conversion : state[i_0][i_1]
							if (&(state[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> state_tmp_mem;
								state_tmp_mem = state[i_0][i_1];
								state_3_3_tvout_wrapc_buffer[hls_map_index].range(7, 0) = state_tmp_mem.range(7, 0);
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
			sprintf(tvout_state_3_3, "%s\n", (state_3_3_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_state_3_3, tvout_state_3_3);
		}

		tcl_file.set_num(1, &tcl_file.state_3_3_depth);
		sprintf(tvout_state_3_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_state_3_3, tvout_state_3_3);

		// release memory allocation
		delete [] state_3_3_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "state_0_0"
		delete [] tvin_state_0_0;
		delete [] tvout_state_0_0;
		// release memory allocation: "state_0_1"
		delete [] tvin_state_0_1;
		delete [] tvout_state_0_1;
		// release memory allocation: "state_0_2"
		delete [] tvin_state_0_2;
		delete [] tvout_state_0_2;
		// release memory allocation: "state_0_3"
		delete [] tvin_state_0_3;
		delete [] tvout_state_0_3;
		// release memory allocation: "state_1_0"
		delete [] tvin_state_1_0;
		delete [] tvout_state_1_0;
		// release memory allocation: "state_1_1"
		delete [] tvin_state_1_1;
		delete [] tvout_state_1_1;
		// release memory allocation: "state_1_2"
		delete [] tvin_state_1_2;
		delete [] tvout_state_1_2;
		// release memory allocation: "state_1_3"
		delete [] tvin_state_1_3;
		delete [] tvout_state_1_3;
		// release memory allocation: "state_2_0"
		delete [] tvin_state_2_0;
		delete [] tvout_state_2_0;
		// release memory allocation: "state_2_1"
		delete [] tvin_state_2_1;
		delete [] tvout_state_2_1;
		// release memory allocation: "state_2_2"
		delete [] tvin_state_2_2;
		delete [] tvout_state_2_2;
		// release memory allocation: "state_2_3"
		delete [] tvin_state_2_3;
		delete [] tvout_state_2_3;
		// release memory allocation: "state_3_0"
		delete [] tvin_state_3_0;
		delete [] tvout_state_3_0;
		// release memory allocation: "state_3_1"
		delete [] tvin_state_3_1;
		delete [] tvout_state_3_1;
		// release memory allocation: "state_3_2"
		delete [] tvin_state_3_2;
		delete [] tvout_state_3_2;
		// release memory allocation: "state_3_3"
		delete [] tvin_state_3_3;
		delete [] tvout_state_3_3;
		// release memory allocation: "RoundKey_0"
		delete [] tvin_RoundKey_0;
		// release memory allocation: "RoundKey_1"
		delete [] tvin_RoundKey_1;
		// release memory allocation: "RoundKey_2"
		delete [] tvin_RoundKey_2;
		// release memory allocation: "RoundKey_3"
		delete [] tvin_RoundKey_3;
		// release memory allocation: "RoundKey_4"
		delete [] tvin_RoundKey_4;
		// release memory allocation: "RoundKey_5"
		delete [] tvin_RoundKey_5;
		// release memory allocation: "RoundKey_6"
		delete [] tvin_RoundKey_6;
		// release memory allocation: "RoundKey_7"
		delete [] tvin_RoundKey_7;
		// release memory allocation: "RoundKey_8"
		delete [] tvin_RoundKey_8;
		// release memory allocation: "RoundKey_9"
		delete [] tvin_RoundKey_9;
		// release memory allocation: "RoundKey_10"
		delete [] tvin_RoundKey_10;
		// release memory allocation: "RoundKey_11"
		delete [] tvin_RoundKey_11;
		// release memory allocation: "RoundKey_12"
		delete [] tvin_RoundKey_12;
		// release memory allocation: "RoundKey_13"
		delete [] tvin_RoundKey_13;
		// release memory allocation: "RoundKey_14"
		delete [] tvin_RoundKey_14;
		// release memory allocation: "RoundKey_15"
		delete [] tvin_RoundKey_15;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

