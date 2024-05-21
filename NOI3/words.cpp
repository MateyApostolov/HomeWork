#include <iostream>
using namespace std;

int main () {
    int br = 0, ngbr = 0, nmb, b;
    string s, z = "", iz;
    getline(cin, s);
    nmb = s[0];
    b = s[0];
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == ' ') {
            if(nmb >= b) {
                if(ngbr < br) {
                    ngbr = br;
                    br = 0;
                    iz = z;
                    z = "";
                    nmb = b;
                }
            }
            br = 0;
            z = "";
        } else {
            if(i != 0 && s[i - 1] == ' ') b = s[i];
            z += s[i];
            br++;
        }
    }
    cout << ngbr << " " << iz;
    return 0;
}
