#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    double x1, y1, x2, y2, p = 0, s, a, b;
    for(int i = 0; i < n; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        a = fabs(x1 - x2);
        b = fabs(y1 - y2);
        p = max(p, 2 * (a + b));
        if(i == 0) {
            s = a * b;
        } else {
            s = min(s, a * b);
        }
    }
    cout << p << ' ' << s;
    return 0;
}
