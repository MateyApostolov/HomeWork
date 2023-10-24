#include <bits/stdc++.h>
using namespace std;

int main () {
    pair<int, int> pr[3];
    cin >> pr[0].first >> pr[1].first >> pr[2].first >> pr[0].second >> pr[1].second >> pr[2].second;
    int L;
    cin >> L;
    sort(pr, pr + 3);
    int br = 0;
    for(int i = 2; i >= 0; i--) {
        if(L > pr[i].first * pr[i].second) {
            br += pr[i].second;
            L -= pr[i].first * pr[i].second;
        } else {
            br += L / pr[i].first;
            if(L % pr[i].first != 0) br++;
            L = 0;
            break;
        }
    }
    if(L != 0) {
        cout << 0;
    } else {
        cout << br;
    }


    return 0;
}
