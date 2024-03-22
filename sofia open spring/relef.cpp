#include <iostream>
using namespace std;


int main () {
    int n, br = 0, r = 0, l = 0;
    cin >> n;
    int h[n];
    for(int i = 0; i < n; i++) cin >> h[i];
    while(r < n - 1) {
        r++;
        if((h[r] > h[r - 1] && h[r] > h[r + 1]) || (h[r] < h[r - 1] && h[r] < h[r + 1])) {
            br += (r - l) * (r - l + 1);
            l = r;
        }
    }
    br += (r - l) * (r - l + 1);
    cout << br;

    return 0;
}
