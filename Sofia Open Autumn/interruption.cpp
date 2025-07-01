#include <iostream>
using namespace std;

int main () {
    int a, b, c, d, n, bm, em, bh;
    cin >> a >> b >> c >> d >> n;
    bm = a * 60 + b;
    em = c * 60 + d;
    bh = em - (em - bm - n) / 2 - n;
    cout << bh / 60 << ' ' << bh % 60;
    return 0;
}

