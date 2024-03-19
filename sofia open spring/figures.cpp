#include <iostream>
using namespace std;

int main () {
    long long n, i = 0, nm = 0, ng = 0;
    cin >> n;
    while((n - i * 5) % 6 != 0) i++;
    if(n - i * 5 < 0) {
        nm = 0;
    } else nm = i + (n - i * 5) / 6;
    i = 0;
    while((n - i * 6) % 5 != 0) i++;
    if(n - i * 6 < 0) {
        ng = 0;
    } else ng = i + (n - i * 6) / 5;
    cout << nm << " " << ng;

    return 0;
}
