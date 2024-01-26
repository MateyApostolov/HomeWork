#include <bits/stdc++.h>
using namespace std;

int sumd (int num) {
    if(num == 1) return 1;
    int sum = 0;
    for(int i = 1; i <= num / 2; i++)
        if(num % i == 0) sum += i;
    return sum;
}

int main () {
    int a, b, nmc, ngc;
    double nmtr = 10000, ngtr = 0;
    cin >> a >> b;
    for(int i = a; i <= b; i++) {
        double tr = 1.0 * sumd(i) / i;
        if(tr > ngtr) {
            ngc = i;
            ngtr = tr;
        }
        if(tr < nmtr) {
            nmc = i;
            nmtr = tr;
        }
    }
    cout << nmc << " " << ngc;
    return 0;
}
