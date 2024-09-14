#include <bits/stdc++.h>
using namespace std;


int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, s, e, ngk = -1;
    cin >> n;
    bool nc[n];
    pair<pair<int, int>, int> pr[n];
    for(int i = 0; i < n; i++) {
        cin >> s >> e;
        pr[i] = {{s, e}, i};
        nc[i] = false;
    }
    sort(pr, pr + n);
    for(int i = 0; i < n; i++) {
        if(pr[i].first.first <= ngk || (i + 1 < n && pr[i].first.second >= pr[i + 1].first.first)) {
            nc[pr[i].second] = true;
        }
        ngk = max(pr[i].first.second, ngk);
    }
    for(int i = 0; i < n; i++) {
        cout << nc[i] << '\n';
    }
    return 0;
}
