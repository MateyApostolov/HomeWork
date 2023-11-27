#include <iostream>
using namespace std;

int main () {
    char h1, h2, dw, m1, m2;
    cin >> h1 >> h2 >> dw >> m1 >> m2;
    h1 -= '0';
    h2 -= '0';
    m1 -= '0';
    m2 -= '0';
    int M = (h1 * 10 + h2) * 60 + (m1 * 10 + m2), brb = 0;
    if(M >= 24 * 60) {
        M = M % (24 * 60);
    }
    int tc = M / 60;
    int mi = M % 60;
    if(M > 20 * 60 || M < 8 * 60) {
        M += 2;
        if(M >= 24 * 60) {
            M = M % (24 * 60);
        }
        tc = M / 60;
        mi = M % 60;
        if(tc < 10) {
            cout << 0;
        }
        cout << M / 60 << ":";
        if(mi < 10) {
            cout << 0;
        }
        cout << M % 60 << " " << brb;
        return 0;
    }
    M--;
    for(int i = 0; i < 3; i++) {
        M++;
        tc = M / 60;
        mi = M % 60;
        if(tc % 10 == 4) {
            brb++;
        }
        if(mi / 10 == 4) {
            brb++;
        }
        if(mi % 10 == 4) {
            brb++;
        }
    }
    if(tc < 10) {
        cout << 0;
    }
        cout << M / 60 << ":";
    if(mi < 10) {
        cout << 0;
    }
    cout << M % 60 << " " << brb;


    return 0;
}
