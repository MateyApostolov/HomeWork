#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, h = 1;
    cin >> n;
    int nc;
    vector <int> s;
    cout << " ";
    for(int i = 0; i < n; i++) {
        cin >> nc;
        s.push_back(nc);
    }
    for(int i = 0; i < n; i++) {
        if(s[i] < 10 && s[i] >= 0) cout << " ";
        cout << s[i] << "  ";
    }
    cout << "\n";
    while(s.size() > 1) {
        vector <int> ns;
        for(int i = 1; i < s.size(); i++) ns.push_back(s[i] - s[i - 1]);
        for(int i = 0; i < h; i++) cout << "  ";
        for(int i = 0; i < ns.size(); i++) {
            if(ns[i] < 10 && ns[i] >= 0) cout << " ";
            cout << ns[i] << "  ";
        }
        cout << "\n";
        h++;
        s = ns;
    }

    return 0;
}
