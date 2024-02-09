#include <iostream>
using namespace std;

const int maxm = 100001;
int brm[maxm];

int main () {
    int n, nc, brt = 0, h = 1;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> nc;
        brm[nc]++;
        if(nc % 2 == 0 && brm[nc / 2] >= 2) {
            brt++;
            brm[nc]--;
            brm[nc / 2] -= 2;
        } else if(nc * 2 <= maxm && brm[nc * 2] >= 1 && brm[nc] >= 2) {
            brt++;
            brm[nc] -= 2;
            brm[nc * 2]--;
        }
    }
    cout << brt << " " << n - brt * 3 << "\n";
    if(n - brt * 3 == 0) {
        cout << "NONE";
        return 0;
    }
    while(brm[h] == 0) h++;
    cout << h << " ";
    h = maxm;
    while(brm[h] == 0) h--;
    cout << h;

    return 0;
}
