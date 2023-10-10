#include <iostream>
using namespace std;

int main () {
    int k;
    cin >> k;
    int s = k / 100, d = k / 10 % 10, e = k % 10;
    s = s + d;
    if (s >= 10) {
        s = s / 10 + s % 10;
    }
    if (e % 2 == 0) {
        e = e * 2;
    } else {
        e = e + d;
    }
    cout << s << e / 10 % 10 << e % 10;

    return 0;
}
