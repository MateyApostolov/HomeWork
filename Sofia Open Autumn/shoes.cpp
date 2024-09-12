#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, l1, r1, br = 0;
    char l2, r2;
    cin >> n;
    map<pair<int, char>, int> ob;
    for(int i = 0; i < n; i++) {
        cin >> l1 >> l2 >> r1 >> r2;
        ob[{l1, l2}]--;
        ob[{r1, r2}]++;
    }
    for(auto i : ob) {
        br += abs(i.second);
    }
    cout << br;
    return 0;
}
