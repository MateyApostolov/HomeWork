#include <bits/stdc++.h>
using namespace std;

int main () {
    long long n, nod = 0, brd = 0;
    cin >> n;
    long long nr[n - 1];
    for(int i = 0; i < n - 1; i++) {
        cin >> nr[i];
        nod = __gcd(nr[i], nod);
    }
    for(int i = 0; i < n - 1; i++) brd += nr[i] / nod - 1;
    cout << brd;
    return 0;
}
