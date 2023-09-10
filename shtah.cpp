#include <iostream>
using namespace std;

int main () {
    int Rw, Cw;
    cin >> Rw >> Cw;
    int Rb, Cb;
    cin >> Rb >> Cb;
    if (Rw <= Rb) {
        cout << "NEVER\n";
        return 0;
    }
    if (abs (Cw - Cb) != 1) {
        cout << "NEVER\n";
        return 0;
    }
    cout << Rw - Rb - 1 << endl;

    return 0;
}
