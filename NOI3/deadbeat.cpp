#include <iostream>
using namespace std;

int main () {
    int a, n;
    cin >> a >> n;
    if(a > n) {
        cout << 1;
        return 0;
    }
    if(a == n) {
        cout << 2 << " " << n;
        return 0;
    }
    if(a < n) {
        int abs3 = n - a;
        if(a % abs3 == 0 && n % abs3 == 0) cout << 3;
        else {
            cout << 4 << " ";
            while(a * 2 - n > 0) {
                a *= 2;
                a -= n;
            }
            cout << abs(a * 2 - n);
        }
    }

    return 0;
}
