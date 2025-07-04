#include <iostream>
using namespace std;

int main () {
    long long n, k, num, brc, ans = 0, brk = 0, h1;
    cin >> n >> k;
    num = k;
    while(num > 0) {
        brk++;
        if(num < 10) h1 = num;
        num /= 10;
    }
    for(int i = 1; i <= 9; i++) {
        if(i == h1) break;
        num = 0;
        brc = 0;
        while(num < n) {
            num *= 10;
            num += i;
            if(num > n) break;
            brc++;
        }
        ans += brc;
    }
    cout << ans + brk;
    return 0;
}
