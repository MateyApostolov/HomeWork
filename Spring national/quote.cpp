#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, points, komp, sump = 0;
    string ime, fam, obl;
    cin >> n;
    vector  <string> wobl;
    vector <pair<int, string>> s;
    for(int i = 0; i < n; i++) {
        cin >> ime >> fam >> obl >> points;
        sump += points;
        s.push_back({points, obl});
        bool t = true;
        for(int x = 0; x < wobl.size(); x++)
            if(wobl[x] == obl) {
                t = false;
                break;
            }
        if(t) wobl.push_back(obl);
    }
    cin >> komp;
    ///cout << wobl.size();
    sort(s.begin(), s.end());
    reverse(s.begin(), s.end());
    ///cout << "\n";
    ///for(int i = 0; i < s.size(); i++) cout << s[i].first << " " << s[i].second << "\n";
    vector <pair<string, int>> izob;
    for(int i = 0; i < n / 2; i++) {
        bool t = true;
        for(int x = 0; x < izob.size(); x++)
            if(izob[x].first == s[i].second) {
                t = false;
                izob[x].second += s[i].first;
                break;
            }
        if(t) izob.push_back({s[i].second, s[i].first});
    }
    int h = s[n / 2 - 1].first, j = n / 2;
    ///cout << h << "\n";
    while(j < s.size() && s[j].first == h) {
        cout << j << "\n";
        bool t = true;
        for(int x = 0; x < izob.size(); x++)
            if(izob[x].first == s[j].second) {
                t = false;
                izob[x].second += s[j].first;
                break;
            }
        if(t) izob.push_back({s[j].second, s[j].first});
        j++;
    }
    ///cout << "\n";
    ///for(int i = 0; i < izob.size(); i++) cout << izob[i].first << " " << izob[i].second << "\n";
    vector <pair<string, int>> grad;
    int ost = komp;
    for(int i = 0; i < izob.size(); i++) {
        double h = 1.0 * izob[i].second * komp / sump;
        grad.push_back({izob[i].first,  round(h)});
        ost -= round(h);
    }
    ost /= wobl.size();
    for(int i = 0; i < wobl.size(); i++) {
        bool t = true;
        for(int x = 0; x < grad.size(); x++) {
            if(grad[x].first == wobl[i]) {
                grad[x].second += ost;
                t = false;
                break;
            }
        }
        if(t) grad.push_back({wobl[i], ost});
    }
    sort(grad.begin(), grad.end());
    cout << grad.size() << "\n";
    for(int i = 0; i < grad.size(); i++) cout << grad[i].first << " " << grad[i].second << "\n";
    return 0;
}
