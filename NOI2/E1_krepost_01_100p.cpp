#include <iostream>
using namespace std;

int main () {
    long long n, m;
    for(int i = 0; i < 2; i++) {
        cin >> n >> m;
        if(n % m < m / 2 + m % 2) {
            cout << n / m * 2 << "\n";
        } else {
            cout << n / m * 2 + 1 << "\n";
        }
    }

    return 0;
}
