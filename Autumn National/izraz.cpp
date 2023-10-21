#include <bits/stdc++.h>
using namespace std;

int main () {
    long long a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    if(a[1] != 0) {
        cout << a[2] * a[1] + a[0];
        return 0;
    }
    cout << a[2];


    return 0;
}
