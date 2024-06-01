#include <bits/stdc++.h>
using namespace std;

int main () {
    char s;
    int h = 0;
    vector <int> iz;
    vector <char> als;
    while(s != '.') {
        cin >> s;
        als.push_back(s);
    }
    for(int i = 0; i < als.size(); i++) iz.push_back(i + 1);
    while(iz.size() > 1) {
        vector <int> r;
        for(int i = 0; i < iz.size(); i += 2) {
            if(i % 2 == 0 && i == iz.size() - 1) continue;
            if(als[h] == '+') r.push_back(iz[i]);
            else r.push_back(iz[i + 1]);
            h++;
        }
        if(iz.size() % 2 != 0) r.push_back(iz[iz.size() - 1]);
        iz = r;
    }
    cout << iz[0];
    return 0;
}
