#include <iostream>
using namespace std;

int main () {
    int n, a, x, y, minot = 200001;
    cin >> n >> a;
    double ga = 1.0 * a / 2;
    for(int i = 0; i < n; i++) {
        cin >> x >> y;
        if(ga < abs(x) || ga < abs(y)) minot = min(minot, abs(x) + abs(y));
    }
    if(minot == 200001) minot = 0;
    cout << minot;
    return 0;
}
