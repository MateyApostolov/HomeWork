#include <bits/stdc++.h>
using namespace std;

int main () {
    int t = 1, d = 1, mint = 1000000, mind = 1000000;
    vector<pair<int, int>> n;
    while(t != 0) {
        cin >> t >> d;
        if(t == 0) continue;
        n.push_back({t, d});
    }
    sort(n.begin(), n.end());
    for(int i = n.size() - 1; i > 0; i--) {
        if(mint > n[i].first - n[i - 1].first) {
            mint = n[i].first - n[i - 1].first;
            mind = abs(n[i].second - n[i - 1].second);
        }
        if(mint == n[i].first - n[i - 1].first) mind = min(mind, abs(n[i].second - n[i - 1].second));
    }
    cout << mint << " " << mind;

    return 0;
}
