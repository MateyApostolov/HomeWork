#include <iostream>
using namespace std;

int main () {
    long long n, m, br = 0;
    cin >> n >> m;
    if(n > m) swap(n, m);
    while(n != 0) {
        br += m / n;
        m %= n;
        swap(n, m);
    }
    cout << br;
    return 0;
}
