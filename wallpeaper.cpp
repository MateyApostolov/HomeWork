#include <iostream>
using namespace std;

int main () {
    long long N, M, K;
    cin >> N >> M >> K;
    long long ir = K / N;
    if (M % ir != 0) {
        cout << M / ir + 1;
    } else {
        cout << M / ir << endl;
    }

    return 0;
}
