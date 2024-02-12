#include <iostream>
using namespace std;

int main () {
    int a, b, br = 0, h, d = 2, h1;
    cin >> a >> b;
    for(int i = a; i <= b; i++) {
        if(i == 2) {
            continue;
        }
        if(i < 8) {
            br++;
            continue;
        }
        h = i;
        while(h > 1) {
            if(h % d == 0) {
                while(h % d == 0) {
                    h /= d;
                }
                br++;
                h1++;
            } else {
                d++;
            }
        }
        if(h1 != 1) {
            br++;
        }
        h1 = 0;
        d = 2;
    }
    cout << br;

    return 0;
}
