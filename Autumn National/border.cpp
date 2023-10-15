#include <iostream>
using namespace std;

int main () {
    int a, b, k;
    cin >> a >> b >> k;
    int z = (a / k) * 2 + (b / k) * 2;
    int oa = a % k;
    int ob = b % k;
    if(oa == 0 && ob == 0) {
        cout << z;
        return 0;
    }
    if(oa * 2 + ob * 2 <= k) {
        cout << z + 1;
        return 0;
    }
    if(min(oa, ob) > 1.0 * k / 2) {
        cout << z + 4;
        return 0;
    }
    if(oa + ob <= k) {
        cout << z + 2;
        return 0;
    }
    cout << z + 3;

    return 0;
}
