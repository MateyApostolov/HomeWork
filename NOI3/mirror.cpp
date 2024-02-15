#include <iostream>
using namespace std;

int fogl (int n) {
    int h = n, ogl = 0;
    while(h > 0) {
        ogl = ogl * 10 + h % 10;
        h /= 10;
    }
    return ogl;
}

bool isPrime (int n) {
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

int main () {
    int m, n, br = 0;
    cin >> m >> n;
    if(m > n) swap(m, n);
    for(int i = m; i <= n; i++) {
        if(isPrime(i) && isPrime(fogl(i))) br++;
    }
    cout << br;

    return 0;
}
