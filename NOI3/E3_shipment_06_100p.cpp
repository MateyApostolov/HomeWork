#include <iostream>
using namespace std;

const int maxc = 1000001;
int brh[maxc];

int main () {
    int n, m, k, h, brk = 0, help;
    cin >> n >> m >> k;
    for(int i = 0; i < n; i++) {
        cin >> h;
        brh[h]++;
    }
    for(int i = 1; i < maxc; i++) {
        help = brh[i];
        if(brh[i] <= k - 1) continue;
        if(brh[i] < m) {
            brh[i] /= k;
            brk += brh[i];
        }
        if(brh[i] >= m) {
            brh[i] /= m;
            brk += brh[i];
            brh[i] = help % m;
            brh[i] /= k;
            brk += brh[i];
        }
    }
    cout << brk;

    return 0;
}

