#include <iostream>
using namespace std;

bool prime (int n) {
    bool pr = true;
    if(n == 0 || n == 1) return false;
    if(n == 2) return true;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) pr = false;
    }
    return pr;
}

int main () {
    int n, nc, br = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> nc;
        if(prime(nc)) br++;
    }
    cout << br;

    return 0;
}
