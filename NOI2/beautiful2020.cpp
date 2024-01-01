#include <iostream>
using namespace std;

int main () {
    unsigned long long n, brc = 0, h, brkr = 0, c1 = 0;
    cin >> n;
    h = n;
    while(h > 0) {
        brc++;
        c1 = c1 * 10 + 1;
        h /= 10;
    }
    brkr += (brc - 1) * 9;
    for(int i = 1; i <= 9; i++)
        if(c1 * i <= n) brkr++;
    cout << brkr;
    return 0;
}
