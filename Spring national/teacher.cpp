#include <iostream>
using namespace std;

const int maxoc = 6;
int ngbroc[maxoc], segoc[maxoc];

int main () {
    int n, a, b, maxbr = 0, hi, pra, prb;
    cin >> n;
    cin >> a >> b;
    pra = a;
    prb = b;
    segoc[a]++;
    segoc[b]++;
    for(int i = 1; i < n; i ++) {
        cin >> a >> b;
        if(a == pra || a == prb) {
            segoc[a]++;
        } else {
            ngbroc[a] = max(segoc[a], ngbroc[a]);
            if(segoc[a] == 0) segoc[a]++;
            else segoc[a] = 0;
        }
        if(b == pra || b == prb) {
            segoc[b]++;
        } else {
            ngbroc[b] = max(segoc[b], ngbroc[b]);
            if(segoc[b] == 0) segoc[b]++;
            else segoc[b] = 0;
        }
        pra = a;
        prb = b;

    }
    ngbroc[a] = max(segoc[a], ngbroc[a]);
    ngbroc[b] = max(segoc[b], ngbroc[b]);
    for(int i = 1; i < maxoc; i++) {
        if(maxbr < ngbroc[i]) {
            maxbr = ngbroc[i];
            hi = i;
        }
    }
    cout << maxbr << " " << hi;

    return 0;
}
