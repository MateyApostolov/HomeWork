#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, ngbr = 0;
    cin >> n;
    pair <int, int> nc[n];
    for(int i = 0; i < n; i++) cin >> nc[i].first >> nc[i].second;
    for(int i1 = 0; i1 < n; i1++) {
        int br = 0;
        for(int i2 = 0; i2 < n; i2++) {
            if(i2 == i1) continue;
            if((nc[i1].first <= nc[i2].first && nc[i1].second >= nc[i2].first)||
               (nc[i1].first <= nc[i2].second && nc[i1].second >= nc[i2].second)||
               (nc[i1].first >= nc[i2].first && nc[i1].second <= nc[i2].second)) br++;
        }
        ngbr = max(ngbr, br);
    }
    cout << ngbr;
    return 0;
}
