#include <bits/stdc++.h>
using namespace std;

vector <unsigned long long> del;

void find_del (unsigned long long num) {
    double koren = sqrt(num);
    for(unsigned long long i = 1; i < koren; i++) {
        if(num % i == 0) {
            del.push_back(i);
            del.push_back(num / i);
        }
    }
    koren = round(koren);
    if(koren * koren == num) del.push_back(koren);
}

bool is_stranger (unsigned long long num1, unsigned long long num2) {
    vector <unsigned long long> c1;
    vector <unsigned long long> c2;
    unsigned long long h1 = num1, h2 = num2;
    while(h1 > 0) {
        c1.push_back(h1 % 10);
        h1 /= 10;
    }
    reverse(c1.begin(), c1.end());
    while(h2 > 0) {
        c2.push_back(h2 % 10);
        h2 /= 10;
    }
    reverse(c2.begin(), c2.end());
    unsigned long long cif =  min(c1.size(), c2.size());
    for(unsigned long long x = 1; x <= cif; x++) {
        if(c1[x - 1] != c2[x - 1]) {
            if(x % 2 != 0 && c1[x - 1] < c2[x - 1]) return false;
            if(x % 2 != 0 && c1[x - 1] > c2[x - 1]) return true;
            if(x % 2 == 0 && c1[x - 1] < c2[x - 1]) return true;
            if(x % 2 == 0 && c1[x - 1] > c2[x - 1]) return false;
        }
    }
    if(num2 > num1) return true;
    else return false;
}

int main () {
    unsigned long long n, k;
    cin >> n >> k;
    find_del(n);
    sort(del.begin(), del.end());
    pair <unsigned long long, unsigned long long> str_ndel[del.size()];
    for(unsigned long long i = 0; i < del.size(); i++) {
        str_ndel[i].second = del[i];
        str_ndel[i].first = 0;
        unsigned long long str = 0, h = del[i];
        vector <unsigned long long> cstr;
        while(h > 0) {
            cstr.push_back(h % k);
            h /= k;
        }
        reverse(cstr.begin(), cstr.end());
        for(unsigned long long x = 0; x < cstr.size(); x++) {
            str_ndel[i].first *= 10;
            str_ndel[i].first += cstr[x];
        }
        ///cout << str_ndel[i].first << " " << str_ndel[i].second << "\n";
    }
    pair <unsigned long long, unsigned long long> iz;
    iz.first = str_ndel[0].first;
    iz.second = str_ndel[0].second;
    for(unsigned long long i = 1; i < del.size(); i++) {
        ///cout << iz.first << " " << iz.second << "\n";
        if(is_stranger(iz.first, str_ndel[i].first)) {
            iz.first = str_ndel[i].first;
            iz.second = str_ndel[i].second;
        }
    }
    cout << iz.second;
    return 0;
}
