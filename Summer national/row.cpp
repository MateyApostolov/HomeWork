#include <iostream>
using namespace std;

int main () {
    string s;
    int k, br = 0, kbr;
    cin >> s >> k;
    for(int i = 0; i < s.size(); i++) {
        kbr = 0;
        for(int x = i; x < s.size(); x++) {
            if(s[x] == '0') kbr++;
            if(kbr == k) br++;
            if(kbr > k) break;
        }
    }
    cout << br;
    return 0;
}
