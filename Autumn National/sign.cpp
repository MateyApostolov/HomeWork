#include <iostream>
using namespace std;

int main () {
    int a, b, c;
    cin >> a >> b >> c;
    cout << a;
    if(a % 10 == b / 10) {
        cout << "'" << b % 10;
    } else {
        cout << b;
    }
    if(b % 10 == c / 10) {
        cout << "'" << c % 10;
    } else {
        cout << c;
    }

    return 0;
}
