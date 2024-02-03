#include <iostream>
using namespace std;

const int maxd = 50000;
int d1[maxd], d2[maxd];

int main () {
    int d, n, m, brp, h1;
    cin >> d >> n;
    for(int i = 0; i < n; i++) {
        cin >> h1;
        d1[h1 % d]++;
    }
    cin >> m;
    for(int i = 0; i < m; i++) {
        cin >> h1;
        d2[h1 % d]++;
    }
    brp = d1[0] * d2[0];
    for(int i = 1; i < d; i++) brp += d1[i] * d2[d - i];
    cout << brp;

    return 0;
}
