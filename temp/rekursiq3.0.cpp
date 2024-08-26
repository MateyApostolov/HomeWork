#include <iostream>
using namespace std;

bool is_odd (int num) {
    if(num == 1) return true;
    if(num == 0) return false;
    return is_odd(num - 2);
}

int main () {
    int n;
    cin >> n;
    cout << is_odd(n);

    return 0;
}
