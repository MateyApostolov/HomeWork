#include <iostream>
using namespace std;

int main () {
    int SH, SM;
    cin >> SH >> SM;
    int MS, HH, HM;
    cin >> MS >> HH >> HM;
    int DH, DM, MH, MM;
    cin >> DH >> DM >> MH >> MM;
    int M, m;
    m = SH * 60 + SM;
    M = m + MS + HH * 60 + HM;
    M = M + DH * 60 + DM;
    int F;
    F = MH * 60 + MM;
    if ( F < m) F = F + 24*60;
    if (M <= F) {
        cout << "YES" << endl;
        cout << (F - M) / 60 << ":";
        if (((F - M) % 60) < 10) cout << 0;
        cout << (F - M) % 60;
    } else {
        cout << "NO" << endl;
        cout << (M - F) / 60 << ":";
        if (((M - F) % 60) < 10) cout << 0;
        cout << (M - F) % 60;
    }

    return 0;
}
