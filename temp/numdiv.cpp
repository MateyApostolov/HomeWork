#include <bits/stdc++.h>
using namespace std;

const int maxn = 3000000;
int brnc[maxn];

void brd () {
    for(int d = 1; d <= maxn; d++) {
        for(int k = d; k <= maxn; k += d) {
            brnc[k]++;
        }
    }

    return;
}

int main () {
    int n, c, maxbr = 0;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        if(maxbr < brnc[i]) {
            maxbr = brnc[i];
            c = i;
        }
    }
    cout << c << '\n' << maxbr;
    return 0;
}
