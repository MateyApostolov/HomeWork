#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int k = n / 320;
    int ok = n % 320;
    int p = ok / 8;
    int op = ok % 8;
    int v1 = k * 3050 + p * 82 + op * 12;
    int v2 = k * 3050 + (p + 1) * 82;
    int v3 = (k + 1) * 3050;
    if (v1 < v2 && v1 < v3) {
        cout << k << " " << p << " " << op;
        return 0;
    }
    if (v2 < v1 && v2 < v3) {
        cout << k << " " << p + 1 << " 0";
        return 0;
    }
    cout << k + 1 << " 0 0";

    return 0;
}
