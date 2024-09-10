#include <bits/stdc++.h>
using namespace std;

const int maxn = 100001;
int nc[maxn];
long long n, k, s;

bool pred (long long num) {
    long long puk = num * s, i = 0, h = 0;
    while(i < n) {
        long long help = 0;
        if(puk < nc[i]) return false;
        while(i < n && help + nc[i] <= puk) {
            help += nc[i];
            i++;
        }
        h++;
    }
    return h <= k;
}


int main () {
    cin >> n >> k >> s;
    for(int i = 0; i < n; i++) {
        cin >> nc[i];
    }
    int l = -1, r = INT_MAX, mid;
    while(l + 1 < r) {
        mid = (l + r) / 2;
        if(pred(mid)) r = mid;
        else l = mid;
    }
    cout << r;
    return 0;
}
