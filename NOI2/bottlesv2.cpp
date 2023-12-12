#include <bits/stdc++.h>
using namespace std;

int main () {
    int m, n;
    cin >> m >> n;
    cout << (((m * n) / __gcd(m, n) * (m + n)) / __gcd((m * n) / __gcd(m, n), m + n)) / (m + n) * 2;

    return 0;
}
