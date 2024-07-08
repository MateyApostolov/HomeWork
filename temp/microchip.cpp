#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, m, r, maxr = INT_MIN, hr, k, mink = INT_MAX;
    cin >> n >> m;
    char t[n][m];
    for(int i = 0; i < n; i++)
        for(int x = 0; x < m; x++) cin >> t[i][x];
    for(int i = 0; i < n; i++) {
        r = 0;
        for(int x = 0; x < m; x++) {
            if(t[i][x] == '+' || t[i][x] == '?') r++;
            else r--;
        }
        if(r > maxr) {
            maxr = r;
            hr = i;
        }
    }
    for(int x = 0; x < m; x++) {
        k = 0;
        for(int i = 0; i < n; i++) {
            if(t[i][x] == '-' || (t[i][x] == '?' && i != hr)) k--;
            else k++;
        }
        mink = min(k, mink);
    }
    cout << maxr - mink;

    return 0;
}
