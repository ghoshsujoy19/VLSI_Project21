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
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0))) {
            reg_1054 = Key_q1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0))) {
            reg_1054 = Key_q0.read();
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0))) {
        Key_load_3_reg_8256 = Key_q1.read();
        tmp_10_reg_8275 = Key_q1.read().range(23, 16);
        tmp_11_reg_8282 = Key_q1.read().range(31, 24);
        tmp_25_reg_8345 = Key_q0.read().range(17, 16);
        tmp_26_reg_8350 = Key_q0.read().range(25, 24);
        tmp_4_reg_8236 = Key_q0.read().range(23, 16);
        tmp_6_reg_8241 = Key_q0.read().range(31, 24);
        tmp_8_reg_8268 = Key_q1.read().range(15, 8);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0))) {
        empty_26_reg_8336 = empty_26_fu_1152_p1.read();
        lshr_ln2_reg_8317 = Key_q1.read().range(31, 26);
        lshr_ln3_reg_8331 = Key_q1.read().range(7, 2);
        tmp_12_reg_8294 = Key_q1.read().range(9, 8);
        tmp_14_reg_8308 = Key_q1.read().range(17, 16);
        tmp_17_reg_8322 = Key_q1.read().range(25, 24);
        trunc_ln166_3_reg_8261 = trunc_ln166_3_fu_1068_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0))) {
        empty_28_reg_8422 = empty_28_fu_1464_p2.read();
        empty_34_reg_8450 = empty_34_fu_1490_p2.read();
        trunc_ln166_1_reg_8355 = trunc_ln166_1_fu_1160_p1.read();
        trunc_ln166_2_reg_8373 = trunc_ln166_2_fu_1164_p1.read();
        trunc_ln208_2_reg_8440 = trunc_ln208_2_fu_1474_p1.read();
        xor_ln205_reg_8417 = xor_ln205_fu_1452_p2.read();
        xor_ln208_reg_8445 = xor_ln208_fu_1478_p2.read();
        xor_ln227_reg_8403 = xor_ln227_fu_1412_p2.read();
        xor_ln228_reg_8410 = xor_ln228_fu_1418_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0))) {
        empty_30_reg_8514 = empty_30_fu_1808_p2.read();
        empty_32_reg_8525 = empty_32_fu_1834_p2.read();
        xor_ln206_reg_8509 = xor_ln206_fu_1798_p2.read();
        xor_ln207_reg_8520 = xor_ln207_fu_1824_p2.read();
        xor_ln227_1_reg_8470 = xor_ln227_1_fu_1736_p2.read();
        xor_ln227_2_reg_8480 = xor_ln227_2_fu_1745_p2.read();
        xor_ln227_3_reg_8494 = xor_ln227_3_fu_1763_p2.read();
        xor_ln228_1_reg_8475 = xor_ln228_1_fu_1740_p2.read();
        xor_ln228_2_reg_8487 = xor_ln228_2_fu_1750_p2.read();
        xor_ln228_3_reg_8499 = xor_ln228_3_fu_1768_p2.read();
        xor_ln229_reg_8456 = xor_ln229_fu_1726_p2.read();
        xor_ln230_reg_8463 = xor_ln230_fu_1731_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0))) {
        empty_36_reg_8756 = empty_36_fu_2924_p2.read();
        trunc_ln205_2298266_reg_8761 = trunc_ln205_2298266_fu_2929_p2.read();
        trunc_ln206_2296264_reg_8766 = trunc_ln206_2296264_fu_3050_p2.read();
        xor_ln205_2_reg_8811 = xor_ln205_2_fu_3222_p2.read();
        xor_ln208_3_reg_8827 = xor_ln208_3_fu_3257_p2.read();
        xor_ln227_8_reg_8771 = xor_ln227_8_fu_3175_p2.read();
        xor_ln228_8_reg_8779 = xor_ln228_8_fu_3181_p2.read();
        xor_ln229_10_reg_8787 = xor_ln229_10_fu_3186_p2.read();
        xor_ln229_11_reg_8801 = xor_ln229_11_fu_3212_p2.read();
        xor_ln230_10_reg_8794 = xor_ln230_10_fu_3190_p2.read();
        xor_ln230_11_reg_8806 = xor_ln230_11_fu_3217_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0))) {
        empty_38_reg_8697 = empty_38_fu_2588_p2.read();
        empty_40_reg_8703 = empty_40_fu_2592_p2.read();
        empty_42_reg_8718 = empty_42_fu_2722_p2.read();
        trunc_ln207_2294262_reg_8708 = trunc_ln207_2294262_fu_2596_p2.read();
        trunc_ln208_2292260_reg_8723 = trunc_ln208_2292260_fu_2727_p2.read();
        xor_ln206_2_reg_8744 = xor_ln206_2_fu_2876_p2.read();
        xor_ln207_2_reg_8750 = xor_ln207_2_fu_2881_p2.read();
        xor_ln208_2_reg_8713 = xor_ln208_2_fu_2717_p2.read();
        xor_ln228_7_reg_8675 = xor_ln228_7_fu_2550_p2.read();
        xor_ln229_7_reg_8681 = xor_ln229_7_fu_2554_p2.read();
        xor_ln229_8_reg_8728 = xor_ln229_8_fu_2848_p2.read();
        xor_ln230_8_reg_8736 = xor_ln230_8_fu_2853_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0))) {
        empty_44_reg_8943 = empty_44_fu_3674_p2.read();
        empty_50_reg_8948 = empty_50_fu_3799_p2.read();
        empty_56_reg_9012 = empty_56_fu_3978_p1.read();
        lshr_ln207_4_reg_9007 = xor_ln230_15_fu_3955_p2.read().range(7, 2);
        lshr_ln208_4_reg_9018 = xor_ln227_15_fu_3950_p2.read().range(7, 2);
        trunc_ln208_6_reg_9023 = trunc_ln208_6_fu_3992_p1.read();
        xor_ln227_12_reg_8953 = xor_ln227_12_fu_3930_p2.read();
        xor_ln227_13_reg_8965 = xor_ln227_13_fu_3940_p2.read();
        xor_ln227_15_reg_8981 = xor_ln227_15_fu_3950_p2.read();
        xor_ln230_12_reg_8959 = xor_ln230_12_fu_3935_p2.read();
        xor_ln230_13_reg_8973 = xor_ln230_13_fu_3945_p2.read();
        xor_ln230_15_reg_8989 = xor_ln230_15_fu_3955_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0))) {
        empty_46_reg_8862 = empty_46_fu_3333_p2.read();
        empty_48_reg_8867 = empty_48_fu_3458_p2.read();
        empty_52_reg_8926 = empty_52_fu_3638_p1.read();
        empty_54_reg_8937 = empty_54_fu_3652_p1.read();
        lshr_ln205_4_reg_8921 = xor_ln228_15_fu_3618_p2.read().range(7, 2);
        lshr_ln206_4_reg_8932 = xor_ln229_15_fu_3623_p2.read().range(7, 2);
        xor_ln227_10_reg_8833 = xor_ln227_10_fu_3300_p2.read();
        xor_ln227_11_reg_8847 = xor_ln227_11_fu_3308_p2.read();
        xor_ln228_10_reg_8840 = xor_ln228_10_fu_3304_p2.read();
        xor_ln228_11_reg_8852 = xor_ln228_11_fu_3313_p2.read();
        xor_ln228_12_reg_8877 = xor_ln228_12_fu_3598_p2.read();
        xor_ln228_13_reg_8889 = xor_ln228_13_fu_3608_p2.read();
        xor_ln228_15_reg_8905 = xor_ln228_15_fu_3618_p2.read();
        xor_ln229_12_reg_8883 = xor_ln229_12_fu_3603_p2.read();
        xor_ln229_13_reg_8897 = xor_ln229_13_fu_3613_p2.read();
        xor_ln229_15_reg_8913 = xor_ln229_15_fu_3623_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0))) {
        empty_59_reg_9178 = empty_59_fu_4726_p2.read();
        empty_65_reg_9193 = empty_65_fu_4881_p2.read();
        empty_73_reg_9228 = empty_73_fu_5032_p1.read();
        empty_76_reg_9239 = empty_76_fu_5046_p1.read();
        trunc_ln207_6286252_reg_9233 = trunc_ln207_6286252_fu_5041_p2.read();
        trunc_ln208_6284250_reg_9244 = trunc_ln208_6284250_fu_5055_p2.read();
        xor_ln227_20_reg_9198 = xor_ln227_20_fu_5012_p2.read();
        xor_ln227_21_reg_9210 = xor_ln227_21_fu_5022_p2.read();
        xor_ln229_18_reg_9154 = xor_ln229_18_fu_4708_p2.read();
        xor_ln229_19_reg_9168 = xor_ln229_19_fu_4716_p2.read();
        xor_ln230_18_reg_9161 = xor_ln230_18_fu_4712_p2.read();
        xor_ln230_19_reg_9173 = xor_ln230_19_fu_4721_p2.read();
        xor_ln230_20_reg_9204 = xor_ln230_20_fu_5017_p2.read();
        xor_ln230_21_reg_9219 = xor_ln230_21_fu_5027_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage13_11001.read(), ap_const_boolean_0))) {
        empty_61_reg_9250 = empty_61_fu_5078_p2.read();
        empty_63_reg_9255 = empty_63_fu_5203_p2.read();
        empty_67_reg_9302 = empty_67_fu_5356_p1.read();
        empty_70_reg_9313 = empty_70_fu_5370_p1.read();
        trunc_ln205_6290256_reg_9307 = trunc_ln205_6290256_fu_5365_p2.read();
        trunc_ln206_6288254_reg_9318 = trunc_ln206_6288254_fu_5379_p2.read();
        xor_ln227_23_reg_9290 = xor_ln227_23_fu_5348_p2.read();
        xor_ln228_20_reg_9260 = xor_ln228_20_fu_5328_p2.read();
        xor_ln228_21_reg_9272 = xor_ln228_21_fu_5338_p2.read();
        xor_ln229_20_reg_9266 = xor_ln229_20_fu_5333_p2.read();
        xor_ln229_21_reg_9281 = xor_ln229_21_fu_5343_p2.read();
        xor_ln230_23_reg_9296 = xor_ln230_23_fu_5352_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage17_11001.read(), ap_const_boolean_0))) {
        empty_79_reg_9554 = empty_79_fu_6510_p2.read();
        empty_85_reg_9559 = empty_85_fu_6635_p2.read();
        empty_91_reg_9621 = empty_91_fu_6814_p1.read();
        empty_93_reg_9632 = empty_93_fu_6828_p1.read();
        lshr_ln207_8_reg_9616 = xor_ln230_31_fu_6791_p2.read().range(7, 2);
        lshr_ln208_8_reg_9627 = xor_ln227_31_fu_6786_p2.read().range(7, 2);
        xor_ln227_28_reg_9564 = xor_ln227_28_fu_6766_p2.read();
        xor_ln227_29_reg_9576 = xor_ln227_29_fu_6776_p2.read();
        xor_ln227_31_reg_9592 = xor_ln227_31_fu_6786_p2.read();
        xor_ln230_28_reg_9570 = xor_ln230_28_fu_6771_p2.read();
        xor_ln230_29_reg_9584 = xor_ln230_29_fu_6781_p2.read();
        xor_ln230_31_reg_9599 = xor_ln230_31_fu_6791_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0))) {
        empty_81_reg_9475 = empty_81_fu_6169_p2.read();
        empty_83_reg_9480 = empty_83_fu_6294_p2.read();
        empty_87_reg_9537 = empty_87_fu_6474_p1.read();
        empty_89_reg_9548 = empty_89_fu_6488_p1.read();
        lshr_ln205_8_reg_9532 = xor_ln228_31_fu_6454_p2.read().range(7, 2);
        lshr_ln206_8_reg_9543 = xor_ln229_31_fu_6459_p2.read().range(7, 2);
        xor_ln227_26_reg_9446 = xor_ln227_26_fu_6136_p2.read();
        xor_ln227_27_reg_9460 = xor_ln227_27_fu_6144_p2.read();
        xor_ln228_26_reg_9453 = xor_ln228_26_fu_6140_p2.read();
        xor_ln228_27_reg_9465 = xor_ln228_27_fu_6149_p2.read();
        xor_ln228_28_reg_9490 = xor_ln228_28_fu_6434_p2.read();
        xor_ln228_29_reg_9502 = xor_ln228_29_fu_6444_p2.read();
        xor_ln228_31_reg_9518 = xor_ln228_31_fu_6454_p2.read();
        xor_ln229_28_reg_9496 = xor_ln229_28_fu_6439_p2.read();
        xor_ln229_29_reg_9510 = xor_ln229_29_fu_6449_p2.read();
        xor_ln229_31_reg_9525 = xor_ln229_31_fu_6459_p2.read();
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)))) {
        reg_1060 = Key_q0.read().range(15, 8);
        reg_1064 = Key_q0.read().range(9, 8);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0))) {
        tmp_1_reg_8361 = Key_q0.read().range(23, 16);
        tmp_34_reg_8428 = Key_q0.read().range(17, 16);
        tmp_38_reg_8434 = Key_q0.read().range(25, 24);
        tmp_3_reg_8367 = Key_q0.read().range(31, 24);
        tmp_5_reg_8388 = Key_q1.read().range(31, 24);
        tmp_7_reg_8378 = Key_q1.read().range(15, 8);
        tmp_9_reg_8383 = Key_q1.read().range(23, 16);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0))) {
        trunc_ln205_2_reg_8653 = trunc_ln205_2_fu_2494_p1.read();
        trunc_ln206_2_reg_8659 = trunc_ln206_2_fu_2498_p1.read();
        xor_ln227_7_reg_8641 = xor_ln227_7_fu_2486_p2.read();
        xor_ln228_4_reg_8611 = xor_ln228_4_fu_2465_p2.read();
        xor_ln228_5_reg_8623 = xor_ln228_5_fu_2475_p2.read();
        xor_ln229_4_reg_8617 = xor_ln229_4_fu_2470_p2.read();
        xor_ln229_5_reg_8632 = xor_ln229_5_fu_2481_p2.read();
        xor_ln230_7_reg_8647 = xor_ln230_7_fu_2490_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage10_11001.read(), ap_const_boolean_0))) {
        trunc_ln205_4306278_reg_9029 = trunc_ln205_4306278_fu_4014_p2.read();
        trunc_ln206_4304276_reg_9035 = trunc_ln206_4304276_fu_4134_p2.read();
        xor_ln205_3_reg_9067 = xor_ln205_3_fu_4296_p2.read();
        xor_ln208_4_reg_9073 = xor_ln208_4_fu_4301_p2.read();
        xor_ln227_16_reg_9051 = xor_ln227_16_fu_4267_p2.read();
        xor_ln228_16_reg_9059 = xor_ln228_16_fu_4273_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage18_11001.read(), ap_const_boolean_0))) {
        trunc_ln205_9242214_reg_9673 = trunc_ln205_9242214_fu_7137_p2.read();
        trunc_ln206_8280270_reg_9637 = trunc_ln206_8280270_fu_6970_p2.read();
        trunc_ln208_8276216_reg_9652 = trunc_ln208_8276216_fu_7098_p2.read();
        trunc_ln208_9236208_reg_9678 = trunc_ln208_9236208_fu_7162_p2.read();
        xor_ln227_32_reg_9657 = xor_ln227_32_fu_7107_p2.read();
        xor_ln228_32_reg_9665 = xor_ln228_32_fu_7113_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage19_11001.read(), ap_const_boolean_0))) {
        trunc_ln206_9240212_reg_9726 = trunc_ln206_9240212_fu_7502_p2.read();
        trunc_ln207_9238210_reg_9731 = trunc_ln207_9238210_fu_7527_p2.read();
        xor_ln227_34_reg_9699 = xor_ln227_34_fu_7451_p2.read();
        xor_ln227_35_reg_9711 = xor_ln227_35_fu_7459_p2.read();
        xor_ln228_34_reg_9705 = xor_ln228_34_fu_7455_p2.read();
        xor_ln228_35_reg_9716 = xor_ln228_35_fu_7464_p2.read();
        xor_ln229_32_reg_9683 = xor_ln229_32_fu_7441_p2.read();
        xor_ln230_32_reg_9691 = xor_ln230_32_fu_7446_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        trunc_ln207_2_reg_8605 = trunc_ln207_2_fu_2203_p1.read();
        trunc_ln227_2_reg_8600 = trunc_ln227_2_fu_2199_p1.read();
        xor_ln227_4_reg_8570 = xor_ln227_4_fu_2179_p2.read();
        xor_ln227_5_reg_8582 = xor_ln227_5_fu_2189_p2.read();
        xor_ln229_2_reg_8536 = xor_ln229_2_fu_1883_p2.read();
        xor_ln229_3_reg_8550 = xor_ln229_3_fu_1893_p2.read();
        xor_ln230_2_reg_8543 = xor_ln230_2_fu_1888_p2.read();
        xor_ln230_3_reg_8555 = xor_ln230_3_fu_1898_p2.read();
        xor_ln230_4_reg_8576 = xor_ln230_4_fu_2184_p2.read();
        xor_ln230_5_reg_8591 = xor_ln230_5_fu_2194_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage11_11001.read(), ap_const_boolean_0))) {
        trunc_ln207_4302274_reg_9079 = trunc_ln207_4302274_fu_4344_p2.read();
        trunc_ln208_4300258_reg_9085 = trunc_ln208_4300258_fu_4464_p2.read();
        xor_ln206_3_reg_9137 = xor_ln206_3_fu_4645_p2.read();
        xor_ln207_3_reg_9143 = xor_ln207_3_fu_4650_p2.read();
        xor_ln227_18_reg_9108 = xor_ln227_18_fu_4594_p2.read();
        xor_ln227_19_reg_9122 = xor_ln227_19_fu_4602_p2.read();
        xor_ln228_18_reg_9115 = xor_ln228_18_fu_4598_p2.read();
        xor_ln228_19_reg_9127 = xor_ln228_19_fu_4607_p2.read();
        xor_ln229_16_reg_9092 = xor_ln229_16_fu_4584_p2.read();
        xor_ln230_16_reg_9100 = xor_ln230_16_fu_4589_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0))) {
        xor_ln205_4_reg_9424 = xor_ln205_4_fu_6058_p2.read();
        xor_ln208_5_reg_9440 = xor_ln208_5_fu_6093_p2.read();
        xor_ln227_24_reg_9384 = xor_ln227_24_fu_6011_p2.read();
        xor_ln228_24_reg_9392 = xor_ln228_24_fu_6017_p2.read();
        xor_ln229_26_reg_9400 = xor_ln229_26_fu_6022_p2.read();
        xor_ln229_27_reg_9414 = xor_ln229_27_fu_6048_p2.read();
        xor_ln230_26_reg_9407 = xor_ln230_26_fu_6026_p2.read();
        xor_ln230_27_reg_9419 = xor_ln230_27_fu_6053_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage14_11001.read(), ap_const_boolean_0))) {
        xor_ln206_4_reg_9372 = xor_ln206_4_fu_5728_p2.read();
        xor_ln207_4_reg_9378 = xor_ln207_4_fu_5733_p2.read();
        xor_ln228_23_reg_9334 = xor_ln228_23_fu_5432_p2.read();
        xor_ln229_23_reg_9340 = xor_ln229_23_fu_5436_p2.read();
        xor_ln229_24_reg_9356 = xor_ln229_24_fu_5700_p2.read();
        xor_ln230_24_reg_9364 = xor_ln230_24_fu_5705_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage20_11001.read(), ap_const_boolean_0))) {
        xor_ln227_36_reg_9773 = xor_ln227_36_fu_7870_p2.read();
        xor_ln227_37_reg_9783 = xor_ln227_37_fu_7880_p2.read();
        xor_ln229_34_reg_9741 = xor_ln229_34_fu_7586_p2.read();
        xor_ln229_35_reg_9753 = xor_ln229_35_fu_7594_p2.read();
        xor_ln230_34_reg_9747 = xor_ln230_34_fu_7590_p2.read();
        xor_ln230_35_reg_9758 = xor_ln230_35_fu_7599_p2.read();
        xor_ln230_36_reg_9778 = xor_ln230_36_fu_7875_p2.read();
        xor_ln230_37_reg_9790 = xor_ln230_37_fu_7885_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        xor_ln227_38_reg_9821 = xor_ln227_38_fu_8176_p2.read();
        xor_ln227_39_reg_9841 = xor_ln227_39_fu_8192_p2.read();
        xor_ln228_38_reg_9826 = xor_ln228_38_fu_8180_p2.read();
        xor_ln228_39_reg_9846 = xor_ln228_39_fu_8196_p2.read();
        xor_ln229_38_reg_9831 = xor_ln229_38_fu_8184_p2.read();
        xor_ln229_39_reg_9851 = xor_ln229_39_fu_8200_p2.read();
        xor_ln230_38_reg_9836 = xor_ln230_38_fu_8188_p2.read();
        xor_ln230_39_reg_9856 = xor_ln230_39_fu_8204_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage21_11001.read(), ap_const_boolean_0))) {
        xor_ln228_36_reg_9797 = xor_ln228_36_fu_8138_p2.read();
        xor_ln228_37_reg_9807 = xor_ln228_37_fu_8148_p2.read();
        xor_ln229_36_reg_9802 = xor_ln229_36_fu_8143_p2.read();
        xor_ln229_37_reg_9814 = xor_ln229_37_fu_8153_p2.read();
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

