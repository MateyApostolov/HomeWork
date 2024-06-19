#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    int nc[n];
    for(int i = 0; i < n; i++) cin >> nc[i];
    for(int i = 0; i < n; i++) {
        for(int x = 0; x < n; x++)
            if(nc[x] == nc[i] && x != i) {
                cout << nc[i] << "\n" << i + 1 << " " << x + 1;
                return 0;
            }
    }
    cout << "No";
    return 0;
}
