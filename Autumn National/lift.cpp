#include <bits/stdc++.h>
using namespace std;

int main () {
    int M, N, S = 0;
    cin >> M >> N;
    int t[4];
    for(int i = 0; i < 4; i++) {
        cin >> t[i];
        S += t[i];
    }
    sort (t, t + 4);
    if(M >= 4 && S <= N) {
        cout << 1;
        return 0;
    }
    if(t[0] + t[3] <= N && t[1] + t[2] <= N) {
        cout << 2;
        return 0;
    }
    if(t[0] + t[1] <= N) {
        cout << 3;
        return 0;
    }
    cout << 4;


    return 0;
}
