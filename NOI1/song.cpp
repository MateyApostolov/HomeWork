#include <iostream>
using namespace std;

int main () {
    long long n, m, k;
    cin >> n >> m >> k;
    long long M = n * 60 + m;
    if (M * 16 <= k * 1024) {
        cout << "YES\n";
    } else {
        cout << "NO\n" << M * 16 - k * 1024;
    }

    return 0;
}
