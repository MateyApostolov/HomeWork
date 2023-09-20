#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    char a;
    cin >> a;
    for (int r = n; r > 0; r--) {
        for (int i = 0; i < n; i++) {
            if (i < r - 1) cout << " ";
            else cout << a;
        }
        cout << endl;
    }
    return 0;
}


