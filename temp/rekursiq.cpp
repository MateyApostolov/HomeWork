#include <iostream>
using namespace std;

long long fakt (int num) {
    if(num == 0) return 1;
    else return fakt(num - 1) * num;
}

int main () {
    int nc;
    cin >> nc;
    cout << fakt(nc);

    return 0;
}
