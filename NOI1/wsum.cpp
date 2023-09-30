#include <iostream>
using namespace std;

int main () {
    int A, B;
    cin >> A >> B;
    int k = 1;
    int a3 = 0, a8 = 0;
    while (A > 0) {
        int c = A % 10;
        if (c != 3 && c != 8) {
            a3 = a3 + k * c;
            a8 = a8 + k * c;
        } else {
            a3 = a3 + k * 3;
            a8 = a8 + k * 8;
        }
        A = A / 10;
        k = k * 10;
    }
    k = 1;
    int b3 = 0, b8 = 0;
    while (B > 0) {
        int c = B % 10;
        if (c != 3 && c != 8) {
            b3 = b3 + k * c;
            b8 = b8 + k * c;
        } else {
            b3 = b3 + k * 3;
            b8 = b8 + k * 8;
        }
        B = B / 10;
        k = k * 10;
    }
    cout << a3 + b3 << " " << a8 + b8;

    return 0;
}
