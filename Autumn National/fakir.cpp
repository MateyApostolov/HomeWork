#include <iostream>
using namespace std;

int main () {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int nm = min(a, min(b, min(c, d)));
    cout << a + b + c + d + 1 - nm;

    return 0;
}
