#include <iostream>
using namespace std;

int main () {
    int n, maxc = 0, br = 0, sum = 0;
    cin >> n;
    int nc[n];
    for(int i = 0; i < n; i++) {
        cin >> nc[i];
        maxc = max(maxc, nc[i]);
    }
    for(int i = 0; i < n; i++) {
        if(nc[i] != maxc) {
            sum += nc[i];
            br++;
        }
    }
    cout << sum << ' ' << br;
    return 0;
}
