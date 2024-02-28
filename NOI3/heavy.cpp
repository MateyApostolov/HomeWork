#include <bits/stdc++.h>
using namespace std;

int sc(int n) {
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main () {
    pair <int, int> d[3];
    cin >> d[0].second >> d[1].second >> d[2].second;
    d[0].first = sc(d[0].second);
    d[1].first = sc(d[1].second);
    d[2].first = sc(d[2].second);
    sort(d, d + 3);
    cout << d[2].second;
    return 0;
}
