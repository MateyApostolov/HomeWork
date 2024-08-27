#include <bits/stdc++.h>
using namespace std;

const int maxs = 100000;
bool ind[maxs];

int main () {
    string s;
    cin >> s;
    int br = 0;
    stack <int> sk;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '(') sk.push(i);
        else {
            if(sk.size() == 0) continue;
            ind[sk.top()] = true;
            ind[i] = true;
            sk.pop();
            br += 2;
        }
    }
    cout << br << '\n';
    for(int i = 0; i < maxs; i++) {
        if(ind[i]) cout << i << ' ';
    }
    return 0;
}
