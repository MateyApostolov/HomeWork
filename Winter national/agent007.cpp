#include <iostream>
using namespace std;

int main () {
    int l, n;
    cin >> l >> n;
    int nw, ngw = 0, d = 0, tr = 1;
    bool t = true;
    for(int i = 1; i <= n; i++) {
        cin >> nw;
        if(nw > ngw) {
            if(l <= d) {
                t = false;
                cout << tr << endl;
            }
            ngw = nw;
            tr = i;
            d = 0;
        } else if(nw == ngw){
            if(l <= d) {
                t = false;
                cout << tr << endl;
            }
            d = 0;
        } else {
            d++;
        }
    }
    if(l <= d) {
        t = false;
        cout << tr << endl;
    }
    if(t) cout << "NO";

    return 0;
}
