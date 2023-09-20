#include <iostream>
using namespace std;

int main () {
    int a, b;
    cout << "The first number is ";
    cin >> a;
    cout << "The second number is ";
    cin >> b;
    if (b == 0) {
        cout << "The second number cannot be zero!";
    } else {
        cout << a / b;
        if ( a % b != 0) {
            cout << " ost " << a % b;
            cout << endl << 1.0 * a / b;
        }

    }



    return 0;

}





