#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    char s, nak;
    cin >> s >> nak;
    if(nak == '/') {
        for(int i = 1; i < n; i++) {
            for(int x = 0; x <= n - 1; x++) {
                if(x == n - i) cout << s;
                else cout << " ";
            }
            cout << "\n";
        }
        for(int i = 0; i < n; i++) cout << s;
        cout << "\n";
        for(int i = 1; i < n; i++) {
            for(int x = 0; x <= n - 1; x++) {
                if(x == n - i - 1) cout << s;
                else cout << " ";
            }
            cout << "\n";
        }
    } else {
        for(int i = 0; i < n - 1; i++) {
            for(int x = 0; x <= n - 1; x++) {
                if(x == i) cout << s;
                else cout << " ";
            }
            cout << "\n";
        }
        for(int i = 0; i < n; i++) cout << s;
        cout << "\n";
        for(int i = 0; i < n - 1; i++) {
            for(int x = 0; x <= n - 1; x++) {
                if(x == i + 1) cout << s;
                else cout << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
