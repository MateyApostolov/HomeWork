#include <bits/stdc++.h>
using namespace std;

int main () {
    long long s[4];
    cin >> s[0] >> s[1] >> s[2] >> s[3];
    sort(s, s + 4);
    if ((s[0] == s[3]) || (s[0] == s[1] && s[2] == s[3])) {
        cout << "YES" << endl;
        cout << s[0] * s[2];
    } else {
        cout << "NO" << endl;
        cout << s[0] + s[1] +s[2] + s[3];
    }

    return 0;
}
