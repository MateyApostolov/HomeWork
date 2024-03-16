#include <iostream>
using namespace std;

int main () {
    long long n, m, r, i, brd = 0;
    cin >> n >> m;
    r = m - n;
    for(i = 1; i * i < r; i++) {
        if(r % i == 0) {
            brd++;
            if(r / i <= n) brd++;
        }
    }
    if(r % (i * i) == 0) brd++;
    cout << brd;

    return 0;
}
