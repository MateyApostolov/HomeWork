
#include <iostream>
using namespace std;

int main () {
    int S;
    cin >> S;
    if(S < 21) {
        cout << "0 0 0";
        return 0;
    }
    int ch;
    if(S % 2 == 0) {
        ch = (S - 2) / 2;
    }
    if(S % 2 == 1) {
        ch = (S - 1) / 2;
    }
    if(S > 200) {
        ch = 99;
    }
    cout << ch * 2 << " " << ch * 10 << " " << (ch / 10 * 100) + ch % 10;

    return 0;
}
