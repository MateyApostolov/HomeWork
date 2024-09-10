#include <bits/stdc++.h>
using namespace std;

const int maxk = 10001;
long long n, k, kc[maxk];

bool pred (long long num) {
    long long brd = 0;
    for(int i = 0; i < k; i++) {
        brd += num / kc[i];
    }
    if(brd < 0) return true;
    return brd >= n;
}


int main () {
    cin >> n >> k;
    for(int i = 0; i < k; i++) {
        cin >> kc[i];
    }
    long long l = -1, r = LONG_MAX, mid;
    while(l + 1 < r) {
        mid = (l + r) / 2;
        if(pred(mid)) r = mid;
        else l = mid;
    }
    cout << r;
    return 0;
}
