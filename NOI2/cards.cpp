#include <iostream>
using namespace std;

int main () {
    int n, c1, c2, prc1 = 0, prc2 = 0, br = 0, ngbr = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> c1 >> c2;
        if(c1 < c2) swap(c1, c2);
        if(c1 <= prc1 && c2 <= prc2) br++;
        else {
            ngbr = max(ngbr, br);
            br = 1;
        }
        prc1 = c1;
        prc2 = c2;
    }
    ngbr = max(ngbr, br);
    cout << ngbr;

    return 0;
}
