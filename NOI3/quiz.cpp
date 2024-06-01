#include <iostream>
using namespace std;

bool isPrime (long long n) {
    if(n == 1) return false;
    for(int i = 2; i * i <= n; i++) if(n % i == 0) return false;
    return true;
}

int main () {
    long long n, h = 1, helph, br0;
    cin >> n;
    while(true) {
        helph = h;
        br0 = 1;
        while(helph > 0) {
            helph /= 10;
            br0 *= 10;
        }
        if(isPrime(n * br0 + h)) break;
        h += 2;
    }
    cout << n * br0 + h;
    return 0;
}
