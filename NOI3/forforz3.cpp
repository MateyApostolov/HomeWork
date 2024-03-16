#include <iostream>
using namespace std;

int main () {
    int r, k;
    cin >> r >> k;
    for(int i = 0; i < r; i++) {
        for(int i2 = 0; i2 < k; i2++) {
            if(i2 % 2 == 1 && i % 2 == 1) {
                cout << "X";
            }
            if(i2 % 2 == 0 && i % 2 == 1) {
                cout << "O";
            }
            if(i2 % 2 == 1 && i % 2 == 0) {
                cout << "O";
            }
            if(i2 % 2 == 0 && i % 2 == 0) {
                cout << "X";
            }
        }
        cout << endl;
    }

    return 0;
}

