#include <iostream>
using namespace std;

int main () {
    int a, b, c;
    cin >> a >> b >> c;
    if(a > b) swap(a, b);
    if(a > c) swap(a, c);
    if(b > c) swap(b, c);
    if(c == 1) {
        cout << "0 0 0 0 0 0 1";
        return 0;
    }
    if(b == 1) {
        cout << "0 0 0 0 " << c - 2 << " 2 0";
        return 0;
    }
    if(a == 1) {
        cout << "0 0 " << (b - 2) * (c - 2) << " " << 2 * (b - 2 + c - 2) << " 4 0 0";
        return 0;
    }
    cout << (a - 2) * (b - 2) * (c - 2) << " ";
    cout << 2 * (a - 2) * (b - 2) + 2 * (a - 2) * (c - 2) + 2 * (b - 2) * (c - 2) << " ";
    cout << 4 * (a - 2 + b - 2 + c - 2) << " ";
    cout << "8 0 0 0";

    return 0;
}
