#include <iostream>
using namespace std;

int main () {
    int a;
    char A;
    cin >> a >> A;
    int b;
    char B;
    cin >> b >> B;
    int k;
    cin >> k;
    if (A == 'A') {
        if (k <= a) {
            cout << k;
        } else {
            cout << a;
        }
    }
    if (B == 'A') {
        if (k <= b) {
            cout << 0;
        } else {
            cout << k - a;
        }
    }

    return 0;
}
