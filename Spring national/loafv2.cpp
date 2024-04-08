#include <bits/stdc++.h>
using namespace std;

int main () {
    int l, n, ngsum = 0, hi, ngbr = 0, hi2;
    cin >> l >> n;
    int b[n], e[n], num[n];
    for(int i = 0; i < n; i++) {
        cin >> num[i] >> b[i] >> e[i];
        if(ngsum < e[i] - b[i] + 1) {
            ngsum = max(ngsum, e[i] - b[i] + 1);
            hi = i + 1;
        }
    }
    cout << hi << "\n";
    for(int i = 0; i < n; i++) {
        int B = b[i], E = e[i], br = 0;
        for(int x = 0; x < n; x++) {
            if(x == i || B > e[x] || E < b[x] || num[i] < num[x]) continue;
            if(B == e[x]) B = e[x] + 1;
            else if(B >= b[x] && B <= e[x] && E > e[x]) B = e[x] + 1;
            else {
                br += b[x] - B;
                B = e[x] + 1;
            }
        }
        if(E >= B) br += E - B + 1;
        if(ngbr < br) {
            ngbr = br;
            hi2 = i + 1;
        }
    }
    cout << hi2;

    return 0;
}
