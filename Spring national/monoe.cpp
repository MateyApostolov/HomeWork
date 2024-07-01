#include <bits/stdc++.h>
using namespace std;

vector <long long> ms;

long long mono (long long num) {
    int brc = 0, pc;
    long long h, m1 = 0, m2 = 0;
    h = num;
    while(h > 0) {
        pc = h % 10;
        h /= 10;
        brc++;
    }
    for(int i = 0; i < brc; i++) {
        m1 = m1 * 10 + pc - 1;
        m2 = m2 * 10 + pc;
    }
    if(m1 == 0) for(int i = 0; i < brc - 1; i++) m1 = m1 * 10 + 9;
    if(m2 > num) return m1;
    else return m2;
}

void razbiwane() {
    bool t = false;
    for(int i = 0; i < ms.size(); i++) {
        int h = ms[i] % 10;
        if(h != 1) {
            long long help = ms[i], brc = 0, med = 0;
            while(help > 0) {
                help /= 10;
                brc++;
            }
            for(int x = 0; x < brc; x++) med = med * 10 + 1;
            ms.push_back(med);
            ms[i] -= med;
            t = true;
            break;
        }
    }
    if(!t) {
        ///cout << "||";
        int i = 0;
        while(ms[i] == 1) i++;
        if(i < ms.size()) {
            long long help = ms[i], m = 0;
            while(help > 10) {
                help /= 10;
                m = m * 10 + 1;
            }
            ///cout << ms[i] << " " << m << "\n";
            ms[i] = 1;
            for(int i = 0; i < 10; i++) ms.push_back(m);
        }
    }
}

void obed () {
    sort(ms.begin(), ms.end());
    int i = 0;
    while(true) {
        if(ms[i] == ms[i + 1] && ms[i] % 10 <= 4) {
            ms[i] *= 2;
            ms.erase(ms.begin() + i + 1);
            return;
        }
        i++;
        if(i == ms.size() - 1) break;
    }
}

int main () {
    long long n, m;
    cin >> n;
    ///cout << mono(n);
    while(n > 0) {
        m = mono(n);
        n -= m;
        ms.push_back(m);
    }
    while(ms.size() < 10) razbiwane();
    while(ms.size() > 10) obed();
    for(int i = 0; i < ms.size() - 1; i++) cout << ms[i] << " ";
    cout << ms[ms.size() - 1];
    return 0;
}
