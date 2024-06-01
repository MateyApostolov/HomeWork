#include <iostream>
using namespace std;

bool isPrime (long long n) {
    if(n == 1) return false;
    for(int i = 2; i * i <= n; i++) if(n % i == 0) return false;
    return true;
}

int main () {
    long long n;
    cin >> n;
    for(long long j = 10; j < 1000000000; j *=10 )
        for(long long i = n * j + 1; i < (n + 1) * j; i += 2)
            if(isPrime(i)) {
                cout << i;
                return 0;
            }
    return 0;
}
