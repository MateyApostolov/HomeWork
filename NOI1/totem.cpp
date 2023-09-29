#include <iostream>
using namespace std;

int main () {
    char a1, b1, c1;
    cin >> a1 >> b1 >> c1;
    char a2, b2, c2;
    cin >> a2 >> b2 >> c2;
    char a3, b3, c3;
    cin >> a3 >> b3 >> c3;
    int d1, d2;
    d1 = (a1 - '0') * 100 + (b2 - '0') * 10 + (c3 - '0');
    d2 = (c1 - '0') * 100 + (b2 - '0') * 10 + (a3 - '0');
    cout << d1 * d2;

    return 0;
}
