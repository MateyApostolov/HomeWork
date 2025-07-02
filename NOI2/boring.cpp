#include <iostream>
using namespace std;

int main () {
    int n, k, num, h1 = -1, brc = 0;
    cin >> n >> k;
    num = k;
    while(num > 0) {
        brc++;
        if(num < 10) h1 = num;
        num /= 10;
    }
    for(int i = 0; i < brc; i++) {
        num *= 10;
        num += h1;
    }
    if(num <= k) cout << brc * h1;
    else cout << brc * h1 - 1;
    return 0;
}
