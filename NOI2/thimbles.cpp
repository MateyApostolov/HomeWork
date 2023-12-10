#include <iostream>
using namespace std;

int main () {
    char b;
    int t = 1;
    while (b != '.') {
        cin >> b;
        if(b == 'A' && t == 1) {
            t = 2;
            continue;
        }
        if(b == 'A' && t == 2) {
            t = 1;
            continue;
        }
        if(b == 'B' && t == 2) {
            t = 3;
            continue;
        }
        if(b == 'B' && t == 3) {
            t = 2;
            continue;
        }
        if(b == 'C' && t == 1) {
            t = 3;
            continue;
        }
        if(b == 'C' && t == 3) {
            t = 1;
            continue;
        }
    }
    cout << t;

    return 0;
}
