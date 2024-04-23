#include <bits/stdc++.h>
using namespace std;

int main () {
    int k, brk, hk, h, br, maxbr = 0;
    cin >> k;
    string s, izh, hs;
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        hs = "";
        br = 0;
        brk = 0;
        hk = s[i] + k;
        h = s[i];
        while(brk < 2) {
            if(s[h] >= s[i] && s[h] < s[i] + k) {
                brk++;
                br++;
                hs += s[h];
            }
            h++;
        }
        if(maxbr < br) {
            maxbr = br;
            izh = hs;
        }
    }
    cout << maxbr << "\n" << izh;
    return 0;
}
