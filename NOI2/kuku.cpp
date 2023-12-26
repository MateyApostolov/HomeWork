#include <iostream>
using namespace std;

int main () {
    int nh, nm, kh, km, nM, kM, br = 0;
    cin >> nh >> nm >> kh >> km;
    nM = nh * 60 + nm;
    kM = kh * 60 + km;
    if(kM < nM) kM += (24 * 60);
    while(nM % 30 != 0) nM++;
    for(int i = nM; i <= kM; i += 30) {
        if(i % 60 == 30) br++;
        else br += (i / 60) % 12;
        if(i / 60 % 12 == 0 && i % 60 == 0) br += 12;
        ///cout << i / 60 << ":" << i%60 << " " << br << endl;
    }
    cout << endl << br;

    return 0;
}
