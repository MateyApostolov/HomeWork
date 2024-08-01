#include <bits/stdc++.h>
using namespace std;

int main () {
    pair <int, int> c[4];
    int n;
    for(int i = 0; i < 4; i++) {
        cin >> n;
        c[i].first = 10 - n + 1 + i;
        c[i].second = n;
    }
    sort(c, c + 4);
    for(int i = 0; i < 4; i++) cout << c[i].second << " ";

    return 0;
}
