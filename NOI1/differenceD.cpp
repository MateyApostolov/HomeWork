#include <bits/stdc++.h>
using namespace std;

int main () {
    string n;
    cin >> n;
    vector <int> ncif;
    unsigned long long minc = 0, maxc = 0, br0 = 0, h = 0;
    for(int i = 0; i < n.size(); i++) {
        ncif.push_back(n[i] - '0');
        if(n[i] == '0') br0++;
    }
    sort(ncif.begin(), ncif.end());
    minc = ncif[br0];
    h = br0;
    while(h > 0) {
        minc *= 10;
        h--;
    }
    for(int i = br0 + 1; i < ncif.size(); i++) minc = minc * 10 + ncif[i];
    for(int i = ncif.size() - 1; i >= 0; i--) maxc = maxc * 10 + ncif[i];
    cout << maxc - minc;
    return 0;
}
