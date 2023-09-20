#include <iostream>
using namespace std;

int main () {
    int X, Y, Z;
    cin >> X >> Y >> Z;
    int s = X * 3600 + Y * 60 + Z;
    s = s - 8 * 60 * 60;
    if (s < 0) {
        s += 24 * 60 * 60;
    }
    if (s % 108 >= 0 && s % 108 < 60) {
        cout << "premini";
    }
    if (s % 108 >= 60 && s % 108 < 64 || s % 108 >= 104 && (s % 108 == 0 || s % 108 <= 107)) {
        cout << "izchakai";
    }
    if (s % 108 >= 64 && s % 108 < 104) {
        cout << "spri";
    }

    return 0;
}
