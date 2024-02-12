#include <iostream>
using namespace std;

int main () {
    int n, nc, pr, br = 1, ngbr = 0;
    cin >> n;
    cin >> nc;
    pr = nc;
    bool t = false;
    if(nc == 1) {
        t = true;
    }
    for(int i = 0; i < n - 1; i++) {
        cin >> nc;
        if(t == true && nc == pr + 1) {
            br++;
        } else {
            if(ngbr < br) {
                ngbr = br;
            }
            br = 1;
            if(t == false && nc == 1) {
                t = true;
            }
        }
        pr = nc;
    }
    if(ngbr == 0 || ngbr == 1) {
        cout << 0;
    } else {
        cout << ngbr;
    }

    return 0;
}
