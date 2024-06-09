#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;
    cin >> s;
    int ls = 0, ds = 0, liz = 0, diz = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '(') ls++;
        if(s[i] == ')') ds++;
    }
    if(ds < ls) diz += ls - ds;
    for(int i = s.size() - 1; i >= 0; i++) {
        if(ls < ds) liz += ds - ls;
        if(s[i] == '(') ls--;
        if(s[i] == ')') ds--;
    }
    cout << liz << " " << diz;
    return 0;
}

