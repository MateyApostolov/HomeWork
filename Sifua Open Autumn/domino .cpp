#include <iostream>
using namespace std;

int main () {
    int m;
    cin >> m;
    int a1, b1;
    cin >> a1 >> b1;
    int a2, b2;
    cin >> a2>> b2;
    int a3, b3;
    cin >> a3 >> b3;
    int a4, b4;
    cin >> a4 >> b4;
    int A, B;
    A = a1 + a2 + a3 + a4;
    B = b1 + b2 + b3 + b4;
    if (m == 1) {
        if (A - a1 + b1 == B - b1 + a1) {
            cout << 1;
            return 0;
        }
         if (A - a2 + b2 == B - b2 + a2) {
            cout << 2;
            return 0;
        }
         if (A - a3 + b3 == B - b3 + a3) {
            cout << 3;
            return 0;
        }
         if (A - a4 + b4 == B - b4 + a4) {
            cout << 4;
            return 0;
        }
        cout << "N/A";
    }
    if (m == 2) {
        if (A - a1 + b1 - a2 + b2 == B - b1 + a1 - b2 + a2) {
            cout << 1;
            return 0;
        }
         if (A - a2 + b2 - a3 + b3 == B - b2 + a2 - b3 + a3) {
            cout << 2;
            return 0;
        }
         if (A - a3 + b3 - a4 + b4 == B - b3 + a3 - b4 + a4) {
            cout << 3;
            return 0;
        }
        cout << "N/A";
    }




    return 0;
}
