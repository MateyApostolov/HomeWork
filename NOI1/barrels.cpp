#include <iostream>
using namespace std;

int main () {
    int a1;
    char c1;
    cin >> a1 >> c1;
    int a2;
    char c2;
    cin >> a2 >> c2;
    int k;
    cin >> k;
    if (c1 == 'A') {
        if (a1 >= k) {
            cout << k;
            return 0;
        } else {
            cout << a1;
            return 0;
        }
    }
    if (c1 == 'B') {
        if (a1 >= k) {
            cout << 0;
            return 0;
        } else {
            cout << k - a1;
        }
    }

    return 0;
}
