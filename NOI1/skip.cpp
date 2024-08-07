#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, h = 2, ngc;
    cin >> n;
    vector <int> beg;
    for(int i = 1; i <= n; i++) beg.push_back(i);
    while(beg.size() > 1) {
        vector <int> sk;
        for(int i = 0; i < beg.size(); i += h) sk.push_back(beg[i]);
        h++;
        ngc = beg[beg.size() - 1];
        beg = sk;
    }
    cout << ngc;
    return 0;
}
