#include <iostream>
using namespace std;

int main () {
    int n, br1 = 0, br2 = 0, maxbr1 = 0, maxbr2 = 0;
    cin >> n;
    char s, p;
    cin >> p;
    br1++;
    for(int i = 1; i < n; i++) {
        cin >> s;
        if(s == p) {
            br1++;
            if(br2 > 0) br2--;
        } else {
            br2++;
            if(br1 > 0) br1--;
        }
        maxbr1 = max(maxbr1, br1);
        maxbr2 = max(maxbr2, br2);
    }
    cout << max(maxbr1, maxbr2);

    return 0;
}
