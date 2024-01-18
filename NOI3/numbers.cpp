#include <iostream>
using namespace std;

int main () {
    long long n, k, nc, sum = 0;
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        cin >> nc;
        sum += nc;
    }
    cout << ((n + 1) * n / 2 - sum) / (k - 1);

    return 0;
}
