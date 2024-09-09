#include <bits/stdc++.h>
using namespace std;

const int maxn = 10001;
int n;
bool nc[maxn];

bool pred (int num) {
    return nc[num];
}

int main () {
    char s;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> s;
        if(s == 'T') nc[i] = true;
    }
    int l = -1, r = n, mid;
    while (l + 1 < r) {
        mid = (l + r) / 2;
        if(pred(mid)) r = mid;
        else l = mid;
    }
    if(r < n && nc[r]) cout << r + 1;
    else cout << "Not found!";

    return 0;
}

