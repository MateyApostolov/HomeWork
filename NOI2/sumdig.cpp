#include <iostream>
#include <queue>
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
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    int a, b, k, sum = 0, ngsum, h, r;
    cin >> a >> b >> k;
    queue<int> Q;
    for(int i = a; i < a + k; i++) {
        h = sumd(i);
        sum += h;
        Q.push(h);
    }
    ngsum = sum;
    for(int i = a + 1; i <= b - k + 1; i++) {
        h = sumd(i + k - 1);
        Q.push(h);
        r = Q.front();
        Q.pop();
        sum = sum - r + h;
        if(ngsum < sum) ngsum = sum;
    }
    cout << ngsum;

    return 0;
}
