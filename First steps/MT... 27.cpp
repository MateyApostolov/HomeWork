#include <iostream>
using namespace std;

int main () {
    int i, A, B, C, D;
    cin >> i;
    A = i/1000;
    B = (i/100)%10;
    C = (i/10)%10;
    D = i%10;
    int Hb = 10 * A + B;
    int Mb = 10 * C + D;
    int m = Hb * 60 + Mb;
    int He = 10 * D + C;
    int Me = 10 * B + A;
    int m2 = He * 60 + Me;
    int M = (m + m2) % (24 * 60);
    if (M / 60 < 10) {
        cout << 0;
    }
    cout << M / 60;
    if (M % 60 < 10) {
        cout << 0;
    }
    cout << M % 60;

    return 0;
}


