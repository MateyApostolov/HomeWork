#include <iostream>
using namespace std;

int main () {
    string s;
    int k, br = 0, kbr = 0, l = 0, r = 0;
    cin >> s >> k;
    while (r != s.size()){
        if(s[r] == '0')kbr++;
        if(kbr == k) br++;
        if(kbr > k)
            while (true) {
                l++;
                if(s[l] == '0') {
                    kbr--;
                    break;
                }
            }
        r++;
    }
    cout << br;
    return 0;
}
