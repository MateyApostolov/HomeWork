#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;
    cin >> s;
    int n1, n2;
    for(int i = 0; i < s.size(); i++) if(!isdigit(s[i])) s[i] = ' ';
    stringstream h;
    h << s;
    h >> n1 >> n2;
    cout << n2 - n1;

    return 0;
}
