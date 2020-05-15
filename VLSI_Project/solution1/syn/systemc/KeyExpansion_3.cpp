#include "KeyExpansion.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void KeyExpansion::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"RoundKey_0_address0\" :  \"" << RoundKey_0_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"RoundKey_0_ce0\" :  \"" << RoundKey_0_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"RoundKey_0_we0\" :  \"" << RoundKey_0_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"RoundKey_0_d0\" :  \"" << RoundKey_0_d0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"RoundKey_0_address1\" :  \"" << RoundKey_0_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"RoundKey_0_ce1\" :  \"" << RoundKey_0_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"RoundKey_0_we1\" :  \"" << RoundKey_0_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"RoundKey_0_d1\" :  \"" << RoundKey_0_d1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"RoundKey_1_address0\" :  \"" << RoundKey_1_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"RoundKey_1_ce0\" :  \"" << RoundKey_1_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"RoundKey_1_we0\" :  \"" << RoundKey_1_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"RoundKey_1_d0\" :  \"" << RoundKey_1_d0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"RoundKey_1_address1\" :  \"" << RoundKey_1_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"RoundKey_1_ce1\" :  \"" << RoundKey_1_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"RoundKey_1_we1\" :  \"" << RoundKey_1_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"RoundKey_1_d1\" :  \"" << RoundKey_1_d1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"RoundKey_2_address0\" :  \"" << RoundKey_2_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"RoundKey_2_ce0\" :  \"" << RoundKey_2_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"RoundKey_2_we0\" :  \"" << RoundKey_2_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"RoundKey_2_d0\" :  \"" << RoundKey_2_d0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"RoundKey_2_address1\" :  \"" << RoundKey_2_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"RoundKey_2_ce1\" :  \"" << RoundKey_2_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"RoundKey_2_we1\" :  \"" << RoundKey_2_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"RoundKey_2_d1\" :  \"" << RoundKey_2_d1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"RoundKey_3_address0\" :  \"" << RoundKey_3_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"RoundKey_3_ce0\" :  \"" << RoundKey_3_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"RoundKey_3_we0\" :  \"" << RoundKey_3_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"RoundKey_3_d0\" :  \"" << RoundKey_3_d0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"RoundKey_3_address1\" :  \"" << RoundKey_3_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"RoundKey_3_ce1\" :  \"" << RoundKey_3_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"RoundKey_3_we1\" :  \"" << RoundKey_3_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"RoundKey_3_d1\" :  \"" << RoundKey_3_d1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Key_0_address0\" :  \"" << Key_0_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Key_0_ce0\" :  \"" << Key_0_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"Key_0_q0\" :  \"" << Key_0_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Key_0_address1\" :  \"" << Key_0_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Key_0_ce1\" :  \"" << Key_0_ce1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"Key_0_q1\" :  \"" << Key_0_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Key_1_address0\" :  \"" << Key_1_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Key_1_ce0\" :  \"" << Key_1_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"Key_1_q0\" :  \"" << Key_1_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Key_1_address1\" :  \"" << Key_1_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Key_1_ce1\" :  \"" << Key_1_ce1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"Key_1_q1\" :  \"" << Key_1_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Key_2_address0\" :  \"" << Key_2_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Key_2_ce0\" :  \"" << Key_2_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"Key_2_q0\" :  \"" << Key_2_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Key_2_address1\" :  \"" << Key_2_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Key_2_ce1\" :  \"" << Key_2_ce1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"Key_2_q1\" :  \"" << Key_2_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Key_3_address0\" :  \"" << Key_3_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Key_3_ce0\" :  \"" << Key_3_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"Key_3_q0\" :  \"" << Key_3_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Key_3_address1\" :  \"" << Key_3_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Key_3_ce1\" :  \"" << Key_3_ce1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"Key_3_q1\" :  \"" << Key_3_q1.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

