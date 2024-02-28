#include <bits/stdc++.h>
using namespace std;

const int maxc = 1000001;
int l[maxc], r[maxc];

int main () {
    int n, s = 0, br = 0, mbr = 1;
    cin >> n;
    int nc[n + 1];
    for(int i = 1; i <= n; i++) cin >> nc[i];
    for(int i = n; i >= 1; i--) l[nc[i]] = i;
    for(int i = 1; i <= n; i++) r[nc[i]] = i;
    for(int i = 1; i < maxc; i++)
        if(l[i] != 0) {
            s += r[i] - l[i] + 1;
            br++;
        }
    cout << br << " " << s << "\n";
    for(int i = 1; i <= n; i++) {
        if(nc[i] != 0 && l[nc[i]] == i) {
            cout << "Move " << mbr << ": " << nc[i] << " " << l[nc[i]] << " " << r[nc[i]] << "\n";
            mbr++;
        }
    }
    return 0;
}
