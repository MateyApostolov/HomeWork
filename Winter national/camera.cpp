#include <iostream>
using namespace std;

int main () {
    char a = ' ', hn1, hn2, mn1, mn2, hk1, hk2, mk1, mk2;
    cin >> hn1 >> hn2 >> mn1 >> mn2 >> hk1 >> hk2 >> mk1 >> mk2;
    int pk = ((hk1 - '0') * 10 + hk2 - '0') * 60 + ((mk1 - '0') * 10 + mk2 - '0');
    int pn = ((hn1 - '0') * 10 + hn2 - '0') * 60 + ((mn1 - '0') * 10 + mn2 - '0');
    int p = pk - pn;
    if(p < 0) {
        p += 24 * 60;
    }
    cout << p / 60 << " " << p % 60 << endl;
    cin >> a;
    char pr = a;
    int la = 0, prs = 0, br = 0;
    bool t = true;
    while(a != '#') {
        if(!isdigit(a)) {
            if(isupper(a)) {
                la++;
                t = true;
            }
            else {
                prs++;
                la--;
                t = false;
            }
            cin >> a;
        } else {
            br = (a - '0');
            cin >> a;
            while(isdigit(a)){
                br = br * 10 + (a - '0');                cin >> a;
            }
            if(t) la += br - 1;
            else prs += br - 1;
        }
    }
    cout << la << " " << prs;

    return 0;
}
