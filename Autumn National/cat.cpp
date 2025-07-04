#include <iostream>
using namespace std;

int main () {
    int h, m, n, mn;
    cin >> h >> m >> n;
    mn = (h * 60 + m + n) % (60 * 24);
    cout << mn / 60 / 10 << mn / 60 % 10 << ':' << mn % 60 / 10 << mn % 60 % 10;

    return 0;
}
