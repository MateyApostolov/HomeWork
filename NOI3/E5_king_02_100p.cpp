#include <bits/stdc++.h>
using namespace std;

const int maxr = 100001;
pair<int, bool> r[maxr];
vector<int> kr;

int main () {
    int n, k, b, rc, br = 0;
    bool h = true;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> k >> b;
        for(int x = 0; x < k; x++) {
            cin >> rc;
            r[rc].first++;
            if(b == 0) {
                r[rc].second = true;
                h = false;
            }
            else {
                if(h != false) {
                    r[rc].second = false;
                }
            }
        }
    }
    for(int i = 0; i < maxr; i++)
    if(r[i].first > 0 && r[i].second == false) {
        br++;
        kr.push_back(i);
    }
    sort(begin(kr), end(kr));
    cout << br << "\n";
    for(int i = 0; i < kr.size(); i++) cout << kr[i] << " ";


    return 0;
}

