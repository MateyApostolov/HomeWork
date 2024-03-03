#include <iostream>
using namespace std;

int main () {
    long long n, m, sum = 0, nmsum = 10000000000, hi;
    cin >> n >> m;
    int nc[n];
    for(int i = 0; i < n; i++) cin >> nc[i];
    for(int i = 0; i < n; i++) {
        sum += nc[i];
        if(i >= m) {
            if(nmsum >= sum) {
                nmsum = sum;
                hi = i - m + 1;
            }
            sum -= nc[i - m + 1];
        }
    }
    cout << hi - 1;

    return 0;
}
