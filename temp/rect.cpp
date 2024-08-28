#include <bits/stdc++.h>
using namespace std;

int main () {
    double x1, y1, x2, y2, a, b;
    cin >> x1 >> y1 >> x2 >> y2;
    a = fabs(x1 - x2);
    b = fabs(y1 - y2);
    cout << 2 * (a + b) << " " << a * b;
    return 0;
}
