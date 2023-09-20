#include <iostream>
using namespace std;

int main () {
    int A, B, C, D;
    char a, b, c, d;
    cin >> a >> b >> c >> d;
    A = a - '0';
    B = b - '0';
    C = c - '0';
    D = d - 48;
    cout << A << " " << B << " " << C << " " << D << endl;
    cout << A + B + C + D;

    return 0;
}


