#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "The first number is ";
    cin >> a;
    cout << "The second number is ";
    cin >> b;
    cout << "The third number is ";
    cin >> c;
    if ((a > b) && ( b > c)) {
        cout << a << " > " << b << " > " << c;
    }
    if ((a > c) && ( c > b)) {
        cout << a << " > " << c << " > " << b;
    }
    if ((b > a) && ( a > c)) {
        cout << b << " > " << a << " > " << c;
    }
    if ((b > c) && ( c > a)) {
        cout << b << " > " << c << " > " << a;
    }
    if ((c > a) && ( a > b)) {
        cout << c << " > " << a << " > " << b;
    }
    if ((c > b) && ( b > a)) {
        cout << c << " > " << b << " > " << a;
    }
    return 0;


}
