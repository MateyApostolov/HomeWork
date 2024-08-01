#include <iostream>
using namespace std;

int main () {
    long long n, m, i = 1;
    cin >> n >> m;
    while((i * m) % n != 0) i++;
    cout << i;

    return 0;
}
