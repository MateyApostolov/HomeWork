#include <bits/stdc++.h>
using namespace std;

bool pal(int d, int m, int y) {
    int p1 = 0;
    p1 += 1000 * (m % 10) + 100 * (m / 10) + 10 * (d % 10) + d / 10;
    if(p1 == y) return true;
    else return false;
}

bool pal1(int d, int m, int y) {
    string n1 = to_string(y);
    reverse(n1.begin(), n1.end());
    string n2 = "0000";
    n2[0] = char(d / 10 + '0');
    n2[1] = char(d % 10 + '0');
    n2[2] = char(m / 10 + '0');
    n2[3] = char(m % 10 + '0');
    if(n1 == n2) return true;
    else return false;
}

bool pal2(int d, int m, int y) {
    string n1 = to_string(y);
    string n2 = "0000";
    n2[0] = char(d / 10 + '0');
    n2[1] = char(d % 10 + '0');
    n2[2] = char(m / 10 + '0');
    n2[3] = char(m % 10 + '0');
    string n3 = n2 + n1, n4 = n2 + n1;
    reverse(n4.begin(), n4.end());
    if(n3 == n4) return true;
    else return false;
}

int main () {
    int D, M, Y;
    cin >> D >> M >> Y;
    while(true) {
        D++;
        if (D == 32 && M == 1) {
            D = 1;
            M = 2;
        }
        if (D == 30 && M == 2) {
            D = 1;
            M = 3;
        }
        if (D == 29 && M == 2 && (Y % 4 != 0)) {
            D = 1;
            M = 3;
        }
        if (Y % 100 == 0 && Y % 400 != 0 && D == 29 && M == 2) {
            D = 1;
            M = 3;
        }
        if (D == 32 && M == 3) {
            D = 1;
            M = 4;
        }
        if (D == 31 && M == 4) {
            D = 1;
            M = 5;
        }
        if (D == 32 && M == 5) {
            D = 1;
            M = 6;
        }
        if (D == 31 && M == 6) {
            D = 1;
            M = 7;
        }
        if (D == 32 && M == 7) {
            D = 1;
            M = 8;
        }
        if (D == 32 && M == 8) {
            D = 1;
            M = 9;
        }
        if (D == 31 && M == 9) {
            D = 1;
            M = 10;
        }
        if (D == 32 && M == 10) {
            D = 1;
            M = 11;
        }
        if (D == 31 && M == 11) {
            D = 1;
            M = 12;
        }
        if (D == 32 && M == 12) {
            D = 1;
            M = 1;
            Y++;
        }
        if(pal2(D, M, Y)) break;
    }
    if(D < 10) cout << 0 << D;
    else cout << D;
    cout << ".";
    if(M < 10) cout << 0 << M;
    else cout << M;
    cout << "." << Y;
    return 0;
}

