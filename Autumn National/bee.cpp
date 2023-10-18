#include <iostream>
using namespace std;

int main () {
    int a, b, c;
    cin >> a >> b >> c;
    int sa = (a + b + c) / 3;
    int m = 0;
    m = c - sa;
    m =  m + (b + (c - sa)) - sa;
    cout << m;

    return 0;
}
