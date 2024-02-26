#include <iostream>
using namespace std;

int main () {
    int n, ngbr = 0;
    cin >> n;
    int nc[n];
    for(int i = 0; i < n; i++) cin >> nc[i];
    for(int i = 0; i < n - 3; i++)
        for(int j = i + 2; j < n - 1; j++)
            ngbr = max(ngbr, nc[i] + nc[i + 1] + nc[j] + nc[j + 1]);
    cout << ngbr;

    return 0;
}
