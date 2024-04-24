#include <bits/stdc++.h>
using namespace std;

int main () {
    long long n;
    cin >> n;
    long long m[3];
    cin >> m[0] >> m[1] >> m[2];
    long long d;
    cin >> d;
    sort(m, m + 3);
    long long r[4];
    r[0] = m[0] - 1;
    r[1] = m[1] - m[0] - 1;
    r[2] = m[2] - m[1] - 1;
    r[3] = n - m[2];
    ///cout << r[0] << " " << r[1] << " " << r[2] << " " << r[3] << "\n";
    r[0] -= d;
    if(r[0] < 0) r[0] = 0;
    r[1] -= d * 2;
    if(r[1] < 0) r[1] = 0;
    r[2] -= d * 2;
    if(r[2] < 0) r[2] = 0;
    r[3] -= d;
    if(r[3] < 0) r[3] = 0;
    cout << r[0] + r[1] + r[2] + r[3];
    return 0;
}
