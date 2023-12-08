#include <bits/stdc++.h>
using namespace std;

int main () {
    long long a, b, p, q, s, w1 = 0, w2 = 0, w3 = 0;
    cin >> a >> b >> p >> q >> s;
    if(p < q) swap(p, q);
    if((b % q != 0 && a != s) || (b % s != 0 && a != p)) {
        cout << "NO";
        return 0;
    }
    long long br1 = b / q, br2 = b / s;
    if(a % (p + s) == 0) w1 = (a / (p + s)) * (br2 + br1);
    if(a % (p + s) == p) w2 = ((a - p) / (p + s)) * (br2 + br1) + br1;
    if(a % (p + s) == s) w3 = ((a - s) / (p + s)) * (br2 + br1) + br2;
    long long nmw, ngw = max(w1, max(w2, w3));
    if(w1 == 0) w1 = LLONG_MAX;
    if(w2 == 0) w2 = LLONG_MAX;
    if(w3 == 0) w3 = LLONG_MAX;
    nmw = min(w1, min(w2, w3));
    cout << nmw << " " << ngw;

    return 0;
}
