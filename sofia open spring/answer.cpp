#include <iostream>
using namespace std;

int main () {
    int n1, n2, s1, d1, e1, s2, d2, e2, s = 0, d, e;
    cin >> n1 >> n2;
    s1 = n1 / 100;
    d1 = n1 / 10 % 10;
    e1 = n1 % 10;
    s2 = n2 / 100;
    d2 = n2 / 10 % 10;
    e2 = n2 % 10;
    e = e1;
    d = max(d1, d2);
    while(s < e || s + e < 7) {
        s += 2;
    }
    if(s == 10) {
        cout  << "0 0 0";
        return 0;
    }
    cout << s << " " << d << " " << e;

    return 0;
}
