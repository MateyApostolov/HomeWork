#include <bits/stdc++.h>
using namespace std;

int m1, m2, d1, d2, Y, M, D, brd = 1;
pair <int, string> cal[36] = {{0, "-"}, { 8, "MIR"}, { 7, "FRI"}, { 6, "FRI"}, { 5, "FRI"}, { 4, "THU"}, { 3, "WED"}, { 2, "TUE"},
                                        {16, "MIR"}, {15, "FRI"}, {14, "FRI"}, {12, "FRI"}, {11, "THU"}, {10, "WED"}, { 9, "TUE"},
                                        {23, "MIR"}, {22, "FRI"}, {21, "FRI"}, {20, "FRI"}, {19, "THU"}, {18, "WED"}, {17, "TUE"},
                                        {32, "MIR"}, {30, "FRI"}, {28, "FRI"}, {27, "FRI"}, {26, "THU"}, {25, "WED"}, {24, "TUE"},
                                        {39, "MIR"}, {38, "FRI"}, {37, "FRI"}, {36, "FRI"}, {35, "THU"}, {34, "WED"}, {33, "TUE"}};
string day;

bool iswis (int y) {
    if(y % 400 == 0) return true;
    if(y % 4 == 0 && y % 100 != 0) return true;
    return false;
}

void nextdate_earth () {
    D++;
    if(D == 32 && (M == 1 || M == 3 || M == 5 || M == 7 || M == 8 || M == 10 || M == 12)) {
        D = 1;
        M++;
    } else if(D == 31 && (M == 4 || M == 6 || M == 9 || M == 11)) {
        D = 1;
        M++;
    } else if(D == 29 && M == 2 && !iswis(Y)) {
        D = 1;
        M++;
    } else if(D == 30 && M == 2 && iswis(Y)) {
        D = 1;
        M++;
    }
    if(M == 13) {
        Y++;
        M = 1;
    }
}

void nextdate () {
    int i = 1;
    while(d1 != cal[i].first) i++;
    if(i == 35) {
        d1 = cal[1].first;
        day = cal[1].second;
        m1++;
        if(m1 == 10) m1 = 1;
        return;
    }
    d1 = cal[i + 1].first;
    day = cal[i + 1].second;
    return;
}

int main () {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    stringstream s;
    for(int i = 0; i < s1.size(); i++) if(s1[i] == '/') s1[i] = ' ';
    for(int i = 0; i < s2.size(); i++) if(s2[i] == '/') s2[i] = ' ';
    for(int i = 0; i < s3.size(); i++) if(s3[i] == '/') s3[i] = ' ';
    s << s1;
    s >> m1 >> d1;
    s.clear();
    s << s2;
    s >> m2 >> d2;
    s.clear();
    s << s3;
    s >> Y >> M >> D;
    int h = 1;
    while(d1 != cal[h].first) h++;
    day = cal[h].second;
    while(d1 != d2 || m1 != m2) {
        brd++;
        nextdate();
    }
    cout << brd << " " << day << "\n";
    while(brd > 1) {
        brd--;
        nextdate_earth();
    }
    cout << Y << "/" << M / 10 << M % 10 << "/" << D / 10 << D % 10;
    return 0;
}
