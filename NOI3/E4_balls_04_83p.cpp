#include <iostream>
using namespace std;

int main () {
    int n, brs = 0;
    cin >> n;
    ///cout << n;
    char nc[n];
    for(int i = 0; i < n; i++) {
        cin >> nc[i];
        ///cout << nc[i];
    }
    for(int i = n - 1; i >= 0; i--) {
        if(nc[i] == '0' && brs % 2 == 1) {
            nc[i] = 'b';
            brs++;
            continue;
        }
        if(nc[i] == '0' && brs % 2 == 0) {
            nc[i] = 'r';
            continue;
        }
        if(nc[i] == '1' && brs % 2 == 0) {
            nc[i] = 'b';
            brs++;
            continue;
        }
        if(nc[i] == '1' && brs % 2 == 1) {
            nc[i] = 'r';
            continue;
        }
    }
    for(int i = 0; i < n; i++) {
        cout << nc[i];
    }
    return 0;
}
