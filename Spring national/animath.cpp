#include <bits/stdc++.h>
using namespace std;

int main () {
    long long n, sum = 0;
    char a;
    string s;
    cin >> n >> a;
    long long num[n] = {0};
    getline(cin, s);
    for(int i = 0; i < n; i++) {
        getline(cin, s);
        string S = "";
        for(int x = 0; x < s.size(); x++)
            if(s[x] != ' ') S += s[x];
        for(int x = 1; x < S.size(); x += 2) {
            if(S[x] == 'o' && S[x - 1] == 'n') num[i] = num[i] * 10 + 0;
            if(S[x] == 'a' && S[x - 1] == 'p') num[i] = num[i] * 10 + 1;
            if(S[x] == 'e' && S[x - 1] == 'r') num[i] = num[i] * 10 + 2;
            if(S[x] == 'i' && S[x - 1] == 'c') num[i] = num[i] * 10 + 3;
            if(S[x] == 'o' && S[x - 1] == 'v') num[i] = num[i] * 10 + 4;
            if(S[x] == 'u' && S[x - 1] == 'm') num[i] = num[i] * 10 + 5;
            if(S[x] == 'a' && S[x - 1] == 'x') num[i] = num[i] * 10 + 6;
            if(S[x] == 'e' && S[x - 1] == 'z') num[i] = num[i] * 10 + 7;
            if(S[x] == 'i' && S[x - 1] == 'b') num[i] = num[i] * 10 + 8;
            if(S[x] == 'o' && S[x - 1] == 's') num[i] = num[i] * 10 + 9;
        }
    }
    sum = num[0];
    if(a == '+') for(int i = 1; i < n; i++) sum += num[i];
    else for(int i = 1; i < n; i++) sum -= num[i];
    vector<string> res;
    if(sum == 0) {
        cout << "no";
        return 0;
    }
    while(sum != 0) {
        int c = sum % 10;
        if(c == 0) res.push_back("no");
        if(c == 1) res.push_back("pa");
        if(c == 2) res.push_back("re");
        if(c == 3) res.push_back("ci");
        if(c == 4) res.push_back("vo");
        if(c == 5) res.push_back("mu");
        if(c == 6) res.push_back("xa");
        if(c == 7) res.push_back("ze");
        if(c == 8) res.push_back("bi");
        if(c == 9) res.push_back("so");
        sum /= 10;
    }
    for(int i = res.size() - 1; i >= 0; i--) cout << res[i];
    return 0;
}
