#include <iostream>
using namespace std;

int main () {
    int n, k;
    cin >> n >> k;
    char s;
    if(k == 2) {
        int brz1 = 0, brz2 = 0;
        for(int i = 0; i < n; i++) {
            cin >> s;
            if(i % 2 == 1 && s == '0') brz1++;
            if(i % 2 == 1 && s == '1') brz2++;
            if(i % 2 == 0 && s == '0') brz2++;
            if(i % 2 == 0 && s == '1') brz1++;
        }
        cout << min(brz1, brz2);
        return 0;
    }
    int brz = 0;
    char pr = '-';
    for(int i = 0; i < n; i++) {
        cin >> s;
        if(s == pr) {
            brz++;
            s = '-';
        }
        pr = s;
    }
    cout << brz;

    return 0;
}
