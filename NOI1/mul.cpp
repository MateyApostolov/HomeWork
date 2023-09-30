#include <iostream>
using namespace std;

int main () {
    int a, n;
    cin >> a >> n;
    int a1, a2, a3;
    for (int i = 0; i < n; i++) {
        a = a * a;
        a1 = a % 10;
        a2 = a / 10 % 10;
        a3 = a / 100 % 10;
        a = a3 * 100 + a2 * 10 + a1;
    }
    cout << a;

    return 0;
}
