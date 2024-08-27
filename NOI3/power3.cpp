#include <iostream>
using namespace std;

const int maxc = 1000000;
int brnc[maxc], pref[maxc];

void eratosten () {
    for(int i = 2; i < maxc; i++) {
        if(brnc[i] == 0) {
            for(int d = i; d < maxc; d += i) {
                brnc[d]++;
            }
        }
    }
}

int main () {
    int t, a, b;
    cin >> t;
    eratosten();
    pref[0] = 0;
    for(int i = 1; i < maxc; i++) {
        if(brnc[i] == 3) pref[i] = pref[i - 1] + 1;
        else pref[i] = pref[i - 1];
    }
    for(int i1 = 0; i1 < t; i1++) {
        cin >> a >> b;
        cout << pref[b] - pref[a - 1] << '\n';
    }

    return 0;
}
