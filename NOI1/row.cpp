#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    pair <int, int> a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a, a + n);
    int ogr = 1.0 * a[0].first / 3 + 1.0 * a[n - 1].first / 3 * 2;
    int nm = 100000;
    pair<int, int> h[1];
    int r;
    for(int k = 0; k < n; k++) {
        if(a[k].first <= ogr) {
            if(a[k].first < nm) {
                nm = a[k].first;
                r = k + 1;
            }
        }
        if(k == n - 1) {
            h[1].second = r;
        }
    }
    cout << h[1].second;

    return 0;
}
