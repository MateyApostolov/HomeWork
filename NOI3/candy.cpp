#include <iostream>
using namespace std;

int main () {
    int n, br = 0, ngb = -1;
    cin >> n;
    int nc[n];
    for(int i = 0; i < n; i++) cin >> nc[i];
    for(int i1 = 0; i1 < n; i1++) {
        br = 0;
        for(int i2 = i1 + 1; i2 < n; i2++)
            if(nc[i1] >= nc[i2]) br++;
        if(br != 0) ngb = max(ngb, br + nc[i1]);
    }
    if(ngb == -1) {
        cout << n;
        return 0;
    }
    cout << ngb;

    return 0;
}
