#include <iostream>
using namespace std;

const int maxl = 100000;
bool lk[maxl];

int main () {
    int a, b, l, maxx, maxy, br = 0;
    cin >> a >> b >> l;
    maxx = l / a;
    maxy = l / b;
    for(int i1 = 1; i1 <= maxx; i1++) {
        for(int i2 = 1; i2 <= maxy; i2++) {
            int h = i1 * a + i2 * b;
            if(h > l) break;
            lk[h] = true;
        }
    }
    for(int i = 1; i < maxl; i++) if(lk[i]) br++;
    cout << l - br;
    return 0;
}
