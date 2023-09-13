#include <iostream>
using namespace std;

int main () {
    int K1, M1, C1, K2, M2, C2, K3, M3, C3;
    cin >> K1 >> M1 >> C1 >> K2 >> M2 >> C2 >> K3 >> M3 >> C3;
    int S1, S2, S3;
    S1 = K1 * 100000 + M1 * 100 + C1;
    S2 = K2 * 100000 + M2 * 100 + C2;
    S3 = K3 * 100000 + M3 * 100 + C3;
    int A, SH;
    A = S1 + S2;
    SH = S1 + S3;
    int ng = max(A, SH);
    cout << ng / 100000  << " " << ng % 100000 / 100 << " " << ng % 100000 % 100;

    return 0;
}
