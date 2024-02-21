#include <iostream>
using namespace std;

int main () {
    long long n, w, r = 0, sumh = 0, nmbr = 5000000;
    cin >> n >> w;
    int nc[n];
    for(int i = 0; i < n; i++) cin >> nc[i];
    for(int l = 0; l < n; l++) {
        while(r < n && sumh <= w) {
            sumh += nc[r];
            r++;
        }
        if(sumh > w) nmbr = min(r - l, nmbr);
        sumh -= nc[l];
    }
    if(nmbr == 5000000) nmbr = 0;
    cout << nmbr;

    return 0;
}
