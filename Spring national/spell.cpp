#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    for(int i = 1; i <= n / 2; i++) cout << char(n / 2 + i + 64) << char(n / 2 - i + 1 + 64);
    if(n % 2 == 1) cout << char(n + 64);

    return 0;
}
