#include <iostream>
using namespace std;

int main () {
    int n, nc, pr, p1, s1, p2 = 0;
    cin >> n;
    cin >> nc;
    pr = nc;
    p1 = 2 * (nc + 1 + 1);
    if(nc != 9) p2 = 2 * (9 - nc + 1);
    s1 = nc + 1;
    ///cout << "\n" << s1 << " " << p1 << "\n" << 10 - s1 << " " << p2 << "\n";
    for(int i = 1; i < n; i++) {
        cin >> nc;
        p1 += 2 * (nc + 1 + 1) - 2 * min(nc + 1, pr + 1);
        if(nc != 9) p2 += 2 * (9 - nc + 1) - 2 * min(9 - nc, 9 - pr);
        s1 += nc + 1;
        pr = nc;
    }
        cout << "\n" << s1 << " " << p1 << "\n" << n * 10 - s1 << " " << p2 << "\n";

    return 0;
}
