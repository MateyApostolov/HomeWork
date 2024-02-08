#include <iostream>
using namespace std;

int main () {
    long long s, p, r, brd = 0;
    cin >> s >> p >> r;
    while(s - p > 0) {
        s -= p - r;
        brd++;
    }
    cout << brd << " " << (brd + 3) % 7;

    return 0;
}
