#include <iostream>
using namespace std;

int main () {
    int n, m, w, l, t, r, maxk = 0, nmr = 101, br = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> w >> l;
        if(maxk < w) maxk = w;
        if(nmr > l) nmr = l;
    }
    cin >> m;
    for(int i = 0; i < m; i++) {
        cin >> t >> r;
        if(maxk <= t && nmr > r) br++;
    }
    cout << br;


    return 0;
}
