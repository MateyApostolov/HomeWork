#include <iostream>
using namespace std;

int main () {
    int n, maxbr = 0, hx;
    cin >> n;
    pair<int, int> oc[n];
    for(int i = 0; i < n; i++) cin >> oc[i].first >> oc[i].second;
    for(int x = 1; x < 6; x++) {
        int br = 0;
        for(int i = 0; i < n; i++) {
            if(oc[i].first == x || oc[i].second == x) br++;
            else {
                if(maxbr < br) {
                    maxbr = br;
                    hx = x;
                }
                br = 0;
            }
        }
        if(maxbr < br) {
            maxbr = br;
            hx = x;
        }
    }
    cout << maxbr << " " << hx;

    return 0;
}
