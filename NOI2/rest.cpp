#include <iostream>
using namespace std;

int main () {
    int a, b, c, d, x, k, brm = 0, brs = 0;
    cin >> a >> b >> c >> d >> x >> k;
    int A = max(a * 100 + b, c * 100 + d);
    A -= 50;
    while(A >= x + 50) {
        int msm = k * x + 50;
        if(A >= msm) {
            brs += 2 * k;
            brm++;
            A -= msm;
        } else {
            int ls = (A - 50) / x;
            brs += ls * 2;
            brm++;
            A -= (50 + ls * x);
        }
    }
    cout << brs << endl << brm;


    return 0;
}
