#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Number ? ";
    cin >> n;
    int s = 0, d, c = 0, t = 0, ct = 0, p = 0;
    for (int i = 0; i < n; i++) {
        cin >> d;
        s = s + d;
        if (d % 2 == 0) {
            c++;
        }
        if (d % 3 == 0) {
            t++;
        }
        if (d % 4 == 0) {
            ct++;
        }
        if (d % 5 == 0) {
            p++;
        }
    }
    cout << s << " " << c << " " << t << " " << ct << " " << p;
    return 0;

}
