#include <iostream>
using namespace std;

int main () {
    int a, b;
    cin >> a >> b;
    if (a == 6) {
        a = 9;
    }
    if (b == 6) {
        b = 9;
    }
    if (b <= a) {
        cout << a * 10 + b;
    } else {
        cout << b * 10 + a;
    }

    return 0;
}
