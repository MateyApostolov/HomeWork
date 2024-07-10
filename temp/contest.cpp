#include <iostream>
using namespace std;

int main () {
    int n, nc, pr, br = 1, maxbr = 0;
    cin >> n;
    cin >> nc;
    pr = nc;
    for(int i = 1; i < n; i++) {
        cin >> nc;
        if(pr < nc && pr * 2 >= nc) br++;
        else {
            maxbr = max(maxbr, br);
            br = 1;
        }
        pr = nc;
    }
    maxbr = max(maxbr, br);
    cout << maxbr;
    return 0;
}
