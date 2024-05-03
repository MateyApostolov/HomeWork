#include <bits/stdc++.h>
using namespace std;

int main () {
    long long n, sum1 = 0, sum = 0;
    cin >> n;
    int a[n], b[n];
    for(int i = 0 ;i < n; i++) {
        cin >> a[i];
        sum1 += a[i];
    }
    for(int i = 0 ;i < n; i++) {
        cin >> b[i];
    }
    for(int i = 0; i < n; i++) {
        sum += sum1 + b[i];
    }
    cout << sum;

    return 0;
}
