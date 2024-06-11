#include <iostream>
using namespace std;

int main () {
    int nc[5] = {0, 1, 2, 3, 4}, a, b, c, d;
    cin >> a >> b >> c >> d;
    if(c == 1) swap(nc[4], nc[3]);
    if(b == 1) swap(nc[3], nc[2]);
    if(b == 2) {
        swap(nc[3], nc[2]);
        swap(nc[3], nc[4]);
    }
    if(a == 1) swap(nc[1], nc[2]);
    if(a == 2) {
        swap(nc[1], nc[2]);
        swap(nc[3], nc[2]);
    }
    if(a == 3) {
        swap(nc[1], nc[2]);
        swap(nc[3], nc[2]);
        swap(nc[4], nc[3]);
    }
    cout << nc[1] << " " << nc[2] << " " << nc[3] << " " << nc[4];

    return 0;
}
