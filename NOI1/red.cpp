#include <iostream>
using namespace std;

const int maxc = 100001;
int brc[maxc];

int main () {
    int n, k, h;
    cin >> n >> k;
    int lc[n + 1], nc[n + 1];
    for(int i = 1; i <= n; i++) {
        cin >> nc[i];
        lc[i] = brc[nc[i]];
        brc[nc[i]]++;
    }
    for(int i = 1; i <= n; i++) cout << lc[i] << " " << nc[i] << "\n";
    for(int i = 1; i <= 5; i++) cout << brc[i] << " ";
    cout << "\n";
    for(int i = 0; i < k; i++) {
        cin >> h;
        cout << lc[h] << " " << brc[nc[h]] - lc[h] - 1 << '\n';
    }
    return 0;
}
