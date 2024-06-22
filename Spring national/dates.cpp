#include <bits/stdc++.h>
using namespace std;

bool iswis (int y) {
    if(y % 400 == 0) return true;
    if(y % 4 == 0 && y % 100 != 0) return true;
    return false;
}

string nextdate (string d) {
    int D, M, Y;
    D = (d[0] - '0') * 10 + (d[1] - '0');
    M = (d[2] - '0') * 10 + (d[3] - '0');
    Y = (d[4] - '0') * 1000 + (d[5] - '0') * 100 + (d[6] - '0') * 10 + (d[7] - '0');
    D++;
    if(D == 32 && M == 1) {
        D = 1;
        M++;
    }
    if(D == 29 && M == 2 && !iswis(Y)) {
        D = 1;
        M++;
    }
    if(D == 30 && M == 2 && iswis(Y)) {
        D = 1;
        M++;
    }
    if(D == 32 && M == 3) {
        D = 1;
        M++;
    }
    if(D == 31 && M == 4) {
        D = 1;
        M++;
    }
    if(D == 32 && M == 5) {
        D = 1;
        M++;
    }
    if(D == 31 && M == 6) {
        D = 1;
        M++;
    }
    if(D == 32 && M == 7) {
        D = 1;
        M++;
    }
    if(D == 32 && M == 8) {
        D = 1;
        M++;
    }
    if(D == 31 && M == 9) {
        D = 1;
        M++;
    }
    if(D == 32 && M == 10) {
        D = 1;
        M++;
    }
    if(D == 31 && M == 11) {
        D = 1;
        M++;
    }
    if(D == 32 && M == 12) {
        D = 1;
        M = 1;
        Y++;
    }
    d[0] = D / 10 + '0';
    d[1] = D % 10 + '0';
    d[2] = M / 10 + '0';
    d[3] = M % 10 + '0';
    d[4] = Y / 1000 + '0';
    d[5] = Y / 100 % 10 + '0';
    d[6] = Y / 10 % 10 + '0';
    d[7] = Y % 10 + '0';
    return d;
}

bool isvalid (string d) {
    int D, M, Y;
    reverse(d.begin(), d.end());
    D = (d[0] - '0') * 10 + (d[1] - '0');
    M = (d[2] - '0') * 10 + (d[3] - '0');
    Y = (d[4] - '0') * 1000 + (d[5] - '0') * 100 + (d[6] - '0') * 10 + (d[7] - '0');
    if(D == 0 || M == 0) return false;
    if(M > 12) return false;
    if(D >= 32) return false;
    if(D == 29 && M == 2 && !iswis(Y)) return false;
    if(D == 30 && M == 2 && iswis(Y)) return false;
    if(D == 31 && M == 4) return false;
    if(D == 31 && M == 6) return false;
    if(D == 31 && M == 9) return false;
    if(D == 31 && M == 11) return false;
    ///cout << d << " - ";
    ///reverse(d.begin(), d.end());
    ///cout << d << "\n";
    return true;
}

int main () {
    string d1, d2;
    cin >> d1 >> d2;
    long long br = 0;
    if(isvalid(d1)) br++;
    while(nextdate(d1) != d2) {
        if(isvalid(d1)) br++;
        d1 = nextdate(d1);
        ///cout << d1 << "\n";
    }
    if(isvalid(d1)) br++;
    cout << br;
    return 0;
}
