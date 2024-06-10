#include <iostream>
using namespace std;

int main () {
    int p, t, x, y, n, i = 0, ht;
    cin >> p >> t >> x >> y >> n;
    if(p * x > t * y) cout << x - t * y % x;
    if(p * x == t * y) cout << 0;
    if(p * x < t * y) cout << "No";
    return 0;
    while(true) {
        if(t == 0 || p == 0) break;
        if(i % x == 0) {
            ht = max(0, ht - n);
            p--;
        }
        if(i % y == 0) {
            t--;
            ht++;
        }
        i++;
    }

    return 0;
}
