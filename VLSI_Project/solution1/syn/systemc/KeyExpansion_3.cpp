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
        mHdltvoutHandle << " , " <<  " \"RoundKey_address0\" :  \"" << RoundKey_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"RoundKey_ce0\" :  \"" << RoundKey_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"RoundKey_we0\" :  \"" << RoundKey_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"RoundKey_d0\" :  \"" << RoundKey_d0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"RoundKey_address1\" :  \"" << RoundKey_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"RoundKey_ce1\" :  \"" << RoundKey_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"RoundKey_we1\" :  \"" << RoundKey_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"RoundKey_d1\" :  \"" << RoundKey_d1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Key_address0\" :  \"" << Key_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Key_ce0\" :  \"" << Key_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"Key_q0\" :  \"" << Key_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Key_address1\" :  \"" << Key_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Key_ce1\" :  \"" << Key_ce1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"Key_q1\" :  \"" << Key_q1.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

