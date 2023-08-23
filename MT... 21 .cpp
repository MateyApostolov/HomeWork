#include <iostream>
using namespace std;

int main () {
    int a, b;
    cin >> a >> b;
    char s, c;
    cin >> s >> c;
    for (int r = 0; r < a; r++) {
        for (int i = 0; i < b; i++) {
            if (r == 0 || r == a - 1) {
                cout << s;
            } else {
                if (i == 0 || i == b - 1) {
                    cout << s;
                } else {
                    cout << c;
                }
            }
        }
        cout << endl;
    }

    return 0;
}

