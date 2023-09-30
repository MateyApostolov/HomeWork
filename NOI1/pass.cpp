#include <bits/stdc++.h>
using namespace std;

int main () {
    char a;
    cin >> a;
    char b[3];
    cin >> b[0] >> b[1] >> b[2];
    char c;
    cin >> c;
    int p1 = (a - 48) * 2;
    if (p1 >= 10) {
        p1 = p1 % 10 + p1 / 10;
    }
    sort (b, b + 3);
    int p2 = (c - 48) * 2;
    if (p2 >= 10) {
        p2 = p2 % 10 + p2 / 10;
    }
    cout << p1 << b[0] << b[1] << b[2] << p2;


    return 0;
}
