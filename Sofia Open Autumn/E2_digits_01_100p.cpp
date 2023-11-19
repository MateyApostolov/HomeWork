#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int s = n / 100;
    int d = n / 10 % 10;
    int e = n % 10;
    if(s != d && d != e && e != s) {
        int w1 = s * 100 + d * 10 + e;
        int w2 = s * 100 + e * 10 + d;
        int w3 = d * 100 + s * 10 + e;
        int w4 = d * 100 + e * 10 + s;
        int w5 = e * 100 + d * 10 + s;
        int w6 = e * 100 + s * 10 + d;
        cout << w1 + w2 + w3 + w4 + w5 + w6;
        return 0;
    }
    if(s == d && e == d && s == e) {
        cout << s * 100 + d * 10 + e;
        return 0;
    }
    if(s != e && s != d) {
        int w1 = s * 100 + d * 10 + e;
        int w2 = d * 100 + s * 10 + e;
        int w3 = e * 100 + d * 10 + s;
        cout << w1 + w2 + w3;
        return 0;
    }
    if(d != s && d != e) {
        int w1 = s * 100 + d * 10 + e;
        int w2 = d * 100 + s * 10 + e;
        int w3 = e * 100 + s * 10 + d;
        cout << w1 + w2 + w3;
        return 0;
    }
    if(e != s && e != d) {
        int w1 = s * 100 + d * 10 + e;
        int w2 = d * 100 + e * 10 + s;
        int w3 = e * 100 + d * 10 + s;
        cout << w1 + w2 + w3;
        return 0;
    }


    return 0;
}
