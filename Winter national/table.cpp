#include <iostream>
using namespace std;

int main () {
    int n, h, m, o;
    cin >> n;
    m = n / 2 + 1;
    char c = 'm';
    for(int r = 1; r <= n + 1; r++) {
        o = r - 1;
        if (r % 2 == 1) c = 'm';
        else c = 'w';
        for(int k = 1; k <= n + 1; k++) {

            if((r - 1 <= n/2) && (k + o == m || k - o == m)) cout << c;
            else if (k - 1 == r - m) cout << c;
            else if (n + m + 1 - r == k) cout << c;
            else cout << " ";
        }
        cout << endl;
    }

    return 0;
}
