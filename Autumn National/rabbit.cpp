#include <iostream>
using namespace std;

int main () {
    int x, n;
    cin >> x >> n;
    int D, M, Y;
    cin >> D >> M >> Y;
    int d = n * (x * 2 - 1) - 1;
    for(int i = 0; i < d; i++) {
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
    }
    cout << D << " " << M << " " << Y;

    return 0;
}
