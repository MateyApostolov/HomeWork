#include <bits/stdc++.h>
using namespace std;


int main () {
    long long n, s, gcd = 1, d;
    cin >> n >> s;
    for(int i = 0; i < n; i++) {
        cin >> d;
        gcd = gcd * d / __gcd(gcd, d);
    }
    gcd += s;
    if(gcd % 7 == 0) cout << 7;
    else cout << gcd % 7;


    return 0;
}
