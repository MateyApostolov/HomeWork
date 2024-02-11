#include <iostream>
using namespace std;

const int maxn = 1001;
int brn[maxn];

int main () {
    int n;
    cin >> n;
    int nc[n];
    for(int i = 0; i < n; i++) {
        cin >> nc[i];
        brn[nc[i]]++;
    }
    if(brn[nc[0]] <= 2 && brn[nc[0]] != 0) cout << nc[0];
    if(brn[nc[0]] > 2) {
        brn[nc[0]] = 0;
        cout << nc[0];
    }
    for(int i = 1; i < n; i++) {
        if(brn[nc[i]] <= 2 && brn[nc[i]] != 0) cout << " " << nc[i];
        if(brn[nc[i]] > 2) {
            brn[nc[i]] = 0;
            cout << " " << nc[i];
        }
    }

    return 0;
}
