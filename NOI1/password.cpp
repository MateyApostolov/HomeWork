#include <iostream>
using namespace std;

int main () {
    char a[4], b[4];
    for (int i = 0; i < 4; i++) cin >> a[i];
    for (int i = 0; i < 4; i++) cin >> b[i];
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < 4; i++) {
        if (a[i] >= 48 && a[i] <= 57) {
            sum1 = sum1 + (a[i] - 48);
        }
        if (a[i] >= 65 && a[i] <= 90) {
            sum1 = sum1 + 2 * (a[i] - 64);
        }
        if (a[i] >= 97 && a[i] <= 122) {
            sum1 = sum1 + (a[i] - 96);
        }
        if (b[i] >= 48 && b[i] <= 57) {
            sum2 = sum2 + (b[i] - 48);
        }
        if (b[i] >= 65 && b[i] <= 90) {
            sum2 = sum2 + 2 * (b[i] - 64);
        }
        if (b[i] >= 97 && b[i] <= 122) {
            sum2 = sum2 + (b[i] - 96);
        }
    }
    if (sum1 > sum2) {
        for (int i = 0; i < 4; i++) cout << a[i];
        cout << " " << sum1;
    }
    if (sum2 > sum1) {
        for (int i = 0; i < 4; i++) cout << b[i];
        cout << " " << sum2;
    }
    if (sum1 == sum2) {
        cout << 0;
    }

    return 0;
}
