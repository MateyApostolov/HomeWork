#include <iostream>
using namespace std;

int main () {
    int d1, k1;
    cin >> d1 >> k1;
    int d2, k2;
    cin >> d2 >> k2;
    int d3, k3;
    cin >> d3 >> k3;
    int n1 = k1 - d1;
    int n2 = k2 - d2;
    int n3 = k3 - d3;
    cout << min(n1, min(n2, n3));

    return 0;
}
