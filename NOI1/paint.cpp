#include <iostream>
using namespace std;

int main () {
    int s1, Lv1, st1;
    cin >> s1 >> Lv1 >> st1;
    int s2, Lv2, st2;
    cin >> s2 >> Lv2 >> st2;
    int s3, Lv3, st3;
    cin >> s3 >> Lv3 >> st3;
    int a, b;
    cin >> a >> b;
    int v1 = Lv1 * 100 + st1;
    int v2 = Lv2 * 100 + st2;
    int v3 = Lv3 * 100 + st3;
    int sto = a * b * 4;
    int w1 = sto / s1;
    if (sto % s1 != 0) {
        w1++;
    }
    int w2 = sto / s2;
    if (sto % s2 != 0) {
        w2++;
    }
    int w3 = sto / s3;
    if (sto % s3 != 0) {
        w3++;
    }
    w1 = w1 * v1;
    w2 = w2 * v2;
    w3 = w3 * v3;
    int nmp = min(w1, min(w2, w3));
    cout << nmp / 100 << " " << nmp % 100;

    return 0;
}
