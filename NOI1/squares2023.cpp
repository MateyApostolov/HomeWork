#include <bits/stdc++.h>
using namespace std;

const int maxc = 10000001;
bool sb[maxc];

int main () {
    int n, nc, br = 0;
    vector <int> tk;
    for(int i = 1; i < 3162; i++) tk.push_back(i * i);
    for(int i1 = 0; i1 < tk.size(); i1++)
        for(int i2 = 0; i2 < tk.size(); i2++)
            if(tk[i1] + tk[i2] < maxc) sb[tk[i1] + tk[i2]] = true;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> nc;
        if(sb[nc]) cout << 1;
        else cout << 0;
    }
    return 0;
}
