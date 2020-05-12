############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project VLSI_Project
set_top KeyExpansion
add_files aes.c
add_files -tb test.c -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xc7vx485t-ffg1157-1}
create_clock -period 10 -name default
config_interface -clock_enable=0 -expose_global -m_axi_addr64=0 -m_axi_offset off -register_io off -trim_dangling_port=0
#source "./VLSI_Project/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
