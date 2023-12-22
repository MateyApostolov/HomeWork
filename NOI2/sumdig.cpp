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
    int a, b, k, sum = 0, ngsum;
    cin >> a >> b >> k;
    for(int i = a; i < a + k; i++) sum += sumd(i);
    ngsum = sum;
    for(int i = a + 1; i <= b - k + 1; i++) {
        sum = sum - sumd(i - 1) + sumd(i + k - 1);
        if(ngsum < sum) ngsum = sum;
    }
    cout << ngsum;

    return 0;
}
