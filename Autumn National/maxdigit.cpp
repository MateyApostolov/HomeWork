#include <iostream>
using namespace std;

int main () {
    int B, C, D, K;
    cin >> B >> C >> D >> K;
    int a1, a2, a3;
    if(K == 1) {
        a1 = B / 100;
        a2 = C / 100;
        a3 = D / 100;
    }
    if(K == 2) {
        a1 = B / 10 % 10;
        a2 = C / 10 % 10;
        a3 = D / 10 % 10;
    }
    if(K == 3) {
        a1 = B % 10;
        a2 = C % 10;
        a3 = D % 10;
    }
    int ng = max(a1, max(a2, a3));
    if (ng <= 4) {
        cout << "No";
    } else {
        cout << ng;
    }

    return 0;
}
