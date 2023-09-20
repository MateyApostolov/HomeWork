#include <iostream>
using namespace std;

int main () {
    int  A, B, R, P, K;
    cin >> A >> B >> R >> P >> K;
    int rt, pt, kt;
    if (A < B) {
        rt = (B - A + 1) * R;
        pt = (B - A - 1) * P;
        kt = (B - A) * K;
        cout << rt + pt + kt << endl;
    }
    if (B < A) {
        rt = (A - B + 1) * R;
        pt = (A - B - 1) * P;
        kt = (A - B) * K;
        cout << rt + pt + kt << endl;
    }
    if (A == B) {
        cout << R << endl;
    }


    return 0;
}
