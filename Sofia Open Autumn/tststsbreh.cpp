#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, a = 0, sh = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        char s = '-';
        bool t = true;
        int ts = 0;
        while(s != '.') {
            cin >> s;
            if(s == '.') break;
            if(s != 'a' && s != 'e' && s != 'i' && s != 'o' && s != 'u' && s != 'y') ts++;
            else {
                if(ts >= 4) t = false;
                ts = 0;
            }
        }
        if(ts >= 4) t = false;
        if(t) a++;
        else sh++;
    }
    cout << a << ' ' << sh;
    return 0;
}
