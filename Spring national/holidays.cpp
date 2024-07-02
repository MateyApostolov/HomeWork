#include <bits/stdc++.h>
using namespace std;

int D = 1, M = 1, Y = 1900, DS = 1;

bool iswis (int y) {
    if(y % 400 == 0) return true;
    if(y % 4 == 0 && y % 100 != 0) return true;
    return false;
}

void nextdate () {
    DS++;
    DS %= 7;
    D++;
    if(D == 32 && (M == 1 || M == 3 || M == 5 || M == 7 || M == 8 || M == 10 || M == 12)) {
        D = 1;
        M++;
    }
    if(D == 31 && (M == 4 || M == 6 || M == 9 || M == 11)) {
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
    if(M == 13) {
        Y++;
        M = 1;
    }
}

int main () {
    string d1, d2;
    cin >> d1 >> d2;
    int D1, M1, Y1, D2, M2, Y2, brh = 0;
    for(int i = 0; i < d1.size(); i++) if(d1[i] == '.') d1[i] = ' ';
    stringstream s1, s2;
    s1 << d1;
    s1 >> D1 >> M1 >> Y1;
    for(int i = 0; i < d2.size(); i++) if(d2[i] == '.') d2[i] = ' ';
    s2 << d2;
    s2 >> D2 >> M2 >> Y2;
    if(Y1 > Y2 || (Y1 == Y2 && (M1 > M2 || (M1 == M2 && D1 > D2)))) {
        cout << 0;
        return 0;
    }
    while(!(D == D1 && M == M1 && Y == Y1)) nextdate();
    while(!(D == D2 && M == M2 && Y == Y2)) {
        if(DS == 0 || DS == 6) brh++;
        nextdate();
    }
    if(DS == 0 || DS == 6) brh++;
    cout << brh;

    return 0;
}
