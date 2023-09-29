#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int a1 = 3, a2 = 2;
    int br = 0;
    while (n % a1 != 0) {
        n -= a2;
        br++;
    }
    cout << br << " " << n / a1;

    return 0;
}
