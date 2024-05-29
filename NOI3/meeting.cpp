#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, tt, ngwr = 0, m;
    string s, izs = "";
    cin >> n;
    vector <int> hi;
    for(int i = 0; i < n; i++) {
        cin >> s >> tt;
        m = ((s[0] - '0') * 10 + (s[1] - '0')) * 60 + (s[3] - '0') * 10 + (s[4] - '0') + tt;
        if(((s[3] - '0') * 10 + (s[4] - '0') + tt) % 60 < 20) m += 20 - (((s[3] - '0') * 10 + (s[4] - '0') + tt) % 60);
        else {
            if((((s[3] - '0') * 10 + (s[4] - '0') + tt) % 60) < 40) m += 40 - (((s[3] - '0') * 10 + (s[4] - '0') + tt) % 60);
            else m += 60 - (((s[3] - '0') * 10 + (s[4] - '0') + tt) % 60);
        }
        m += 20;
        s[0] = m / 60 / 10 + '0';
        s[1] = m / 60 % 10 + '0';
        s[3] = m % 60 / 10 + '0';
        s[4] = m % 60 % 10 + '0';
        if(m > ngwr) {
            ngwr = m;
            izs = s;
            hi.clear();
        }
        if(m == ngwr) hi.push_back(i + 1);
        m = 0;
    }
    sort(hi.begin(), hi.end());
    cout << izs << "\n";
    for(int i = 0; i < hi.size(); i++) {
        if((i + 1) % 10 == 0) cout << hi[i] << "\n";
        else if(i == hi.size() - 1) cout << hi[i];
        else cout << hi[i] << ",";
    }
    return 0;
}
