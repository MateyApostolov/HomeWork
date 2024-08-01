#include <iostream>
using namespace std;

int main () {
    long long k, h = 1, b0 = 1, b1 = 0, b2 = 0;
    cin >> k;
    for(int i = 0; i < k; i++) {
        h += b2;
        b2 = b1;
        b1 = b0;
        b0 = h;
    }
    cout << h + b0 + b1 + b2;
    return 0;
}

