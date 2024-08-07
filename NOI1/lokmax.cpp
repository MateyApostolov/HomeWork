#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, minr = INT_MAX;
    cin >>  n;
    int nc[n];
    vector <int> lok;
    for(int i = 0; i < n; i++) cin >> nc[i];
    for(int i = 1; i < n - 1; i++) {
        if(nc[i] == 0) break;
        if(nc[i - 1] < nc[i] && nc[i + 1] < nc[i]) lok.push_back(i);
    }
    if(lok.size() < 2) {
        cout << 0;
        return 0;
    }
    for(int i = 0; i < lok.size() - 1; i++) minr = min(minr, lok[i + 1] - lok[i] - 1);
    cout << minr;
    return 0;
}
