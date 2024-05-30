#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, m;
    cin >> n >> m;
    double nc[n], mc[m];
    vector <double> s;
    for(int i = 0; i < n; i++) cin >> nc[i];
    for(int i = 0; i < m; i++) cin >> mc[i];
    for(int i1 = 0; i1 < n; i1++)
        for(int i2 = 0; i2 < m; i2++)
            if(nc[i1] == mc[i2]) s.push_back(nc[i1]);
    sort(s.begin(), s.end());
    for(int i = 0; i < s.size(); i++) cout << s[i] << " ";

    return 0;
}
