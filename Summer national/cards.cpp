#include <iostream>
using namespace std;

const int maxnc = 100001;
int brnc[maxnc];

int main () {
    int n, nc, brd = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> nc;
        brnc[nc]++;
    }
    for(int i = 1; i < maxnc; i++) brd += brnc[i] / 2;
    if(brd % 2 == 0) cout << 2;
    else cout << 1;
    return 0;
}
