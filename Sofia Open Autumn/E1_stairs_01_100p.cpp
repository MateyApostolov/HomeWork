#include <iostream>
using namespace std;

int main () {
    int A, B, R, P, K;
    cin >> A >> B >> R >> P >> K;
    if(A == B) {
        cout << R;
        return 0;
    }
    int rmin = (abs(A - B) + 1) * R;
    int pmin = (abs(A - B) - 1) * P;
    int kmin = abs(A - B) * K;
    int allmin = rmin + pmin + kmin;
    cout << allmin;


    return 0;
}
