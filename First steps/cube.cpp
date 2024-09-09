#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ULL;
ULL n;

bool pred (ULL nc) {
    if(nc * nc * nc > n) return true;
    return false;
}


int binary () {
    ULL l = -1, r = 3000000, mid;
    while (l + 1 < r) {
        mid = (l + r) / 2;
        if(pred(mid)) r = mid;
        else l = mid;
    }
    return --r;
}


int main () {
    cin >> n;
    ULL kub, brk = 0;
    char s;
    while(n > 0) {
        kub = binary();
        brk++;
        n -= kub * kub * kub;
        ///cout << kub << ' ' << n << '\n';
    }
    cout << brk;
    return 0;
}

