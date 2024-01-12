#include <iostream>
using namespace std;

int main () {
    int t, n, t1, t2, pu = 0, tt;
    cin >> t;
    char ns[t];
    tt = 100 / t;
    pair <int, int> pr[t / 2];
    for(int i = 0; i < t / 2; i++) {
        cin >> t1 >> t2;
        pr[i].first = t1;
        pr[i].second = t2;
    }
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int x = 0; x < t; x++) cin >> ns[x];
        for(int y = 0; y < t / 2; y++)
            if(ns[pr[y].first - 1] == '1' && ns[pr[y].second - 1] == '1') pu += tt * 2;
        cout << pu << "\n";
        pu = 0;
    }

    return 0;
}
