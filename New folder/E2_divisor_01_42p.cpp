#include <iostream>
using namespace std;

int main () {
    int a, b, br = 0;
    cin >> a >> b;
    for(int i = a; i <= b; i++) {
        for(int x = 2; x < i; x++) {
            if(i / x == i % x) {
                br++;
            }
        }
    }
    cout << br;

    return 0;
}
