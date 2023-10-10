#include <bits/stdc++.h>
using namespace std;

int main () {
    char s[3];
    int i[3];
    char h;
    for(int I = 0; I < 3; I++) {
        cin >> s[I];
    }
    for(int I = 0; I < 3; I++) {
        cin >> h;
        i[I] = h - '0';
    }
    sort(s, s + 3);
    sort(i, i + 3);
    reverse(i, i + 3);
    for(int I = 0; I < 3; I++) {
        cout << s[I] << i[I];
    }

    return 0;
}
