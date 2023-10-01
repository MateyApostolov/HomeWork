#include <iostream>
using namespace std;

int main () {
    int g, sum = 0;
    for (int i = 0; i < 10; i++) {
        cin >> g;
        if (sum + g <= 100) {
            sum = sum + g;
            continue;
        } else {
            if ((sum + g) - 100 <= 100 - sum) {
                sum = sum + g;
            }
        }
    }
    cout << sum;

    return 0;
}
