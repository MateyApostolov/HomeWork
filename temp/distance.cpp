#include <bits/stdc++.h>
using namespace std;

int n, maxr = 0;
string s;
bool b[26];

int dist (char s1, char s2) {
    int r = 1000000, h = 0;
    char pr = '.';
    for(int i = 0; i < n; i++) {
        if(s[i] == s1) {
            if(pr == s2) r = min(r, i - h);
            h = i;
            pr = s[i];
        }
        if(s[i] == s2) {
            if(pr == s1) r = min(r, i - h);
            h = i;
            pr = s[i];
        }
    }
    return r;
}

int main () {
    cin >> n >> s;

    char iz1, iz2;
    for(int i = 0; i < n; i++) {
        if(s[i] >= 'a' && s[i] <= 'z') s[i] -= 'a' - 'A';
        b[s[i] - 'A'] = true;
    }
    for(int i1 = 0; i1 < 25; i1++) {
        if(!b[i1]) continue;
        for(int i2 = i1 + 1; i2 < 26; i2++) {
            if(!b[i2]) continue;
            int ras = dist(char('A' + i1), char('A' + i2));
            if(maxr < ras) {
                maxr = ras;
                iz1 = char('A' + i1);
                iz2 = char('A' + i2);
            }
        }
    }
    cout << maxr << "\n" << iz1 << " " << iz2;
    return 0;
}
