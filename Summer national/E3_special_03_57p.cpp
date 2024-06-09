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

int main () {
    long long n, a, pr, bro = 0, brprime = 0, brdel, prbrdel, sum, prsum;
    vector <long long> otp;
    cin >> n;
    cin >> a;
    pr = a;
    prbrdel = brd(a);
    prsum = sumc(a);
    for(int i = 1; i < n; i++) {
        cin >> a;
        brdel = brd(a);
        sum = sumc(a);
        if(brdel < prbrdel && sum <= prsum) {
            bro++;
            if(brdel == 2) brprime++;
        }
        else {
            pr = a;
            prbrdel = brdel;
            prsum = sum;
        }
    }
    cout << bro << " " << brprime;;
    return 0;
}


