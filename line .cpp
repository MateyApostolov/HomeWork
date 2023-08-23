#include <iostream>
using namespace std;

int main () {
    int a;
    cin >> a;
    while (a % 2 != 0) {
        a = (a + 1) / 2;
    }
    cout << a;
    return 0;
}
