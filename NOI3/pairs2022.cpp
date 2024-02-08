#include <iostream>
using namespace std;

const int maxnp = 50000;
int np[maxnp];
int main () {
    int n, h = 0, hi = 0;
    cin >> n;
    int nc[n];
    for(int i = 0; i < n; i++) {
        cin >> nc[i];
        for(int x = i - 1; x >= 0; x--) np[nc[i] + nc[x]]++;
    }
    for(int i = 0; i < maxnp; i++)
        if(h < np[i]) {
            h = np[i];
            hi = i;
        }
    cout << hi;

    return 0;
}
