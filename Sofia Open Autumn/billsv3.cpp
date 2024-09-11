#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int m, n, help;
    cin >> m >> n;
    map <int, int> mp;
    for(int i = 0; i < m; i++) {
        cin >> help;
        mp[help]++;
    }
    for(int i = 0; i < n; i++) {
        cin >> help;
        mp[help]--;
    }
    for(auto x : mp) {
        for(int i = x.second; i > 0; i--) {
            cout << x.first << ' ';
        }
    }
    return 0;
}
