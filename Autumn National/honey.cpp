#include <bits/stdc++.h>
using namespace std;

int main () {
    long long a[3];
    for(int i = 0; i < 3; i++) {
        cin >> a[i];
    }
    long long b[3];
    for(int i = 0; i < 3; i++) {
        cin >> b[i];
    }
    sort(a, a + 3);
    reverse(a, a + 3);
    sort(b, b + 3);
    reverse(b, b + 3);
    cout << a[0] * b[0] + a[1] * b[1] + a[2] * b[2];

    return 0;
}
