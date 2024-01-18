#include <iostream>
using namespace std;

bool b[1000001];

int main () {
    long long n, k, nc, B;
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        cin >> nc;
        if (b[nc]) B = nc;
        b[nc] = true;
    }
    cout << B;

    return 0;
}
