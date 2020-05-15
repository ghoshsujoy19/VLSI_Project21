-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity KeyExpansion_sbox_rom is 
    generic(
             DWIDTH     : integer := 32; 
             AWIDTH     : integer := 6; 
             MEM_SIZE    : integer := 64
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          addr1      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce1       : in std_logic; 
          q1         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of KeyExpansion_sbox_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr1_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "01111011011101110111110001100011", 
    1 => "11000101011011110110101111110010", 
    2 => "00101011011001110000000100110000", 
    3 => "01110110101010111101011111111110", 
    4 => "01111101110010011000001011001010", 
    5 => "11110000010001110101100111111010", 
    6 => "10101111101000101101010010101101", 
    7 => "11000000011100101010010010011100", 
    8 => "00100110100100111111110110110111", 
    9 => "11001100111101110011111100110110", 
    10 => "11110001111001011010010100110100", 
    11 => "00010101001100011101100001110001", 
    12 => "11000011001000111100011100000100", 
    13 => "10011010000001011001011000011000", 
    14 => "11100010100000000001001000000111", 
    15 => "01110101101100100010011111101011", 
    16 => "00011010001011001000001100001001", 
    17 => "10100000010110100110111000011011", 
    18 => "10110011110101100011101101010010", 
    19 => "10000100001011111110001100101001", 
    20 => "11101101000000001101000101010011", 
    21 => "01011011101100011111110000100000", 
    22 => "00111001101111101100101101101010", 
    23 => "11001111010110000100110001001010", 
    24 => "11111011101010101110111111010000", 
    25 => "10000101001100110100110101000011", 
    26 => "01111111000000101111100101000101", 
    27 => "10101000100111110011110001010000", 
    28 => "10001111010000001010001101010001", 
    29 => "11110101001110001001110110010010", 
    30 => "00100001110110101011011010111100", 
    31 => "11010010111100111111111100010000", 
    32 => "11101100000100110000110011001101", 
    33 => "00010111010001001001011101011111", 
    34 => "00111101011111101010011111000100", 
    35 => "01110011000110010101110101100100", 
    36 => "11011100010011111000000101100000", 
    37 => "10001000100100000010101000100010", 
    38 => "00010100101110001110111001000110", 
    39 => "11011011000010110101111011011110", 
    40 => "00001010001110100011001011100000", 
    41 => "01011100001001000000011001001001", 
    42 => "01100010101011001101001111000010", 
    43 => "01111001111001001001010110010001", 
    44 => "01101101001101111100100011100111", 
    45 => "10101001010011101101010110001101", 
    46 => "11101010111101000101011001101100", 
    47 => "00001000101011100111101001100101", 
    48 => "00101110001001010111100010111010", 
    49 => "11000110101101001010011000011100", 
    50 => "00011111011101001101110111101000", 
    51 => "10001010100010111011110101001011", 
    52 => "01100110101101010011111001110000", 
    53 => "00001110111101100000001101001000", 
    54 => "10111001010101110011010101100001", 
    55 => "10011110000111011100000110000110", 
    56 => "00010001100110001111100011100001", 
    57 => "10010100100011101101100101101001", 
    58 => "11101001100001110001111010011011", 
    59 => "11011111001010000101010111001110", 
    60 => "00001101100010011010000110001100", 
    61 => "01101000010000101110011010111111", 
    62 => "00001111001011011001100101000001", 
    63 => "00010110101110110101010010110000" );


begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

memory_access_guard_1: process (addr1) 
begin
      addr1_tmp <= addr1;
--synthesis translate_off
      if (CONV_INTEGER(addr1) > mem_size-1) then
           addr1_tmp <= (others => '0');
      else 
           addr1_tmp <= addr1;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
        if (ce1 = '1') then 
            q1 <= mem(CONV_INTEGER(addr1_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity KeyExpansion_sbox is
    generic (
        DataWidth : INTEGER := 32;
        AddressRange : INTEGER := 64;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address1 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce1 : IN STD_LOGIC;
        q1 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of KeyExpansion_sbox is
    component KeyExpansion_sbox_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR;
            addr1 : IN STD_LOGIC_VECTOR;
            ce1 : IN STD_LOGIC;
            q1 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    KeyExpansion_sbox_rom_U :  component KeyExpansion_sbox_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0,
        addr1 => address1,
        ce1 => ce1,
        q1 => q1);

end architecture;


