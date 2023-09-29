#include <iostream>
using namespace std;

int main () {
    int X, N;
    cin >> X >> N;
    cout << N - X << endl;
    if ((N - X) % 2 != 0) cout << (N - X) / 2 << " " << (N - X) / 2 + 1;
    else cout << (N - X) / 2 << " " << (N - X) / 2;

    return 0;
}
