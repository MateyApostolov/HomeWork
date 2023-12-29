#include <iostream>
using namespace std;

int main () {
    int m, k, c, sum = 0, br = 0, nbc, r;
    cin >> m >> k;
    cin >> c;
    br++;
    if(c % 2 == 0) sum += c;
    nbc = 1;
    r = abs(m - c);
    while(sum <= k && br <= 200) {
        cin >> c;
        br++;
        if(c % 2 == 0) sum += c;
        if(abs(m - c) <= r) {
            r = abs(m - c);
            nbc = br;
        }
    }
    cout << nbc << " " << sum;

    return 0;
}
