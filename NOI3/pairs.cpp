#include <iostream>
using namespace std;

int main () {
    int d, n, m, brp = 0;
    cin >> d;
    cin >> n;
    int nc[n];
    for(int i = 0; i < n; i++) cin >> nc[i];
    cin >> m;
    int mc[m];
    for(int i = 0; i < m; i++) cin >> mc[i];
    for(int x = 0; x < n; x++)
        for(int y = 0; y < m; y++)
            if((nc[x] + mc[y]) % d == 0) brp++;
    cout << brp;

    return 0;
}
