#include <iostream>
using namespace std;

int main () {
    int n, br = 0, h = 3;
    cin >> n;
    for(int i = 4; i <= n; i += 3) {
        if((n - i) % h == 0) br++;
        h += 2;
    }
    cout << (br + 1) / 2;

    return 0;
}
