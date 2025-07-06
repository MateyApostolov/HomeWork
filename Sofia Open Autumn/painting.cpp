#include <bits/stdc++.h>
using namespace std;

int main () {
    int w, h, l, k, br1 = 0, d[3];
    cin >> w >> h >> l >> k;
    cout << k;
    return 0;
    if(w == 1) br1++;
    if(h == 1) br1++;
    if(l == 1) br1++;
    d[0] = w;
    d[1] = h;
    d[2] = l;
    sort(d, d + 3);
    if(k == 6) {
        if(br1 == 3) cout << 1;
        else cout << 0;
        return 0;
    }
    if(k == 5) {
        if(br1 == 2) cout << 2;
        else cout << 0;
        return 0;
    }
    if(k == 4) {
        if(br1 == 1) cout << 4;
        else if(br1 == 2) cout << d[2] - 2;
        else cout << 0;
        return 0;
    }
    if(k == 3) {
        if(br1 == 0) cout << 8;
        else if(br1 == 1) cout << 2 * (d[2] - 2 + d[1] - 2);
        else cout << 0;
        return 0;
    }
    if(k == 2) {
        if(br1 == 0) cout << 4 * (d[2] - 2 + d[1] - 2 + d[0] - 2);
        else if(br1 == 1) cout << (d[2] - 2) * (d[1] - 2);
        else cout << 0;
    }
    if(k == 1) {
        if(br1 == 0) cout << 2 * ((d[2] - 2) * (d[1] - 2) + (d[2] - 2) * (d[0] - 2) + (d[1] - 2) * (d[0] - 2));
        else cout << 0;
        return 0;
    }
    if(k == 0) {
        if(br1 == 0) cout << (d[2] - 2) * (d[1] - 2) * (d[0] - 2);
        else cout << 0;
        return 0;
    }
    return 0;
}
