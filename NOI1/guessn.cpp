#include <bits/stdc++.h>
using namespace std;

int main () {
    long long a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    long long r1 = a[1] - a[0];
    long long r2 = a[2] - a[1];
    if(r1 == r2) {
        if(a[0] - r1 < 0) {
            cout << a[2] + r1;
            return 0;
        }
        cout << a[0] - r1 << " " << a[2] + r1;
        return 0;
    }
    if(r1 * 2 == r2) {
        cout << a[1] + r1;
        return 0;
    }
    cout << a[1] - r2;


    return 0;
}
