#include <iostream>
using namespace std;

int main () {
    int n, m, h, br = 0;
    cin >> n >> m;
    h = n;
    while(n <= m) {
        while(n > 0) {
            h += n % 10;
            n /= 10;
        }
        br++;
        n = h;
    }
    cout << br;

    return 0;
}
