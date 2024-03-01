#include <iostream>
using namespace std;

const int maxm = 5001;
int help[maxm];

int main () {
    int n, br = 0, ngb = -1;
    cin >> n;
    int nc[n];
    for(int i = 0; i < n; i++) cin >> nc[i];
    for(int i1 = n - 1; i1 >= 0; i1--) {
        br = 0;
        for(int i2 = nc[i1]; i2 > 0; i2--)
            br += help[i2];
        help[nc[i1]]++;
        if(br != 0) ngb = max(ngb, br + nc[i1]);
    }
    if(ngb == -1) {
        cout << n;
        return 0;
    }
    cout << ngb;

    return 0;
}
