#include <iostream>
using namespace std;

int main () {
    int n, nc, ngnc = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> nc;
        ngnc = max(ngnc, nc);
    }
    cout << ngnc * 2 + 1;
    return 0;
}
