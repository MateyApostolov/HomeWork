#include <iostream>
using namespace std;

int main () {
    int a, b, c, d, e, f, g, h;
    cout << "The first number is ";
    cin >> a;
    cout << "The second number is ";
    cin >> b;
    if (a == 0 || b == 0) {
        cout << "The numbers can not be zero!";
        return 1;
    }
    c = a + b;
    e = a - b;
    f = b - a;
    d = a * b;
    g = a / b;
    h = b / a;
    cout << "The sum is " << c << endl;
    cout << "The multiplication is " << d << endl;
    cout << "The retrieved from is " << e << endl;
    cout << "The another retrieved from is " << f << endl;
    cout << "The division is " << g << endl;
    cout << "The another division is " << h << endl;

    return 0;


}
