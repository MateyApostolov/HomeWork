#include <bits/stdc++.h>
using namespace std;

pair <int, char> brb[26];

int main () {
    char s = ' ';
//    cin >> s;
    int h = 0;
    for(int i = 0; i < 26; i++) {
        brb[i].second = char('A' + i);
        brb[i].first = 1000000;
    }
    while(s != '#') {
        cin >> s;
        if(isalpha(s)) {
            s = toupper(s);
            brb[s - 'A'].first--;
        }
    }
    sort(brb, brb + 26);
    for(int i = 0; i < 26; i++) {
        if(brb[i].first != 1000000 && h < 6) {
            h++;
            cout << brb[i].second;
        }
    }
    return 0;
}
