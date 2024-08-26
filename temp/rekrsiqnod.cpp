#include <iostream>
using namespace std;

int nod (int a, int b) {
    if(a - b == 0) return a;
    if(a > b) return nod(a, a - b);
    else return nod(b - a, b);
}

int main () {
    int a, b;
    cin >> a >> b;
    cout << nod(a, b);

    return 0;
}
