#include <iostream>
using namespace std;

int main () {
    long long a, b, c;
    cin >> a >> b >> c;
    if(a * 2 < b || 2 * c < b)
        if(a > c) cout << 4 * c + 2;
        else cout << 4 * a;
    else if(a * 2 == b) cout << 4 * a;
    else if(2 * c == b) cout << 4 * c + 1;
    else cout << b / 2 * 4 + 1 + b % 2 * 2;


    return 0;
}
