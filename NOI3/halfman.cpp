#include <iostream>
using namespace std;

int main () {
    long long n, brs = 1;
    cin >> n;
    while(n > 0) {
        brs *= 2;
        brs++;
        n--;
    }
    cout << brs;
    return 0;
}
