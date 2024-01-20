#include <iostream>
using namespace std;

int main () {
    long long k, m, n;
    cin >> k >> m >> n;
    k %= 20;
    m %= 20;
    n %= 20;
    if(k == 0 || k == 1 || k == 2 || k == 7 || k == 8 || k == 19) cout << "1\n";
    if(k == 3 || k == 4 || k == 5 || k == 6) cout << "3\n";
    if(k == 10 || k == 11 || k == 12 || k == 17 || k == 18 || k == 9) cout << "9\n";
    if(k == 13 || k == 14 || k == 15 || k == 16) cout << "7\n";

    if(m == 0 || m == 1 || m == 2 || m == 7 || m == 8 || m == 19) cout << "1\n";
    if(m == 3 || m == 4 || m == 5 || m == 6) cout << "3\n";
    if(m == 10 || m == 11 || m == 12 || m == 17 || m == 18 || m == 9) cout << "9\n";
    if(m == 13 || m == 14 || m == 15 || m == 16) cout << "7\n";

    if(n == 0 || n == 1 || n == 2 || n == 7 || n == 8 || n == 19) cout << "1";
    if(n == 3 || n == 4 || n == 5 || n == 6) cout << "3";
    if(n == 10 || n == 11 || n == 12 || n == 17 || n == 18 || n == 9) cout << "9";
    if(n == 13 || n == 14 || n == 15 || n == 16) cout << "7";

    return 0;
}
