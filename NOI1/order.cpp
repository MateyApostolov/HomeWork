#include <iostream>
using namespace std;

int main () {
    int n, nc, nm = 1000, ng = 0;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> nc;
        if (nc == i) {
            continue;
        }
        if (nc < nm) {
            nm = nc;
        }
        if (nc > ng) {
            ng = nc;
        }
    }
    if (nm == 1000) {
        nm = 0;
    }
    cout << nm << " " << ng;

    return 0;
}
