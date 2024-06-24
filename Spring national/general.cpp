#include <bits/stdc++.h>
using namespace std;

bool bra[10], brb[10], brc[10];

int main () {
    int brA, brB, brC, brp = 0;
    string a, b, c;
    cin >> brA >> a >> brB >> b >> brC >> c;
    vector <int> s;
    for(int i = 0; i < a.size(); i++) bra[a[i] - '0'] = true;
    for(int i = 0; i < b.size(); i++) brb[b[i] - '0'] = true;
    for(int i = 0; i < c.size(); i++) brc[c[i] - '0'] = true;
    for(int i = 0; i < 10; i++) {
        if(bra[i] && brb[i] && brc[i]) {
            brp++;
            s.push_back(i);
        }
    }
    cout << brp << "\n";
    for(int i = 0; i < s.size(); i++) cout << s[i] << " ";
    return 0;
}
