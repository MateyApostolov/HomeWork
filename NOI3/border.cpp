#include <iostream>
using namespace std;

const int maxnp = 1000001;
bool np[maxnp];
int br;

int main () {
    int n, m, mc;
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        cin >> mc;
        np[mc] = true;
    }
    for(int i = 1; i < m; i++) {
        if(!np[i] && !np[i + 1]) br++;
        cout << i << " " << br << "\n";
    }
    cout << br;

    return 0;
}
