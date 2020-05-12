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


// wrapc file define: "RoundKey"
#define AUTOTB_TVOUT_RoundKey  "../tv/cdatafile/c.KeyExpansion.autotvout_RoundKey.dat"
#define AUTOTB_TVIN_RoundKey  "../tv/cdatafile/c.KeyExpansion.autotvin_RoundKey.dat"
// wrapc file define: "Key"
#define AUTOTB_TVIN_Key  "../tv/cdatafile/c.KeyExpansion.autotvin_Key.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "RoundKey"
#define AUTOTB_TVOUT_PC_RoundKey  "../tv/rtldatafile/rtl.KeyExpansion.autotvout_RoundKey.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			RoundKey_depth = 0;
			Key_depth = 0;
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
			total_list << "{RoundKey " << RoundKey_depth << "}\n";
			total_list << "{Key " << Key_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int RoundKey_depth;
		int Key_depth;
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


		// output port post check: "RoundKey"
		aesl_fh.read(AUTOTB_TVOUT_PC_RoundKey, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_RoundKey, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_RoundKey, AESL_token); // data

			sc_bv<32> *RoundKey_pc_buffer = new sc_bv<32>[60];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'RoundKey', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'RoundKey', possible cause: There are uninitialized variables in the C design." << endl;
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
					RoundKey_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_RoundKey, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_RoundKey))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: RoundKey
				{
					// bitslice(7, 0)
					// {
						// celement: RoundKey(7, 0)
						// {
							sc_lv<8>* RoundKey_lv0_0_236_4 = new sc_lv<8>[60];
						// }
					// }
					// bitslice(15, 8)
					// {
						// celement: RoundKey(7, 0)
						// {
							sc_lv<8>* RoundKey_lv0_1_237_4 = new sc_lv<8>[60];
						// }
					// }
					// bitslice(23, 16)
					// {
						// celement: RoundKey(7, 0)
						// {
							sc_lv<8>* RoundKey_lv0_2_238_4 = new sc_lv<8>[60];
						// }
					// }
					// bitslice(31, 24)
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
							// carray: (0) => (236) @ (4)
							for (int i_0 = 0; i_0 <= 236; i_0 += 4)
							{
								if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									RoundKey_lv0_0_236_4[hls_map_index].range(7, 0) = sc_bv<8>(RoundKey_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}
					// bitslice(15, 8)
					{
						int hls_map_index = 0;
						// celement: RoundKey(7, 0)
						{
							// carray: (1) => (237) @ (4)
							for (int i_0 = 1; i_0 <= 237; i_0 += 4)
							{
								if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									RoundKey_lv0_1_237_4[hls_map_index].range(7, 0) = sc_bv<8>(RoundKey_pc_buffer[hls_map_index].range(15, 8));
									hls_map_index++;
								}
							}
						}
					}
					// bitslice(23, 16)
					{
						int hls_map_index = 0;
						// celement: RoundKey(7, 0)
						{
							// carray: (2) => (238) @ (4)
							for (int i_0 = 2; i_0 <= 238; i_0 += 4)
							{
								if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									RoundKey_lv0_2_238_4[hls_map_index].range(7, 0) = sc_bv<8>(RoundKey_pc_buffer[hls_map_index].range(23, 16));
									hls_map_index++;
								}
							}
						}
					}
					// bitslice(31, 24)
					{
						int hls_map_index = 0;
						// celement: RoundKey(7, 0)
						{
							// carray: (3) => (239) @ (4)
							for (int i_0 = 3; i_0 <= 239; i_0 += 4)
							{
								if (&(RoundKey[0]) != NULL) // check the null address if the c port is array or others
								{
									RoundKey_lv0_3_239_4[hls_map_index].range(7, 0) = sc_bv<8>(RoundKey_pc_buffer[hls_map_index].range(31, 24));
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
					// bitslice(15, 8)
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
					// bitslice(23, 16)
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
					// bitslice(31, 24)
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
			delete [] RoundKey_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "RoundKey"
		char* tvin_RoundKey = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_RoundKey);
		char* tvout_RoundKey = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_RoundKey);

		// "Key"
		char* tvin_Key = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_Key);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_RoundKey, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_RoundKey, tvin_RoundKey);

		sc_bv<32>* RoundKey_tvin_wrapc_buffer = new sc_bv<32>[60];

		// RTL Name: RoundKey
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
							RoundKey_tvin_wrapc_buffer[hls_map_index].range(7, 0) = RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(15, 8)
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
							RoundKey_tvin_wrapc_buffer[hls_map_index].range(15, 8) = RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(23, 16)
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
							RoundKey_tvin_wrapc_buffer[hls_map_index].range(23, 16) = RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(31, 24)
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
							RoundKey_tvin_wrapc_buffer[hls_map_index].range(31, 24) = RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvin_RoundKey, "%s\n", (RoundKey_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_RoundKey, tvin_RoundKey);
		}

		tcl_file.set_num(60, &tcl_file.RoundKey_depth);
		sprintf(tvin_RoundKey, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_RoundKey, tvin_RoundKey);

		// release memory allocation
		delete [] RoundKey_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_Key, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_Key, tvin_Key);

		sc_bv<32>* Key_tvin_wrapc_buffer = new sc_bv<32>[4];

		// RTL Name: Key
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
							Key_tvin_wrapc_buffer[hls_map_index].range(7, 0) = Key_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(15, 8)
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
							Key_tvin_wrapc_buffer[hls_map_index].range(15, 8) = Key_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(23, 16)
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
							Key_tvin_wrapc_buffer[hls_map_index].range(23, 16) = Key_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(31, 24)
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
							Key_tvin_wrapc_buffer[hls_map_index].range(31, 24) = Key_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 4; i++)
		{
			sprintf(tvin_Key, "%s\n", (Key_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_Key, tvin_Key);
		}

		tcl_file.set_num(4, &tcl_file.Key_depth);
		sprintf(tvin_Key, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_Key, tvin_Key);

		// release memory allocation
		delete [] Key_tvin_wrapc_buffer;

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		KeyExpansion(RoundKey, Key);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_RoundKey, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_RoundKey, tvout_RoundKey);

		sc_bv<32>* RoundKey_tvout_wrapc_buffer = new sc_bv<32>[60];

		// RTL Name: RoundKey
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
							RoundKey_tvout_wrapc_buffer[hls_map_index].range(7, 0) = RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(15, 8)
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
							RoundKey_tvout_wrapc_buffer[hls_map_index].range(15, 8) = RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(23, 16)
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
							RoundKey_tvout_wrapc_buffer[hls_map_index].range(23, 16) = RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(31, 24)
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
							RoundKey_tvout_wrapc_buffer[hls_map_index].range(31, 24) = RoundKey_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 60; i++)
		{
			sprintf(tvout_RoundKey, "%s\n", (RoundKey_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_RoundKey, tvout_RoundKey);
		}

		tcl_file.set_num(60, &tcl_file.RoundKey_depth);
		sprintf(tvout_RoundKey, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_RoundKey, tvout_RoundKey);

		// release memory allocation
		delete [] RoundKey_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "RoundKey"
		delete [] tvout_RoundKey;
		delete [] tvin_RoundKey;
		// release memory allocation: "Key"
		delete [] tvin_Key;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

