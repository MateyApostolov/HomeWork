#include <bits/stdc++.h>
using namespace std;

int main () {
    long long n, no, r;
    cin >> n >> no;
    r = no;
    for(int i = 1; i < n; i++) {
        cin >> no;
        r = r * no / __gcd(r, no);
    }
    cout << r;

    return 0;
}
