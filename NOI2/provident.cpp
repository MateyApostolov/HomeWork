#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    for(int i = n / 8; i >= 0; i--) {
        if ((n - i * 8) % 6 == 0) {
            cout << i + ((n - i * 8) / 6);
            return 0;
        }
    }
    cout << "No solution";

    return 0;
}
