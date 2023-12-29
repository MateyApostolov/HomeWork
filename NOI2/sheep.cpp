#include <iostream>
using namespace std;

int main () {
    int n, l, c1 = -1, c2 = -1, c3 = -1, o = 0;
    cin >> n >> l;
    if(l == 1) cin >> c1;
    if(l == 2) cin >> c1 >> c2;
    if(l == 3) cin >> c1 >> c2 >> c3;
    while(o <= n) {
        int h = o;
        while(h > 0) {
            int d = h % 10;
            if(d == c1 || d == c2 || d == c3) {
                n++;
                break;
            }
            h /= 10;
        }
        o++;
    }
    cout << n;

    return 0;
}
