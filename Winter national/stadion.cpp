#include <iostream>
using namespace std;

int main () {
    int ha1, ma1, ha2, ma2;
    int hb1, mb1, hb2, mb2;
    int hc1, mc1, hc2, mc2;
    cin >> ha1 >> ma1 >> ha2 >> ma2 >> hb1 >> mb1 >> hb2 >> mb2 >> hc1 >> mc1 >> hc2 >> mc2;
    int ma = (ha2 * 60 + ma2) - (ha1 * 60 + ma1);
    int mb = (hb2 * 60 + mb2) - (hb1 * 60 + mb1);
    int mc = (hc2 * 60 + mc2) - (hc1 * 60 + mc1);
    int ng = max(ma, max(mb, mc));
    if(ng == ma) {
        if(ma == mb && mb == mc) {
            cout << "X";
            return 0;
        }
        if(ma == mb && mb > mc) {
            cout << "XC";
            return 0;
        }
        if(ma != mb && mb > mc) {
            cout << "ABC";
            return 0;
        }
        if(ma == mc && mc > mb) {
            cout << "XB";
            return 0;
        }
        if(ma != mc && mc > mb) {
            cout << "ACB";
            return 0;
        }
        if(ma != mb && mc == mb) {
            cout << "AX";
        }
        return 0;
    }
    if(ng == mb) {
        if(ma == mb && mb == mc) {
            cout << "X";
            return 0;
        }
        if(mb == ma && ma > mc) {
            cout << "XC";
            return 0;
        }
        if(mb != ma && ma > mc) {
            cout << "BAC";
            return 0;
        }
        if(mb == mc && mc > ma) {
            cout << "XA";
            return 0;
        }
        if(mb != mc && mc > ma) {
            cout << "BCA";
            return 0;
        }
        if(mb != ma && mc == ma) {
            cout << "BX";
        }
        return 0;
    }
    if(ng == mc) {
        if(ma == mb && mb == mc) {
            cout << "X";
            return 0;
        }
        if(mc == ma && ma > mb) {
            cout << "XB";
            return 0;
        }
        if(mc != ma && ma > mb) {
            cout << "CAB";
            return 0;
        }
        if(mc == mb && mb > ma) {
            cout << "XA";
            return 0;
        }
        if(mb != mc && mb > ma) {
            cout << "CBA";
            return 0;
        }
        if(mc != ma && mb == ma) {
            cout << "CX";
        }
        return 0;
    }




    return 0;
}
