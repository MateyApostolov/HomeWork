#include <iostream>
using namespace std;

int main () {
    int n, k, kp = 1, brch = 0;
    cin >> n >> k;
    while (kp < n) {
        brch++;
        kp += min(k, kp);
    }
    cout << brch;
    return 0;
}
