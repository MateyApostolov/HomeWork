#include <iostream>
using namespace std;

const int maxn = 300001;
const int maxc = 5;
int s[maxn][maxc];

int main () {
    int n, q, l, h, c, a, b;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> l >> h >> c;
        for(int y = 0; y < maxc; y++) s[i][y] = s[i - 1][y];
        s[i][c - 1] += l * h;
    }
    cin >> q;
    for(int i = 0; i < q; i++) {
        cin >> a >> b >> c;
        cout << s[b][c - 1] - s[a][c - 1] << endl;
    }

    return 0;
}
