#include <iostream>
using namespace std;

int main () {
    int m, n, s = 0;
    cin >> m >> n;
    while(true) {
        s++;
        if(s % m == 0 && s % n == 0 && s % (n + m) == 0) {
            cout << s / (n + m) * 2;
            break;
        }
    }

    return 0;
}
