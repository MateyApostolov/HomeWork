#include <bits/stdc++.h>
using namespace std;

int trivia (int n) {
    int i, sum = 0;
    for(i = 1; i * i <= n; i++) {
        if(n % i == 0) sum += i + n / i;
    }
    if(i * i == n) sum -= i;
    return 1.0 * sum / n;
}

int main () {
    int l, r, ngi = 0, nmi = 0;
    double maxtr = 0, mintr = 10;
    cin >> l >> r;
    for(int i = l; i <= r; i++) {
        double tr = trivia(i);
        if(maxtr < tr) {
            maxtr = tr;
            ngi = i;
        }
        if(mintr > tr) {
            mintr = tr;
            nmi = i;
        }
    }
    cout << nmi << " " << ngi;

    return 0;
}
