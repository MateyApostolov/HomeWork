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
    if ( a < b ) swap(a,b);
    if ( a < c ) swap(a,c);
    if ( b < c ) swap(b,c);
    cout << a << " > " << b << " > " << c;
    return 0;


}
