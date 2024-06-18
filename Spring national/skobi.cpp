#include <iostream>
using namespace std;

int main () {
    int n, br1 = 0, br2 = 0, br3 = 0, br4 = 0, br5 = 0, br6 = 0;
    cin >> n;
    char s;
    for(int i = 0; i < n; i++) {
        cin >> s;
        if(s == '{') br1++;
        if(s == '}') br2++;
        if(s == '[') br3++;
        if(s == ']') br4++;
        if(s == '(') br5++;
        if(s == ')') br6++;
    }
    if(br1 < br2) cout << "R " << br2 - br1;
    if(br1 == br2) cout << 0;
    if(br1 > br2) cout << "L " << br1 - br2;
    cout << "\n";
    if(br3 < br4) cout << "R " << br4 - br3;
    if(br3 == br4) cout << 0;
    if(br3 > br4) cout << "L " << br3 - br4;
    cout << "\n";
    if(br5 < br6) cout << "R " << br6 - br5;
    if(br6 == br5) cout << 0;
    if(br5 > br6) cout << "L " << br5 - br6;
    return 0;
}
