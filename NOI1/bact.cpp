#include <iostream>
using namespace std;

int main () {
    long long a, b, c, d, k, h = 1000000;
    cin >> a >> b >> c >> d >> k;
    k = min(k, h);
    while(k > 0) {
        k--;
        a *= b;
        a -= c;
        if(a <= 0) break;
        a = min(a, d);
    }
    h = 0;
    a = max(h, a);
    cout << a;
    return 0;
}
