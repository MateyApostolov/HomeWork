#include <iostream>
using namespace std;

int main () {
    int n, l, d, r, g, sek = 0, pr = 0;
    cin >> n >> l;
    for(int i = 0; i < n; i++) {
        cin >> d >> r >> g;
        sek += d - pr;
        if(sek % (r + g) < r) sek += r - sek % (r + g);
        pr = d;
    }
    sek += l - pr;
    cout << sek;

    return 0;
}
