#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    char a;
    cin >> a;
    for (int r = n; r >= 0; r--) {
        for (int i = r; i > 0; i--) {
            cout << a;
        }
        cout << endl;
    }
    return 0;
}


