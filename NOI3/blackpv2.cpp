#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, r, p, c;
    cin >> n >> r;
    vector <int> nc;
    for(int i = 0; i < n; i++) nc.push_back(n - i);
    for(int i = 0; i < r; i++) {
        cin >> p >> c;
        vector <int> h;
        for(int x = 0; x < c; x++) h.push_back(nc[p - 1 + x]);
        for(int x = c; x < c + p - 1; x++) h.push_back(nc[x - c]);
        for(int x = c + p - 1; x < n; x++) h.push_back(nc[x]);
        nc = h;
    }
    cout << nc[0];
    return 0;
}
