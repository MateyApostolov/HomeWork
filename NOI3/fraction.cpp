#include <iostream>
using namespace std;

int main () {
    long long n, br = 0, h = 1, g;
    cin >> n;
    g = n;
    while(g % 5 == 0) g /= 5;
    while(g % 2 == 0) g /= 2;
    if (g != 1){
        cout << "NO";
        return 0;
    }
    while(h % n != 0) {
        h = (h % n) * 10;
        br++;
    }
    cout << br;
    return 0;
}
