#include <iostream>
#include <math.h>
using namespace std;

int main () {
    int a, c;
    cout << "Number ? ";
    cin >> a;
    c = a % 2;
    if (c == 0) {
        cout << "This number is even" << endl;
    }
    int n = 0;
    int k = sqrt(a);
    for (int i = 2; i <= k; i++) {
        if (a % i == 0){
            cout << i << " divide this number!" << endl;
            n = n + 1;
            if ( i != k ) {
                cout << a/i << " divide this number!" << endl;
                n++;
            }
        }
    }
    if (n == 0){
        cout << "This number is prime!" << endl;
    } else {
        cout << n << " dividers";
    }
    return 0;
}
