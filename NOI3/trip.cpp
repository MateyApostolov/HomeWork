#include <iostream>
using namespace std;

int main () {
    long long n, m, sum = 0, nmsum = 100000000000, hi = 0;
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
    cout << hi;

    return 0;
}
