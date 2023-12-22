#include <iostream>
using namespace std;

int main () {
    char c;
    int os = 0;
    bool t = true, wn = true;
    while(t) {
        cin >> c;
        if(c == '!') {
            t = false;
            c = '0';
        }
        if(wn && (os * 10 + (c - '0')) / 2 == 0) {
            os = (os * 10 + (c - '0')) % 2;
            wn = false;
            continue;
        }
        cout << (os * 10 + (c - '0')) / 2 << endl;
        os = (os * 10 + (c - '0')) % 2;
        wn = false;
    }

    return 0;
}

