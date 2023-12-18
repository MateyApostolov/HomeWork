#include <iostream>
using namespace std;

int main () {
    int n, d;
    cin >> n >> d;
    int f = 1, nc, h, obr, br = 0;
    for(int i = 1; i < n; i++) f *= 10;
    nc = f;
    while(nc % d != 0) nc++;
    for(int i = nc; i < f * 10; i += d) {
        h = i;
        obr = 0;
        while(h > 0) {
            obr = obr * 10 + h % 10;
            h /= 10;
        }
        if(obr % d == 0 && obr > nc && obr != i) {
            br++;
       //     cout << i << " " << obr << endl;
        }

    }
    cout << br / 2;


    return 0;
}
