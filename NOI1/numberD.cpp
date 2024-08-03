#include <bits/stdc++.h>
using namespace std;

bool d2 (long long num) {
    long long koren = sqrt(num);
    if(koren * (koren + 1) == num) return true;
    return false;
}

int main () {
    long long n, m, br = 0;
    cin >> n >> m;
    for(long long i = n; i <= m; i++) if(d2(i)) br++;
    cout << br;

    return 0;
}
