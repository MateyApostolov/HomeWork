#include <bits/stdc++.h>
using namespace std;

bool ogr[1000000000];

int main () {
    int t, k, l , r, mb = 0, L = 1000000001, R = 0, in = 0; cin >> t >> k;
    for(int i = 0; i < t; i++){
        cin >> l >> r;
        for(int j = l; j <= r; j++) ogr[j] = true;
        L = min(L,l);
        R = max(R,r);
    }
    bool pr = true;
    for(int i = L; i <= R; i++ ){
        if(ogr[i] && i % k == 0) mb++;
        if(pr && !ogr[i]) in++;
        pr = ogr[i];
    }
    in++;
    cout << in << " " << mb;
    return 0;
}
