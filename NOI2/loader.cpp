#include <iostream>
using namespace std;

int main () {
    int a, b, n, nc, bra = 0, brb = 0, brab = 0;
    cin >> a >> b >> n;
    for(int i = 0; i < n; i++) {
        cin >> nc;
        if(nc > b) brab++;
        else if(nc > a) brb++;
        else bra++;
    }
    cout << brab + brb + max(0, bra - brb) / 2 + max(0, bra - brb) % 2;
    return 0;
}
