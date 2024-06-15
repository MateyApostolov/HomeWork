#include <iostream>
using namespace std;

int main () {
    char ends;
    string s, zc = "", zs = "", izc = "", izs = "";
    int brc = 0, brs = 0;
    cin >> ends >> s;
    for(int i = 1; i < s.size() - 1; i++) {
        if(isdigit(s[i]) && isdigit(s[i - 1])) {
            zc += s[i];
        } else {
            if(brc < zc.size()) {
                brc = zc.size();
                izc = zc;
            }
            zc = "";
            if(isdigit(s[i])) zc += s[i];
        }
        if(islower(s[i]) && islower(s[i - 1])) {
            zs += s[i];
        } else {
            if(brs < zs.size()) {
                brs = zs.size();
                izs = zs;
            }
            zs = "";
            if(islower(s[i])) zs += s[i];
        }
    }
    if(brc < zc.size()) {
        brc = zc.size();
        izc = zc;
    }
    if(brs < zs.size()) {
        brs = zs.size();
        izs = zs;
    }
    if(izc != "") cout << izc << "\n";
    if(izs != "") cout << izs;
    return 0;
}
