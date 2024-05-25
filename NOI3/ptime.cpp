#include <iostream>
using namespace std;

string izs = "00:00";

void nexttime(string s) {
    int m = (10 * (s[0] - '0') + (s[1] - '0')) * 60 + 10 * (s[3] - '0') + (s[4] - '0') + 1;
    m %= 24 * 60;
    izs[0] = (m / 60) / 10 + '0';
    izs[1] = (m / 60) % 10 + '0';
    izs[2] = ':';
    izs[3] = (m % 60) / 10 + '0';
    izs[4] = (m % 60) % 10 + '0';
}

bool ispal(string izs) {
    if(izs[0] == izs[4] && izs[1] == izs[3]) return true;
    else return false;
}


int main () {
    string s;
    cin >> s;
    nexttime(s);
    if(ispal(izs)) {
        cout << izs;
        return 0;
    }
    while(!ispal(izs)) nexttime(izs);
    cout << izs;
    return 0;
}
