#include <iostream>
using namespace std;

int main () {
    string s;
    int k, br = 0, kbr = 0, l = 0, r = 0;
    cin >> s >> k;
    while (r != s.size()){
        if(s[r] == '0') kbr++;
        if(kbr == k){
            br++;
            r++;
        }
        else if(kbr > k) {
           if(s[l] == '0') kbr--;
           l++;
        }
        else r++;
    }
    cout << br;
    return 0;
}
