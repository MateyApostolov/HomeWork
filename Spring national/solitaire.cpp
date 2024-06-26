#include <iostream>
using namespace std;

int main () {
    int p, k, brz = 0, h;
    cin >> p >> k;
    while(p <= k) {
        h = p;
        while(h != 2) {
            if(h % 2 == 0) {
                h /= 2;
                brz++;
            }
            if(h % 2 != 0) {
                h *= 3;
                h++;
                brz++;
            }
        }
        p++;
    }
    cout << brz;
    return 0;
}
