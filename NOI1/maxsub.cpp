#include <iostream>
using namespace std;

int brb[26];

int main () {
    string s;
    cin >> s;
    char b;
    int ngbr = 0;
    for(int i = 0; i < s.size(); i++) brb[s[i] - 'a']++;
    for(int i = 0; i < 26; i++) {
        if(ngbr < brb[i]) {
            ngbr = brb[i];
            b = char('a' + i);
        }
    }
    for(int i = 0; i < ngbr; i++) cout << b;

    return 0;
}
