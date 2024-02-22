#include <iostream>
using namespace std;

int main () {
    char s, nms, ngs, pr = ' ';
    int nmbr = 301, ngbr = 0, br = 1;
    cin >> s;
    while(s != '.') {
        if(s == pr) {
            br++;
            cin >> s;
            continue;
        }
        if(pr - '0' > 9 && br > ngbr) {
           ngbr = br;
           ngs = pr;
        }
        if(pr - '0' > 9 && br > 0 && br < nmbr) {
           nmbr = br;
           nms = pr;
        }
        br = 1;
        pr = s;
        cin >> s;
    }
    if(pr - '0' > 9 && br > ngbr) {
       ngbr = br;
       ngs = pr;
    }
    if(pr - '0' > 9 && br > 0 && br < nmbr) {
       nmbr = br;
       nms = pr;
    }
    cout << ngbr << " " << ngs << "\n" << nmbr << " " << nms;
    return 0;
}
