#include <iostream>
using namespace std;

int main () {
    int n, nc, b = 1, ngbr = 0, c1 = 0, n1 = 0, c2 = 0, n2 = 0, ngb = 1;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> nc;
        if(nc == c1) n1 = i;
        else if(nc == c2) n2 = i;
        else {
            if(n1 > n2) {
                b = n2 + 1;
                c2 = nc;
                n2 = i;
            } else {
                b = n1 + 1;
                c1 = nc;
                n1 = i;
            }
        }
        if(ngbr < i - b + 1) {
            ngbr = i - b + 1;
            ngb = b;
        }
        ///cout << i << " " << nc << " " << ngbr << " " << ngb << " " << b << "\n";
    }
    cout << ngb << " " << ngbr;

    return 0;
}
