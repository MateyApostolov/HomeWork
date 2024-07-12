#include <iostream>
using namespace std;

int main () {
    int a, b, br = 0;
    cin >> a >> b;
    for(int i = a; i <= b; i++) for(int x = 1; x * (x + 1) < i; x++) if(i % x == 0) br++;
    cout << br;
    return 0;
}
