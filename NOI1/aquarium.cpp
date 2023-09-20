#include <iostream>
using namespace std;

int main () {
    long long V, N;
    cin >> V >> N;
    if (N * 3 <= V) {
        cout << "NO";
    } else {
        cout << "YES " << N - V / 3;
    }

    return 0;
}
