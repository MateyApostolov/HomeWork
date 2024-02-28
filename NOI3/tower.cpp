#include <iostream>
using namespace std;

int main () {
    long long x, y, a, b;
    cin >> x >> y >> a >> b;
    if(a < b) {
        swap(a, b);
        swap(x, y);
    }
    if(x == y && a == b) {
        cout << a + b;
        return 0;
    }
    if(x == y) {
        cout << b + b + 1;
        return 0;
    }
    if(a == b) {
        cout << 3 * a;
        return 0;
    }
    cout << 3 * b + 1;

    return 0;
}
