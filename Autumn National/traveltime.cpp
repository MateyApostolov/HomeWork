#include <iostream>
using namespace std;

int main () {
    int t1, m1;
    cin >> t1 >> m1;
    int rw;
    cin >> rw;
    int t2, m2;
    cin >> t2 >> m2;
    int br;
    cin >> br;
    int nhw;
    cin >> nhw;
    int M1 = t1 * 60 + m1;
    int M2 = t2 * 60 + m2;
    int M = M1 - 10 - M2 - rw - (nhw * (br + 1));
    int t = M / 60;
    int m = M % 60;
    if(t < 10) {
        cout << 0;
    }
    cout << t << " ";
    if(m < 10) {
        cout << 0;
    }
    cout << m;

    return 0;
}
