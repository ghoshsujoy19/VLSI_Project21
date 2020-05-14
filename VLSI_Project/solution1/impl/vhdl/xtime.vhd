-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2019.2
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity xtime is
port (
    ap_ready : OUT STD_LOGIC;
    x : IN STD_LOGIC_VECTOR (7 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (7 downto 0) );
end;


architecture behav of xtime is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_lv8_1 : STD_LOGIC_VECTOR (7 downto 0) := "00000001";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv8_1B : STD_LOGIC_VECTOR (7 downto 0) := "00011011";
    constant ap_const_lv8_0 : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    constant ap_const_logic_0 : STD_LOGIC := '0';

    signal tmp_fu_26_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal select_ln297_fu_34_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal shl_ln297_fu_20_p2 : STD_LOGIC_VECTOR (7 downto 0);


begin



    ap_ready <= ap_const_logic_1;
    ap_return <= (shl_ln297_fu_20_p2 xor select_ln297_fu_34_p3);
    select_ln297_fu_34_p3 <= 
        ap_const_lv8_1B when (tmp_fu_26_p3(0) = '1') else 
        ap_const_lv8_0;
    shl_ln297_fu_20_p2 <= std_logic_vector(shift_left(unsigned(x),to_integer(unsigned('0' & ap_const_lv8_1(8-1 downto 0)))));
    tmp_fu_26_p3 <= x(7 downto 7);
end behav;
