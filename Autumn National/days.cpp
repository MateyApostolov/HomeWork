#include <iostream>
using namespace std;

int main () {
    int p, n, w, d, s;
    cin >> p >> n;
    w = (n - 1) / 7;
    d = (p + (n - 1) % 7) % 7;
    s = (n - 7 + p) / 7 * 2;
    if(p <= 3) s += 2;
    else if(p <= 6) s++;
    if((p + (n - 1) % 7) % 7 >= 6) s += 2;
    else if((p + (n - 1) % 7) % 7 >= 3) s++;
    cout << w << ' ' << d << ' ' << s;

    return 0;
}
