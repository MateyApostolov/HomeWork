#include <bits/stdc++.h>
using namespace std;

const int maxc = 221;
int brc[maxc];

int main () {
    int n;
    cin >> n;
    for(int i1 = 0; i1 < n; i1++) {
        int nc = -1;
        while(nc != 0) {
            cin >> nc;
            if(nc == 0) continue;
            brc[nc]++;
        }
    }
    bool t = false;
    for(int i = 1; i < maxc; i++)
        if(brc[i] == n) {
            t = true;
            cout << i << " ";
        }
    if(!t) cout << 0;
    return 0;
}
