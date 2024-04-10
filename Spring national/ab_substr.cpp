#include <iostream>
using namespace std;

int main () {
    string s;
    cin >> s;
    int bra = 0, brb = 0, brpn = 0;
    if(s[0] == 'b') brb++;
    if(s[0] == 'a') bra++;
    for(int i = 1; i < s.size(); i++) {
        if(s[i - 1] == 'b' && s[i] == 'a') {
            brpn += min(bra, brb);
            brb = 0;
            bra = 0;
        }
        if(s[i] == 'b') brb++;
        if(s[i] == 'a') bra++;
    }
    brpn += min(bra, brb);
    cout << brpn;
    return 0;
}
