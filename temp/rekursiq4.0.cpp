#include <bits/stdc++.h>
using namespace std;



bool is_prime (int num, int del) {
    if(num == 2) return true;
    if(num % del == 0) return false;
    if(del > sqrt(num)) return true;
    else if(del == 2) return is_prime(num, del + 1);
    else return is_prime(num, del + 2);
}

int main () {
    int n;
    cin >> n;
    if(n == 1) cout << "Izkluchenie!";
    else cout << is_prime(n, 2);

    return 0;
}
