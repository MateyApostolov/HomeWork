#include <iostream>
using namespace std;

const int maxm = 24 * 60;
int m[maxm];

int main () {
    int n;
    cin >> n;
    int h1, k1, h2, k2, nm, km , maxbr = 0;
    for(int i = 0; i < n; i++) {
        cin >> h1 >> k1 >> h2 >> k2;
        nm = h1 * 60 + k1;
        km = h2 * 60 + k2;
        km = min(km, nm + 120);
        if(km < nm) km += maxm;
        for(int i = nm; i <= km + 10; i++) m[i % maxm]++;
    }
    for(int i = 0; i < maxm; i++) maxbr = max(maxbr, m[i]);
    cout << maxbr;


    return 0;
}
