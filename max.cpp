#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int s = n / 100, d = n / 10 % 10, e = n % 10;
    int w1 = s + d + e, w2 = s * d * e, w3 = s + d * e, w4 = s * d + e;
    cout << max(w1, max(w2, max(w3, w4)));

    return 0;
}
