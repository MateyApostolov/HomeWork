#include <iostream>
using namespace std;

int main () {
    long long n, d, sum = 0, br = 0;
    cin >> n >> d;
    int nc[n];
    for(int i = 0; i < n; i++) cin >> nc[i];
    for(long i = 0; i < n; i++) {
        for(long long du = 0; du < n; du++) {
            sum += nc[(i + du) % n];
            if(sum % d == 0) br = max (du + 1, br);
        }
        sum = 0;
    }
    cout << br;

    return 0;
}
