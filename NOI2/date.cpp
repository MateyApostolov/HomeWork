#include <iostream>
using namespace std;

int main () {
    int k, d, m, ds = 0;
    cin >> k >> d >> m;
    int ms[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    ds += ms[m] - d + 1;
    while(m + 1 <= 12) {
        m++;
        ds += ms[m];
    }
    ds %= 7;
    k -= ds;
    if(k <= 0) k += 7;
    cout << k;
    return 0;
}
