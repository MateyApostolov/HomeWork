#include <iostream>
using namespace std;

int main () {
    int n, f;
    cin >> n >> f;
    int m, s, lw = 0, M = 0;
    for(int i = 0; i < n; i++) {
        cin >> m >> s;
        if(M < f) {
            if(M + m >= f) {
                lw += (M + m - f) * 60 + s;
            }
            if(s != 0) {
                M++;
            }
            M += m;
        } else {
            lw += m * 60 + s;
        }

    }
    cout << lw;

    return 0;
}
