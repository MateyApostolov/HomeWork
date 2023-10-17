
#include <bits/stdc++.h>
using namespace std;

int main () {
    pair<long long,long long> d[3];
    cin >> d[0].first >> d[1].first >> d[2].first;
    cin >> d[0].second >> d[1].second >> d[2].second;
    sort(d, d + 3);
    long long l;
    cin >> l;
    long long pm = 0;
    long long n = 0;
    for(int i = 0; i < 3; i++) {
        if(d[i].first == 0) {
            n = d[i].second;
        } else {
            n = min(d[i].second, l / d[i].first);
        }
        pm = pm + n;
        l = l - n * d[i].first;
    }
    cout << pm;



    return 0;
}
