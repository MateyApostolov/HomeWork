#include <bits/stdc++.h>
using namespace std;

int main () {
    long long n, m, br = 0, koren;
    cin >> n >> m;
    koren = sqrt(n);
    for(long long i = koren; i * (i + 1) <= m; i++)
        if(i * (i + 1) >= n && i != 1 && i + 1 != m) br++;
    cout << br;

    return 0;
}
