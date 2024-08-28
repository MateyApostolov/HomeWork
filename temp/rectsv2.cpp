#include <bits/stdc++.h>
using namespace std;

int main () {
    double x1, y1, x2, y2;
    double a1, b1, a2, b2, as, bs, x, y, a, b;
    cin >> x1 >> y1 >> x2 >> y2 >> a1 >> b1 >> a2 >> b2;
    as = fabs(x2 - a1);
    bs = fabs(y2 - b1);
    x = fabs(x1 - x2);
    y = fabs(y1 - y2);
    a = fabs(a1 - a2);
    b = fabs(b1 - b2);
    cout << 2 * (as + bs) << ' ' << x * y + a * b - as * bs;

    return 0;
}

