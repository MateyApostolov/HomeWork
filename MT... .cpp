#include <iostream>
using namespace std;

int main () {
    int a, b;
    cout << "The first number is ";
    cin >> a;
    cout << "The second number is ";
    cin >> b;
    if(a == b){
       cout << "The both numbers are equal ";
    } else {
        cout << "The lowest number is ";
        if (a < b) {
            cout << a;
        } else {
            cout << b;
        }
    }
    return 0;
}
