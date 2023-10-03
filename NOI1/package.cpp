#include <iostream>
using namespace std;

int main () {
    int a;
    cin >> a;
    int b;
    cin >> b;
    int c;
    cin >> c;
    int d;
    cin >> d;
    int e;
    cin >> e;
    if (a + b > e) {
        cout << 4;
        return 0;
    }
    if (b + c > e) {
        cout << 3;
        return 0;
    }
    if (c + d > e) {
        cout << 2;
        return 0;
    }
    cout << 1;

    return 0;
}
