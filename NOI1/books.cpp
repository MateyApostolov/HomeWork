#include <iostream>
using namespace std;

int main () {
    int h1, th1;
    cin >> h1 >> th1;
    int h2, th2;
    cin >> h2 >> th2;
    int h3, th3;
    cin >> h3 >> th3;
    int h4, th4;
    cin >> h4 >> th4;
    int c1 = h1 * 10000 + th1;
    int c2 = h2 * 10000 + th2;
    int c3 = h3 * 10000 + th3;
    int c4 = h4 * 10000 + th4;
    int ng = max(c1, max(c2, max(c3, c4)));
    int nm = min(c1, min(c2, min(c3, c4)));
    int s1, s2;
    if (c1 != ng && c1 != nm && c2 != ng && c2 != nm) {
        s1 = c1;
        s2 = c2;
    }
    if (c1 != ng && c1 != nm && c3 != ng && c3 != nm) {
        s1 = c1;
        s2 = c3;
    }
    if (c1 != ng && c1 != nm && c4 != ng && c4 != nm) {
        s1 = c1;
        s2 = c4;
    }
    if (c2 != ng && c2 != nm && c3 != ng && c3 != nm) {
        s1 = c2;
        s2 = c3;
    }
    if (c2 != ng && c2 != nm && c4 != ng && c4 != nm) {
        s1 = c2;
        s2 = c4;
    }
    if (c3 != ng && c3 != nm && c4 != ng && c4 != nm) {
        s1 = c3;
        s2 = c4;
    }

    cout << ng / 10000 << " " << ng % 10000 << endl;
    cout << max(s1, s2) / 10000 << " " << max(s1, s2) % 10000 << endl;
    cout << min(s1, s2) / 10000 << " " << min(s1, s2) % 10000 << endl;
    cout << nm / 10000 << " " << nm % 10000 << endl;

    return 0;
}
