#include <iostream>
using namespace std;

bool isDigitPrime(int a){
    if (a == 2 || a == 3 || a == 5 || a == 7){
        return true;
    }
    return false;
}

int main () {
    int n;
    cin >> n;
    int h, s, d, e;
    h = n / 1000;
    s = n / 100 % 10;
    d = n / 10 % 10;
    e = n % 10;
    if (isDigitPrime(h) && isDigitPrime(s) && isDigitPrime(d) && isDigitPrime(e)) {
        cout << h * s * d * e;
    } else {
        cout << h + s + d + e;
    }


    return 0;
}
