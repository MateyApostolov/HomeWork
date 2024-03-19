#include <iostream>
using namespace std;

int brc[10];

int main () {
    int n, br = 1, ngbr = 0, hnum = -1;
    string s;
    cin >> n >> s;
    char pr = ' ';
    for(int i = 0; i < s.size(); i++) {
        if(s[i] != pr) br = 1;
        else br++;
        if(br >= n) brc[s[i] - '0']++;
        pr = s[i];
    }
    if(n == 1) {
        for(int i = 0; i < 10; i++) {
            if(ngbr <= brc[i]) {
                ngbr = brc[i];
                hnum = i;
            }
        }
        cout << hnum << " " << ngbr;
        return 0;
    }
    for(int i = 1; i < 10; i++) {
        if(ngbr <= brc[i]) {
            ngbr = brc[i];
            hnum = i;
        }
    }
    if(ngbr == 0) {
        cout << "NOT FOUND";
        return 0;
    }
    while(n > 0) {
        n--;
        cout << hnum;
    }
    cout << " " << ngbr;

    return 0;
}
