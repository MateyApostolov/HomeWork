#include <iostream>
using namespace std;

int main () {
    long long n, ngsum = 0;
    cin >> n;
    long long nc[n];
    for(int i = 0; i < n; i++) cin >> nc[i];
    for(int i = 0; i < n - 2; i++) ngsum = max(ngsum, nc[i] + nc[i + 1] + nc[i + 2]);
    ngsum = max(ngsum, nc[n - 2] + nc[n - 1] + nc[0]);
    ngsum = max(ngsum, nc[n - 1] + nc[0] + nc[1]);
    cout << ngsum;
    return 0;
}
