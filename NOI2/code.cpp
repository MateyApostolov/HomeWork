#include <iostream>
using namespace std;

int main () {
    char wp = ' ', pr = ' ';
    int c = 1, brc = 0;
    while(true) {
        cin >> wp;
        if(wp == '.') break;
        if(wp == pr) c++;
        else {
            if(c > 2) {
                int br = 0;
                brc += (c - 1);
                while(c > 0) {
                    br++;
                    c /= 10;
                }
                brc -= br;
            }
            c = 1;
        }
        pr = wp;
    }
    if(c > 2) {
        int br = 0;
        brc += (c - 1);
        while(c > 0) {
            br++;
            c /= 10;
        }
        brc -= br;
    }
    cout << brc;

    return 0;
}
