#include <iostream>
using namespace std;

int main () {
    int sro, h = 0;
    for(int i = 0; i < 7; i++) {
        cin >> sro;
        if (sro == 2) {
            cout << "No";
            return 0;
        } else {
            if (sro == 6) {
                h++;
            }
        }
    }
    if (h == 1) {
        cout << "*";
    }
    if (h == 2) {
        cout << "**";
    }
    if (h == 3) {
        cout << "***";
    }
    if (h == 4) {
        cout << "****";
    }
    if (h == 5) {
        cout << "*****";
    }
    if (h == 6) {
        cout << "******";
    }
    if (h == 7) {
        cout << "*******";
    }

    return 0;
}
