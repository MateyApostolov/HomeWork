#include <iostream>
using namespace std;

bool pal(long long n) {
    long long h = 0, h1 = n;
    while(n > 0) {
        h = h * 10 + n % 10;
        n /= 10;
    }
    if(h == h1) return true;
    else return false;
}


int main () {
    long long t, a, b, c, brpal, nmr, ngr, r, prpal;
    cin >> t;
    for(int i1 = 0; i1 < t; i1++) {
        cin >> a >> b >> c;
        prpal = 0;
        nmr = 50000000;
        ngr = 0;
        brpal = 0;
        for(int i2 = a; i2 <= b; i2 += c) {
            if(pal(i2)) {
                brpal++;
                if(prpal != 0) {
                    r = i2 - prpal - 1;
                    if(r < nmr) nmr = r;
                    if(r > ngr) ngr = r;
                }
                prpal = i2;
            }
        }
        if(brpal <= 1) cout << brpal << endl;
        else cout << brpal << " " << nmr << " " << ngr << endl;
    }

    return 0;
}
