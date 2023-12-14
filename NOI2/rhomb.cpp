#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    for(int r = 1; r <= n; r++) {
        for(int k = 1; k <= n - r; k++) cout << " ";
        for(int c = r; c > 0; c--) cout << c;
        for(int c = 2; c <= r; c++) cout << c;
        cout << endl;
    }
    for(int r = 1; r < n; r++) {
        for(int k = 1; k <= r; k++) cout << " ";
        for(int c = n - r; c > 0; c--) cout << c;
        for(int c = 2; c <= n - r; c++) cout << c;
        cout << endl;
    }

    return 0;
}
