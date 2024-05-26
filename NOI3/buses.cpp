#include <bits/stdc++.h>
using namespace std;

int main () {
    long long x, y, z, t, nok;
    cin >> x >> y >> z >> t;
    nok = x * y / __gcd(x, y);
    nok = nok * z / __gcd(nok, z);
    nok = nok * t / __gcd(nok, t);
    cout << nok / 60 << " " << nok % 60;
    return 0;
}
