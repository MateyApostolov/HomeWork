#include <bits/stdc++.h>
using namespace std;

int main () {
    int a[5], s = 0;
    for(int i = 0; i < 5; i++) {
        cin >> a[i];
        s += a[i];
    }
    int k;
    cin >> k;
    int srar = s / 5;
    cout << srar << endl;
    int s2 = 0;
    int br = 0;
    for(int i = 0; i < 5; i++) {
        if(a[i] < srar) {
            s2 += srar - a[i];
            br++;
            cout << "- " << br << " " << s2 << " " << a[i] << endl;
        }
    }
    int izh = srar + s2 / (5 - br);
    if(s2 % (5 - br) != 0) {
        izh++;
    }
    cout << izh;

    return 0;
}
