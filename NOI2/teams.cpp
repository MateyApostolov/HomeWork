#include <iostream>
using namespace std;

int main () {
    long long n, m;
    cin >> n >> m;
    cout << min((n + m) / 3, min(n, m));

    return 0;
}
