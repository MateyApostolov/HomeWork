#include <iostream>
using namespace std;

int main () {
    int a, b, k;
    cin >> a >> b >> k;
    int p = (a + b) * 2;
    int l = p / k;
    if(p % k != 0) {
        l++;
    }
    cout << l;

    return 0;
}
