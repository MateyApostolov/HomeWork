#include <iostream>
using namespace std;

int main () {
    int n, a, b, c, d, e;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a >> b >> c >> d >> e;
        for(int x = 1; x <= 100; x++) {
            if((x * a) % 100 + (x * b) % 100 + (x * c) % 100 + (x * d) % 100 + (x * e) % 100 == 0) {
                cout << x << "\n";
                break;
            }
        }
    }

    return 0;
}
