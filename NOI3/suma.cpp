#include <iostream>
using namespace std;

int maxc (int v) {
    int ma = 0, mn = 1;
    while(v > 0) {
        if(v % 10 == 5) ma = 6 * mn + ma;
        else ma = v % 10 * mn + ma;
        v /= 10;
        mn *= 10;
    }
    return ma;
}

int minc (int v) {
    int mi = 0, mn = 1;
    while(v > 0) {
        if(v % 10 == 6) mi = 5 * mn + mi;
        else mi = v % 10 * mn + mi;
        v /= 10;
        mn *= 10;
    }
    return mi;
}

int main () {
    int a, b;
    cin >> a >> b;
    cout << minc(a) + minc(b) << " " << maxc(a) + maxc(b);

    return 0;
}
