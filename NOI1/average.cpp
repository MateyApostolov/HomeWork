#include <iostream>
using namespace std;

int main () {
    int m, n;
    cin >> m >> n;
    if (m % 2 != 0) {
        m++;
    }
    if (n % 2 != 0) {
        n--;
    }
    cout << (m + n) / 2;

    return 0;
}
