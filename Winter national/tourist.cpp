#include <iostream>
using namespace std;

int main () {
    int k, w;
    cin >> k >> w;
    int a1, b1, a2, b2, a3, b3;
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
    int brw = 0;
    if(a1 + a2 <= w && b1 + b2 >= k) {
        brw++;
    }
    if(a1 + a3 <= w && b1 + b3 >= k) {
        brw++;
    }
    if(a3 + a2 <= w && b3 + b2 >= k) {
        brw++;
    }
    if(a1 + a2 + a3 <= w && b1 + b2 + b3 >= k) {
        brw++;
    }
    if(a1 <= w && b1 >= k) {
        brw++;
    }
    if(a2 <= w && b2 >= k) {
        brw++;
    }
    if(a3 <= w && b3 >= k) {
        brw++;
    }
    cout << brw;


    return 0;
}
