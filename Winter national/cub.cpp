#include <iostream>
using namespace std;

int main () {
    int n, br = 0;
    cin >> n;
    for(int i1 = 1; i1 <= n; i1++)
        for(int i2 = i1; i2 <= n; i2++)
            for(int i3 = i2; i3 <= n; i3++)
                if(i1 * i2 * i3 == n) br++;
    cout << br;
    return 0;
}
