#include <iostream>
using namespace std;

int kod (string s) {
    int br = 0;
    for(int i = 0; i < s.size(); i++) br += s[i] - 'a' + 1;
    return br;
}

int main () {
    int n, nmk;
    cin >> n;
    string s, izs;
    cin >> s;
    nmk = kod(s);
    izs = s;
    for(int i = 0; i < n; i++) {
        cin >> s;
        if(nmk > kod(s)) {
            nmk = kod(s);
            izs = s;
        }
    }
    cout << izs << " " << nmk;
    return 0;
}
