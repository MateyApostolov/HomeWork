#include <bits/stdc++.h>
using namespace std;

int main () {
    long long x, y, z, t, nod, nok;
    cin >> x >> y >> z >> t;
    nod = __gcd(x, y);
    nok = x * y / nod;
    nod = __gcd(nok, z);
    nok = nok * z / nod;
    nod = __gcd(nok, t);
    nok = nok * t / nod;
    cout << nok;

    return 0;
}
