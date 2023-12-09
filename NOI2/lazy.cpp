#include <bits/stdc++.h>
using namespace std;

int main () {
    char a;
    cin >> a;
    int pr = 1, popr = 1, br = 1, i = 1;
    while(a != '.') {
        if(i == pr + popr){
            br++;
            popr = pr;
            pr = i;
        }
        cin >> a;
        i++;
    }
    cout << br;

    return 0;
}
