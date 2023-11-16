#include <bits/stdc++.h>
using namespace std;

int main () {
    int a, b, brc = 0;
    cin >> a >> b;
    bool t;
    for(int i = a + 1; i < b; i++) {
        t = true;
        for(int k = 2; k <= sqrt(i); k++) {
            if(i % k == 0) {
                t = false;
                break;
            }
        }
        if(t == true) {
            int w = i;
            while (w > 0){
                brc += w % 10;
                w /= 10;
            }
        }
    }
    cout << brc;

    return 0;
}
