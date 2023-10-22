#include <bits/stdc++.h>
using namespace std;

int main () {
    string a[4], result[24];
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    int i = 0;
    for(int i1 = 0 ; i1 < 4; i1++){
        for(int i2 = 0 ; i2 < 4; i2++){
            if (i1 == i2) continue;
            for(int i3 = 0 ; i3 < 4; i3++){
                if (i1 == i3) continue;
                if (i2 == i3) continue;
                for(int i4 = 0 ; i4 < 4; i4++){
                    if (i1 == i4) continue;
                    if (i2 == i4) continue;
                    if (i3 == i4) continue;
                    result[i] = a[i1] + a[i2] + a[i3] + a[i4];
                    i++;
                }
            }
        }
    }
    sort(result, result + 24);
    cout << result[23];
    return 0;
}
