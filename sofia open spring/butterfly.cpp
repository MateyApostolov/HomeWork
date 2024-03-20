#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;
    char h;
    getline(cin, s);
    cin >> h;
    if(h == 'd') {
        for(int i = 0; i < s.size(); i++) {
            cout << s[i];
            if(s[i] == 'a') i += 2;
            if(s[i] == 'A') i += 2;
            if(s[i] == 'e') i += 2;
            if(s[i] == 'E') i += 2;
            if(s[i] == 'u') i += 2;
            if(s[i] == 'U') i += 2;
            if(s[i] == 'i') i += 2;
            if(s[i] == 'I') i += 2;
            if(s[i] == 'y') i += 2;
            if(s[i] == 'Y') i += 2;
            if(s[i] == 'o') i += 2;
            if(s[i] == 'O') i += 2;
        }
    } else {
        for(int i = 0; i < s.size(); i++) {
            cout << s[i];
            if(s[i] == 'a') cout << "f" << s[i];
            if(s[i] == 'A') cout << "f" << s[i];
            if(s[i] == 'e') cout << "f" << s[i];
            if(s[i] == 'E') cout << "f" << s[i];
            if(s[i] == 'u') cout << "f" << s[i];
            if(s[i] == 'U') cout << "f" << s[i];
            if(s[i] == 'i') cout << "f" << s[i];
            if(s[i] == 'I') cout << "f" << s[i];
            if(s[i] == 'y') cout << "f" << s[i];
            if(s[i] == 'Y') cout << "f" << s[i];
            if(s[i] == 'o') cout << "f" << s[i];
            if(s[i] == 'O') cout << "f" << s[i];
        }
    }

    return 0;
}
