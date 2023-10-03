#include <iostream>
using namespace std;

int main () {
    int n, d, k;
    cin >> n >> d >> k;
    int sub = 1;
    int sum = 1;
    d = d % n;
    for (int i = 0; i < k; i++) {
         sub = sub + d;
         if (sub > n) {
            sub = sub - n;
         }
         sum += sub;
    }
    cout << sum;

    return 0;
}
