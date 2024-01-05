#include <iostream>
using namespace std;

int main () {
    long long a, b, c, brc = 0;
    cin >> a >> b >> c;
    while(true) {
        if(a - 1 >= 0 && b - 2 >= 0 && c - 1 >= 0) {
            brc += 4;
            a -= 1;
            b -= 2;
            c -= 1;
        } else {
            if(a == 0) break;
            if(b == 1 && c > 0) {
                brc += 3;
                break;
            }
            if(b == 1) {
                brc += 2;
                break;
            }
            if(b == 2 && c > 0) {
                brc += 4;
                break;
            }
            if(b == 2) {
                brc += 2;
                break;
            }
            brc += 2;
            break;
        }
    }
    cout << brc;

    return 0;
}
