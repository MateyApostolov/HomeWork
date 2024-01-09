#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, k;
    cin >> n >> k;
    vector<long long> s;
    for(int i = k; i < n + k; i++) s.push_back(i);
    for(int i = 0; i < n - 1; i++) {
        vector<long long> h;
        for(int j = 0; j < s.size() - 1; j++) h.push_back(s[j] +s[j + 1]);
        s = h;
    }
    cout << s[0];

    return 0;
}
