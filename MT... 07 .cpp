#include <iostream>
using namespace std;

int main () {
    int a;
    cout << "Number? ";
    cin >> a;
    if (a > 25) {
        cout << "The number cannot be higher than 25!";
    } else {
        for (int r = 1; r <= a; r++) {
            for (int c = 1; c <= a; c++) {
                if ((c % 2 != 0 && r % 2 != 0)||(c % 2 == 0 && r % 2 == 0)) {
                    cout << "*" ;
                } else {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}
