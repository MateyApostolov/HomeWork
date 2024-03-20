#include <iostream>
using namespace std;

int main () {
    long long l, m, n, br = 0;
    cin >> l >> m >> n;
    while(m * 1000 + n * 999000 / 2 < l) {
        br += 1000;
        l -= m * 1000 + n * 999000 / 2;
        m += 1000 * n;
    }
    while (l >= 0) {
        br++;
        l -= m;
        m += n;
    }
    cout << br;

    return 0;
}
