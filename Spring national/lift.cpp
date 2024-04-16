#include <iostream>
using namespace std;

int main () {
    int m, n, u, d, l, et, sum1 = 0, sum = 0, nblm = 1000000, nbln = 1000000;
    cin >> m >> n >> u >> d >> l;
    for(int i = 0; i < l; i++) {
        cin >> et;
        if(abs(et - m) <= nblm) {
            if(et > m) sum1 = (et - m) * u;
            if(m > et) sum1 = (m - et) * d;
            if(m - et == 0) sum1 = 0;
            nblm = abs(et - m);
        }
        if(abs(et - n) <= nbln) {
            if(et > n) sum = (et - n) * d;
            if(n > et) sum = (n - et) * u;
            if(n - et == 0) sum = 0;
            nbln = abs(et - n);
        }
    }
    cout << sum1 + sum;

    return 0;
}
