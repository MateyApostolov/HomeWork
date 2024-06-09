#include <iostream>
using namespace std;

int main () {
    long long n, x, brt = 0, nmc;
    cin >> n >> x;
    long long nc[n];
    for(int i = 0; i < n; i++) {
        cin >> nc[i];
    }
    nmc = nc[0];
    for(int i = 0; i < n - 1; i++) {
        if(nmc + x < nc[i + 1]) {
            brt++;
            nmc = nc[i + 1];
        }
    }
    if(nmc + x >= nc[n - 1]) brt++;
    cout << brt;
    return 0;
}
