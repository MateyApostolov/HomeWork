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
    int a, b, k, sum = 0, ngsum, h, r;
    cin >> a >> b >> k;
    queue<int> Q;
    h = sumd(a-1);
    for(int i = a; i < a + k; i++) {
        if(i % 10 != 0) h++;
        else h = sumd(i);
        sum += h;
        Q.push(h);
    }
    ngsum = sum;
    h = sumd(a + 1 + k - 2);
    for(int i = a + 1; i <= b - k + 1; i++) {
        if((i + k - 1) % 10 != 0) h++;
        else h = sumd(i + k - 1);
        Q.push(h);
        r = Q.front();
        Q.pop();
        sum = sum - r + h;
        if(ngsum < sum) ngsum = sum;
    }
    cout << ngsum;

    return 0;
}
