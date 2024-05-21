#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    pair <char, char> s[n];
    string kod;
    getline(cin,kod);
    for(int i = 0; i < n; i++) {
        getline(cin,kod);
        s[i].first = kod[0];
        s[i].second = kod[2];
    }
    getline(cin,kod);
    for(int i = 0; i < kod.size(); i++) {
        for(int x = 0; x < n; x++) {
            if(kod[i] == s[x].second) {
                cout << s[x].first;
                break;
            }
        }
    }
    return 0;
}
