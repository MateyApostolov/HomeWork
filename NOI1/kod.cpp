#include <iostream>
using namespace std;

int main () {
    int N;
    cin >> N;
    int sh, dh, h, s, d, e;
    sh = N / 100000;
    dh = N / 10000 % 10;
    h = N / 1000 % 10;
    s = N / 100 % 10;
    d = N / 10 % 10;
    e = N % 10;
    int pz = 0;
    if (sh % 2 != 0) {
        pz++;
    }
    if (dh % 2 != 0) {
        pz++;
    }
    if (h % 2 != 0) {
        pz++;
    }
    if (s % 2 != 0) {
        pz++;
    }
    if (d % 2 != 0) {
        pz++;
    }
    if (e % 2 != 0) {
        pz++;
    }
    int wz = abs((sh * 100 + h * 10 + d) - (d * 100 + h * 10 + sh));
    cout << pz << wz;

    return 0;
}
