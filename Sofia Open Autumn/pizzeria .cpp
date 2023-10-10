#include <iostream>
using namespace std;

int main () {
    int N, L, S;
    cin >> N >> L >> S;
    int ls;
    ls = L * 100 + S;
    int p1 = N * ls;
    if (p1 > 3000) p1 = p1 - 899;
    int p2 = (2 * ls + 450) * (N / 3) + ls * (N % 3);
    int p3 = (3 * ls ) * (N / 4) + ls * (N % 4);
    int a = min(p1,min(p2,p3));
    if (a < 2000) a = 2000;
    cout << a / 100 << ".";
    if (a% 100 < 10) cout << "0";
    cout << a % 100;

    return 0;
}
