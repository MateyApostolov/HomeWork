#include <iostream>
using namespace std;

string f1(string s) {
    string r = "";
    r = s[0] - 32;
    for(int i = 1; i < s.size(); i++) {
        if(s[i] == '_') {
            r += s[i + 1] - 32;
            i++;
        } else r += s[i];
    }
    return r;
}

string f2(string s) {
    string r = "";
    r = s[0] + 32;
    for(int i = 1; i < s.size(); i++) {
        if(!islower(s[i])) {
            r += '_';
            r += s[i] + 32;
        } else r += s[i];
    }
    return r;
}

int main () {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(islower(s[0])) cout << f1(s);
    else cout << f2(s);
    return 0;
}
