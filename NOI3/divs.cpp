#include <bits/stdc++.h>
using namespace std;

const int maxn = 40001;
int brd[maxn];

int main () {
    int n, k, brdi, br = 0, step;
    cin >> n >> k;
    for(int i = 1; i <= n; i++) {
        for(int i1 = 1; i1 < sqrt(i); i1++)
            if(i % i1 == 0) brd[i]++;
        brd[i] *= 2;
        if(sqrt(i) == ceil(sqrt(i))) brd[i]++;
    }

    for(int i = 1; i < n; i++) {
        brdi = brd[i] * k;
        if(brdi < i) continue;
        step = brdi / __gcd(i, brdi);
        for(int j = step; j <= n; j += step) {
            if(j < i) continue;
            if(brdi * brd[j] == i * j) br++;
        }
    }
    cout << br;

    return 0;
}
