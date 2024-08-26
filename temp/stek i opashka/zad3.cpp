#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;
    getline(cin, s);
    stack <char> c0;
    stack <char> c1;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '0') c0.push(s[i]);
        if(s[i] == '1') c1.push(s[i]);

    }
    if(c0.size() == c1.size()) cout << 1;
    else cout << 0;
    return 0;
}
