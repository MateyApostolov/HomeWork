#include <iostream>
using namespace std;

int main () {
    long long n, sum = 0, h = 0, pgc = 0;
    cin >> n;
    while(sum <= n) {
        h++;
        pgc += h;
        sum += h * h;
    }
    sum -= h * h;
    pgc -= h;
    ///cout << sum << " " << h << " " << pgc << "\n";
    if((n - sum) % h != 0) cout << pgc + (n - sum) / h + 1;
    else cout << pgc + (n - sum) / h;
    return 0;
}
