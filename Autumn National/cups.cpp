#include <bits/stdc++.h>
using namespace std;

int main () {
    pair <int, int> cp[3];
    for(int i = 0; i < 3; i++) {
        cin >> cp[i].first >> cp[i].second;
    }
    sort(cp, cp + 3);
    if(cp[2].first - 2 * cp[2].second >= cp[1].first && cp[1].first - 2 * cp[1].second >= cp[0].first) cout << cp[2].first;
    else if(cp[2].first - 2 * cp[2].second >= cp[1].first) cout << cp[2].first + cp[0].first;
    else if(cp[1].first - 2 * cp[1].second >= cp[0].first) cout << cp[2].first + cp[1].first;
    else cout << cp[2].first + cp[1].first + cp[0].first;
    return 0;
}
