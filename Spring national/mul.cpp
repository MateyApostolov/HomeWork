#include <iostream>
using namespace std;

int c[10];

int main () {
    int n, m, h, ngc = 0, hi;
    cin >> n >> m;
    for(int i1 = 1; i1 <= n; i1++) {
        for(int i2 = 1; i2 <= m; i2++) {
            h = i1 * i2;
            while(h != 0) {
                c[h % 10]++;
                h /= 10;
            }
        }
    }
    for(int i = 0; i < 10; i++) {
        if(c[i] > ngc) {
            ngc = c[i];
            hi = i;
        }
    }
    cout << hi << " " << ngc;
    return 0;
}
