#include <iostream>
using namespace std;

int main () {
    int n, sum1 = 0, sum = 0, ngmul = 1;
    cin >> n;
    int nc[n];
    for(int i = 0; i < n; i++) {
        cin >> nc[i];
        sum += nc[i];
    }
    for(int k = 0; k < n; k++) {
        sum1 += nc[k] * nc[k];
        sum -= nc[k];
        ngmul = max(sum * sum1, ngmul);
    }
    cout << ngmul;

    return 0;
}
