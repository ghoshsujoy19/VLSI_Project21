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


// wrapc file define: "RoundKey_0"
#define AUTOTB_TVIN_RoundKey_0  "../tv/cdatafile/c.KeyExpansion.autotvin_RoundKey_0.dat"
#define AUTOTB_TVOUT_RoundKey_0  "../tv/cdatafile/c.KeyExpansion.autotvout_RoundKey_0.dat"
// wrapc file define: "RoundKey_1"
#define AUTOTB_TVIN_RoundKey_1  "../tv/cdatafile/c.KeyExpansion.autotvin_RoundKey_1.dat"
#define AUTOTB_TVOUT_RoundKey_1  "../tv/cdatafile/c.KeyExpansion.autotvout_RoundKey_1.dat"
// wrapc file define: "RoundKey_2"
#define AUTOTB_TVIN_RoundKey_2  "../tv/cdatafile/c.KeyExpansion.autotvin_RoundKey_2.dat"
#define AUTOTB_TVOUT_RoundKey_2  "../tv/cdatafile/c.KeyExpansion.autotvout_RoundKey_2.dat"
// wrapc file define: "RoundKey_3"
#define AUTOTB_TVIN_RoundKey_3  "../tv/cdatafile/c.KeyExpansion.autotvin_RoundKey_3.dat"
#define AUTOTB_TVOUT_RoundKey_3  "../tv/cdatafile/c.KeyExpansion.autotvout_RoundKey_3.dat"
// wrapc file define: "RoundKey_4"
#define AUTOTB_TVIN_RoundKey_4  "../tv/cdatafile/c.KeyExpansion.autotvin_RoundKey_4.dat"
#define AUTOTB_TVOUT_RoundKey_4  "../tv/cdatafile/c.KeyExpansion.autotvout_RoundKey_4.dat"
// wrapc file define: "RoundKey_5"
#define AUTOTB_TVIN_RoundKey_5  "../tv/cdatafile/c.KeyExpansion.autotvin_RoundKey_5.dat"
#define AUTOTB_TVOUT_RoundKey_5  "../tv/cdatafile/c.KeyExpansion.autotvout_RoundKey_5.dat"
// wrapc file define: "RoundKey_6"
#define AUTOTB_TVIN_RoundKey_6  "../tv/cdatafile/c.KeyExpansion.autotvin_RoundKey_6.dat"
#define AUTOTB_TVOUT_RoundKey_6  "../tv/cdatafile/c.KeyExpansion.autotvout_RoundKey_6.dat"
// wrapc file define: "RoundKey_7"
#define AUTOTB_TVIN_RoundKey_7  "../tv/cdatafile/c.KeyExpansion.autotvin_RoundKey_7.dat"
#define AUTOTB_TVOUT_RoundKey_7  "../tv/cdatafile/c.KeyExpansion.autotvout_RoundKey_7.dat"
// wrapc file define: "Key_0"
#define AUTOTB_TVIN_Key_0  "../tv/cdatafile/c.KeyExpansion.autotvin_Key_0.dat"
// wrapc file define: "Key_1"
#define AUTOTB_TVIN_Key_1  "../tv/cdatafile/c.KeyExpansion.autotvin_Key_1.dat"
// wrapc file define: "Key_2"
#define AUTOTB_TVIN_Key_2  "../tv/cdatafile/c.KeyExpansion.autotvin_Key_2.dat"
// wrapc file define: "Key_3"
#define AUTOTB_TVIN_Key_3  "../tv/cdatafile/c.KeyExpansion.autotvin_Key_3.dat"
// wrapc file define: "Key_4"
#define AUTOTB_TVIN_Key_4  "../tv/cdatafile/c.KeyExpansion.autotvin_Key_4.dat"
// wrapc file define: "Key_5"
#define AUTOTB_TVIN_Key_5  "../tv/cdatafile/c.KeyExpansion.autotvin_Key_5.dat"
// wrapc file define: "Key_6"
#define AUTOTB_TVIN_Key_6  "../tv/cdatafile/c.KeyExpansion.autotvin_Key_6.dat"
// wrapc file define: "Key_7"
#define AUTOTB_TVIN_Key_7  "../tv/cdatafile/c.KeyExpansion.autotvin_Key_7.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "RoundKey_0"
#define AUTOTB_TVOUT_PC_RoundKey_0  "../tv/rtldatafile/rtl.KeyExpansion.autotvout_RoundKey_0.dat"
// tvout file define: "RoundKey_1"
#define AUTOTB_TVOUT_PC_RoundKey_1  "../tv/rtldatafile/rtl.KeyExpansion.autotvout_RoundKey_1.dat"
// tvout file define: "RoundKey_2"
#define AUTOTB_TVOUT_PC_RoundKey_2  "../tv/rtldatafile/rtl.KeyExpansion.autotvout_RoundKey_2.dat"
// tvout file define: "RoundKey_3"
#define AUTOTB_TVOUT_PC_RoundKey_3  "../tv/rtldatafile/rtl.KeyExpansion.autotvout_RoundKey_3.dat"
// tvout file define: "RoundKey_4"
#define AUTOTB_TVOUT_PC_RoundKey_4  "../tv/rtldatafile/rtl.KeyExpansion.autotvout_RoundKey_4.dat"
// tvout file define: "RoundKey_5"
#define AUTOTB_TVOUT_PC_RoundKey_5  "../tv/rtldatafile/rtl.KeyExpansion.autotvout_RoundKey_5.dat"
// tvout file define: "RoundKey_6"
#define AUTOTB_TVOUT_PC_RoundKey_6  "../tv/rtldatafile/rtl.KeyExpansion.autotvout_RoundKey_6.dat"
// tvout file define: "RoundKey_7"
#define AUTOTB_TVOUT_PC_RoundKey_7  "../tv/rtldatafile/rtl.KeyExpansion.autotvout_RoundKey_7.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			RoundKey_0_depth = 0;
			RoundKey_1_depth = 0;
			RoundKey_2_depth = 0;
			RoundKey_3_depth = 0;
			RoundKey_4_depth = 0;
			RoundKey_5_depth = 0;
			RoundKey_6_depth = 0;
			RoundKey_7_depth = 0;
			Key_0_depth = 0;
			Key_1_depth = 0;
			Key_2_depth = 0;
			Key_3_depth = 0;
			Key_4_depth = 0;
			Key_5_depth = 0;
			Key_6_depth = 0;
			Key_7_depth = 0;
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
			total_list << "{RoundKey_0 " << RoundKey_0_depth << "}\n";
			total_list << "{RoundKey_1 " << RoundKey_1_depth << "}\n";
			total_list << "{RoundKey_2 " << RoundKey_2_depth << "}\n";
			total_list << "{RoundKey_3 " << RoundKey_3_depth << "}\n";
			total_list << "{RoundKey_4 " << RoundKey_4_depth << "}\n";
			total_list << "{RoundKey_5 " << RoundKey_5_depth << "}\n";
			total_list << "{RoundKey_6 " << RoundKey_6_depth << "}\n";
			total_list << "{RoundKey_7 " << RoundKey_7_depth << "}\n";
			total_list << "{Key_0 " << Key_0_depth << "}\n";
			total_list << "{Key_1 " << Key_1_depth << "}\n";
			total_list << "{Key_2 " << Key_2_depth << "}\n";
			total_list << "{Key_3 " << Key_3_depth << "}\n";
			total_list << "{Key_4 " << Key_4_depth << "}\n";
			total_list << "{Key_5 " << Key_5_depth << "}\n";
			total_list << "{Key_6 " << Key_6_depth << "}\n";
			total_list << "{Key_7 " << Key_7_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int RoundKey_0_depth;
		int RoundKey_1_depth;
		int RoundKey_2_depth;
		int RoundKey_3_depth;
		int RoundKey_4_depth;
		int RoundKey_5_depth;
		int RoundKey_6_depth;
		int RoundKey_7_depth;
		int Key_0_depth;
		int Key_1_depth;
		int Key_2_depth;
		int Key_3_depth;
		int Key_4_depth;
		int Key_5_depth;
		int Key_6_depth;
		int Key_7_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern "C" void KeyExpansion (
char RoundKey[240],
char Key[16]);

extern "C" void AESL_WRAP_KeyExpansion (
char RoundKey[240],
char Key[16])
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


		// output port post check: "RoundKey_0"
		aesl_fh.read(AUTOTB_TVOUT_PC_RoundKey_0, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_RoundKey_0, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_RoundKey_0, AESL_token); // data

			sc_bv<8> *RoundKey_0_pc_buffer = new sc_bv<8>[30];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'RoundKey_0', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'RoundKey_0', possible cause: There are uninitialized variables in the C design." << endl;
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
					RoundKey_0_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_RoundKey_0, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_RoundKey_0))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: RoundKey_0
				{
					// bitslice(7, 0)
					// {
						// celement: RoundKey(7, 0)
						// {
							sc_lv<8>* RoundKey_lv0_0_232_8 = new sc_lv<8>[30];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: RoundKey(7, 0)
						{
							// carray: (0) => (232) @ (8)
							for (int i_0 = 0; i_0 <= 232; i_0 += 8)
							{
								if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									RoundKey_lv0_0_232_8[hls_map_index].range(7, 0) = sc_bv<8>(RoundKey_0_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: RoundKey(7, 0)
						{
							// carray: (0) => (232) @ (8)
							for (int i_0 = 0; i_0 <= 232; i_0 += 8)
							{
								// sub                    : i_0
								// ori_name               : RoundKey[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : RoundKey[0]
								// output_left_conversion : RoundKey[i_0]
								// output_type_conversion : (RoundKey_lv0_0_232_8[hls_map_index]).to_uint64()
								if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									RoundKey[i_0] = (RoundKey_lv0_0_232_8[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] RoundKey_0_pc_buffer;
		}

		// output port post check: "RoundKey_1"
		aesl_fh.read(AUTOTB_TVOUT_PC_RoundKey_1, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_RoundKey_1, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_RoundKey_1, AESL_token); // data

			sc_bv<8> *RoundKey_1_pc_buffer = new sc_bv<8>[30];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'RoundKey_1', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'RoundKey_1', possible cause: There are uninitialized variables in the C design." << endl;
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
					RoundKey_1_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_RoundKey_1, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_RoundKey_1))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: RoundKey_1
				{
					// bitslice(7, 0)
					// {
						// celement: RoundKey(7, 0)
						// {
							sc_lv<8>* RoundKey_lv0_1_233_8 = new sc_lv<8>[30];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: RoundKey(7, 0)
						{
							// carray: (1) => (233) @ (8)
							for (int i_0 = 1; i_0 <= 233; i_0 += 8)
							{
								if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									RoundKey_lv0_1_233_8[hls_map_index].range(7, 0) = sc_bv<8>(RoundKey_1_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: RoundKey(7, 0)
						{
							// carray: (1) => (233) @ (8)
							for (int i_0 = 1; i_0 <= 233; i_0 += 8)
							{
								// sub                    : i_0
								// ori_name               : RoundKey[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : RoundKey[0]
								// output_left_conversion : RoundKey[i_0]
								// output_type_conversion : (RoundKey_lv0_1_233_8[hls_map_index]).to_uint64()
								if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									RoundKey[i_0] = (RoundKey_lv0_1_233_8[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] RoundKey_1_pc_buffer;
		}

		// output port post check: "RoundKey_2"
		aesl_fh.read(AUTOTB_TVOUT_PC_RoundKey_2, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_RoundKey_2, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_RoundKey_2, AESL_token); // data

			sc_bv<8> *RoundKey_2_pc_buffer = new sc_bv<8>[30];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'RoundKey_2', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'RoundKey_2', possible cause: There are uninitialized variables in the C design." << endl;
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
					RoundKey_2_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_RoundKey_2, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_RoundKey_2))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: RoundKey_2
				{
					// bitslice(7, 0)
					// {
						// celement: RoundKey(7, 0)
						// {
							sc_lv<8>* RoundKey_lv0_2_234_8 = new sc_lv<8>[30];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: RoundKey(7, 0)
						{
							// carray: (2) => (234) @ (8)
							for (int i_0 = 2; i_0 <= 234; i_0 += 8)
							{
								if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									RoundKey_lv0_2_234_8[hls_map_index].range(7, 0) = sc_bv<8>(RoundKey_2_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: RoundKey(7, 0)
						{
							// carray: (2) => (234) @ (8)
							for (int i_0 = 2; i_0 <= 234; i_0 += 8)
							{
								// sub                    : i_0
								// ori_name               : RoundKey[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : RoundKey[0]
								// output_left_conversion : RoundKey[i_0]
								// output_type_conversion : (RoundKey_lv0_2_234_8[hls_map_index]).to_uint64()
								if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									RoundKey[i_0] = (RoundKey_lv0_2_234_8[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] RoundKey_2_pc_buffer;
		}

		// output port post check: "RoundKey_3"
		aesl_fh.read(AUTOTB_TVOUT_PC_RoundKey_3, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_RoundKey_3, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_RoundKey_3, AESL_token); // data

			sc_bv<8> *RoundKey_3_pc_buffer = new sc_bv<8>[30];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'RoundKey_3', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'RoundKey_3', possible cause: There are uninitialized variables in the C design." << endl;
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
					RoundKey_3_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_RoundKey_3, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_RoundKey_3))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: RoundKey_3
				{
					// bitslice(7, 0)
					// {
						// celement: RoundKey(7, 0)
						// {
							sc_lv<8>* RoundKey_lv0_3_235_8 = new sc_lv<8>[30];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: RoundKey(7, 0)
						{
							// carray: (3) => (235) @ (8)
							for (int i_0 = 3; i_0 <= 235; i_0 += 8)
							{
								if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									RoundKey_lv0_3_235_8[hls_map_index].range(7, 0) = sc_bv<8>(RoundKey_3_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: RoundKey(7, 0)
						{
							// carray: (3) => (235) @ (8)
							for (int i_0 = 3; i_0 <= 235; i_0 += 8)
							{
								// sub                    : i_0
								// ori_name               : RoundKey[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : RoundKey[0]
								// output_left_conversion : RoundKey[i_0]
								// output_type_conversion : (RoundKey_lv0_3_235_8[hls_map_index]).to_uint64()
								if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									RoundKey[i_0] = (RoundKey_lv0_3_235_8[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] RoundKey_3_pc_buffer;
		}

		// output port post check: "RoundKey_4"
		aesl_fh.read(AUTOTB_TVOUT_PC_RoundKey_4, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_RoundKey_4, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_RoundKey_4, AESL_token); // data

			sc_bv<8> *RoundKey_4_pc_buffer = new sc_bv<8>[30];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'RoundKey_4', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'RoundKey_4', possible cause: There are uninitialized variables in the C design." << endl;
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
					RoundKey_4_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_RoundKey_4, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_RoundKey_4))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: RoundKey_4
				{
					// bitslice(7, 0)
					// {
						// celement: RoundKey(7, 0)
						// {
							sc_lv<8>* RoundKey_lv0_4_236_8 = new sc_lv<8>[30];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: RoundKey(7, 0)
						{
							// carray: (4) => (236) @ (8)
							for (int i_0 = 4; i_0 <= 236; i_0 += 8)
							{
								if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									RoundKey_lv0_4_236_8[hls_map_index].range(7, 0) = sc_bv<8>(RoundKey_4_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: RoundKey(7, 0)
						{
							// carray: (4) => (236) @ (8)
							for (int i_0 = 4; i_0 <= 236; i_0 += 8)
							{
								// sub                    : i_0
								// ori_name               : RoundKey[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : RoundKey[0]
								// output_left_conversion : RoundKey[i_0]
								// output_type_conversion : (RoundKey_lv0_4_236_8[hls_map_index]).to_uint64()
								if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									RoundKey[i_0] = (RoundKey_lv0_4_236_8[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] RoundKey_4_pc_buffer;
		}

		// output port post check: "RoundKey_5"
		aesl_fh.read(AUTOTB_TVOUT_PC_RoundKey_5, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_RoundKey_5, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_RoundKey_5, AESL_token); // data

			sc_bv<8> *RoundKey_5_pc_buffer = new sc_bv<8>[30];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'RoundKey_5', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'RoundKey_5', possible cause: There are uninitialized variables in the C design." << endl;
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
					RoundKey_5_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_RoundKey_5, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_RoundKey_5))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: RoundKey_5
				{
					// bitslice(7, 0)
					// {
						// celement: RoundKey(7, 0)
						// {
							sc_lv<8>* RoundKey_lv0_5_237_8 = new sc_lv<8>[30];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: RoundKey(7, 0)
						{
							// carray: (5) => (237) @ (8)
							for (int i_0 = 5; i_0 <= 237; i_0 += 8)
							{
								if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									RoundKey_lv0_5_237_8[hls_map_index].range(7, 0) = sc_bv<8>(RoundKey_5_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: RoundKey(7, 0)
						{
							// carray: (5) => (237) @ (8)
							for (int i_0 = 5; i_0 <= 237; i_0 += 8)
							{
								// sub                    : i_0
								// ori_name               : RoundKey[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : RoundKey[0]
								// output_left_conversion : RoundKey[i_0]
								// output_type_conversion : (RoundKey_lv0_5_237_8[hls_map_index]).to_uint64()
								if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									RoundKey[i_0] = (RoundKey_lv0_5_237_8[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] RoundKey_5_pc_buffer;
		}

		// output port post check: "RoundKey_6"
		aesl_fh.read(AUTOTB_TVOUT_PC_RoundKey_6, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_RoundKey_6, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_RoundKey_6, AESL_token); // data

			sc_bv<8> *RoundKey_6_pc_buffer = new sc_bv<8>[30];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'RoundKey_6', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'RoundKey_6', possible cause: There are uninitialized variables in the C design." << endl;
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
					RoundKey_6_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_RoundKey_6, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_RoundKey_6))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: RoundKey_6
				{
					// bitslice(7, 0)
					// {
						// celement: RoundKey(7, 0)
						// {
							sc_lv<8>* RoundKey_lv0_6_238_8 = new sc_lv<8>[30];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: RoundKey(7, 0)
						{
							// carray: (6) => (238) @ (8)
							for (int i_0 = 6; i_0 <= 238; i_0 += 8)
							{
								if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									RoundKey_lv0_6_238_8[hls_map_index].range(7, 0) = sc_bv<8>(RoundKey_6_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: RoundKey(7, 0)
						{
							// carray: (6) => (238) @ (8)
							for (int i_0 = 6; i_0 <= 238; i_0 += 8)
							{
								// sub                    : i_0
								// ori_name               : RoundKey[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : RoundKey[0]
								// output_left_conversion : RoundKey[i_0]
								// output_type_conversion : (RoundKey_lv0_6_238_8[hls_map_index]).to_uint64()
								if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									RoundKey[i_0] = (RoundKey_lv0_6_238_8[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] RoundKey_6_pc_buffer;
		}

		// output port post check: "RoundKey_7"
		aesl_fh.read(AUTOTB_TVOUT_PC_RoundKey_7, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_RoundKey_7, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_RoundKey_7, AESL_token); // data

			sc_bv<8> *RoundKey_7_pc_buffer = new sc_bv<8>[30];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'RoundKey_7', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'RoundKey_7', possible cause: There are uninitialized variables in the C design." << endl;
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
					RoundKey_7_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_RoundKey_7, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_RoundKey_7))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: RoundKey_7
				{
					// bitslice(7, 0)
					// {
						// celement: RoundKey(7, 0)
						// {
							sc_lv<8>* RoundKey_lv0_7_239_8 = new sc_lv<8>[30];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: RoundKey(7, 0)
						{
							// carray: (7) => (239) @ (8)
							for (int i_0 = 7; i_0 <= 239; i_0 += 8)
							{
								if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									RoundKey_lv0_7_239_8[hls_map_index].range(7, 0) = sc_bv<8>(RoundKey_7_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: RoundKey(7, 0)
						{
							// carray: (7) => (239) @ (8)
							for (int i_0 = 7; i_0 <= 239; i_0 += 8)
							{
								// sub                    : i_0
								// ori_name               : RoundKey[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : RoundKey[0]
								// output_left_conversion : RoundKey[i_0]
								// output_type_conversion : (RoundKey_lv0_7_239_8[hls_map_index]).to_uint64()
								if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									RoundKey[i_0] = (RoundKey_lv0_7_239_8[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] RoundKey_7_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "RoundKey_0"
		char* tvin_RoundKey_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_RoundKey_0);
		char* tvout_RoundKey_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_RoundKey_0);

		// "RoundKey_1"
		char* tvin_RoundKey_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_RoundKey_1);
		char* tvout_RoundKey_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_RoundKey_1);

		// "RoundKey_2"
		char* tvin_RoundKey_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_RoundKey_2);
		char* tvout_RoundKey_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_RoundKey_2);

		// "RoundKey_3"
		char* tvin_RoundKey_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_RoundKey_3);
		char* tvout_RoundKey_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_RoundKey_3);

		// "RoundKey_4"
		char* tvin_RoundKey_4 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_RoundKey_4);
		char* tvout_RoundKey_4 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_RoundKey_4);

		// "RoundKey_5"
		char* tvin_RoundKey_5 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_RoundKey_5);
		char* tvout_RoundKey_5 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_RoundKey_5);

		// "RoundKey_6"
		char* tvin_RoundKey_6 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_RoundKey_6);
		char* tvout_RoundKey_6 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_RoundKey_6);

		// "RoundKey_7"
		char* tvin_RoundKey_7 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_RoundKey_7);
		char* tvout_RoundKey_7 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_RoundKey_7);

		// "Key_0"
		char* tvin_Key_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_Key_0);

		// "Key_1"
		char* tvin_Key_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_Key_1);

		// "Key_2"
		char* tvin_Key_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_Key_2);

		// "Key_3"
		char* tvin_Key_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_Key_3);

		// "Key_4"
		char* tvin_Key_4 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_Key_4);

		// "Key_5"
		char* tvin_Key_5 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_Key_5);

		// "Key_6"
		char* tvin_Key_6 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_Key_6);

		// "Key_7"
		char* tvin_Key_7 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_Key_7);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_RoundKey_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_RoundKey_0, tvin_RoundKey_0);

		sc_bv<8>* RoundKey_0_tvin_wrapc_buffer = new sc_bv<8>[30];

		// RTL Name: RoundKey_0
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (0) => (232) @ (8)
					for (int i_0 = 0; i_0 <= 232; i_0 += 8)
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
		for (int i = 0; i < 30; i++)
		{
			sprintf(tvin_RoundKey_0, "%s\n", (RoundKey_0_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_RoundKey_0, tvin_RoundKey_0);
		}

		tcl_file.set_num(30, &tcl_file.RoundKey_0_depth);
		sprintf(tvin_RoundKey_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_RoundKey_0, tvin_RoundKey_0);

		// release memory allocation
		delete [] RoundKey_0_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_RoundKey_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_RoundKey_1, tvin_RoundKey_1);

		sc_bv<8>* RoundKey_1_tvin_wrapc_buffer = new sc_bv<8>[30];

		// RTL Name: RoundKey_1
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (1) => (233) @ (8)
					for (int i_0 = 1; i_0 <= 233; i_0 += 8)
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
		for (int i = 0; i < 30; i++)
		{
			sprintf(tvin_RoundKey_1, "%s\n", (RoundKey_1_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_RoundKey_1, tvin_RoundKey_1);
		}

		tcl_file.set_num(30, &tcl_file.RoundKey_1_depth);
		sprintf(tvin_RoundKey_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_RoundKey_1, tvin_RoundKey_1);

		// release memory allocation
		delete [] RoundKey_1_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_RoundKey_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_RoundKey_2, tvin_RoundKey_2);

		sc_bv<8>* RoundKey_2_tvin_wrapc_buffer = new sc_bv<8>[30];

		// RTL Name: RoundKey_2
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (2) => (234) @ (8)
					for (int i_0 = 2; i_0 <= 234; i_0 += 8)
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
		for (int i = 0; i < 30; i++)
		{
			sprintf(tvin_RoundKey_2, "%s\n", (RoundKey_2_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_RoundKey_2, tvin_RoundKey_2);
		}

		tcl_file.set_num(30, &tcl_file.RoundKey_2_depth);
		sprintf(tvin_RoundKey_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_RoundKey_2, tvin_RoundKey_2);

		// release memory allocation
		delete [] RoundKey_2_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_RoundKey_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_RoundKey_3, tvin_RoundKey_3);

		sc_bv<8>* RoundKey_3_tvin_wrapc_buffer = new sc_bv<8>[30];

		// RTL Name: RoundKey_3
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (3) => (235) @ (8)
					for (int i_0 = 3; i_0 <= 235; i_0 += 8)
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
		for (int i = 0; i < 30; i++)
		{
			sprintf(tvin_RoundKey_3, "%s\n", (RoundKey_3_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_RoundKey_3, tvin_RoundKey_3);
		}

		tcl_file.set_num(30, &tcl_file.RoundKey_3_depth);
		sprintf(tvin_RoundKey_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_RoundKey_3, tvin_RoundKey_3);

		// release memory allocation
		delete [] RoundKey_3_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_RoundKey_4, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_RoundKey_4, tvin_RoundKey_4);

		sc_bv<8>* RoundKey_4_tvin_wrapc_buffer = new sc_bv<8>[30];

		// RTL Name: RoundKey_4
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (4) => (236) @ (8)
					for (int i_0 = 4; i_0 <= 236; i_0 += 8)
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
		for (int i = 0; i < 30; i++)
		{
			sprintf(tvin_RoundKey_4, "%s\n", (RoundKey_4_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_RoundKey_4, tvin_RoundKey_4);
		}

		tcl_file.set_num(30, &tcl_file.RoundKey_4_depth);
		sprintf(tvin_RoundKey_4, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_RoundKey_4, tvin_RoundKey_4);

		// release memory allocation
		delete [] RoundKey_4_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_RoundKey_5, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_RoundKey_5, tvin_RoundKey_5);

		sc_bv<8>* RoundKey_5_tvin_wrapc_buffer = new sc_bv<8>[30];

		// RTL Name: RoundKey_5
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (5) => (237) @ (8)
					for (int i_0 = 5; i_0 <= 237; i_0 += 8)
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
		for (int i = 0; i < 30; i++)
		{
			sprintf(tvin_RoundKey_5, "%s\n", (RoundKey_5_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_RoundKey_5, tvin_RoundKey_5);
		}

		tcl_file.set_num(30, &tcl_file.RoundKey_5_depth);
		sprintf(tvin_RoundKey_5, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_RoundKey_5, tvin_RoundKey_5);

		// release memory allocation
		delete [] RoundKey_5_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_RoundKey_6, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_RoundKey_6, tvin_RoundKey_6);

		sc_bv<8>* RoundKey_6_tvin_wrapc_buffer = new sc_bv<8>[30];

		// RTL Name: RoundKey_6
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (6) => (238) @ (8)
					for (int i_0 = 6; i_0 <= 238; i_0 += 8)
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
		for (int i = 0; i < 30; i++)
		{
			sprintf(tvin_RoundKey_6, "%s\n", (RoundKey_6_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_RoundKey_6, tvin_RoundKey_6);
		}

		tcl_file.set_num(30, &tcl_file.RoundKey_6_depth);
		sprintf(tvin_RoundKey_6, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_RoundKey_6, tvin_RoundKey_6);

		// release memory allocation
		delete [] RoundKey_6_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_RoundKey_7, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_RoundKey_7, tvin_RoundKey_7);

		sc_bv<8>* RoundKey_7_tvin_wrapc_buffer = new sc_bv<8>[30];

		// RTL Name: RoundKey_7
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (7) => (239) @ (8)
					for (int i_0 = 7; i_0 <= 239; i_0 += 8)
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
		for (int i = 0; i < 30; i++)
		{
			sprintf(tvin_RoundKey_7, "%s\n", (RoundKey_7_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_RoundKey_7, tvin_RoundKey_7);
		}

		tcl_file.set_num(30, &tcl_file.RoundKey_7_depth);
		sprintf(tvin_RoundKey_7, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_RoundKey_7, tvin_RoundKey_7);

		// release memory allocation
		delete [] RoundKey_7_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_Key_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_Key_0, tvin_Key_0);

		sc_bv<8>* Key_0_tvin_wrapc_buffer = new sc_bv<8>[2];

		// RTL Name: Key_0
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: Key(7, 0)
				{
					// carray: (0) => (8) @ (8)
					for (int i_0 = 0; i_0 <= 8; i_0 += 8)
					{
						// sub                   : i_0
						// ori_name              : Key[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : Key[0]
						// regulate_c_name       : Key
						// input_type_conversion : Key[i_0]
						if (&(Key[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> Key_tmp_mem;
							Key_tmp_mem = Key[i_0];
							Key_0_tvin_wrapc_buffer[hls_map_index].range(7, 0) = Key_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 2; i++)
		{
			sprintf(tvin_Key_0, "%s\n", (Key_0_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_Key_0, tvin_Key_0);
		}

		tcl_file.set_num(2, &tcl_file.Key_0_depth);
		sprintf(tvin_Key_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_Key_0, tvin_Key_0);

		// release memory allocation
		delete [] Key_0_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_Key_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_Key_1, tvin_Key_1);

		sc_bv<8>* Key_1_tvin_wrapc_buffer = new sc_bv<8>[2];

		// RTL Name: Key_1
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: Key(7, 0)
				{
					// carray: (1) => (9) @ (8)
					for (int i_0 = 1; i_0 <= 9; i_0 += 8)
					{
						// sub                   : i_0
						// ori_name              : Key[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : Key[0]
						// regulate_c_name       : Key
						// input_type_conversion : Key[i_0]
						if (&(Key[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> Key_tmp_mem;
							Key_tmp_mem = Key[i_0];
							Key_1_tvin_wrapc_buffer[hls_map_index].range(7, 0) = Key_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 2; i++)
		{
			sprintf(tvin_Key_1, "%s\n", (Key_1_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_Key_1, tvin_Key_1);
		}

		tcl_file.set_num(2, &tcl_file.Key_1_depth);
		sprintf(tvin_Key_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_Key_1, tvin_Key_1);

		// release memory allocation
		delete [] Key_1_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_Key_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_Key_2, tvin_Key_2);

		sc_bv<8>* Key_2_tvin_wrapc_buffer = new sc_bv<8>[2];

		// RTL Name: Key_2
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: Key(7, 0)
				{
					// carray: (2) => (10) @ (8)
					for (int i_0 = 2; i_0 <= 10; i_0 += 8)
					{
						// sub                   : i_0
						// ori_name              : Key[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : Key[0]
						// regulate_c_name       : Key
						// input_type_conversion : Key[i_0]
						if (&(Key[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> Key_tmp_mem;
							Key_tmp_mem = Key[i_0];
							Key_2_tvin_wrapc_buffer[hls_map_index].range(7, 0) = Key_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 2; i++)
		{
			sprintf(tvin_Key_2, "%s\n", (Key_2_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_Key_2, tvin_Key_2);
		}

		tcl_file.set_num(2, &tcl_file.Key_2_depth);
		sprintf(tvin_Key_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_Key_2, tvin_Key_2);

		// release memory allocation
		delete [] Key_2_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_Key_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_Key_3, tvin_Key_3);

		sc_bv<8>* Key_3_tvin_wrapc_buffer = new sc_bv<8>[2];

		// RTL Name: Key_3
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: Key(7, 0)
				{
					// carray: (3) => (11) @ (8)
					for (int i_0 = 3; i_0 <= 11; i_0 += 8)
					{
						// sub                   : i_0
						// ori_name              : Key[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : Key[0]
						// regulate_c_name       : Key
						// input_type_conversion : Key[i_0]
						if (&(Key[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> Key_tmp_mem;
							Key_tmp_mem = Key[i_0];
							Key_3_tvin_wrapc_buffer[hls_map_index].range(7, 0) = Key_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 2; i++)
		{
			sprintf(tvin_Key_3, "%s\n", (Key_3_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_Key_3, tvin_Key_3);
		}

		tcl_file.set_num(2, &tcl_file.Key_3_depth);
		sprintf(tvin_Key_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_Key_3, tvin_Key_3);

		// release memory allocation
		delete [] Key_3_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_Key_4, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_Key_4, tvin_Key_4);

		sc_bv<8>* Key_4_tvin_wrapc_buffer = new sc_bv<8>[2];

		// RTL Name: Key_4
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: Key(7, 0)
				{
					// carray: (4) => (12) @ (8)
					for (int i_0 = 4; i_0 <= 12; i_0 += 8)
					{
						// sub                   : i_0
						// ori_name              : Key[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : Key[0]
						// regulate_c_name       : Key
						// input_type_conversion : Key[i_0]
						if (&(Key[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> Key_tmp_mem;
							Key_tmp_mem = Key[i_0];
							Key_4_tvin_wrapc_buffer[hls_map_index].range(7, 0) = Key_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 2; i++)
		{
			sprintf(tvin_Key_4, "%s\n", (Key_4_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_Key_4, tvin_Key_4);
		}

		tcl_file.set_num(2, &tcl_file.Key_4_depth);
		sprintf(tvin_Key_4, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_Key_4, tvin_Key_4);

		// release memory allocation
		delete [] Key_4_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_Key_5, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_Key_5, tvin_Key_5);

		sc_bv<8>* Key_5_tvin_wrapc_buffer = new sc_bv<8>[2];

		// RTL Name: Key_5
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: Key(7, 0)
				{
					// carray: (5) => (13) @ (8)
					for (int i_0 = 5; i_0 <= 13; i_0 += 8)
					{
						// sub                   : i_0
						// ori_name              : Key[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : Key[0]
						// regulate_c_name       : Key
						// input_type_conversion : Key[i_0]
						if (&(Key[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> Key_tmp_mem;
							Key_tmp_mem = Key[i_0];
							Key_5_tvin_wrapc_buffer[hls_map_index].range(7, 0) = Key_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 2; i++)
		{
			sprintf(tvin_Key_5, "%s\n", (Key_5_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_Key_5, tvin_Key_5);
		}

		tcl_file.set_num(2, &tcl_file.Key_5_depth);
		sprintf(tvin_Key_5, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_Key_5, tvin_Key_5);

		// release memory allocation
		delete [] Key_5_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_Key_6, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_Key_6, tvin_Key_6);

		sc_bv<8>* Key_6_tvin_wrapc_buffer = new sc_bv<8>[2];

		// RTL Name: Key_6
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: Key(7, 0)
				{
					// carray: (6) => (14) @ (8)
					for (int i_0 = 6; i_0 <= 14; i_0 += 8)
					{
						// sub                   : i_0
						// ori_name              : Key[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : Key[0]
						// regulate_c_name       : Key
						// input_type_conversion : Key[i_0]
						if (&(Key[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> Key_tmp_mem;
							Key_tmp_mem = Key[i_0];
							Key_6_tvin_wrapc_buffer[hls_map_index].range(7, 0) = Key_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 2; i++)
		{
			sprintf(tvin_Key_6, "%s\n", (Key_6_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_Key_6, tvin_Key_6);
		}

		tcl_file.set_num(2, &tcl_file.Key_6_depth);
		sprintf(tvin_Key_6, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_Key_6, tvin_Key_6);

		// release memory allocation
		delete [] Key_6_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_Key_7, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_Key_7, tvin_Key_7);

		sc_bv<8>* Key_7_tvin_wrapc_buffer = new sc_bv<8>[2];

		// RTL Name: Key_7
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: Key(7, 0)
				{
					// carray: (7) => (15) @ (8)
					for (int i_0 = 7; i_0 <= 15; i_0 += 8)
					{
						// sub                   : i_0
						// ori_name              : Key[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : Key[0]
						// regulate_c_name       : Key
						// input_type_conversion : Key[i_0]
						if (&(Key[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> Key_tmp_mem;
							Key_tmp_mem = Key[i_0];
							Key_7_tvin_wrapc_buffer[hls_map_index].range(7, 0) = Key_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 2; i++)
		{
			sprintf(tvin_Key_7, "%s\n", (Key_7_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_Key_7, tvin_Key_7);
		}

		tcl_file.set_num(2, &tcl_file.Key_7_depth);
		sprintf(tvin_Key_7, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_Key_7, tvin_Key_7);

		// release memory allocation
		delete [] Key_7_tvin_wrapc_buffer;

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		KeyExpansion(RoundKey, Key);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_RoundKey_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_RoundKey_0, tvout_RoundKey_0);

		sc_bv<8>* RoundKey_0_tvout_wrapc_buffer = new sc_bv<8>[30];

		// RTL Name: RoundKey_0
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (0) => (232) @ (8)
					for (int i_0 = 0; i_0 <= 232; i_0 += 8)
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
							RoundKey_0_tvout_wrapc_buffer[hls_map_index].range(7, 0) = RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 30; i++)
		{
			sprintf(tvout_RoundKey_0, "%s\n", (RoundKey_0_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_RoundKey_0, tvout_RoundKey_0);
		}

		tcl_file.set_num(30, &tcl_file.RoundKey_0_depth);
		sprintf(tvout_RoundKey_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_RoundKey_0, tvout_RoundKey_0);

		// release memory allocation
		delete [] RoundKey_0_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_RoundKey_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_RoundKey_1, tvout_RoundKey_1);

		sc_bv<8>* RoundKey_1_tvout_wrapc_buffer = new sc_bv<8>[30];

		// RTL Name: RoundKey_1
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (1) => (233) @ (8)
					for (int i_0 = 1; i_0 <= 233; i_0 += 8)
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
							RoundKey_1_tvout_wrapc_buffer[hls_map_index].range(7, 0) = RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 30; i++)
		{
			sprintf(tvout_RoundKey_1, "%s\n", (RoundKey_1_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_RoundKey_1, tvout_RoundKey_1);
		}

		tcl_file.set_num(30, &tcl_file.RoundKey_1_depth);
		sprintf(tvout_RoundKey_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_RoundKey_1, tvout_RoundKey_1);

		// release memory allocation
		delete [] RoundKey_1_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_RoundKey_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_RoundKey_2, tvout_RoundKey_2);

		sc_bv<8>* RoundKey_2_tvout_wrapc_buffer = new sc_bv<8>[30];

		// RTL Name: RoundKey_2
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (2) => (234) @ (8)
					for (int i_0 = 2; i_0 <= 234; i_0 += 8)
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
							RoundKey_2_tvout_wrapc_buffer[hls_map_index].range(7, 0) = RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 30; i++)
		{
			sprintf(tvout_RoundKey_2, "%s\n", (RoundKey_2_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_RoundKey_2, tvout_RoundKey_2);
		}

		tcl_file.set_num(30, &tcl_file.RoundKey_2_depth);
		sprintf(tvout_RoundKey_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_RoundKey_2, tvout_RoundKey_2);

		// release memory allocation
		delete [] RoundKey_2_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_RoundKey_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_RoundKey_3, tvout_RoundKey_3);

		sc_bv<8>* RoundKey_3_tvout_wrapc_buffer = new sc_bv<8>[30];

		// RTL Name: RoundKey_3
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (3) => (235) @ (8)
					for (int i_0 = 3; i_0 <= 235; i_0 += 8)
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
							RoundKey_3_tvout_wrapc_buffer[hls_map_index].range(7, 0) = RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 30; i++)
		{
			sprintf(tvout_RoundKey_3, "%s\n", (RoundKey_3_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_RoundKey_3, tvout_RoundKey_3);
		}

		tcl_file.set_num(30, &tcl_file.RoundKey_3_depth);
		sprintf(tvout_RoundKey_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_RoundKey_3, tvout_RoundKey_3);

		// release memory allocation
		delete [] RoundKey_3_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_RoundKey_4, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_RoundKey_4, tvout_RoundKey_4);

		sc_bv<8>* RoundKey_4_tvout_wrapc_buffer = new sc_bv<8>[30];

		// RTL Name: RoundKey_4
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (4) => (236) @ (8)
					for (int i_0 = 4; i_0 <= 236; i_0 += 8)
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
							RoundKey_4_tvout_wrapc_buffer[hls_map_index].range(7, 0) = RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 30; i++)
		{
			sprintf(tvout_RoundKey_4, "%s\n", (RoundKey_4_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_RoundKey_4, tvout_RoundKey_4);
		}

		tcl_file.set_num(30, &tcl_file.RoundKey_4_depth);
		sprintf(tvout_RoundKey_4, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_RoundKey_4, tvout_RoundKey_4);

		// release memory allocation
		delete [] RoundKey_4_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_RoundKey_5, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_RoundKey_5, tvout_RoundKey_5);

		sc_bv<8>* RoundKey_5_tvout_wrapc_buffer = new sc_bv<8>[30];

		// RTL Name: RoundKey_5
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (5) => (237) @ (8)
					for (int i_0 = 5; i_0 <= 237; i_0 += 8)
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
							RoundKey_5_tvout_wrapc_buffer[hls_map_index].range(7, 0) = RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 30; i++)
		{
			sprintf(tvout_RoundKey_5, "%s\n", (RoundKey_5_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_RoundKey_5, tvout_RoundKey_5);
		}

		tcl_file.set_num(30, &tcl_file.RoundKey_5_depth);
		sprintf(tvout_RoundKey_5, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_RoundKey_5, tvout_RoundKey_5);

		// release memory allocation
		delete [] RoundKey_5_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_RoundKey_6, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_RoundKey_6, tvout_RoundKey_6);

		sc_bv<8>* RoundKey_6_tvout_wrapc_buffer = new sc_bv<8>[30];

		// RTL Name: RoundKey_6
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (6) => (238) @ (8)
					for (int i_0 = 6; i_0 <= 238; i_0 += 8)
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
							RoundKey_6_tvout_wrapc_buffer[hls_map_index].range(7, 0) = RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 30; i++)
		{
			sprintf(tvout_RoundKey_6, "%s\n", (RoundKey_6_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_RoundKey_6, tvout_RoundKey_6);
		}

		tcl_file.set_num(30, &tcl_file.RoundKey_6_depth);
		sprintf(tvout_RoundKey_6, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_RoundKey_6, tvout_RoundKey_6);

		// release memory allocation
		delete [] RoundKey_6_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_RoundKey_7, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_RoundKey_7, tvout_RoundKey_7);

		sc_bv<8>* RoundKey_7_tvout_wrapc_buffer = new sc_bv<8>[30];

		// RTL Name: RoundKey_7
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (7) => (239) @ (8)
					for (int i_0 = 7; i_0 <= 239; i_0 += 8)
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
							RoundKey_7_tvout_wrapc_buffer[hls_map_index].range(7, 0) = RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 30; i++)
		{
			sprintf(tvout_RoundKey_7, "%s\n", (RoundKey_7_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_RoundKey_7, tvout_RoundKey_7);
		}

		tcl_file.set_num(30, &tcl_file.RoundKey_7_depth);
		sprintf(tvout_RoundKey_7, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_RoundKey_7, tvout_RoundKey_7);

		// release memory allocation
		delete [] RoundKey_7_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "RoundKey_0"
		delete [] tvin_RoundKey_0;
		delete [] tvout_RoundKey_0;
		// release memory allocation: "RoundKey_1"
		delete [] tvin_RoundKey_1;
		delete [] tvout_RoundKey_1;
		// release memory allocation: "RoundKey_2"
		delete [] tvin_RoundKey_2;
		delete [] tvout_RoundKey_2;
		// release memory allocation: "RoundKey_3"
		delete [] tvin_RoundKey_3;
		delete [] tvout_RoundKey_3;
		// release memory allocation: "RoundKey_4"
		delete [] tvin_RoundKey_4;
		delete [] tvout_RoundKey_4;
		// release memory allocation: "RoundKey_5"
		delete [] tvin_RoundKey_5;
		delete [] tvout_RoundKey_5;
		// release memory allocation: "RoundKey_6"
		delete [] tvin_RoundKey_6;
		delete [] tvout_RoundKey_6;
		// release memory allocation: "RoundKey_7"
		delete [] tvin_RoundKey_7;
		delete [] tvout_RoundKey_7;
		// release memory allocation: "Key_0"
		delete [] tvin_Key_0;
		// release memory allocation: "Key_1"
		delete [] tvin_Key_1;
		// release memory allocation: "Key_2"
		delete [] tvin_Key_2;
		// release memory allocation: "Key_3"
		delete [] tvin_Key_3;
		// release memory allocation: "Key_4"
		delete [] tvin_Key_4;
		// release memory allocation: "Key_5"
		delete [] tvin_Key_5;
		// release memory allocation: "Key_6"
		delete [] tvin_Key_6;
		// release memory allocation: "Key_7"
		delete [] tvin_Key_7;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

