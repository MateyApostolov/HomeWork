#include <bits/stdc++.h>
using namespace std;

const int maxd = 10000001;
int l, r, del[maxd];

void findd (int num) {
    double koren = sqrt(num);
    int i;
    for(i = 1; i < koren; i++) {
        if(num % i == 0) {
            if(i <= r && i >= l) del[i]++;
            if(num / i <= r && num / i >= l) del[num / i]++;
        }
    }
    if(num % (i * i) == 0 && i * i <= r && i * i >= l) del[i]++;
}

int main () {
    int n, br = 0, maxn = 0, nod = 0;
    cin >> n >> l >> r;
    int nk[n];
    for(int i = 0; i < n; i++) {
        cin >> nk[i];
        findd(nk[i]);
    }
    for(int i = 1; i < maxd; i++)
        if(maxn < del[i]) {
            nod = i;
            maxn = del[i];
        }
    if(maxn == 0) {
        nod = nk[0];
        for(int i = 1; i < n; i++) nod = __gcd(nod, nk[i]);
    }
    cout << nod;

    return 0;
}
