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
#define AUTOTB_TVOUT_RoundKey_0  "../tv/cdatafile/c.KeyExpansion.autotvout_RoundKey_0.dat"
#define AUTOTB_TVIN_RoundKey_0  "../tv/cdatafile/c.KeyExpansion.autotvin_RoundKey_0.dat"
// wrapc file define: "RoundKey_1"
#define AUTOTB_TVOUT_RoundKey_1  "../tv/cdatafile/c.KeyExpansion.autotvout_RoundKey_1.dat"
#define AUTOTB_TVIN_RoundKey_1  "../tv/cdatafile/c.KeyExpansion.autotvin_RoundKey_1.dat"
// wrapc file define: "RoundKey_2"
#define AUTOTB_TVOUT_RoundKey_2  "../tv/cdatafile/c.KeyExpansion.autotvout_RoundKey_2.dat"
#define AUTOTB_TVIN_RoundKey_2  "../tv/cdatafile/c.KeyExpansion.autotvin_RoundKey_2.dat"
// wrapc file define: "RoundKey_3"
#define AUTOTB_TVOUT_RoundKey_3  "../tv/cdatafile/c.KeyExpansion.autotvout_RoundKey_3.dat"
#define AUTOTB_TVIN_RoundKey_3  "../tv/cdatafile/c.KeyExpansion.autotvin_RoundKey_3.dat"
// wrapc file define: "Key_0"
#define AUTOTB_TVIN_Key_0  "../tv/cdatafile/c.KeyExpansion.autotvin_Key_0.dat"
// wrapc file define: "Key_1"
#define AUTOTB_TVIN_Key_1  "../tv/cdatafile/c.KeyExpansion.autotvin_Key_1.dat"
// wrapc file define: "Key_2"
#define AUTOTB_TVIN_Key_2  "../tv/cdatafile/c.KeyExpansion.autotvin_Key_2.dat"
// wrapc file define: "Key_3"
#define AUTOTB_TVIN_Key_3  "../tv/cdatafile/c.KeyExpansion.autotvin_Key_3.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "RoundKey_0"
#define AUTOTB_TVOUT_PC_RoundKey_0  "../tv/rtldatafile/rtl.KeyExpansion.autotvout_RoundKey_0.dat"
// tvout file define: "RoundKey_1"
#define AUTOTB_TVOUT_PC_RoundKey_1  "../tv/rtldatafile/rtl.KeyExpansion.autotvout_RoundKey_1.dat"
// tvout file define: "RoundKey_2"
#define AUTOTB_TVOUT_PC_RoundKey_2  "../tv/rtldatafile/rtl.KeyExpansion.autotvout_RoundKey_2.dat"
// tvout file define: "RoundKey_3"
#define AUTOTB_TVOUT_PC_RoundKey_3  "../tv/rtldatafile/rtl.KeyExpansion.autotvout_RoundKey_3.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			RoundKey_0_depth = 0;
			RoundKey_1_depth = 0;
			RoundKey_2_depth = 0;
			RoundKey_3_depth = 0;
			Key_0_depth = 0;
			Key_1_depth = 0;
			Key_2_depth = 0;
			Key_3_depth = 0;
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
			total_list << "{Key_0 " << Key_0_depth << "}\n";
			total_list << "{Key_1 " << Key_1_depth << "}\n";
			total_list << "{Key_2 " << Key_2_depth << "}\n";
			total_list << "{Key_3 " << Key_3_depth << "}\n";
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
		int Key_0_depth;
		int Key_1_depth;
		int Key_2_depth;
		int Key_3_depth;
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

			sc_bv<8> *RoundKey_0_pc_buffer = new sc_bv<8>[60];
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
							sc_lv<8>* RoundKey_lv0_0_236_4 = new sc_lv<8>[60];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: RoundKey(7, 0)
						{
							// carray: (0) => (236) @ (4)
							for (int i_0 = 0; i_0 <= 236; i_0 += 4)
							{
								if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									RoundKey_lv0_0_236_4[hls_map_index].range(7, 0) = sc_bv<8>(RoundKey_0_pc_buffer[hls_map_index].range(7, 0));
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
							// carray: (0) => (236) @ (4)
							for (int i_0 = 0; i_0 <= 236; i_0 += 4)
							{
								// sub                    : i_0
								// ori_name               : RoundKey[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : RoundKey[0]
								// output_left_conversion : RoundKey[i_0]
								// output_type_conversion : (RoundKey_lv0_0_236_4[hls_map_index]).to_uint64()
								if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									RoundKey[i_0] = (RoundKey_lv0_0_236_4[hls_map_index]).to_uint64();
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

			sc_bv<8> *RoundKey_1_pc_buffer = new sc_bv<8>[60];
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
							sc_lv<8>* RoundKey_lv0_1_237_4 = new sc_lv<8>[60];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: RoundKey(7, 0)
						{
							// carray: (1) => (237) @ (4)
							for (int i_0 = 1; i_0 <= 237; i_0 += 4)
							{
								if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									RoundKey_lv0_1_237_4[hls_map_index].range(7, 0) = sc_bv<8>(RoundKey_1_pc_buffer[hls_map_index].range(7, 0));
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
							// carray: (1) => (237) @ (4)
							for (int i_0 = 1; i_0 <= 237; i_0 += 4)
							{
								// sub                    : i_0
								// ori_name               : RoundKey[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : RoundKey[0]
								// output_left_conversion : RoundKey[i_0]
								// output_type_conversion : (RoundKey_lv0_1_237_4[hls_map_index]).to_uint64()
								if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									RoundKey[i_0] = (RoundKey_lv0_1_237_4[hls_map_index]).to_uint64();
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

			sc_bv<8> *RoundKey_2_pc_buffer = new sc_bv<8>[60];
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
							sc_lv<8>* RoundKey_lv0_2_238_4 = new sc_lv<8>[60];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: RoundKey(7, 0)
						{
							// carray: (2) => (238) @ (4)
							for (int i_0 = 2; i_0 <= 238; i_0 += 4)
							{
								if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									RoundKey_lv0_2_238_4[hls_map_index].range(7, 0) = sc_bv<8>(RoundKey_2_pc_buffer[hls_map_index].range(7, 0));
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
							// carray: (2) => (238) @ (4)
							for (int i_0 = 2; i_0 <= 238; i_0 += 4)
							{
								// sub                    : i_0
								// ori_name               : RoundKey[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : RoundKey[0]
								// output_left_conversion : RoundKey[i_0]
								// output_type_conversion : (RoundKey_lv0_2_238_4[hls_map_index]).to_uint64()
								if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									RoundKey[i_0] = (RoundKey_lv0_2_238_4[hls_map_index]).to_uint64();
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

			sc_bv<8> *RoundKey_3_pc_buffer = new sc_bv<8>[60];
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
							sc_lv<8>* RoundKey_lv0_3_239_4 = new sc_lv<8>[60];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: RoundKey(7, 0)
						{
							// carray: (3) => (239) @ (4)
							for (int i_0 = 3; i_0 <= 239; i_0 += 4)
							{
								if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									RoundKey_lv0_3_239_4[hls_map_index].range(7, 0) = sc_bv<8>(RoundKey_3_pc_buffer[hls_map_index].range(7, 0));
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
							// carray: (3) => (239) @ (4)
							for (int i_0 = 3; i_0 <= 239; i_0 += 4)
							{
								// sub                    : i_0
								// ori_name               : RoundKey[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : RoundKey[0]
								// output_left_conversion : RoundKey[i_0]
								// output_type_conversion : (RoundKey_lv0_3_239_4[hls_map_index]).to_uint64()
								if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									RoundKey[i_0] = (RoundKey_lv0_3_239_4[hls_map_index]).to_uint64();
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

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_RoundKey_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_RoundKey_0, tvin_RoundKey_0);

		sc_bv<8>* RoundKey_0_tvin_wrapc_buffer = new sc_bv<8>[60];

		// RTL Name: RoundKey_0
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (0) => (236) @ (4)
					for (int i_0 = 0; i_0 <= 236; i_0 += 4)
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
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvin_RoundKey_0, "%s\n", (RoundKey_0_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_RoundKey_0, tvin_RoundKey_0);
		}

		tcl_file.set_num(60, &tcl_file.RoundKey_0_depth);
		sprintf(tvin_RoundKey_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_RoundKey_0, tvin_RoundKey_0);

		// release memory allocation
		delete [] RoundKey_0_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_RoundKey_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_RoundKey_1, tvin_RoundKey_1);

		sc_bv<8>* RoundKey_1_tvin_wrapc_buffer = new sc_bv<8>[60];

		// RTL Name: RoundKey_1
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (1) => (237) @ (4)
					for (int i_0 = 1; i_0 <= 237; i_0 += 4)
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
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvin_RoundKey_1, "%s\n", (RoundKey_1_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_RoundKey_1, tvin_RoundKey_1);
		}

		tcl_file.set_num(60, &tcl_file.RoundKey_1_depth);
		sprintf(tvin_RoundKey_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_RoundKey_1, tvin_RoundKey_1);

		// release memory allocation
		delete [] RoundKey_1_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_RoundKey_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_RoundKey_2, tvin_RoundKey_2);

		sc_bv<8>* RoundKey_2_tvin_wrapc_buffer = new sc_bv<8>[60];

		// RTL Name: RoundKey_2
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (2) => (238) @ (4)
					for (int i_0 = 2; i_0 <= 238; i_0 += 4)
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
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvin_RoundKey_2, "%s\n", (RoundKey_2_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_RoundKey_2, tvin_RoundKey_2);
		}

		tcl_file.set_num(60, &tcl_file.RoundKey_2_depth);
		sprintf(tvin_RoundKey_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_RoundKey_2, tvin_RoundKey_2);

		// release memory allocation
		delete [] RoundKey_2_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_RoundKey_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_RoundKey_3, tvin_RoundKey_3);

		sc_bv<8>* RoundKey_3_tvin_wrapc_buffer = new sc_bv<8>[60];

		// RTL Name: RoundKey_3
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (3) => (239) @ (4)
					for (int i_0 = 3; i_0 <= 239; i_0 += 4)
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
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvin_RoundKey_3, "%s\n", (RoundKey_3_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_RoundKey_3, tvin_RoundKey_3);
		}

		tcl_file.set_num(60, &tcl_file.RoundKey_3_depth);
		sprintf(tvin_RoundKey_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_RoundKey_3, tvin_RoundKey_3);

		// release memory allocation
		delete [] RoundKey_3_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_Key_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_Key_0, tvin_Key_0);

		sc_bv<8>* Key_0_tvin_wrapc_buffer = new sc_bv<8>[4];

		// RTL Name: Key_0
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: Key(7, 0)
				{
					// carray: (0) => (12) @ (4)
					for (int i_0 = 0; i_0 <= 12; i_0 += 4)
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
		for (int i = 0; i < 4; i++)
		{
			sprintf(tvin_Key_0, "%s\n", (Key_0_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_Key_0, tvin_Key_0);
		}

		tcl_file.set_num(4, &tcl_file.Key_0_depth);
		sprintf(tvin_Key_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_Key_0, tvin_Key_0);

		// release memory allocation
		delete [] Key_0_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_Key_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_Key_1, tvin_Key_1);

		sc_bv<8>* Key_1_tvin_wrapc_buffer = new sc_bv<8>[4];

		// RTL Name: Key_1
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: Key(7, 0)
				{
					// carray: (1) => (13) @ (4)
					for (int i_0 = 1; i_0 <= 13; i_0 += 4)
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
		for (int i = 0; i < 4; i++)
		{
			sprintf(tvin_Key_1, "%s\n", (Key_1_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_Key_1, tvin_Key_1);
		}

		tcl_file.set_num(4, &tcl_file.Key_1_depth);
		sprintf(tvin_Key_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_Key_1, tvin_Key_1);

		// release memory allocation
		delete [] Key_1_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_Key_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_Key_2, tvin_Key_2);

		sc_bv<8>* Key_2_tvin_wrapc_buffer = new sc_bv<8>[4];

		// RTL Name: Key_2
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: Key(7, 0)
				{
					// carray: (2) => (14) @ (4)
					for (int i_0 = 2; i_0 <= 14; i_0 += 4)
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
		for (int i = 0; i < 4; i++)
		{
			sprintf(tvin_Key_2, "%s\n", (Key_2_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_Key_2, tvin_Key_2);
		}

		tcl_file.set_num(4, &tcl_file.Key_2_depth);
		sprintf(tvin_Key_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_Key_2, tvin_Key_2);

		// release memory allocation
		delete [] Key_2_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_Key_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_Key_3, tvin_Key_3);

		sc_bv<8>* Key_3_tvin_wrapc_buffer = new sc_bv<8>[4];

		// RTL Name: Key_3
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: Key(7, 0)
				{
					// carray: (3) => (15) @ (4)
					for (int i_0 = 3; i_0 <= 15; i_0 += 4)
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
		for (int i = 0; i < 4; i++)
		{
			sprintf(tvin_Key_3, "%s\n", (Key_3_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_Key_3, tvin_Key_3);
		}

		tcl_file.set_num(4, &tcl_file.Key_3_depth);
		sprintf(tvin_Key_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_Key_3, tvin_Key_3);

		// release memory allocation
		delete [] Key_3_tvin_wrapc_buffer;

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		KeyExpansion(RoundKey, Key);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_RoundKey_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_RoundKey_0, tvout_RoundKey_0);

		sc_bv<8>* RoundKey_0_tvout_wrapc_buffer = new sc_bv<8>[60];

		// RTL Name: RoundKey_0
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (0) => (236) @ (4)
					for (int i_0 = 0; i_0 <= 236; i_0 += 4)
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
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvout_RoundKey_0, "%s\n", (RoundKey_0_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_RoundKey_0, tvout_RoundKey_0);
		}

		tcl_file.set_num(60, &tcl_file.RoundKey_0_depth);
		sprintf(tvout_RoundKey_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_RoundKey_0, tvout_RoundKey_0);

		// release memory allocation
		delete [] RoundKey_0_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_RoundKey_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_RoundKey_1, tvout_RoundKey_1);

		sc_bv<8>* RoundKey_1_tvout_wrapc_buffer = new sc_bv<8>[60];

		// RTL Name: RoundKey_1
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (1) => (237) @ (4)
					for (int i_0 = 1; i_0 <= 237; i_0 += 4)
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
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvout_RoundKey_1, "%s\n", (RoundKey_1_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_RoundKey_1, tvout_RoundKey_1);
		}

		tcl_file.set_num(60, &tcl_file.RoundKey_1_depth);
		sprintf(tvout_RoundKey_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_RoundKey_1, tvout_RoundKey_1);

		// release memory allocation
		delete [] RoundKey_1_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_RoundKey_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_RoundKey_2, tvout_RoundKey_2);

		sc_bv<8>* RoundKey_2_tvout_wrapc_buffer = new sc_bv<8>[60];

		// RTL Name: RoundKey_2
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (2) => (238) @ (4)
					for (int i_0 = 2; i_0 <= 238; i_0 += 4)
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
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvout_RoundKey_2, "%s\n", (RoundKey_2_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_RoundKey_2, tvout_RoundKey_2);
		}

		tcl_file.set_num(60, &tcl_file.RoundKey_2_depth);
		sprintf(tvout_RoundKey_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_RoundKey_2, tvout_RoundKey_2);

		// release memory allocation
		delete [] RoundKey_2_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_RoundKey_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_RoundKey_3, tvout_RoundKey_3);

		sc_bv<8>* RoundKey_3_tvout_wrapc_buffer = new sc_bv<8>[60];

		// RTL Name: RoundKey_3
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: RoundKey(7, 0)
				{
					// carray: (3) => (239) @ (4)
					for (int i_0 = 3; i_0 <= 239; i_0 += 4)
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
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvout_RoundKey_3, "%s\n", (RoundKey_3_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_RoundKey_3, tvout_RoundKey_3);
		}

		tcl_file.set_num(60, &tcl_file.RoundKey_3_depth);
		sprintf(tvout_RoundKey_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_RoundKey_3, tvout_RoundKey_3);

		// release memory allocation
		delete [] RoundKey_3_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "RoundKey_0"
		delete [] tvout_RoundKey_0;
		delete [] tvin_RoundKey_0;
		// release memory allocation: "RoundKey_1"
		delete [] tvout_RoundKey_1;
		delete [] tvin_RoundKey_1;
		// release memory allocation: "RoundKey_2"
		delete [] tvout_RoundKey_2;
		delete [] tvin_RoundKey_2;
		// release memory allocation: "RoundKey_3"
		delete [] tvout_RoundKey_3;
		delete [] tvin_RoundKey_3;
		// release memory allocation: "Key_0"
		delete [] tvin_Key_0;
		// release memory allocation: "Key_1"
		delete [] tvin_Key_1;
		// release memory allocation: "Key_2"
		delete [] tvin_Key_2;
		// release memory allocation: "Key_3"
		delete [] tvin_Key_3;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

