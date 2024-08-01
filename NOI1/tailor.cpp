#include <iostream>
using namespace std;

int main () {
    unsigned long long k, n, sum = 0;
    cin >> k >> n;
    for(int i = 0; i < n; i++) {
        sum += k;
        k *= 2;
    }
    cout << sum / 100 << " " << sum % 100;
    return 0;
}
