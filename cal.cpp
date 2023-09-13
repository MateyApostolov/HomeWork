#include <iostream>
using namespace std;

int main () {
    int D, M, Y;
    cin >> D >> M >> Y;
    if (D == 4 && M == 10 && Y == 1582) {
        D = 14;
    }
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
    if (Y % 100 == 0 && Y % 400 != 0 && Y < 1582) {
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
    if (D < 10) {
        cout << "0";
    }
    cout << D;
    if (M < 10) {
        cout << " 0" << M;
    } else {
        cout << " " << M;
    }
    if (Y < 10) {
        cout << " 000" << Y;
    }
    if (Y < 100 && Y > 9) {
        cout << " 00" << Y;
    }
    if (Y < 1000 && Y > 99) {
        cout << " 0" << Y;
    }
    if (Y > 999) {
        cout << " " << Y;
    }


    return 0;
}
