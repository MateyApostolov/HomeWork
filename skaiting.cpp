#include <iostream>
using namespace std;

int main () {
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int ng = max(a, max(b, max(c, max(d, max(e, f)))));
    int nm = min(a, min(b, min(c, min(d, min(e, f)))));
    if (a == b && b == c && c == d && d == e && e == f) {
        cout << a + b + c + d + e + f;
    } else {
        cout << (a + b + c + d + e + f) - ng - nm;
    }

    return 0;
}
