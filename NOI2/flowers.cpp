#include <iostream>
using namespace std;

int main () {
    long long n, nc, q, sum = 0, ngc = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> nc;
        sum += nc;
        ngc = max(ngc, nc);
    }
    cin >> q;
    cout << ((ngc * n) - sum) * q;

    return 0;
}
