#include <iostream>
using namespace std;

int main () {
    long long X, Y;
    cin >> X >> Y;
    long long Z, T;
    cin >> Z >> T;
    long long M;
    cin >> M;
    if (M == 0) {
        cout << "AB 0";
        return 0;
    }
    long long A = (M / X) * (X + Y) + M % X;
    if (M % X == 0 ) {
        A = A - Y;
    }
    long long B = (M / Z) * (Z + T) + M % Z;
    if (M % Z == 0) {
        B = B - T;
    }
    if (A < B) {
        cout << "A " << A;
    }
    if (B < A) {
        cout << "B " << B;
    }
    if (A == B) {
        cout << "AB " << A;
    }
    return 0;
}
