#include <bits/stdc++.h>
using namespace std;

int const maxn = pow(10, 7) + 1;
bool sieve[maxn];
vector <int> primen;
vector <pair<int, int>> kan;
vector <int> del;

void eratosten () {
    for(int d = 2; d * d < maxn; d++) {
        if(!sieve[d]) {
            for(int h = d * d; h < maxn; h += d) {
                sieve[h] = true;
            }
        }
    }
    return;
}

void set_p () {
    for(int i = 2; i < maxn; i++) {
        if(!sieve[i]) {
            primen.push_back(i);
        }
    }
    return;
}

void kan_razlagane (int num) {
    int h = 0;
    while(num > 1) {
        if(num % primen[h] == 0) {
            kan.push_back({primen[h], 0});
        }
        while(num % primen[h] == 0) {
            num /= primen[h];
            kan[kan.size() - 1].second++;
        }
        h++;
    }
}

void set_del () {
    int s = kan.size(), st[s] = {};
    while(true) {
        int d = 1;
        for(int i = 0; i < s; i++) {
            d *= pow(kan[i].first, st[i]);
        }
        del.push_back(d);
        int h = s - 1;
        st[h]++;
        while(st[h] > kan[h].second) {
            st[h] = 0;
            h--;
            if(h < 0) return;
            st[h]++;
        }
    }
}

int main () {
    int n = 2162160;
    eratosten();
    set_p();
    kan_razlagane(n);
    for(int i = 0; i < kan.size(); i++) {
        cout << kan[i].first << '^' << kan[i].second << " + ";
    }
    set_del();
    cout << '\n' << del.size() << '\n';
    sort(del.begin(), del.end());
    for(int i = 0; i < del.size(); i++) {
        cout << del[i] << ' ';
    }

    return 0;
}
