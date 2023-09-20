#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int s = 0, m = 1, a, g = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a;
        s = s + a;
        m = m * a;
        if (g < a) g = a;
    }
    cout << s << " " << m << " " << g << " " << 1.0 * s / n;
    return 0;
}
