#include <iostream>
using namespace std;

int main () {
    long long n, k, a, b, sr, br = 1;
    cin >> n >> k;
    b = n;
    a = 1;
    sr = (a + b) / 2;
    while(sr != k) {
        if(sr < k) a = sr + 1;
        else b = sr - 1;
        sr = (a + b) / 2;
        br++;
    }
    cout << br;

    return 0;
}
