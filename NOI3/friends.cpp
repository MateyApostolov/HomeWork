#include <bits/stdc++.h>
using namespace std;

int main () {
    long long n, h = 1, nok = h * (h + 1) / __gcd(h ,h + 1);
    cin >> n;
    h++;
    while(h < n) {
        nok = nok * (h + 1) / __gcd(nok ,h + 1);
        h++;
    }
    cout << nok;
    return 0;
}
