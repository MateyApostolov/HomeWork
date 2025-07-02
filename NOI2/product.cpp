#include <bits/stdc++.h>
using namespace std;

const int maxc = 5 * pow(10, 6);
bool zdr[maxc];
int nmd[maxc];

void eratosten() {
    for(long long d = 2; d < maxc; d++) {
        if(zdr[d]) continue;
        nmd[d] = d;
        for(long long h = d * d; h < maxc; h += d) {
            if(zdr[h] == false) {
                nmd[h] = d;
                zdr[h] = true;
            }
        }
    }
    return;
}

bool dif2 (int num) {
    int brpr = 0, h1 = num, h2 = num;
    while(num > 1) {
        h2 = num;
        num /= nmd[num];
        brpr++;
    }
    if(brpr == 2 && nmd[h1] != nmd[h2]) return true;
    return false;
}

bool dif34 (int num) {
    int brpr = 0;
    while(num > 1) {
        num /= nmd[num];
        brpr++;
    }
    if(brpr == 3 || brpr == 4) return true;
    return false;
}

int main () {
    eratosten();
    int a, b, br1 = 0, br2 = 0, br3 = 0, br4 = 0;
    cin >> a >> b;
    for(int i = a; i <= b; i++) {
        if(nmd[i] == 2 || nmd[i] == 3) br1++;
        if(!zdr[i]) br2++;
        if(dif2(i)) {
            br3++;
            cout << i << '\n';
        }
        if(dif34(i)) br4++;
    }
    cout << br1 << '\n' << br2 << '\n' << br3 << '\n' << br4;
    return 0;
}
