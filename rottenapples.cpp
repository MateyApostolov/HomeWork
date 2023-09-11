#include <iostream>
using namespace std;

int main () {
    int N, T, M;
    cin >> N >> T >> M;
    if (M == 2) {
        int ng1, ng2;
        cin >> ng1 >> ng2;
        if (ng1 > ng2) {
            swap (ng1, ng2);
        }
        int r1 = ng1 - 1, r2 = ng2 - ng1 - 1, r3 = N - ng2;
        r1 = r1 - 1 * T;
        r2 = r2 - 2 * T;
        r3 = r3 - 1 * T;
        cout << max(0,r1) + max(0,r2) + max(0,r3);
    } else {
        int ng1, ng2, ng3;
        cin >> ng1 >> ng2 >> ng3;
        int h1 = min(ng1, min(ng2, ng3));
        int h2;
        int h3 = max(ng1, max(ng2, ng3));
        if (ng1 != h1 && ng1 != h3) {
            h2 = ng1;
        }
        if (ng2 != h1 && ng2 != h3) {
            h2 = ng2;
        }
        if (ng3 != h1 && ng3 != h3) {
            h2 = ng3;
        }
        int r1 = h1 - 1, r2 = h2 - h1 - 1, r3 = h3 - h2 - 1, r4 = N - h3;
        r1 = r1 - 1 * T;
        r2 = r2 - 2 * T;
        r3 = r3 - 2 * T;
        r4 = r4 - 1 * T;
        cout << max(0, r1) + max(0, r2) + max(0, r3) + max(0, r4);
    }
    return 0;
}
