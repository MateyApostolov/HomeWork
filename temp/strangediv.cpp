#include <bits/stdc++.h>
using namespace std;

vector <int> del;

void find_del (int num) {
    double koren = sqrt(num);
    for(int i = 1; i < koren; i++) {
        if(num % i == 0) {
            del.push_back(i);
            del.push_back(num / i);
        }
    }
    if(koren * koren == num) del.push_back(koren);
}

bool is_stranger (long long num1, long long num2) {
    vector <int> c1, c2;
    long long h1 = num1, h2 = num2;
    while(h1 > 0) {
        c1.push_back(h1 % 10);
        c1.push_back(h1 / 10);
    }
}

int main () {
    long long n, k;
    cin >> n >> k;
    find_del(n);
    sort(del.begin(), del.end());
    pair <long long, long long> str_ndel[del.size()];
    for(int i = 0; i < del.size(); i++) {
        str_ndel[i].second = del[i];
        str_ndel[i].first = 0;
        long long str = 0, h = del[i];
        vector <int> cstr;
        while(h > 0) {
            cstr.push_back(h % k);
            h /= k;
        }
        reverse(cstr.begin(), cstr.end());
        for(int x = 0; x < cstr.size(); x++) {
            str_ndel[i].first *= 10;
            str_ndel[i].first += cstr[x];
        }
    }
    pair <long long, long long> iz;
    iz.first = str_ndel[0].first;
    iz.second = str_ndel[0].second;
    for(int i = 1; i < del.size(); i++) {
        if(is_stranger(iz.first, str_ndel[i].first)) {
            iz.first = str_ndel[i].first;
            iz.second = str_ndel[i].second;
        }
    }
    cout << iz.second;
    return 0;
}
