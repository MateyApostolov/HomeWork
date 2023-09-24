#include <iostream>
using namespace std;

int main () {
    int troom, tcond;
    cin >> troom >> tcond;
    char r;
    cin >> r;
    if (r == 102) {
        if (troom <= tcond) {
            cout << troom;
        } else {
            cout << tcond;
        }
    }
    if (r == 104) {
        if (troom <= tcond) {
            cout << troom;
        } else {
            cout << tcond;
        }
    }
    if (r == 97) {
        cout << tcond;
    }
    if (r == 118) {
        cout << troom;
    }

    return 0;
}
