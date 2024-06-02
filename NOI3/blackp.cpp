#include <iostream>
using namespace std;

int main () {
    int n, r, p, c;
    cin >> n >> r;
    int nc[n];
    for(int i = 0; i < n; i++) nc[i] =  n - i;
    for(int i = 0; i < r; i++) {
        cin >> p >> c;
        int h[n];
        for(int x = 0; x < c; x++) h[x] = nc[p - 1 + x];
        for(int x = c; x < c + p - 1; x++) h[x] = nc[x - c];
        for(int x = c + p - 1; x < n; x++) h[x] = nc[x];
        for(int i = 0; i < n; i++) nc[i] = h[i];
    }
    cout << nc[0];
    return 0;
}
