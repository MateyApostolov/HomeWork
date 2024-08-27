#include <bits/stdc++.h>
using namespace std;

using num = vector <int>;

num to_num(string s) {
    reverse(s.begin(), s.end());
    num a;
    for(char c:s) {
        a.push_back(c - '0');
    }
    return a;
}

string to_string(num x) {
    string s;
    for(int d:x) {
        s.push_back(char('0' + d));
    }
    reverse(s.begin(), s.end());
    return s;
}

num to_num(long long x) {
    return to_num(to_string(x));
}

ostream& operator<<(ostream& out, const num& a) {
    out << to_string(a);
    return out;
}

istream& operator>>(istream& is, num& a) {
    string s;
    is >> s;
    a = to_num(s);
    return is;
}

bool operator<(num a, num b) {
    string s = to_string(a);
    string t = to_string(b);
    if(s.size() < t.size()) return true;
    if(s.size() > t.size()) return false;
    return s <= t;
}

num mul(num a, num b) {
    int m = a.size();
    int n = b.size();
    num x(m + n);
    for(int i1 = 0; i1 < m; i1++) {
        for(int i2 = 0; i2 < m; i2++) {
            x[i1 + i2] += a[i1] * b[i2];
        }
    }
    int pr = 0;
    for(int i = 0; i < m + n; i++) {
        x[i] = x[i] + pr;
        pr = x[i] / 10;
        x[i] %= 10;
    }
    while(pr > 0) {
        x.push_back(pr % 10);
        pr /= 10;
    }
    while(x.size() > 1 && x.back() == 0) {
        x.pop_back();
    }
    return x;
}


num square (num x) {
    return mul(x, x);
}

long long sqrtnum (num x) {
    long long a = 0;
    long long b = (1LL << 60) + 1;
    while(a < b - 1) {
        long long m = a + (b - a) / 2;
        num s = square(to_num(to_string(m)));
        if(s < x) a = m;
        else b = m;
    }
    return a;
}


int main () {
    string s;
    cin >> s;
    cout << sqrtnum(to_num(s)) << '\n';

}

