#include <bits/stdc++.h>
using namespace std;

long long minec(long long n) {
    long long h, sum;
    while(n / 10 != 0) {
        h = n;
        sum = 0;
        while(h > 0) {
            sum += h % 10;
            h /= 10;
        }
        n = sum;
    }
    return n;
}

int main () {
    long long n, brr = 1, b = 0, pr, ngbr = 1, nb = 0;
    cin >> n;
    long long nc[n];
    cin >> nc[0];
    nc[0] = minec(nc[0]);
    pr = nc[0];
    ///cout << nc[0] << "\n";
    for(int i = 1; i < n; i++) {
        cin >> nc[i];
        ///cout << nc[i] << " ";
        nc[i] = minec(nc[i]);
        if(nc[i] >= pr) {
            brr++;
        } else {
            if(brr > ngbr) {
                ngbr = brr;
                nb = b;
            }
            brr = 1;
            b = i;
        }
        pr = nc[i];
    }
    if(brr > ngbr) {
        ngbr = brr;
        nb = b;
    }
    cout << ngbr << "\n";
    for(int i = nb; i < nb + ngbr; i++) {
        cout << nc[i] << " ";
    }

    return 0;
}

