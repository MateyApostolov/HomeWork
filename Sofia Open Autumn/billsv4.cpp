#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int m, n, help;
    cin >> m >> n;
    priority_queue <int> s, ps;
    for(int i = 0; i < m; i++) {
        cin >> help;
        s.push(-1 * help);
    }
    for(int i = 0; i < n; i++) {
        cin >> help;
        ps.push(-1 * help);
    }
    while(!ps.empty()) {
        if(ps.top() == s.top()) {
            ps.pop();
            s.pop();
        } else {
            cout << abs(s.top()) << ' ';
            s.pop();
        }
    }
    while(!s.empty()) {
        cout << abs(s.top()) << ' ';
        s.pop();
    }
    return 0;
}
