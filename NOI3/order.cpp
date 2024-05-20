#include <bits/stdc++.h>
using namespace std;

const int maxp = 20;
vector <pair <int, string>> sb, st, so;

int main () {
    int n;
    cin >> n;
    string s;
    for(int i = 0; i < n; i++) {
        cin >> s;
        if(s[0] == 'b') sb.push_back({((s[1] - '0') * 10 + (s[2] - '0')) * 60 +  (s[3] - '0') * 10 + (s[4] - '0'), s});
        if(s[0] == 't') st.push_back(make_pair(((s[1] - '0') * 10 + (s[2] - '0')) * 60 +  (s[3] - '0') * 10 + (s[4] - '0'), s));
        if(s[0] == 'o') so.push_back(std::make_pair(((s[1] - '0') * 10 + (s[2] - '0')) * 60 +  (s[3] - '0') * 10 + (s[4] - '0'), s));
    }
    sort(sb.begin(), sb.end());
    sort(st.begin(), st.end());
    sort(so.begin(), so.end());
    if(sb.size() > 0){
        cout << "bus" << "\n";
        for(int i = 0; i < sb.size(); i++) {
            cout << sb[i].second << "\n";
        }
    }
    if(st.size() > 0) {
        cout << "train" << "\n";
        for(int i = 0; i < st.size(); i++) {
            cout << st[i].second << "\n";
        }
    }
    if(so.size() > 0) {
        cout << "own" << "\n";
        for(int i = 0; i < so.size(); i++) {
            cout << so[i].second << "\n";
        }
    }
    return 0;
}
