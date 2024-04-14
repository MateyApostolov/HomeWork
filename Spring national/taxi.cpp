#include <bits/stdc++.h>
using namespace std;

int main () {
    long long n, sum = 0;
    cin >> n;
    long long ras[n], c[n];
    for(int i = 0; i < n; i++) cin >> ras[i];
    for(int i = 0; i < n; i++) cin >> c[i];
    int k;
    cin >> k;
    int num;
    for(int i = 0; i < k; i++) {
        cin >> num;
        if(num != 0) ras[num - 1] = 0;
    }
    sort(ras, ras + n);
    sort(c, c + n);
    for(int i = k; i < n; i++) sum += ras[i] * c[n - i - 1];
    cout << sum;
    return 0;
}
