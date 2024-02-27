#include <bits/stdc++.h>
using namespace std;

const int maxc = 1000001;
int ic[maxc];

int main () {
    int n, s = 0, c;
    cin >> n;
    vector<pair<pair<int, int>, int>> k;
    for(int i = 1; i <= n; i++) {
        cin >> c;
        if(c == 0) continue;
        if(ic[c] == 0) {
            pair<pair<int, int>, int> nc;
            nc.first.first = i;
            nc.first.second = i;
            nc.second = c;
            k.push_back(nc);
            ic[c] = k.size();
        } else k[ic[c] - 1].first.second = i;
    }
    for(int i = 0; i < k.size(); i++)
        s += k[i].first.second - k[i].first.first + 1;
    cout << k.size() << " " << s << "\n";
    for(int i = 0; i < k.size(); i++)
        cout << "Move " << i + 1 << ": " << k[i].second << " " << k[i].first.first << " " << k[i].first.second << "\n";

    return 0;
}
