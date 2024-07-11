#include <iostream>
using namespace std;

int main () {
    int n, m, nc, sumh = 0, ngbr = 0, ind = 0, izn = -1, izk = -1;
    cin >> n >> m;
    pair <int, int> nk[n];
    pair <int, int> mk[m];
    for(int i = 0 ; i < n; i++) {
        cin >> nc;
        nk[i].first = sumh;
        sumh += nc;
        nk[i].second = sumh;
    }
    sumh = 0;
    for(int i = 0 ; i < m; i++) {
        cin >> nc;
        mk[i].first = sumh;
        sumh += nc;
        mk[i].second = sumh;
    }
    for(int i = 0; i < n; i++) {
        int br = 0, ns = -1, ks;
        for(int x = 0; x < m; x++) {
            if((mk[x].first < nk[i].second && mk[x].first >= nk[i].first) ||
               (mk[x].second <= nk[i].second && mk[x].second > nk[i].first)) {
                if(ns == -1) ns = x + 1;
                ks = x + 1;
                br++;
            }
        }
        cout << i + 1 << " " << br << " " << ns << " " << ks << "\n";
        if(ngbr < br) {
            ngbr = br;
            ind = i;
            izn = ns;
            izk = ks;
        }
    }
    cout << ind + 1 << " " << nk[ind].first << " " << nk[ind].second << "\n" << ngbr << " " << izn << " " << izk;
    return 0;
}
