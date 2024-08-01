#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    int t1, t2, t3, t4, pr;
    int srar[n];
    for(int i = 0; i < n; i++) {
        cin >> t1 >> t2 >> t3 >> t4;
        srar[i] = (t1 + t2 + t3 + t4) / 4;
    }
    pr = srar[0];
    int brh = 0, br = 1;
    for(int i = 1; i < n; i++) {
        if(srar[i] < pr) br++;
        else {
            if(br > 1) brh++;
            br = 1;
        }
        pr = srar[i];
    }
    if(br > 1) brh++;
    br = 1;
    pr = srar[0];
    int brt = 0;
    for(int i = 1; i < n; i++) {
        if(srar[i] > pr) br++;
        else {
            if(br > 1) brt++;
            br = 1;
        }
        pr = srar[i];
    }
    if(br > 1) brt++;
    br = 1;
    pr = srar[0];
    int brr = 0;
    for(int i = 1; i < n; i++) {
        if(srar[i] == pr) br++;
        else {
            if(br > 1) brr++;
            br = 1;
        }
        pr = srar[i];
    }
    if(br > 1) brr++;
    cout << brh << " " << brt << " " << brr;
    return 0;
}
