#include <iostream>
using namespace std;

int main () {
    long long a, b;
    cin >> a >> b;
    if(a > b) swap(a, b);
    cout << a + b - (b - a) - 1;

    return 0;
}
