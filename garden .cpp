#include <iostream>
using namespace std;

int main () {
    int w1, h1, w2, h2, w3;
    cin >> w1 >> h1 >> w2 >> h2;
    w3 = max(w1,w2);
    cout << (2 * (h1 + h2 + w3)) + 4;

    return 0;
}
 int h1, w1, w2, h2, w;
    cin >> h1 >> w1 >> h2 >> w2;
    w = max(w1,w2);
    cout << (2 * (h1 + h2 + w)) + 4;
