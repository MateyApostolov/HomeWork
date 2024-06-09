#include <bits/stdc++.h>
using namespace std;

int main () {
    long long n, x, brt = 0, nmc, pr;
    cin >> n >> x;
    long long nc;
    cin >> nc;
    nmc = nc;
    pr = nc;
    for(int i = 1; i < n; i++) {
        cin >> nc;
        if(nmc + x < nc) {
            brt++;
            nmc = nc;
        }
        pr = nc;
    }
    if(pr + x >= nc) brt++;
    cout << brt;
    return 0;
}

