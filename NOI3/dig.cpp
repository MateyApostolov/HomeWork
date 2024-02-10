#include <bits/stdc++.h>
using namespace std;

bool nc[10];

int main () {
    int k;
    string n;
    cin >> k >> n;
    vector <int> f;
    for(int i = 0; i < n.size(); i++) nc[n[i] - '0'] = true;
    for(int i = 0; i < 10; i++)
        if(!nc[i]) f.push_back(i);
    if(f.size() > k || (f.size() == 1 && f[0] == 0)) {
        cout << 0;
        return 0;
    }
    if(f[0] == 0) {
        cout << f[1];
        for(int i = 0; i < k - f.size() + 1; i++) cout << f[0];
        for(int i = 2; i < f.size(); i++) cout << f[i];
    } else {
        for(int i = 0; i < k - f.size(); i++) cout << f[0];
        for(int i = 0; i < f.size(); i++) cout << f[i];
    }

    return 0;
}
