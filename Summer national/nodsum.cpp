#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            cout << n / i;
            return 0;
        }
    }
    cout << 1;

    return 0;
}
