#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    char a, b;
    cin >> a >> b;
    for (int r = 0; r < n; r++) {
        for (int k = 0; k < n; k++) {
            if (r + k == n - 1) {
                cout << a;
            } else {
                if (r == k) {
                    cout << a;
                } else {
                    if (r == 0 || r == n-1 || k == 0 || k == n - 1)
                        cout << a;
                    else {
                        cout << b;
                    }
                }
            }

        }
        cout << endl;
    }

    return 0;
}
