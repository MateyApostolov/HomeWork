#include <iostream>
using namespace std;

int main () {
    int n, nc;
    cin >> n;
    int ngts = 0, ngnts = 0;
    int ztc = 0, zntc = 0;
    for(int i = 0; i < n; i++) {
        cin >> nc;
        if (nc % 2 == 0) {
           ngts = nc;
           ztc++;
        } else {
          ngnts = nc;
          zntc++;
        }

    }
    cout << ((ngnts / 2) + 1) - zntc << " " << (ngts / 2) - ztc;

    return 0;
}
