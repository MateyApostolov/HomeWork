#include <bits/stdc++.h>
using namespace std;

bool ispr(int n) {
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0) return false;
    return true;
}

int main () {
    int n, c = 2, h = c, k;
    cin >> n;
    //cout << ispr(n); return 0;
    n--;
    while(n != 0) {
        c += h;
        k = c/h;
        if(ispr(k)) h = k;
        n--;
        cout << c << "\n";
    }
    cout << c;

    return 0;
}
