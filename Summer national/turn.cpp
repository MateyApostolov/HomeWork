#include <iostream>
using namespace std;

int main () {
    char s;
    long long br1 = 0, brd = 0;
    while(cin >> s) {
        if(s == '1') br1++;
        else brd += br1;
    }
    cout << brd;
    return 0;
}
