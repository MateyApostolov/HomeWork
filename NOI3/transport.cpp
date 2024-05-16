#include <iostream>
using namespace std;

int main () {
    long long n, m, sum = 0, br = 1;
    cin >> n;
    long long nc[n];
    for(int i = 0; i < n; i++) cin >> nc[i];
    cin >> m;
    for(int i = 0; i < n; i++) {
        if(sum + nc[i] <= m) sum += nc[i];
        else {
            sum = nc[i];
            br++;
        }
    }
    cout << br;

    return 0;
}
