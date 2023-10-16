#include <iostream>
using namespace std;

int main () {
    int br;
    cin >> br;
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    if(br == 2) {
        cout << min(a, min(b, c));
        return 0;
    }
    cout << max(0, a - (n - b) - (n - c));

    return 0;
}
