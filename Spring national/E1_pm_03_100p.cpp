#include <bits/stdc++.h>
using namespace std;

int main () {
    char n;
    vector <char> s;
    while(cin >> n) s.push_back(n);
    for(int i = 1; i < 10; i++) {
        int h = i;
        int c[s.size() + 1];
        c[0] = h;
        bool t = true;
        for(int x = 0; x < s.size(); x++) {
            if(s[x] == '+') {
                h++;
                if(h > 9) t = false;
                else c[x + 1] = h;
            }
            if(s[x] == '-') {
                h--;
                if(h < 0) t = false;
                else c[x + 1] = h;
            }
            if(s[x] == '=') c[x + 1] = h;
        }
        if(t) {
            for(int y = 0; y < s.size() + 1; y++) cout << c[y];
            return 0;
        }
    }
    cout << 0;

    return 0;
}
