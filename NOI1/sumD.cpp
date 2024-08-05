#include <iostream>
using namespace std;

int main () {
    int n, br = 0;
    cin >> n;
    for(int i1 = 1; i1 < n - 3; i1++) {
        for(int i2 = i1; i2 < n - 2; i2++) {
            if(i1 + i2 >= n) break;
            for(int i3 = i2; i3 < n - 1; i3++) {
                if(i1 + i2 + i3 >= n) break;
                if(n - (i1 + i2 + i3) >= i3) br++;
            }
        }
    }
    cout << br;
    return 0;
}
