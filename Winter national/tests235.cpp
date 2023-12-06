#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int e = n % 10, brd = n / 10;
    if(e == 0) {
        cout << brd << " " << brd << " " << brd;
    }
    if(e == 1) {
        cout << brd - 1 << " " << brd - 1 + 2<< " " << brd - 1 + 1;
    }
    if(e == 2) {
        cout << brd + 2 - 1<< " " << brd + 1 - 1 << " " << brd + 1 - 1;
    }
    if(e == 3) {
        cout << brd << " " << brd - 1 + 2<< " " << brd - 1 + 1;
    }
    if(e == 4) {
        cout << brd + 3 - 1<< " " << brd + 1 - 1 << " " << brd + 1 - 1 << endl;
        cout << brd + 2 - 1<< " " << brd - 1 << " " << brd + 2 - 1;
    }
    if(e == 5) {
        cout << brd + 2 - 1<< " " << brd + 2 - 1 << " " << brd + 1 - 1 << endl;
        cout << brd + 1 - 1<< " " << brd + 1 - 1 << " " << brd + 2 - 1;
    }
    if(e == 6) {
        cout << brd + 1 - 1<< " " << brd + 3 - 1 << " " << brd + 1 - 1 << endl;
        cout << brd - 1<< " " << brd + 2 - 1 << " " << brd + 2 - 1;
    }
    if(e == 7) {
        cout << brd + 2 - 1<< " " << brd + 1 - 1 << " " << brd + 2 - 1;
    }
    if(e == 8) {
        cout << brd + 1 - 1<< " " << brd + 2 - 1 << " " << brd + 2 - 1;
    }
    if(e == 9) {
        cout << brd + 3 - 1<< " " << brd + 1 - 1 << " " << brd + 2 - 1;
    }

    return 0;
}
