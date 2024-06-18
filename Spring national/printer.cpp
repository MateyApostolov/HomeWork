#include <iostream>
using namespace std;

int main () {
    int n, m, sum = 0;
    cin >> n >> m;
    pair <char, pair<int, int>> s[n];
    for(int i = 0; i < n; i++) cin >> s[i].first >> s[i].second.first >> s[i].second.second;
    string t;
    cin >> t;
    for(int i1 = 0; i1 < t.size(); i1++) {
        for(int i2 = 0; i2 < n; i2++) {
            if(t[i1] == s[i2].first) sum += s[i2].second.first;
            if(t[i1] + ('a' - 'A') == s[i2].first) sum += s[i2].second.second;
        }
    }
    cout << sum;
    return 0;
}
