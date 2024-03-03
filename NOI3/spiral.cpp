#include <iostream>
using namespace std;

int main () {
    long long n, m, r = 0;
    cin >> n >> m;
    if(m == 1 && n != 1) {
        cout << 1;
        return 0;
    }
    if(n > m) {
        r = 1;
        n--;
        swap(n, m);
    }
    r += (n - 1) * 2;
    cout << r;

    return 0;
}
