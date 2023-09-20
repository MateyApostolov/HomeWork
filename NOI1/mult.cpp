#include <iostream>
using namespace std;

int main () {
    int A;
    cin >> A;
    int s = A / 100, d = A / 10 % 10, e = A % 10;
    int w1, w2;
    w1 = (s * 10 + d) * e;
    w2 = (d * 10 + e) * s;
    if (w1 < w2) {
        cout << w2;
    } else {
        cout << w1;
    }

    return 0;
}
