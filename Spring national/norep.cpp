#include <iostream>
using namespace std;

const int maxs = 126 - 33 + 1;
int ss[maxs];

int main () {
    string s;
    cin >> s;
    int ngbr = 0, r = 0, l = 0;
    for(int i = 0; i < s.size(); i++) {
        ss[s[i] - 33]++;
        if(ss[s[i] - 33] > 1) {
            ngbr = max(ngbr, r - l);
            while(ss[s[i] - 33] > 1) {
                ss[s[l] - 33]--;
                l++;
            }
        }
        r++;
    }
    ngbr = max(ngbr, r - l);
    cout << ngbr;
    return 0;
}
