#include <iostream>
using namespace std;

int main () {
    int h, b, help;
    cin >> h >> b;
    help = h - b;
    char a = 92;
    for(int r = 0; r < h; r++) {
         for(int k = 0; k < h * 2; k++) {
            if(h - r - 1 <= k && k < h) cout << "/";
            else {
                if(h + r >= k && k >= h) cout << a;
                else cout << " ";
            }
        }
        cout << "\n";
    }
    for(int r = 0; r < b; r++) {
         for(int k = 0; k < h * 2; k++) {
            if(k >= help && k <= 2 * h - help - 1) cout << "=";
            else cout << " ";
        }
        cout << "\n";
    }

    return 0;
}
