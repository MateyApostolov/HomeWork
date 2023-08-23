#include <iostream>
using namespace std;

int main () {
    int K1, M1, S1, K2, M2, S2, K3, M3, S3;
    cin >> K1 >> M1 >> S1 >> K2 >> M2 >> S2 >> K3 >> M3 >> S3;
    int Z = K1 * 100000 + M1 * 100 + S1;
    int A = K2 * 100000 + M2 * 100 + S2;
    int S = K3 * 100000 + M3 * 100 + S3;
    int k1 = (Z + A) / 100000;
    int m1 = ((Z + A) % 100000) / 100;
    int s1 = ((Z + A) % 100000) % 100;
    int k2 = (Z + S) / 100000;
    int m2 = ((Z + S) % 100000) / 100;
    int s2 = ((Z + S) % 100000) % 100;
    if (Z + A > Z + S) {
        cout << k1 << " " << m1 << " " << s1;
    } else {
        cout << k2 << " " << m2 << " " << s2;
    }

    return 0;
}
