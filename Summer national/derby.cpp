#include <iostream>
using namespace std;

int main () {
    int n, br1 = 0, br2 = 0, xy, r = 1, brr = 1, ngbr = 0, pr = 0, rn = 0, rk = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> xy;
        if(xy == 1) br1++;
        else br2++;
        if(br1 == br2) r++;
        if(pr == xy) {
            rk = br1 - br2;
            brr++;
        }
        else {
            if(rn * rk < 0) ngbr = max(ngbr, brr);
            brr = 1;
            rn = br1 - br2;
        }
        pr = xy;
    }
    if(rn * rk < 0) ngbr = max(ngbr, brr);
    cout << br1 << " " << br2 << "\n" << r << "\n" << ngbr;
    return 0;
}
