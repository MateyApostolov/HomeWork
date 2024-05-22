#include <bits/stdc++.h>
using namespace std;

int main () {
    long long m, n, k;
    cin >> m >> n >> k;
    cout << m / __gcd(m,__gcd(n, k)) * n/ __gcd(m,__gcd(n, k)) * k / __gcd(m,__gcd(n, k));
    return 0;
}
