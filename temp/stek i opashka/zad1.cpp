#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;
    getline(cin, s);
    stack <char> obr;
    for(int i = 0; i < s.size(); i++) {
        obr.push(s[i]);
    }
    for(int i = 0; i < s.size(); i++) {
        cout << obr.top();
        obr.pop();
    }

    return 0;
}
