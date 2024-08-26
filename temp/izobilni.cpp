#include <bits/stdc++.h>
using namespace std;

const int maxc = 1000000;
int sumn[maxc];

void populvane() {
    for(int d = 1; d <= maxc; d++) {
        for(int k = d; k <= maxc; k += d) {
            sumn[k] += d;
        }
    }
    return;
}

int main () {
    int n, l, r;
    cin >> n;
    populvane();
    for(int i1 = 0; i1 < n; i1++) {
        int br = 0;
        cin >> l >> r;
        for(int i2 = l; i2 <= r; i2++) {
            if(i2 <= sumn[i2]) sumn[i2] = 1;
        }
    }
    return 0;
}
