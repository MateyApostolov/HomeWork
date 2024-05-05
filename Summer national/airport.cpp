#include <iostream>
using namespace std;

const int maxc = 3000;
const int maxt = 30000;

int main () {
    int n, maxbr = 0;
    cin >> n;
    int a[n], b[n], ncc[n];
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i] >> ncc[i];
    for(int i = 0; i < maxc; i++) {
        int t[maxt] = {0};
        for(int x = 0; x < n; x++) if(i == ncc[x]) for(int y = a[x]; y <= b[x]; y++) t[y]++;
        for(int z = 0; z < maxt; z++) maxbr = max(maxbr, t[z]);
    }
    cout << maxbr;
    return 0;
}
