#include <iostream>
using namespace std;

bool pl (int c) {
    int plc = 0, h = c;
    while(c > 0) {
        plc = plc * 10 + c % 10;
        c /= 10;
    }
    if(plc == h) return true;
    return false;
}

int main () {
    int n, ngpl = 0, c1, c2, p;
    cin >> n;
    for(int i1 = 0; i1 < n; i1++) {
        for(int i2 = 0; i2 < n; i2++) {
            p = i1 * i2;
            if(ngpl < p && pl(p)) {
                ngpl = p;
                c1 = i1;
                c2 = i2;
            }
        }
    }
    cout << min(c1, c2) << " " << max(c1, c2) << endl << ngpl;

    return 0;
}
