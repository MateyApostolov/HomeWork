#include <iostream>
using namespace std;

int main () {
    char s;
    int brs = 0, ngbr = 0;
    while(cin >> s) {
        if(s != 'a' && s != 'A' && s != 'e' && s != 'E' && s != 'i'
        && s != 'I' && s != 'o' && s != 'O' && s != 'u' && s != 'U' && s != 'y' && s != 'Y') brs++;
        else {
            ngbr = max(brs, ngbr);
            brs = 0;
        }
    }
    ngbr = max(brs, ngbr);
    cout << ngbr;

    return 0;
}
