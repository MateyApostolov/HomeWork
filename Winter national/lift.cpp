#include <iostream>
using namespace std;

int main () {
    int su, sd;
    cin >> su >> sd;
    int n;
    cin >> n;
    int nc, pr = 1, wrs = 0, ngs = 0, h;
    for(int i = 0; i < n; i++) {
        cin >> nc;
        if(nc < pr) {
            wrs += (pr - nc) * sd;
            h = (pr - nc) * sd;
            if(ngs < h) ngs = h;
            h = 0;
        }
        if(nc > pr) {
            wrs += (nc - pr) * su;
            h = (nc - pr) * su;
            if(ngs < h) ngs = h;
            h = 0;
        }
        pr = nc;
    }
    cout << wrs << " " << ngs;

    return 0;
}
