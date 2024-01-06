#include <iostream>
using namespace std;

int main () {
    long long n, h, m, p, q;
    cin >> n >> h >> m >> p >> q;
    int hh;
    while(n > 0) {
        m += p * n;
        hh = m / 60;
        h += hh;
        m = m % 60;
        n = hh * q;
        if(hh == 1 && m == 0) break;
    }
    cout << h / 24 << " " << h % 24 << " " << m;

    return 0;
}
