#include <iostream>
using namespace std;

int main () {
    int t1, m1, t2, m2;
    cin >> t1 >> m1 >> t2 >> m2;
    int M1 = t1 * 60 + m1;
    int M2 = t2 * 60 + m2;
    int M = M2 - M1;
    if(M < 0) {
        M = M + 60 * 24;
    }
    int o = M / 30;
    cout << M << " " << o;

    return 0;
}
