#include <iostream>
using namespace std;

int main () {
    int  N;
    cin >> N;
    int h1, m1, h2, m2, M1, M2;
    int md, mo = 0;
    int dsl = 0;
    int ng = 0;
    for(int i = 0; i < N; i++) {
        cin >> h1 >> m1 >> h2 >> m2;
        M1 = h1 * 60 + m1;
        M2 = h2 * 60 + m2;
        if(M2 > 12 * 60) {
            dsl++;
        }
        if(M2 < M1) {
            M2 += 12 * 60;
            dsl++;
        } else if (M2 <= 12) {
            ng = max(dsl, ng);
            dsl = 0;
        }
        md = M2 - M1;
        mo += md;
    }
    ng = max(dsl, ng);
    if(mo / 60 < 10) {
        cout << "0";
    }
    cout << mo / 60 << ":";
    if(mo % 60 < 10) {
        cout << "0";
    }
    cout << mo % 60 << endl;
    cout << ng;

    return 0;
}
