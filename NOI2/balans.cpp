#include <iostream>
using namespace std;

int main () {
    int n, br = 0, ngb = 0;
    cin >> n;
    char a;
    for(int i = 1; i <= n; i++) {
        cin >> a;
        if(a == 'a' || a == 'b') br++;
        if(a == 'c' || a == 'd') br--;
        if(br == 0) ngb = i;
    }
    cout << ngb;

    return 0;
}
