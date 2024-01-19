#include <iostream>
using namespace std;

int main () {
    int n, pmc = 2, r = 2, c = 2;
    cin >> n;
    while(pmc < n) {
        pmc += r;
        r = c / 2 + 1;
        c++;
    }
    if(n == 14) c++;
    cout << --c;

    return 0;
}
