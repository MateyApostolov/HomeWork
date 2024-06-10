#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    char s;
    cin >> n >> s;
    int nc[n];
    vector <int> c;
    bool t = true;
    for(int i = 0; i < n; i++) cin >> nc[i];
    if(s == 'r') reverse(nc, nc + n);
    for(int i = 0; i < n; i++) {
        if(nc[i] != 0) {
            if(!t && c[c.size() - 1] == nc[i]) {
                c[c.size() - 1] *= 2;
                t = true;
            } else {
                t = false;
                c.push_back(nc[i]);
            }
        }
    }
    for(int i = c.size(); i < n; i++) c.push_back(0);
    if(s == 'r') reverse(c.begin(), c.end());
    for(int i = 0; i < n - 1; i++) cout << c[i] << " ";
    cout << c[n - 1];
    return 0;
}
