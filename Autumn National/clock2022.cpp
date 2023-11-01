#include <iostream>
using namespace std;

int main () {
    int h, m;
    cin >> h >> m;
    int h1 = m / 5;
    int m1 = (m % 5) * 12;
    int M1 = h1 * 60 + m1;
    int M = h * 60 + m;
    int izhM = M1 - M;
    if(izhM <= 0) izhM += 12 * 60;
    if(h1 == 0) h1 = 12;
    if(izhM == 0) izhM = 12 * 60;
    cout << h1 << " " << m1 << endl;
    cout << izhM / 60 << " " << izhM % 60;

    return 0;
}
