#include <iostream>
using namespace std;

int main () {
    int t, br;
    cin >> t;
    long long m, n, k, h1, h2;
    for(int i = 0;  i < t; i++) {
        br = 0;
        cin >> m >> n >> k;
        h1 = m + n;
        h2 = n - m + 1;
        while(k % 2 == 0) {
            k /= 2;
            br++;
        }
        while(h1 % 2 == 0) {
            h1 /= 2;
            br++;
        }
        while(h2 % 2 == 0) {
            h2 /= 2;
            br++;
        }
        if(br > 1) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
