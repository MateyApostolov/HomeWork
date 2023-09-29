#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    double d;
    int l;
    int nml = 1000000;
    double nmd = 151;
    int ni = 0;
    for(int i = 1; i <= n; i++) {
        cin >> d >> l;
        if (l < nml) {
            nml = l;
            nmd = d;
            ni = i;
        }
        if (l == nml) {
            if (d < nmd) {
                nmd = d;
                ni = i;
            }
        }
    }
    cout << ni << endl;
    cout << nml;

    return 0;
}
