#include <iostream>
using namespace std;

int main () {
    long long n, m;
    cin >> n >> m;
    cout << (n - 1) * n / 2 << " " << 2 * m * n + (m - 1) * m;

    return 0;
}
