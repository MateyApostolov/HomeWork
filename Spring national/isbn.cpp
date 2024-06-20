#include <iostream>
using namespace std;

int main () {
    char s;
    int alsum = 0, h, hi = 0;
    for(int i = 0; i < 10; i++) {
        cin >> s;
        if(s == '*') {
            h = 10 - i;
        } else {
            if(s == 'X') {
                alsum += 10 * (10 - i);
            } else {
                alsum += (s - '0') * (10 - i);
            }
        }
    }
    while(true) {
        if((alsum + hi * h) % 11 == 0) {
            if(hi == 10) cout << "X";
            else cout << hi;
            break;
        }
        hi++;
    }
    return 0;
}
