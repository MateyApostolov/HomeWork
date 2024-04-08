#include <bits/stdc++.h>
using namespace std;

const int maxiz = 100000001;
bool iz[maxiz];

int main () {
    int l, n, ngsum = 0, hi, br = 0, ngbr = 0, hi2;
    cin >> l >> n;
    pair<pair<int, int>, pair<int, int>> d[n];
    for(int i = 0; i < n; i++) {
        cin >> d[i].first.first >> d[i].second.first >> d[i].second.second;
        d[i].first.second = i + 1;
        if(ngsum < d[i].second.second - d[i].second.first) {
            ngsum = max(ngsum, d[i].second.second - d[i].second.first);
            hi = d[i].first.second;
        }
    }
    cout << hi << "\n";
    sort(d, d + n);
    for(int i = 0; i < n; i++) {
        for(int x = d[i].second.first; x <= d[i].second.second; x++) {
            if(iz[x] == false) {
                iz[x] = true;
                br++;
            }
        }
        if(ngbr < br) {
            ngbr = br;
            hi2 = d[i].first.second;
        }
        br = 0;
    }
    cout << hi2;

    return 0;
}
