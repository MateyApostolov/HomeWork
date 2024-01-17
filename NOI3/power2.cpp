#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    long long nc, h;
    vector<long long> p2;
    for(int i = 0; i < n; i++) {
        cin >> nc;
        h = nc;
        while(nc > 1) {
            if(nc % 2 == 1) break;
            nc /= 2;
        }
        if(nc == 1) p2.push_back(h);
    }
    sort(p2.begin(), p2.end());
    for(int i = 0; i < p2.size(); i++) cout << p2[i] << " ";
    if(p2.size() == 0) cout << "No";

    return 0;
}
