#include <iostream>
using namespace std;

int main () {
    int N;
    cin >> N;
    long long a, pr, brc;
    cin >> pr;
    int br = 1, minr = 1;
    for(int i = 1; i < N; i++) {
        cin >> a;
        if(a == pr) br++;
        else {
            if(br > minr) {
                minr = br;
                brc = pr;
            }
            br = 1;
        }
        pr = a;
    }
    if(br > minr) {
        minr = br;
        brc = pr;
    }
    if(minr == 1) cout << "no";
    else cout <<  brc;

    return 0;
}
