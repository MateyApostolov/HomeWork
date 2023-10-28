#include <iostream>
using namespace std;

int main () {
    int h, m, dh, dm, c;
    cin >> h >> m >> dh >> dm >> c;
    int M = 60 * h + m + 60 * dh + dm;
    M = M % (12 * 60);
    if(c == 1) {
        cout << M / 60 << " " << M % 60;
    } else {
        int iz1 = (M / 60) * 5 + (M % 60) / 12;
        if(iz1 >= 60) iz1 -= 60;
        if(M % 60 == 0 || M % 60 == 12 || M % 60 == 24 || M % 60 == 36 || M % 60 == 48) {
            cout << "@ ";
            cout << iz1;
        } else {
            cout << iz1;
            iz1++;
            if(iz1 >= 60) iz1 -= 60;
            cout << " " << iz1;
        }
    }

    return 0;
}
