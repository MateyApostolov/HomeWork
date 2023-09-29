#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main () {
    int s[3];
    for(int i = 0; i < 3; i++) {
        cin >> s[i];
    }
    sort(s, s + 3);
    cout << s[2] * 100 + s[1] * 10 + s[0];

    return 0;
}
