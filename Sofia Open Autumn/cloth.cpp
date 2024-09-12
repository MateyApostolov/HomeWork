#include <bits/stdc++.h>
using namespace std;

int main () {
    long long n, x, y;
    cin >> n;
    map <int, long long> plat;
    for(int i = 0; i < n; i++) {
        cin >> x >> y;
        long long nod = __gcd(x, y), br = (x / nod) * (y / nod);
        plat[nod] += br;
    }
    for(auto i : plat) {
        cout << i.first << ' ' << i.second << '\n';
    }
    return 0;
}
