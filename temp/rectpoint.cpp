#include <bits/stdc++.h>
using namespace std;

int main () {
    double x1, y1, a, b, x, y, x2, y2;
    cin >> x1 >> y1 >> a >> b >> x >> y;
    x2 = fabs(x1 + a);
    y2 = fabs(y1 + b);
    if(x > x1 && x < x2 && y > y1 && y < y2) cout << 1;
    else if(x == x1 || x == x2 || y == y1 || y == y2) cout << 0;
    else cout << -1;

    return 0;
}
