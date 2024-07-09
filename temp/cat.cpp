#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, sum = 0, ngr = 0, l , ri;
    cin >> n;
    int r[n];
    for(int i = 0; i < n; i++) {
        cin >> r[i];
        sum += r[i];
        if(ngr < r[i]) {
            ngr = r[i];
            ri = i + 1;
        }
    }
    cout << sum - ngr << "\n";
    for(int i = ri ; i < n; i++) cout << i + 1 << " ";
    for(int i = 0; i < ri; i++) cout << i + 1 << " ";
    return 0;
}
