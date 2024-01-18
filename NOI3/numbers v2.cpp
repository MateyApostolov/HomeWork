#include <iostream>
using namespace std;

bool b[1000001];

int main () {
    long long n, k, nc;
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        cin >> nc;
        b[nc] = true;
    }
    for(int i = 1; i <= n; i++)
        if(!b[i]){
            nc = i;
            break;
        }
    cout << nc / k;

    return 0;
}
