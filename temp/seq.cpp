#include <bits/stdc++.h>
using namespace std;

int main () {
    long long n;
    cin >> n;
    long long nc[n];
    nc[0] = 1;
    nc[1] = 1;
    vector <int> brc;
    brc.push_back(1);
    brc.push_back(1);
    for(int i = 2; i < n; i++) {
        long long sum = 0, sumc = 0;
        for(int x = 0; x < i; x++) sum += brc[x] * (i - x);
        nc[i] = sum;
        while(sum > 0) {
            sumc += sum % 10;
            sum /= 10;
        }
        brc.push_back(sumc);
    }
    cout << nc[n - 1];
    return 0;
}
