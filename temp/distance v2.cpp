#include <bits/stdc++.h>
using namespace std;

bool m[26];
int n, mds;
string d;

int dist (char s1, char s2){
    int r = 1000000, h = 0;
    char pr = '.';
    for(int i = 0; i < n; i++){
        if(d[i] == s1){
            if(pr == s2) r = min(r, i - h);
            h = i;
            pr = d[i];
        }
        if(d[i] == s2){
            if(pr == s1) r = min(r, i - h);
            h = i;
            pr = d[i];
        }
    }
    return r;
}

int main () {
    cin >> n >> d;
    char fl = 'A', ll = 'A';
    for(int i = 0; i < n; i++) {
        d[i] = tolower(d[i]);
        m[d[i] - 'a'] = true;
    }
    for(int i = 0; i < 25; i++){
        if(!m[i]) continue;
        for(int j = i + 1; j < 26; j++){
            if(!m[j]) continue;
            int ds = dist(char('a' + i), char('a' + j));
            if(ds > mds){
                mds = ds;
                fl = char('a' + i);
                ll = char('a' + j);
            }
        }
    }
    cout << mds << '\n' << char(toupper(fl)) << ' ' << char(toupper(ll));
    return 0;
}
