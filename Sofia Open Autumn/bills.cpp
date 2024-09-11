#include <iostream>
using namespace std;

const int maxs = 1000000001;
char brs[maxs];

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int m, n, mc, s, ng = 0;
    cin >> m >> n;
    for(int i = 0; i < m; i++) {
        cin >> mc;
        ng = max(ng, mc);
        brs[mc]++;
    }
    for(int i = 0; i < n; i++) {
        cin >> s;
        brs[s]--;
    }
    for(int i = 0; i <= ng; i++) {
        for(int y = 0; y < brs[i]; y++) {
            cout << i << ' ';
        }
    }

    return 0;
}
