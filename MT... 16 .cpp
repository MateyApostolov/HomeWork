#include <iostream>
using namespace std;

int main () {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int m = min (a, min(b, min(c ,min(d, e))));
    int M = max (a, max(b, max(c ,max(d, e))));
    for (int r = 0; r < m; r++) {
        for (int i = 0; i < M; i++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
