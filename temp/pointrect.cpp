#include <bits/stdc++.h>
using namespace std;

int main () {
    double x, y, x1, y1, x2, y2;
    cin >> x >> y >> x1 >> y1 >> x2 >> y2;
    if(x > x1 && x < x2 && y > y1 && y < y2) cout << "YES";
    else cout << "NO";

    return 0;
}
