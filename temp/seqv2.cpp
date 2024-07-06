#include <bits/stdc++.h>
using namespace std;

int main () {
    long long n, s = 2;
    cin >> n;
    long long nc[n];
    nc[0] = 1;
    nc[1] = 1;
    vector <int> brc;
    brc.push_back(1);
    brc.push_back(1);
    for(int i = 2; i < n; i++) {
        long long sum = nc[i - 1] + s, sumc = 0;
        nc[i] = sum;
        while(sum > 0) {
            sumc += sum % 10;
            sum /= 10;
        }
        s += sumc;
        brc.push_back(sumc);
    }
    cout << nc[n - 1];
    return 0;
}
