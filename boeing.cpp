#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    char c, b, d;
    cin >> c >> b;
    int rz, pz;
    if (b < 58) {
        cin >> d;
        rz = (c - '0') * 10 + (b - '0');
        pz = (rz - 1) * 6 + d - 64;
        cout << c << b << d << endl;
        cout << n << endl;
    } else {
        rz = (c - '0');
        pz = (rz - 1) * 6 + b - 64;
    }
    pz = pz - 3;
    if (n == 118){
        cout << "full";
        return 0;
    }
    n = n + 4;
    if (n > 120) n = n + 3;
    if (pz <= n) n++;
    int no = n % 6;
    int nd = n / 6;
    if (no != 0) nd++;
    cout << nd;
    if (no == 0) cout << "F";
    if (no == 1) cout << "A";
    if (no == 2) cout << "B";
    if (no == 3) cout << "C";
    if (no == 4) cout << "D";
    if (no == 5) cout << "E";

    return 0;
}
