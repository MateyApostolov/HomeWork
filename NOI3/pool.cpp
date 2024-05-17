#include <bits/stdc++.h>
using namespace std;

int main () {
    int s, n;
    cin >> s;
    n = sqrt(2 * s);
    while(n * (n + 1) < 2 * s) n++;
    cout << n;
    return 0;
}
