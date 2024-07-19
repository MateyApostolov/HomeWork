#include <iostream>
using namespace std;

int main () {
    ///bool bask = false;
    long long n, p, k, br = 0, bs = 0, ost = 0, d, c, v = 0;
    cin >> n >> p >> k;
    while(bs < p) {
        d = (n + ost) / k;
        ost = (n + ost) % k;
        bs += d;
        br++;
        n -= d;
        if(ost == k - 1) {
            cout << br + 1 << "\nBASKETBALL";
            return 0;
        }
        if(k >= n) break;
    }
    if(bs >= p) {
        cout << br << "\nVOLLEYBALL";
        return 0;
    }
    while(bs < p) {
        br += (k - ost) / n;
        if((k - ost) % n == 1) {
            cout << br + 1 << "\nBASKETBALL";
            return 0;
        }
        if((k - ost) % n != 0) {
            br++;
            ost = n - (k - ost) % n;
        } else ost = 0;
        n--;
        bs++;
    }
    cout << br << "\nVOLLEYBALL";
    return 0;
}
