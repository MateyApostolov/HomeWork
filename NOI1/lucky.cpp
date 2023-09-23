#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int sh = n / 100000, dh = n / 10000 % 10, h = n / 1000 % 10, s = n / 100 % 10, d = n / 10 % 10, e = n % 10;
    if (sh + dh + h == s + d + e && dh >= s) {
        cout << sh + dh + h;
    } else {
        if (sh + dh + h != s + d + e && dh < s) {
            cout << "30";
        }
        if (sh + dh + h != s + d + e && dh >= s) {
            cout << "31";
        }
        if (sh + dh + h == s + d + e && dh < s) {
            cout << "32";
        }
    }

    return 0;
}
