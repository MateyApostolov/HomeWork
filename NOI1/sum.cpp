#include <iostream>
using namespace std;

int main () {
    char a, b, c, x, d, e, f;
    cin >> a >> b >> c >> x >> d >> e >> f;
    a = a - 48;
    b = b - 48;
    c = c - 48;
    d = d - 48;
    e = e - 48;
    f = f - 48;
    int sum = a * 100 + b * 10 + c + d * 100 + e * 10 + f;
    int sum1 = a * 100 + b * 10 + c + d * 100 + e * 10 + f;
    if (c + f >= 10) {
        sum = sum - 10;
    }
    if (b + e >= 10) {
        sum = sum - 100;
    }
    cout << sum << endl;
    cout << sum1;

    return 0;
}
