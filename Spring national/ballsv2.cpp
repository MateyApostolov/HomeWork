#include <iostream>
using namespace std;

int main () {
    int n, l = 1, lmax = 1, i, br = 0, maxbr = 0;
    cin >> n;
    int nc[n + 1];
    bool iz = false;
    for(i = 1; i <= n; i++) cin >> nc[i];
    i = 1;
    while(i < n) {
        l = i;
        br = 0;
        while (i < n - 1 && nc[i] - nc[i + 1] > 1) {
            br++;
            i++;
        }
        i++;
        while (i < n && nc[i + 1] - nc[i] > 1) {
            br++;
            i++;
        }
        if (br > maxbr) {
            maxbr = br;
            lmax = l;
        }
    }
    cout << maxbr << " " << lmax << " " << maxbr + lmax + 1;
    return 0;
}
