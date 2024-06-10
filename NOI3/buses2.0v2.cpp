#include <iostream>
using namespace std;

int main () {
    long long p, t, x, y, n, i = 0, ht, time = 0, vv, ptn = 0;
    cin >> p >> t >> x >> y >> n;
    for(int i = 1; i <= p; i++) {
        time += x;
        if(i == 1) ht = time / y;
        else ht += time / y - (time - x) / y;
        vv = min(n, ht);
        ht -= vv;
        ptn += vv;
        if(ptn >= t) {
            cout << time - t * y;
            return 0;
        }
    }
    cout << "No";
    return 0;
}
