#include <iostream>
using namespace std;

int main () {
    int H1, M1, H2, M2, M3;
    cin >> H1 >> M1 >> H2 >> M2 >> M3;
    int m1 = H1 * 60 + M1;
    int m2 = H2 * 60 + M2;
    int m3 = H1 * 60 + M1 - M3;
    int m4 = 12 * 60 + 30;
    int m = (m1 + m2 + m3) % (24 * 60);
    if(m4 == m) {
        cout << "0:00";
        return 0;
    }
    if(m4 > m) {
        int izhm = m4 - m;
        cout << izhm / 60 << ":";
        if(izhm % 60 < 10) {
            cout << 0;
        }
        cout << izhm % 60;
        return 0;
    }
    if(m4 < m) {
        int izhm = 12 * 60 + 30 + (24 * 60 - m);
        cout << izhm / 60 << ":";
        if(izhm % 60 < 10) {
            cout << 0;
        }
        cout << izhm % 60;
        return 0;
    }


    return 0;
}
