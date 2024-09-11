#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int m, n;
    cin >> m >> n;
    int mc[m], s[n];
    for(int i = 0; i < m; i++) {
        cin >> mc[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }
    sort(mc, mc + m);
    sort(s, s + n);
    int h = 0;
    for(int i1 = 0; i1 < n; i1++) {
        for(int i2 = h; i2 < m; i2++) {
            if(s[i1] <= mc[i2]) break;
            cout << mc[i2] << ' ';
            h++;
        }
        h++;
    }
    for(int i2 = h; i2 < m; i2++) {
        cout << mc[i2] << ' ';
    }
    return 0;
}
