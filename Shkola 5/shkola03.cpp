#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int s, d, e;
    s = n / 100;
    d = n / 10 % 10;
    e = n % 10;
    cout << s + d + e << " " << s * d * e;

    return 0;
}
