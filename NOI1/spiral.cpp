#include <iostream>
using namespace std;

int main () {
    int n, m, p, h, x = 0, y = 0, pos = 1, siz, i, s = 0, sum = 0;
    cin >> m >> n >> p;
    siz = n;
    h = m + n * n;
    i = m;
    int ns[n][n];
    while(true) {
        ns[y][x] = i;
        i++;
        if(i >= h) break;
        s++;
        if(pos == 1) {
            if(s == siz) {
                pos = 2;
                s = 0;
                siz--;
                y++;
            } else x++;
            continue;
        }
        if(pos == 2) {
            if(s == siz) {
                pos = 3;
                s = 0;
                x--;
            } else y++;
            continue;
        }
        if(pos == 3) {
            if(s == siz) {
                pos = 4;
                s = 0;
                siz--;
                y--;
            } else x--;
            continue;
        }
        if(pos == 4) {
            if(s == siz) {
                pos = 1;
                s = 0;
                x++;
            } else y--;
            continue;
        }
    }
    for(int i = 0; i < n; i++) sum += ns[p - 1][i];
    cout << sum;
    return 0;
}
