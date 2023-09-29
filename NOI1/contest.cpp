#include <iostream>
using namespace std;

int main () {
    int n, t, f, x;
    cin >> n >> t >> f >> x;
    int trz = n - f;
    if (trz * x < (t - 1) * 60) {
        cout << "YES\n";
        cout << (t - 1) * 60 - trz * x;
    }
    if (trz * x == (t - 1) * 60) {
        cout << "EXACT!\n";
    }
    if (trz * x > (t - 1) * 60) {
        cout << "NO\n";
        cout << trz * x - (t - 1) * 60 << endl;
        if ((trz * x - (t - 1) * 60) % x != 0) {
            cout << (trz * x - (t - 1) * 60) / x + 1;
        } else {
            cout << (trz * x - (t - 1) * 60) / x;
        }
    }

    return 0;
}
