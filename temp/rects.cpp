#include <bits/stdc++.h>
using namespace std;

int main () {
    double x1, y1, x2, y2, a1, b1, a2, b2, as, bs;
    cin >> x1 >> y1 >> x2 >> y2 >> a1 >> b1 >> a2 >> b2;
    as = fabs(x2 - a1);
    bs = fabs(y2 - b1);
    cout << as * bs;

    return 0;
}
