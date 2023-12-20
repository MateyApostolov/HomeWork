#include <iostream>
using namespace std;

int main () {
    int n, k, sum = 0, os = 0, h = 0;
    cin >> n >> k;
    int ng[n];
    for(int i = 0; i < n; i++) {
        cin >> ng[i];
        sum += ng[i];
    }
    int prg = sum / k;
    for(int i = 0; i < n; i++) {
        k -= (ng[i] + os) / prg;
        h = 0;
        if(k < 0) h = k;
        cout << ng[i] - (ng[i] + os) / prg - h << " ";
        os = (ng[i] + os) % prg;
    }
    return 0;
}
