#include <iostream>
using namespace std;

int main () {
    long long L, W, H;
    cin >> L >> W >> H;
    long long ss1, ss2;
    ss1 = L * H;
    ss2 = W * H;
    long long ss = (ss1 + ss2) * 2;
    long long k = 0;
    k = k + ss / 16;
    if (ss % 16 != 0) {
        k++;
    }
    cout << k;

    return 0;
}
