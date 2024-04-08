#include <iostream>
using namespace std;

int main () {
    int n, nc, pr, st = 0, p = 0, q = 0, m = 0;
    cin >> n;
    cin >> nc;
    for(int i = 1; i < n; i++) {
        pr = nc;
        cin >> nc;
        if(nc == pr) {
            cout << "0";
            return 0;
        }
        if(pr > nc && st == 0) {
            st++;
            p = i - 1;
        }
        if(pr < nc && st == 1) {
            st++;
            m = i - 1;
        }
        if(pr > nc && st == 2) {
            st++;
            q = i - 1;
        } else {
            if(st == 3 && pr < nc) {
                cout << 0;
                return 0;
            }
        }
    }
    if(q == 0) cout << "0";
    else cout << p << " " << m << " " << q;


    return 0;
}
