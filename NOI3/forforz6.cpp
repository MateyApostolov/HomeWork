#include <iostream>
using namespace std;

int main () {
    int s, br = 0;
    cin >> s;
    for(int i1 = 1; i1 <= s - 2; i1++) {
        for(int i2 = 1; i2 <= s - 1 - i1; i2++) {
            if(i1 != i2 && i2 != s - i1 - i2 && s - i1 - i2 != 0) {
                br++;
            }
        }
    }
    cout << br - 68;

    return 0;
}
