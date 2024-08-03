#include <iostream>
using namespace std;

int sg (int v) {
    int x = 0;
    double h = v;
    while(h >= 2) {
        h /= 2;
        x++;
    }
    if(h != 1) x++;
    return x;
}

int main () {
    int m, n;
    cin >> m >> n;
    cout << sg(m) + sg(n);
    return 0;
}
