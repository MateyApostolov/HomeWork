#include <bits/stdc++.h>
using namespace std;

const int maxk = 3001, maxn = 2001;
long long k[maxk], izt[maxn];

int main () {
    long long n, m, kas, sum = 0;
    cin >> n;
    pair<int, int> wt[n];
    for(int i = 0; i < n; i++) {
        cin >> wt[i].first;
        wt[i].second = i + 1;
    }
    cin >> m;
    for(int i = 0; i < m; i++) {
        cin >> kas;
        k[kas]++;
    }
    sort(wt, wt + n);
    for(int i = 0; i < n; i++) {
        for(long long x = 1; x * wt[i].first < maxk; x++) {
            if(k[x * wt[i].first] > 0) {
                sum += x * x * x * k[x * wt[i].first];
                m -= k[x * wt[i].first];
                izt[wt[i].second] += x * x * x * k[x * wt[i].first];
                k[x * wt[i].first] = 0;
            }
        }
    }
    cout << sum << " " << m << "\n";
    for(int i = 1; i <= n; i++) cout << izt[i] << " ";

    return 0;
}
