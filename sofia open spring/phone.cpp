#include <iostream>
using namespace std;

int main () {
    int b, n, nk, mi, br = 0, r = 0, mk = 0;
    cin >> b >> n;
    for(int i = 0; i < n; i++) {
        cin >> nk >> mi;
        if(r == 0) b += mi - mk;
        else {
            b -= (mi - mk) * r;
        }
        if(b <= 0) break;
        if(b > 100) b = 100;
        if(nk == 0) r++;
        else {
            br++;
            r--;
        }
        mk = mi;
    }
    cout << br;

    return 0;
}
