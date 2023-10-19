#include <iostream>
using namespace std;

int main () {
    int r1k1, r1k2, r1k3;
    cin >> r1k1 >> r1k2 >> r1k3;
    int r2k1, r2k2, r2k3;
    cin >> r2k1 >> r2k2 >> r2k3;
    int r3k1, r3k2, r3k3;
    cin >> r3k1 >> r3k2 >> r3k3;
    if (r1k1 == 9) {
        if (r1k2 != 9) {
            r1k2++;
        }
        if (r2k1 != 9) {
            r2k1++;
        }
        if (r2k2 != 9) {
            r2k2++;
        }
    }
    if (r1k2 == 9) {
        if (r1k1 != 9) {
            r1k1++;
        }
        if (r2k1 != 9) {
            r2k1++;
        }
        if (r2k2 != 9) {
            r2k2++;
        }
        if (r2k3 != 9) {
            r2k3++;
        }
        if (r1k3 != 9) {
            r1k3++;
        }
    }
    if (r1k3 == 9) {
        if (r1k2 != 9) {
            r1k2++;
        }
        if (r2k2 != 9) {
            r2k2++;
        }
        if (r2k3 != 9) {
            r2k3++;
        }
    }
    if (r2k1 == 9) {
        if (r1k1 != 9) {
            r1k1++;
        }
        if (r1k2 != 9) {
            r1k2++;
        }
        if (r2k2 != 9) {
            r2k2++;
        }
        if (r3k2 != 9) {
            r3k2++;
        }
        if (r3k1 != 9) {
            r3k1++;
        }
    }
    if (r2k2 == 9) {
        if (r1k1 != 9) {
            r1k1++;
        }
        if (r1k2 != 9) {
            r1k2++;
        }
        if (r1k3 != 9) {
            r1k3++;
        }
        if (r2k1 != 9) {
            r2k1++;
        }
        if (r2k3 != 9) {
            r2k3++;
        }
        if (r3k1 != 9) {
            r3k1++;
        }
        if (r3k2 != 9) {
            r3k2++;
        }
        if (r3k3 != 9) {
            r3k3++;
        }
    }
    if (r2k3 == 9) {
        if (r1k2 != 9) {
            r1k2++;
        }
        if (r1k3 != 9) {
            r1k3++;
        }
        if (r2k2 != 9) {
            r2k2++;
        }
        if (r3k2 != 9) {
            r3k2++;
        }
        if (r3k3 != 9) {
            r3k3++;
        }
    }
    if (r3k1 == 9) {
        if (r2k1 != 9) {
            r2k1++;
        }
        if (r2k2 != 9) {
            r2k2++;
        }
        if (r3k2 != 9) {
            r3k2++;
        }
    }
    if (r3k2 == 9) {
        if (r2k1 != 9) {
            r2k1++;
        }
        if (r2k2 != 9) {
            r2k2++;
        }
        if (r2k3 != 9) {
            r2k3++;
        }
        if (r3k1 != 9) {
            r3k1++;
        }
        if (r3k3 != 9) {
            r3k3++;
        }
    }
    if (r3k1 == 9) {
        if (r2k2 != 9) {
            r2k2++;
        }
        if (r2k3 != 9) {
            r2k3++;
        }
        if (r3k2 != 9) {
            r3k2++;
        }
    }
    cout << r1k1 << " " << r1k2 << " " << r1k3 << endl;
    cout << r2k1 << " " << r2k2 << " " << r2k3 << endl;
    cout << r3k1 << " " << r3k2 << " " << r3k3 << endl;

    return 0;
}
