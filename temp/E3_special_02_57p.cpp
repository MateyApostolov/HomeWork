#include <bits/stdc++.h>
using namespace std;

int brd (long long a) {
    int d = 0, i;
    for(i = 1; i * i < a; i++) {
        if(a % i == 0) d += 2;
    }
    if(i * i == a) d++;
    return d;
}

int sumc (long long a) {
    int sum = 0;
    while(a > 0) {
        sum += a % 10;
        a /= 10;
    }
    return sum;
}

bool isprime (long long a) {
    for(int i = 2; i * i <= a; i++) {
        if(a % i == 0) return false;
    }
    return true;
}

int main () {
    long long n, a, pr, brprime = 0;
    vector <long long> otp;
    cin >> n;
    cin >> a;
    pr = a;
    for(int i = 1; i < n; i++) {
        cin >> a;
        if(brd(a) < brd(pr) && sumc(a) <= sumc(pr)) otp.push_back(a);
        else pr = a;
    }
    cout << otp.size() << " ";
    for(int i = 0; i < otp.size(); i++) if(isprime(otp[i]) == true) brprime++;
    cout << brprime;
    return 0;
}


