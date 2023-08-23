#include <iostream>
using namespace std;

int main () {
    int h1, m1, h2, m2;
    cout << "The first hour ? ";
    cin >> h1;
    cout << "The first minutes ? ";
    cin >> m1;
    cout << "The second hour ? ";
    cin >> h2;
    cout << "The second minutes ? ";
    cin >> m2;
    int tm1, tm2;
    tm1 = h1 * 60 + m1;
    tm2 = h2 * 60 + m2;
    int tM = tm1 + tm2;
    int th, tm;
    th = tM / 60;
    tm = tM % 60;
    th = th % 24;
    if (th < 10) {
        cout << 0;
    }
    cout << th << ":";
    if (tm < 10) {
        cout << 0;
    }
    cout << tm;

    return 0;

}
