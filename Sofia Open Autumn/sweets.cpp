#include <iostream>
using namespace std;

int main () {
    long long a, b;
    cin >> a >> b;
    bool t = false;
    if(a < b) {
        swap(a, b);
        t = true;
    }
    if((2 * a - b) % 3 == 0) {
        if((b - (2 * a - b) / 3) / 2 < 0 || (2 * a - b) / 3 < 0) {
            cout << -1;
            return 0;
        }
        if(t) cout << (b - (2 * a - b) / 3) / 2 << ' ' << (2 * a - b) / 3;
        else  cout << (2 * a - b) / 3 << ' ' << (b - (2 * a - b) / 3) / 2;
    }
    else cout << -1;

    return 0;
}
