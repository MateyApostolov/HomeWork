#include <bits/stdc++.h>
using namespace std;

const int maxc = 256;
int let[maxc];

bool is_palin (string s) {
    int brnc = 0;
    for(int i = 0; i < s.size(); i++) let[s[i]]++;
    for(int i = 0; i < maxc; i++) {
        if(let[i] % 2 != 0) brnc++;
        let[i] = 0;
    }
    if(brnc > 1) return false;
    return true;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    string s;
    for(int i = 0; i < n; i++) {
        cin >> s;
        if(is_palin(s)) cout << 1;
        else cout << 0;
    }

    return 0;
}
