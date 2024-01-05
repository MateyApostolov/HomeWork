#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool pal(long long n) {
    long long h = 0, h1 = n;
    while(n > 0) {
        h = h * 10 + n % 10;
        n /= 10;
    }
    return h == h1;
}

bool pal1(long long n) {
    string s = to_string(n);
    bool t = true;
    int m = s.size();
    for (int i = 0; i < m/2; i++)
        if (s[i] != s[m - i - 1]) {
            t = false;
            break;
        }
    return t;
}

bool pal2(long long n) {
    string s1 = to_string(n), s2 = s1;
    reverse(s1.begin(), s1.end());
    return s1 == s2;
}


int main () {
    long long t, a, b, c, brpal, nmr, ngr, r, prpal;
    cin >> t;
    for(int i1 = 0; i1 < t; i1++) {
        cin >> a >> b >> c;
        prpal = 0;
        nmr = 50000000;
        ngr = 0;
        brpal = 0;
        for(int i2 = a; i2 <= b; i2 += c) {
            if(pal1(i2)) {
                brpal++;
                if(prpal != 0) {
                    r = i2 - prpal - 1;
                    if(r < nmr) nmr = r;
                    if(r > ngr) ngr = r;
                }
                prpal = i2;
            }
        }
        if(brpal <= 1) cout << brpal << endl;
        else cout << brpal << " " << nmr << " " << ngr << endl;
    }

    return 0;
}
