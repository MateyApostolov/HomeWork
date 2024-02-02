#include <bits/stdc++.h>
using namespace std;

int main () {
    long long n, sum = 1, i;
    cin >> n;
    for(i = 2; i * i < n; i++)
        if(n % i == 0) sum += i + n / i;
    if(i * i == n) sum += i;
    cout << sum << "\n";
    if(sum > n) cout << "YES";
    else cout << "NO";
    return 0;
}
