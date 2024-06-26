#include <iostream>
using namespace std;

int main () {
    string s;
    cin >> s;
    int brp = 1, ngbr = 0;
    char c = s[0], izc;
    for(int i = 1; i < s.size(); i++) {
        if(s[i] == s[i - 1]) {
            c = s[i];
            brp++;
        }
        else {
            if(ngbr < brp) {
                ngbr = brp;
                izc = c;
            }
            if(ngbr == brp) {
                if(izc < c) {
                    ngbr = brp;
                    izc = c;
                }
            }
            brp = 1;
        }
    }
    if(ngbr < brp) {
        ngbr = brp;
        izc = c;
    }
    if(ngbr == brp) {
        if(izc < c) {
            ngbr = brp;
            izc = c;
        }
    }
    cout << ngbr << " " << izc;
    return  0;
}
