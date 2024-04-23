#include <iostream>
using namespace std;

const int maxoc = 5;
int broc[maxoc];

int main () {
    int n, a, b, maxbr = 0, hi, pra, prb;
    cin >> n;
    cin >> a >> b;
    pra = a;
    prb = b;
    broc[a]++;
    broc[b]++;
    for(int i = 1; i < n; i ++) {
        cin >> a >> b;
        if(a == pra || a == prb) {
            broc[a - 1]++;
        } else {
            broc[a - 1] = 0;
        }
        if(b == pra || b == prb) {
            broc[b - 1]++;
        } else {
            broc[b - 1] = 0;
        }
        pra = a;
        prb = b;

    }
    for(int i = 0; i < maxoc; i++) {
        if(maxbr < broc[i]) {
            maxbr = broc[i];
            hi = i + 1;
        }
    }
    cout << maxbr << " " << hi;

    return 0;
}
