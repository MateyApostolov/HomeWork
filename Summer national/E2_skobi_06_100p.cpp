#include <bits/stdc++.h>
using namespace std;

int main () {
    char s;
    int ls = 0, ds = 0, liz = 0, diz = 0;
    while(cin >> s) {
        if(s == '(') ls++;
        if(s == ')') ds++;
        if(ls < ds) {
            liz += ds - ls;
            ls += ds - ls;
        }
    }
    if(ds < ls) diz += ls - ds;
    cout << liz << " " << diz;
    return 0;
}

