#include <iostream>
using namespace std;

int main () {
    int n, l = 1, lmax = 1, rmax = 2, i;
    cin >> n;
    int nc[n + 1];
    bool iz = false;
    for(i = 1; i <= n; i++) cin >> nc[i];
    for(i = 2; i <= n; i++) {
        if(!iz && nc[i] >= nc[i - 1] - 1) iz = true;
        else if(iz && !(nc[i] > nc[i - 1] + 1)) {
            iz = false;
            if(rmax - lmax - 1 < i - l - 2) {
                lmax = l;
                rmax = i - 1;
            }
            l = i - 1;
        }
        ///cout << l << " " << i << " " << iz << " " << lmax << " " << rmax << "\n";
    }
    i--;
    if(iz && rmax - lmax - 1 < i - l - 1) {
        lmax = l;
        rmax = i;
    }
    cout << rmax - lmax - 1 << " " << lmax << " " << rmax;
    return 0;
}
