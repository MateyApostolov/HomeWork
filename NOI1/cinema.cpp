#include <iostream>
using namespace std;

int main () {
    int n, m, nc;
    cin >> n >> m >> nc;
    if(nc % m == 0) {
        cout << nc / m << " ";
        if(nc % m == 0) cout << m;
    }
    else cout << (nc / m) + 1 << " " << nc % m;

    return 0;
}
