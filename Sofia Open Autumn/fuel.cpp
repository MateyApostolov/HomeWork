#include <iostream>
using namespace std;

int sumc (int num) {
    int sum = 0;
    while(num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main () {
    int n, k, y, a, b, lv = 0;
    cin >> n >> k >> y >> a >> b;
    for(int i = 0; i < n; i += k) {
        int pr = sumc(i);
        if(pr % y == 0) {
            lv += min(n - i, k) * b;
        } else lv += min(n - i, k) * a;
    }
    cout << lv;
    return 0;
}


