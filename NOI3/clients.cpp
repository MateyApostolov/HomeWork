#include <iostream>
using namespace std;

int main () {
    int n, pkm, pmc, ngch = 0, no = 1, ch;
    cin >> n;
    cin >> pkm >> pmc;
    ch = pkm + pmc;
    for(int i = 2; i <= n; i++) {
        cin >> pkm >> pmc;
        if(ch > pkm) {
            ch = ch - pkm;
        } else {
            ch = 0;
        }
        if(ngch < ch) {
            ngch = ch;
            no = i;
        }
        ch += pkm + pmc;
    }
    cout << no << " " << ngch;


    return 0;
}
