#include <iostream>
using namespace std;

int main () {
    string s, izs = "";
    int ngbr = 0;
    while(cin >> s) {
        if(s.size() > ngbr) {
            ngbr = s.size();
            izs = s;
        }else if(s.size() == ngbr) if(izs[0] > s[0]) izs = s;
    }
    cout << ngbr << " " << izs;
    return 0;
}
