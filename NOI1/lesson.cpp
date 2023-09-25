#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int w = n / 30;
    int o = n % 30;
    if (o != 0) {
        w++;
    }
    if (w >= 9) {
        w++;
    }
    cout << "Week " << w;
    int d;
    if (o > -1 && o <= 6) {
        cout << " Monday";
    }
    if (o > 6 && o <= 12) {
        cout << " Tuesday";
    }
    if (o > 12 && o <= 18) {
        cout << " Wednesday";
    }
    if (o > 18 && o <= 24) {
        cout << " Thursday";
    }
    if (o > 24 && o <= 30) {
        cout << " Friday";
    }

    return 0;
}
