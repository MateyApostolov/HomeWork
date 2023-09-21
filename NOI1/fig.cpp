#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    for (int r = 1; r <= n; r++) {
        for (int k = 1; k <= n; k++) {
            if (k > r) {
                cout << " ";
            } else {
                if (k > 1 && k < r && r < n) {
                    cout << ". ";
                } else {
                    cout << "* ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}
