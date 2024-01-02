#include <iostream>
using namespace std;

int main () {
    long long n, h, sum = 0, brc = 0, allsum = 0;
    cin >> n;
    h = n;
    while (h > 0) {
        brc++;
        allsum += h % 10;
        h /= 10;
    }
    h = n;
    int nc[brc];
    for(int i = brc - 1; i >= 0; i--) {
        nc[i] = h % 10;
        h /= 10;
    }
    for(int i = 0; i < brc; i++) {
        sum += nc[i];
        if(sum == allsum - sum) {
            cout << nc[i] << " " << i + 1;
            return 0;
        }
    }
    cout << 0;

    return 0;
}
