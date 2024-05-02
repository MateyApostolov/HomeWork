#include <iostream>
using namespace std;

int main () {
    int n, k, h1 = 0, h0;
    cin >> n >> k;
    h0 = n - 1;
    char s[n];
    for(int i = 0; i < n; i++) cin >> s[i];
    for(int i = 0 ; i < k; i++) {
        for(int i1 = h1; i1 < n; i1++)
            if(s[i1] == '1') {
                s[i1] += 3;
                h1 = i1;
                break;
            }
        for(int i1 = h0; i1 >= 0; i1--)
            if(s[i1] == '0') {
                s[i1] += 3;
                h0 = i1;
                break;
            }
    }
    for(int i = 0; i < n; i++) {
        cout << s[i] % 2;
    }
    return 0;
}
