#include <iostream>
using namespace std;

int main () {
    long long a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    long long nm = min(a, min(c, min(d, min(e, f))));
    long long ng = max(a, max(c, max(d, max(e, f))));
    cout << (a + b + c + d + e + f - ng - nm) / 4;

    return 0;
}
