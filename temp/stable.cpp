#include <bits/stdc++.h>
using namespace std;

const int maxn = 100000;
bool isb[maxn], issm[maxn];

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int nc[n];
    for(int i = 0; i < n; i++) cin >> nc[i];
    vector <int> stc;
    int ng = -1000000001, nm = 1000000001;
    for(int i = 0; i < n; i++) {
        if(nc[i] > ng) isb[i] = true;
        ng = max(nc[i], ng);
    }
    for(int i = n - 1; i >= 0; i--) {
        if(nc[i] < nm) issm[i] = true;
        nm = min(nc[i], nm);
    }
    for(int i = 0; i < n; i++) if(isb[i] && issm[i]) stc.push_back(nc[i]);
    cout << stc.size() << "\n";
    for(int i = 0; i < stc.size(); i++) cout << stc[i] << " ";

    return 0;
}
