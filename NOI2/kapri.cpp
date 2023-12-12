#include <iostream>
using namespace std;

int main () {
    int n, k, h, br = 0, l = 1;
    long long kk;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> k;
        kk = 1L * k * k;
        h = k;
        l = 1;
        while(h > 0) {
            h /= 10;
            l *= 10;
        }
        if(kk / l + kk % l == k) br++;
    }
    cout << br;

    return 0;
}
