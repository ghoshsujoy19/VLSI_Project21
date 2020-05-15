#include "KeyExpansion.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void KeyExpansion::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_pp0_stage0;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read())) {
            ap_enable_reg_pp0_iter0_reg = ap_start.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage21_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1_subdone.read(), ap_const_boolean_0) && 
                    esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_0))) {
            ap_enable_reg_pp0_iter1 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0))) {
        Key_0_load_2_reg_9288 = Key_0_q1.read();
        Key_1_load_1_reg_9276 = Key_1_q0.read();
        Key_1_load_2_reg_9294 = Key_1_q1.read();
        Key_2_load_1_reg_9282 = Key_2_q0.read();
        Key_2_load_2_reg_9301 = Key_2_q1.read();
        Key_3_load_2_reg_9308 = Key_3_q1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0))) {
        Key_0_load_3_reg_9173 = Key_0_q1.read();
        Key_1_load_3_reg_9181 = Key_1_q1.read();
        Key_1_load_reg_9121 = Key_1_q0.read();
        Key_2_load_3_reg_9189 = Key_2_q1.read();
        Key_2_load_reg_9127 = Key_2_q0.read();
        Key_3_load_3_reg_9197 = Key_3_q1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0))) {
        empty_11_reg_9224 = empty_11_fu_2338_p1.read();
        empty_13_reg_9238 = empty_13_fu_2352_p1.read();
        empty_15_reg_9252 = empty_15_fu_2371_p1.read();
        empty_reg_9210 = empty_fu_2324_p1.read();
        lshr_ln1_reg_9219 = Key_2_q1.read().range(7, 2);
        lshr_ln2_reg_9233 = Key_3_q1.read().range(7, 2);
        trunc_ln228_reg_9261 = trunc_ln228_fu_2375_p1.read();
        trunc_ln229_reg_9266 = trunc_ln229_fu_2379_p1.read();
        trunc_ln230_reg_9271 = trunc_ln230_fu_2383_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        empty_17_reg_9481 = empty_17_fu_3091_p2.read();
        empty_19_reg_9492 = empty_19_fu_3119_p2.read();
        trunc_ln208_4_reg_9528 = trunc_ln208_4_fu_3385_p1.read();
        trunc_ln209_4_reg_9534 = trunc_ln209_4_fu_3389_p1.read();
        xor_ln228_2_reg_9452 = xor_ln228_2_fu_3048_p2.read();
        xor_ln228_3_reg_9466 = xor_ln228_3_fu_3058_p2.read();
        xor_ln229_2_reg_9459 = xor_ln229_2_fu_3053_p2.read();
        xor_ln229_3_reg_9471 = xor_ln229_3_fu_3063_p2.read();
        xor_ln229_4_reg_9498 = xor_ln229_4_fu_3364_p2.read();
        xor_ln229_5_reg_9510 = xor_ln229_5_fu_3374_p2.read();
        xor_ln230_4_reg_9504 = xor_ln230_4_fu_3369_p2.read();
        xor_ln230_5_reg_9519 = xor_ln230_5_fu_3379_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0))) {
        empty_21_reg_9360 = empty_21_fu_2688_p2.read();
        empty_23_reg_9376 = empty_23_fu_2714_p2.read();
        trunc_ln207_2_reg_9338 = trunc_ln207_2_fu_2661_p1.read();
        trunc_ln208_2_reg_9344 = trunc_ln208_2_fu_2665_p1.read();
        trunc_ln209_2_reg_9350 = trunc_ln209_2_fu_2673_p1.read();
        trunc_ln210_2_reg_9366 = trunc_ln210_2_fu_2698_p1.read();
        xor_ln209_reg_9355 = xor_ln209_fu_2677_p2.read();
        xor_ln210_reg_9371 = xor_ln210_fu_2702_p2.read();
        xor_ln227_reg_9324 = xor_ln227_fu_2631_p2.read();
        xor_ln230_reg_9331 = xor_ln230_fu_2637_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0))) {
        empty_25_reg_9621 = empty_25_fu_3735_p2.read();
        empty_27_reg_9627 = empty_27_fu_3739_p2.read();
        empty_29_reg_9637 = empty_29_fu_3864_p2.read();
        trunc_ln208_21060264_reg_9632 = trunc_ln208_21060264_fu_3743_p2.read();
        trunc_ln209_21058262_reg_9642 = trunc_ln209_21058262_fu_3868_p2.read();
        xor_ln207_2_reg_9668 = xor_ln207_2_fu_4032_p2.read();
        xor_ln208_2_reg_9674 = xor_ln208_2_fu_4037_p2.read();
        xor_ln227_7_reg_9604 = xor_ln227_7_fu_3712_p2.read();
        xor_ln228_7_reg_9610 = xor_ln228_7_fu_3716_p2.read();
        xor_ln228_8_reg_9652 = xor_ln228_8_fu_4004_p2.read();
        xor_ln229_8_reg_9660 = xor_ln229_8_fu_4009_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0))) {
        empty_31_reg_9685 = empty_31_fu_4182_p2.read();
        trunc_ln207_21062266_reg_9680 = trunc_ln207_21062266_fu_4062_p2.read();
        trunc_ln210_21056260_reg_9690 = trunc_ln210_21056260_fu_4186_p2.read();
        xor_ln209_2_reg_9745 = xor_ln209_2_fu_4389_p2.read();
        xor_ln210_3_reg_9751 = xor_ln210_3_fu_4394_p2.read();
        xor_ln227_8_reg_9695 = xor_ln227_8_fu_4312_p2.read();
        xor_ln228_10_reg_9711 = xor_ln228_10_fu_4323_p2.read();
        xor_ln228_11_reg_9725 = xor_ln228_11_fu_4340_p2.read();
        xor_ln229_10_reg_9718 = xor_ln229_10_fu_4327_p2.read();
        xor_ln229_11_reg_9730 = xor_ln229_11_fu_4345_p2.read();
        xor_ln230_8_reg_9703 = xor_ln230_8_fu_4318_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0))) {
        empty_33_reg_9781 = empty_33_fu_4437_p2.read();
        empty_35_reg_9786 = empty_35_fu_4562_p2.read();
        empty_41_reg_9850 = empty_41_fu_4763_p1.read();
        lshr_ln207_4_reg_9845 = xor_ln228_15_fu_4748_p2.read().range(7, 2);
        lshr_ln210_4_reg_9856 = xor_ln227_15_fu_4743_p2.read().range(7, 2);
        trunc_ln210_6_reg_9861 = trunc_ln210_6_fu_4777_p1.read();
        xor_ln227_10_reg_9757 = xor_ln227_10_fu_4419_p2.read();
        xor_ln227_11_reg_9771 = xor_ln227_11_fu_4427_p2.read();
        xor_ln227_12_reg_9801 = xor_ln227_12_fu_4723_p2.read();
        xor_ln227_13_reg_9813 = xor_ln227_13_fu_4733_p2.read();
        xor_ln227_15_reg_9829 = xor_ln227_15_fu_4743_p2.read();
        xor_ln228_12_reg_9807 = xor_ln228_12_fu_4728_p2.read();
        xor_ln228_13_reg_9821 = xor_ln228_13_fu_4738_p2.read();
        xor_ln228_15_reg_9837 = xor_ln228_15_fu_4748_p2.read();
        xor_ln230_10_reg_9764 = xor_ln230_10_fu_4423_p2.read();
        xor_ln230_11_reg_9776 = xor_ln230_11_fu_4432_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0))) {
        empty_37_reg_9867 = empty_37_fu_4781_p2.read();
        empty_39_reg_9872 = empty_39_fu_4906_p2.read();
        empty_43_reg_9931 = empty_43_fu_5075_p1.read();
        empty_45_reg_9942 = empty_45_fu_5089_p1.read();
        lshr_ln208_4_reg_9926 = xor_ln229_15_fu_5051_p2.read().range(7, 2);
        lshr_ln209_4_reg_9937 = xor_ln230_15_fu_5056_p2.read().range(7, 2);
        xor_ln229_12_reg_9877 = xor_ln229_12_fu_5031_p2.read();
        xor_ln229_13_reg_9889 = xor_ln229_13_fu_5041_p2.read();
        xor_ln229_15_reg_9905 = xor_ln229_15_fu_5051_p2.read();
        xor_ln230_12_reg_9883 = xor_ln230_12_fu_5036_p2.read();
        xor_ln230_13_reg_9897 = xor_ln230_13_fu_5046_p2.read();
        xor_ln230_15_reg_9913 = xor_ln230_15_fu_5056_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage13_11001.read(), ap_const_boolean_0))) {
        empty_48_reg_10174 = empty_48_fu_6101_p2.read();
        empty_50_reg_10179 = empty_50_fu_6226_p2.read();
        empty_56_reg_10226 = empty_56_fu_6385_p1.read();
        empty_65_reg_10247 = empty_65_fu_6429_p1.read();
        trunc_ln207_61054256_reg_10231 = trunc_ln207_61054256_fu_6394_p2.read();
        trunc_ln210_61048250_reg_10252 = trunc_ln210_61048250_fu_6438_p2.read();
        xor_ln227_20_reg_10184 = xor_ln227_20_fu_6357_p2.read();
        xor_ln227_21_reg_10196 = xor_ln227_21_fu_6367_p2.read();
        xor_ln228_20_reg_10190 = xor_ln228_20_fu_6362_p2.read();
        xor_ln228_21_reg_10205 = xor_ln228_21_fu_6372_p2.read();
        xor_ln229_23_reg_10214 = xor_ln229_23_fu_6377_p2.read();
        xor_ln230_23_reg_10220 = xor_ln230_23_fu_6381_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0))) {
        empty_52_reg_10112 = empty_52_fu_5803_p2.read();
        empty_54_reg_10117 = empty_54_fu_5928_p2.read();
        empty_59_reg_10152 = empty_59_fu_6073_p1.read();
        empty_62_reg_10163 = empty_62_fu_6087_p1.read();
        trunc_ln208_61052254_reg_10157 = trunc_ln208_61052254_fu_6082_p2.read();
        trunc_ln209_61050252_reg_10168 = trunc_ln209_61050252_fu_6096_p2.read();
        xor_ln228_18_reg_10085 = xor_ln228_18_fu_5760_p2.read();
        xor_ln228_19_reg_10092 = xor_ln228_19_fu_5764_p2.read();
        xor_ln229_19_reg_10097 = xor_ln229_19_fu_5769_p2.read();
        xor_ln229_20_reg_10122 = xor_ln229_20_fu_6053_p2.read();
        xor_ln229_21_reg_10134 = xor_ln229_21_fu_6063_p2.read();
        xor_ln230_20_reg_10128 = xor_ln230_20_fu_6058_p2.read();
        xor_ln230_21_reg_10143 = xor_ln230_21_fu_6068_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0))) {
        empty_68_reg_10394 = empty_68_fu_7129_p2.read();
        empty_70_reg_10399 = empty_70_fu_7254_p2.read();
        empty_76_reg_10461 = empty_76_fu_7455_p1.read();
        empty_82_reg_10472 = empty_82_fu_7469_p1.read();
        lshr_ln207_8_reg_10456 = xor_ln228_31_fu_7440_p2.read().range(7, 2);
        lshr_ln210_8_reg_10467 = xor_ln227_31_fu_7435_p2.read().range(7, 2);
        xor_ln227_26_reg_10370 = xor_ln227_26_fu_7111_p2.read();
        xor_ln227_27_reg_10384 = xor_ln227_27_fu_7119_p2.read();
        xor_ln227_28_reg_10414 = xor_ln227_28_fu_7415_p2.read();
        xor_ln227_29_reg_10426 = xor_ln227_29_fu_7425_p2.read();
        xor_ln227_31_reg_10442 = xor_ln227_31_fu_7435_p2.read();
        xor_ln228_28_reg_10420 = xor_ln228_28_fu_7420_p2.read();
        xor_ln228_29_reg_10434 = xor_ln228_29_fu_7430_p2.read();
        xor_ln228_31_reg_10449 = xor_ln228_31_fu_7440_p2.read();
        xor_ln230_26_reg_10377 = xor_ln230_26_fu_7115_p2.read();
        xor_ln230_27_reg_10389 = xor_ln230_27_fu_7124_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage17_11001.read(), ap_const_boolean_0))) {
        empty_72_reg_10477 = empty_72_fu_7473_p2.read();
        empty_74_reg_10482 = empty_74_fu_7598_p2.read();
        empty_78_reg_10539 = empty_78_fu_7772_p1.read();
        empty_80_reg_10550 = empty_80_fu_7786_p1.read();
        lshr_ln208_8_reg_10534 = xor_ln229_31_fu_7748_p2.read().range(7, 2);
        lshr_ln209_8_reg_10545 = xor_ln230_31_fu_7753_p2.read().range(7, 2);
        xor_ln229_28_reg_10487 = xor_ln229_28_fu_7723_p2.read();
        xor_ln229_29_reg_10499 = xor_ln229_29_fu_7733_p2.read();
        xor_ln229_31_reg_10515 = xor_ln229_31_fu_7748_p2.read();
        xor_ln230_28_reg_10493 = xor_ln230_28_fu_7728_p2.read();
        xor_ln230_29_reg_10507 = xor_ln230_29_fu_7738_p2.read();
        xor_ln230_31_reg_10522 = xor_ln230_31_fu_7753_p2.read();
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)))) {
        reg_2299 = Key_0_q0.read();
        reg_2304 = Key_3_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage10_11001.read(), ap_const_boolean_0))) {
        trunc_ln207_41070278_reg_9953 = trunc_ln207_41070278_fu_5097_p2.read();
        trunc_ln210_41064258_reg_9969 = trunc_ln210_41064258_fu_5225_p2.read();
        xor_ln209_3_reg_9992 = xor_ln209_3_fu_5379_p2.read();
        xor_ln210_4_reg_9998 = xor_ln210_4_fu_5384_p2.read();
        xor_ln227_16_reg_9976 = xor_ln227_16_fu_5350_p2.read();
        xor_ln230_16_reg_9984 = xor_ln230_16_fu_5356_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0))) {
        trunc_ln207_4_reg_9582 = trunc_ln207_4_fu_3672_p1.read();
        xor_ln210_2_reg_9598 = xor_ln210_2_fu_3706_p2.read();
        xor_ln227_4_reg_9540 = xor_ln227_4_fu_3639_p2.read();
        xor_ln227_5_reg_9552 = xor_ln227_5_fu_3649_p2.read();
        xor_ln228_4_reg_9546 = xor_ln228_4_fu_3644_p2.read();
        xor_ln228_5_reg_9561 = xor_ln228_5_fu_3655_p2.read();
        xor_ln229_7_reg_9570 = xor_ln229_7_fu_3664_p2.read();
        xor_ln230_7_reg_9576 = xor_ln230_7_fu_3668_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage18_11001.read(), ap_const_boolean_0))) {
        trunc_ln207_81046272_reg_10561 = trunc_ln207_81046272_fu_7794_p2.read();
        trunc_ln209_81042268_reg_10576 = trunc_ln209_81042268_fu_7922_p2.read();
        trunc_ln209_91002210_reg_10597 = trunc_ln209_91002210_fu_8081_p2.read();
        trunc_ln210_91000208_reg_10602 = trunc_ln210_91000208_fu_8106_p2.read();
        xor_ln227_32_reg_10581 = xor_ln227_32_fu_8051_p2.read();
        xor_ln230_32_reg_10589 = xor_ln230_32_fu_8057_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage19_11001.read(), ap_const_boolean_0))) {
        trunc_ln207_91006214_reg_10645 = trunc_ln207_91006214_fu_8413_p2.read();
        trunc_ln208_91004212_reg_10650 = trunc_ln208_91004212_fu_8438_p2.read();
        xor_ln227_34_reg_10623 = xor_ln227_34_fu_8377_p2.read();
        xor_ln227_35_reg_10635 = xor_ln227_35_fu_8385_p2.read();
        xor_ln228_32_reg_10607 = xor_ln228_32_fu_8362_p2.read();
        xor_ln229_32_reg_10615 = xor_ln229_32_fu_8367_p2.read();
        xor_ln230_34_reg_10629 = xor_ln230_34_fu_8381_p2.read();
        xor_ln230_35_reg_10640 = xor_ln230_35_fu_8390_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage11_11001.read(), ap_const_boolean_0))) {
        trunc_ln208_41068276_reg_10004 = trunc_ln208_41068276_fu_5409_p2.read();
        trunc_ln209_41066274_reg_10010 = trunc_ln209_41066274_fu_5529_p2.read();
        xor_ln207_3_reg_10063 = xor_ln207_3_fu_5700_p2.read();
        xor_ln208_3_reg_10069 = xor_ln208_3_fu_5705_p2.read();
        xor_ln227_18_reg_10031 = xor_ln227_18_fu_5659_p2.read();
        xor_ln227_19_reg_10053 = xor_ln227_19_fu_5672_p2.read();
        xor_ln228_16_reg_10016 = xor_ln228_16_fu_5649_p2.read();
        xor_ln229_16_reg_10024 = xor_ln229_16_fu_5654_p2.read();
        xor_ln229_18_reg_10038 = xor_ln229_18_fu_5663_p2.read();
        xor_ln230_18_reg_10046 = xor_ln230_18_fu_5668_p2.read();
        xor_ln230_19_reg_10058 = xor_ln230_19_fu_5695_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage14_11001.read(), ap_const_boolean_0))) {
        xor_ln207_4_reg_10296 = xor_ln207_4_fu_6739_p2.read();
        xor_ln208_4_reg_10302 = xor_ln208_4_fu_6744_p2.read();
        xor_ln227_23_reg_10258 = xor_ln227_23_fu_6443_p2.read();
        xor_ln228_23_reg_10264 = xor_ln228_23_fu_6447_p2.read();
        xor_ln228_24_reg_10280 = xor_ln228_24_fu_6711_p2.read();
        xor_ln229_24_reg_10288 = xor_ln229_24_fu_6716_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0))) {
        xor_ln207_reg_9430 = xor_ln207_fu_2998_p2.read();
        xor_ln208_reg_9436 = xor_ln208_fu_3003_p2.read();
        xor_ln227_1_reg_9396 = xor_ln227_1_fu_2960_p2.read();
        xor_ln227_2_reg_9406 = xor_ln227_2_fu_2970_p2.read();
        xor_ln227_3_reg_9420 = xor_ln227_3_fu_2988_p2.read();
        xor_ln228_reg_9382 = xor_ln228_fu_2950_p2.read();
        xor_ln229_reg_9389 = xor_ln229_fu_2955_p2.read();
        xor_ln230_1_reg_9401 = xor_ln230_1_fu_2965_p2.read();
        xor_ln230_2_reg_9413 = xor_ln230_2_fu_2983_p2.read();
        xor_ln230_3_reg_9425 = xor_ln230_3_fu_2993_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0))) {
        xor_ln209_4_reg_10358 = xor_ln209_4_fu_7081_p2.read();
        xor_ln210_5_reg_10364 = xor_ln210_5_fu_7086_p2.read();
        xor_ln227_24_reg_10308 = xor_ln227_24_fu_7004_p2.read();
        xor_ln228_26_reg_10324 = xor_ln228_26_fu_7015_p2.read();
        xor_ln228_27_reg_10338 = xor_ln228_27_fu_7032_p2.read();
        xor_ln229_26_reg_10331 = xor_ln229_26_fu_7019_p2.read();
        xor_ln229_27_reg_10343 = xor_ln229_27_fu_7037_p2.read();
        xor_ln230_24_reg_10316 = xor_ln230_24_fu_7010_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage21_11001.read(), ap_const_boolean_0))) {
        xor_ln227_36_reg_10729 = xor_ln227_36_fu_9033_p2.read();
        xor_ln227_37_reg_10739 = xor_ln227_37_fu_9043_p2.read();
        xor_ln227_38_reg_10749 = xor_ln227_38_fu_9053_p2.read();
        xor_ln227_39_reg_10769 = xor_ln227_39_fu_9071_p2.read();
        xor_ln228_36_reg_10734 = xor_ln228_36_fu_9038_p2.read();
        xor_ln228_37_reg_10744 = xor_ln228_37_fu_9048_p2.read();
        xor_ln228_38_reg_10754 = xor_ln228_38_fu_9058_p2.read();
        xor_ln228_39_reg_10774 = xor_ln228_39_fu_9076_p2.read();
        xor_ln229_38_reg_10759 = xor_ln229_38_fu_9063_p2.read();
        xor_ln230_38_reg_10764 = xor_ln230_38_fu_9067_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage20_11001.read(), ap_const_boolean_0))) {
        xor_ln228_34_reg_10665 = xor_ln228_34_fu_8489_p2.read();
        xor_ln228_35_reg_10677 = xor_ln228_35_fu_8497_p2.read();
        xor_ln229_34_reg_10671 = xor_ln229_34_fu_8493_p2.read();
        xor_ln229_35_reg_10682 = xor_ln229_35_fu_8502_p2.read();
        xor_ln229_36_reg_10697 = xor_ln229_36_fu_8767_p2.read();
        xor_ln229_37_reg_10707 = xor_ln229_37_fu_8777_p2.read();
        xor_ln229_39_reg_10719 = xor_ln229_39_fu_8787_p2.read();
        xor_ln230_36_reg_10702 = xor_ln230_36_fu_8772_p2.read();
        xor_ln230_37_reg_10713 = xor_ln230_37_fu_8782_p2.read();
        xor_ln230_39_reg_10724 = xor_ln230_39_fu_8792_p2.read();
    }
}

void KeyExpansion::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_idle_pp0_1to1.read())))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_block_pp0_stage1_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_reset_idle_pp0.read(), ap_const_logic_0))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage1_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_reset_idle_pp0.read()))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            }
            break;
        case 4 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage2_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage3;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            }
            break;
        case 8 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage3_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage4;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage3;
            }
            break;
        case 16 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage4_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage5;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage4;
            }
            break;
        case 32 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage5_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage6;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage5;
            }
            break;
        case 64 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage6_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage7;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage6;
            }
            break;
        case 128 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage7_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage8;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage7;
            }
            break;
        case 256 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage8_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage9;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage8;
            }
            break;
        case 512 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage9_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage10;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage9;
            }
            break;
        case 1024 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage10_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage11;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage10;
            }
            break;
        case 2048 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage11_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage12;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage11;
            }
            break;
        case 4096 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage12_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage13;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage12;
            }
            break;
        case 8192 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage13_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage14;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage13;
            }
            break;
        case 16384 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage14_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage15;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage14;
            }
            break;
        case 32768 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage15_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage16;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage15;
            }
            break;
        case 65536 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage16_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage17;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage16;
            }
            break;
        case 131072 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage17_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage18;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage17;
            }
            break;
        case 262144 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage18_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage19;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage18;
            }
            break;
        case 524288 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage19_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage20;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage19;
            }
            break;
        case 1048576 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage20_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage21;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage20;
            }
            break;
        case 2097152 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage21_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage21;
            }
            break;
        default : 
            ap_NS_fsm =  (sc_lv<22>) ("XXXXXXXXXXXXXXXXXXXXXX");
            break;
    }
}

}

