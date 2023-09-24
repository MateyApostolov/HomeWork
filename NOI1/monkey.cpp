#include <iostream>
using namespace std;

int main () {
    int D, M, G, N, K, X;
    cin >> D >> M >> G >> N >> K >> X;
    int days = 0;
    while (N > K) {
        N = N - (K - X);
        days++;
    }
    if (N != 0) days++;
    days--;
    for (int i = 1; i <= days; i++) {
        D++;
        if (D == 32 && (M == 1 || M == 3 || M == 5 || M == 7 || M == 8 || M == 10 || M == 12)) {
            D = 1;
            M++;
            if (M == 13) {
                M = 1;
                G++;
            }
        }
        if (D == 31 && (M == 4 || M == 6 || M == 9 || M == 11)) {
            D = 1;
            M++;
        }
        if (D == 29 && M == 2) {
            if (G % 4 != 0) {
                D = 1;
                M++;
            } else {
                if (G % 100 == 0 && G % 400 != 0) {
                    D = 1;
                    M++;
                }
            }
        }
        if (D == 30 && M == 2) {
            D = 1;
            M++;
        }
    }
    cout << D << " " << M << " " << G;


    return 0;
}

