#include <iostream>
using namespace std;

int main () {
    int R1, R2, c;
    cin >> R1 >> R2 >> c;
    int l, s, b;
    cin >> l >> s >> b;
    int T1, T2, T3, T4;
    cin >> T1 >> T2 >> T3 >> T4;
    int Ss = 0;
    if (R1 == 1 && R2 == 2) Ss = Ss + T1;
    if (R1 == 1 && R2 == 3) Ss = Ss + T1 + T2;
    if (R1 == 1 && R2 == 4) Ss = Ss + T1 + T2 + T3;
    if (R1 == 2 && R2 == 1) Ss = Ss + T2 + T3 + T4;
    if (R1 == 2 && R2 == 3) Ss = Ss + T2;
    if (R1 == 2 && R2 == 4) Ss = Ss + T2 + T3;
    if (R1 == 3 && R2 == 2) Ss = Ss + T3 + T4 + T1;
    if (R1 == 3 && R2 == 4) Ss = Ss + T3;
    if (R1 == 3 && R2 == 1) Ss = Ss + T3 + T4;
    if (R1 == 4 && R2 == 2) Ss = Ss + T4 + T1;
    if (R1 == 4 && R2 == 3) Ss = Ss + T4 + T1 + T2;
    if (R1 == 4 && R2 == 1) Ss = Ss + T4;
    Ss = Ss + (l * 100 + s) * b;
    if (c == 1) Ss = Ss + 998;
    cout << Ss / 100 << " " << Ss % 100;

    return 0;
}

