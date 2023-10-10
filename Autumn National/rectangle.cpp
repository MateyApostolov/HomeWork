#include <iostream>
using namespace std;

int main () {
    long long x, y, d;
    cin >> x >> y >> d;
    long long sm = x * 100 + y;
    long long sma = ((sm / 2) - d) / 2;
    long long smb = sma + d;
    cout << smb / 100 << " " << smb % 100 << endl;
    cout << sma / 100 << " " << sma % 100;

    return 0;
}
