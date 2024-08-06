#include <iostream>
using namespace std;

int main () {
    int n, k, h;
    cin >> n >> k;
    h = n - 1;
    char wh[n];
    pair <int, char> z[k];
    for(int i = 0; i < n; i++) wh[i] = '?';
    for(int i = 0; i < k; i++) cin >> z[i].first >> z[i].second;
    for(int i = k - 1; i >= 0; i--) {
        ///for(int i = n - 1; i >= 0; i--) cout << wh[i];
        cout << '\n';
        if(wh[h] != '?' && wh[h] != z[i].second) {
            cout << '!';
            return 0;
        }
        wh[h] = z[i].second;
        h -= z[i].first;
        while(h < 0) h += n;
    }
    for(int i = n - 1; i >= 0; i--) cout << wh[i];
    return 0;
}
