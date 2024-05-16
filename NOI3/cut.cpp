#include <iostream>
using namespace std;

int main () {
    int m, n;
    cin >> m >> n;
    if(m % 2 == 0 || n % 2 == 0) cout << 0;
    else cout << min(m, n);

    return 0;
}
