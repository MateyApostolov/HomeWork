#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    string s;
    getline(cin, s);
    getline(cin, s);
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'a' || s[i] == 'b' || s[i] == 'd' || s[i] == 'e' || s[i] == 'g'
                       || s[i] == 'o' || s[i] == 'p' || s[i] == 'q' || s[i] == ' ') continue;
        cout << s[i];
    }

    return 0;
}
