#include <bits/stdc++.h>
using namespace std;

int main () {
    string ns, prs;
    cin >> ns >> prs;
    int h, m, s, br = 0, H = 0, M = 0, S, ts;
    stringstream n, pr;
    for(int i = 0; i < ns.size(); i++) if(ns[i] == ':') ns[i] = ' ';
    n << ns;
    n >> h >> m >> s;
    for(int i = 0; i < prs.size(); i++)
        if(prs[i] == ':') {
            prs[i] = ' ';
            br++;
        }
    pr << prs;
    if(br == 0) pr >> S;
    if(br == 1) pr >> M >> S;
    if(br == 2) pr >> H >> M >> S;
    ts = H * 60 * 60 + M * 60 + S + h * 60 * 60 + m * 60 + s;
    int T = ts % (24 * 60 * 60), D = ts / (24 * 60 * 60);
    cout << T / 3600 / 10 << T / 3600 % 10 << ":";
    cout << T % 3600 / 60 / 10 << T % 3600 / 60 % 10 << ":";
    cout << T % 3600 % 60 / 10 << T % 3600 % 60 % 10 << "+" << D << " days";
    return 0;
}
