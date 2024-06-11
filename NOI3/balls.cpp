#include <iostream>
using namespace std;

int main () {
    long long n, r, l, cr, cl, brt = 0, brp = 0;
    cin >> n;
    long long nc[n];
    for(int i = 0; i < n; i++) cin >> nc[i];
    l = 0;
    r = n - 1;
    while(true) {
        cl = nc[l];
        cr = nc[r];
        while(l < r && nc[l] >= cl) l++;
        if(l == r) break;
        while(l <= r && nc[r] >= cr) r--;
        if(l > r) break;
        brt += r - l + 1;
        brp++;
    }
    cout << brt << " " << brp;
    return 0;
}
