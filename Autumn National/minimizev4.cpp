#include <bits/stdc++.h>
using namespace std;

int main(){
    long long c[5], k, R;
    for(int i = 0; i < 5; i++) cin >> c[i];
    sort(c, c+5);

    cin >> k;

    R = c[4] - c[3];
    if(k < R) R = k;
    c[4] -= R;
    k -= R;

    R = (c[4] - c[2]) * 2;
    if(k < R) R = k;
    c[4] -= R/2;
    c[3] -= R/2;
    k -= R;

    R = (c[4] - c[1]) * 3;
    if(k < R) R = k;
    c[4] -= R/3;
    c[3] -= R/3;
    c[2] -= R/3;
    k -= R;

    R = (c[4] - c[0]) * 4;
    if(k < R) R = k;
    c[4] -= R/4;
    c[3] -= R/4;
    c[2] -= R/4;
    c[1] -= R/4;
    k -= R;

    R = c[4] * 5;
    if(k < R) R = k;
    c[4] -= R/5;
    c[3] -= R/5;
    c[2] -= R/5;
    c[1] -= R/5;
    c[0] -= R/5;
    k -= R;
    cout << c[4];
    return 0;
}
