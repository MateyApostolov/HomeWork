#include <iostream>
using namespace std;

int main () {
    int x, n;
    cin >> x >> n;
    int v1, t1, v2, t2, sum1 = 0, sum2 = 0;
    for(int i = 0; i < n; i++) {
        cin >> v1 >> t1 >> v2 >> t2;
        sum1 += v1 * t1;
        sum2 += v2 * t2;
    }
    int r1 = sum1 % x;
    int r2 = sum2 % x;
    if(r1 < 0) r1 += x;
    if(r2 < 0) r2 += x;
    cout << min(abs(r1 - r2), x - abs(r1 - r2));

    return 0;
}
