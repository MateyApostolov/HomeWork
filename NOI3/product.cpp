#include <bits/stdc++.h>
using namespace std;

long long ddd (long long num, long long d) {
    long long b2 = 0, b5 = 0, k = 5,h = k * d / __gcd(k, d);
    while(h <= num) {
        b5 += num / h;
        h *= k;
    }
    k = 2;
    h = k * d / __gcd(k, d);
    while(h <= num) {
        b2 += num / h;
        h *= k;
    }
    ///cout << b2 << " " << b5 << "\n";
    return min(b2, b5);
}

int main () {
    long long d, a, b, br2 = 0, br5 = 0, h;
    cin >> d >> a >> b;
    cout << ddd(b, d) - ddd(a - 1, d);

    return 0;
}
