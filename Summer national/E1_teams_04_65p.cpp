#include <iostream>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n, x, brt = 1, nmc, sum;
    cin >> n >> x;
    long long nc;
    cin >> nc;
    nmc = nc;
    sum = nmc + x;
    for(int i = 1; i < n; i++) {
        cin >> nc;
        if(sum < nc) {
            brt++;
            nmc = nc;
            sum = nmc + x;
        }
    }
    cout << brt;
    return 0;
}

