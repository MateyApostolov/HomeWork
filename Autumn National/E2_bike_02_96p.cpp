#include <bits/stdc++.h>
using namespace std;

int main () {
    long long N, P;
    cin >> N >> P;
    long long a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort (a, a + 3);
    if(P < a[0]) {
        cout << a[0] - P;
        return 0;
    }
    if(P < a[1] && P > a[0]) {
        cout << min(a[1] - P, P - a[0]);
        return 0;
    }
    if(P < a[2] && P > a[1]) {
        cout << min(a[2] - P, P - a[1]);
        return 0;
    }
    if(P > a[2]) {
        cout << min((N - P) + a[0], P - a[2]);
    }

    return 0;
}
