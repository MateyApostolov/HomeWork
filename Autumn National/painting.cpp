#include <iostream>
using namespace std;

int main () {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a > b) swap(a, b);
    if(c > d) swap(c, d);
    if(a > c) {
        swap(a, c);
        swap(b, d);
    }
    if(b <= c) {
        cout << (b - a + 1) + (d - c + 1);
        return 0;
    }
    if(b <= d) {
        cout << d - a + 1;
        return 0;
    }
    cout << b - a + 1;

    return 0;
}
