#include <iostream>
using namespace std;

int main () {
    int k;
    cin >> k;
    int n, m;
    cin >> n >> m;
    int w1, w2, br = 0;
    for(int i = 0; i < m; i++) {
        cin >> w1 >> w2;
        if(w1 == k || w2 == k) br++;
    }
    cout << br;

    return 0;
}
