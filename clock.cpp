#include <iostream>
using namespace std;

int main () {
    int h, m;
    cin >> h >> m;
    int h1, m1;
    h1 = m / 5;
    m1 = (m % 5) * 12;
    int M;
    M = h * 60 + m;
    int M1;
    M1 = h1 * 60 + m1;
    int t = M1 - M;
    if (t < 0) t = t + 12 * 60;
    cout << h1 << " " << m1 << endl;
    cout << t / 60 << " " << t % 60;

    return 0;
}

