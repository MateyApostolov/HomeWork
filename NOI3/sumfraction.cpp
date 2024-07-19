#include <iostream>
using namespace std;

const int maxsum = 100001;
bool difs[maxsum];

int main () {
    int n, br = 0;
    cin >> n;
    pair <int, int> nd[n];
    for(int i = 0; i < n; i++) cin >> nd[i].first >> nd[i].second;
    for(int i1 = 0; i1 < n - 1; i1++)
        for(int i2 = i1 + 1; i2 < n; i2++)
            if((nd[i1].first * nd[i2].second + nd[i2].first * nd[i1].second) % (nd[i1].second * nd[i2].second) == 0)
                if(!difs[(nd[i1].first * nd[i2].second + nd[i2].first * nd[i1].second) / (nd[i1].second * nd[i2].second)]) {
                    br++;
                    difs[(nd[i1].first * nd[i2].second + nd[i2].first * nd[i1].second) / (nd[i1].second * nd[i2].second)] = true;
                }
    cout << br;
    return 0;
}
