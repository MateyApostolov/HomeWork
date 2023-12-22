#include <iostream>
using namespace std;

int sumd(int n) {
    int s = 0;
    while(n > 0) {
         s += n % 10;
         n /= 10;
    }
    return s;
}

int main () {
    int a, b, k, sum = 0, ngsum, n;
    cin >> a >> b >> k;
    for(int i = a; i < a + k; i++) {
        n = i;
        while(n > 0) {
            sum += n % 10;
            n /= 10;
        }
    }
    ngsum = sum;
    for(int i = a + 1; i <= b - k + 1; i++) {
        n = i - 1;
        while(n > 0) {
            sum -= n % 10;
            n /= 10;
        }
        n = i + k - 1;
        while(n > 0) {
            sum += n % 10;
            n /= 10;
        }
        if(ngsum < sum) ngsum = sum;
    }
    cout << ngsum;

    return 0;
}
