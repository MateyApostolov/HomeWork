#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    for(int r = 1; r <= n; r++) {
        for(int k = 1; k <= n; k++) {
            if(k == n - (r - 1)) cout << "*";
            else if(r == k) cout << "*";
            else if(r == n / 2 + 1) cout << "*";
            else if(k == n / 2 + 1) cout << "*";
            else cout << "." ;
        }
        cout << endl;
    }

    return 0;
}
