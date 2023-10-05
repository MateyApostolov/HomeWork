#include <iostream>
using namespace std;

int main () {
    long long a, b, x, y;
    cin >> a >> b >> x >> y;
    long long v1 = (a / x) * (b / y), v2 = (a / y) * (b / x);
    long long okw = a * b - (max(v1, v2) * x * y);
    cout << max(v1, v2) << endl;
    cout << okw;
    return 0;
}
