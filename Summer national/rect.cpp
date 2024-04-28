#include <iostream>
using namespace std;

int main () {
    long long a, b, brs = 0;
    cin >> a >> b;
    if(b < a) swap(a,b);
    while(a != 0 && b != 0) {
        brs += b / a;
        b = b % a;
        if(b < a) swap(a,b);
    }
    cout << brs;
    return 0;
}
