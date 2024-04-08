#include <iostream>
using namespace std;

int brc[10];

int main () {
    int n, sum = 0, hnc = 0, hc = 0;
    cin >> n;
    char s[n];
    for(int i = 0; i < n; i++) {
        cin >> s[i];
        sum += s[i] - '0';
        brc[s[i] - '0']++;
    }
    for(int i = 0; i < 10; i++)
        if(brc[i] % 2 == 1) hnc++;
        else hc++;
    if(brc[0] % 2 == 0) {
        if(hc > 1) cout << "yes " << sum;
        else cout << "no";
        return 0;
    }
    if(hnc < 2) {
        cout << "yes " << sum;
    } else {
        cout << "no";
    }

    return 0;
}
