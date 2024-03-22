#include <bits/stdc++.h>
using namespace std;

int maxb = 10000000;

int main () {
    int x, y, z, n, a, b, c;
    cin >> x >> y >> z >> n;
    pair <int, int> s3[n];
    for(int i = 1; i <= n; i++) {
        cin >> a >> b >> c;
        s3[i - 1].first = a * x + b * y + c * z;
        s3[i - 1].second = maxb - i;
    }
    sort(s3, s3 + n);
    cout << s3[n - 1].first + s3[n - 2].first + s3[n - 3].first << "\n";
    cout << maxb - s3[n - 1].second << " " << maxb - s3[n - 2].second << " " << maxb - s3[n - 3].second;


    return 0;
}
