#include <iostream>
using namespace std;

int main () {
    int k, l, ml;
    cin >> k >> l >> ml;
    int mlo = l * 1000 + ml;
    int mlk = k * 400;
    int b = mlk / mlo;
    if (mlk % mlo != 0) {
        b++;
        cout << b;
    } else {
        cout << b;
    }

    return 0;
}
