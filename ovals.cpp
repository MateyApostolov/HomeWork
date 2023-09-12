#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int ov = 0;
    if (n == 0){
        cout << 1;
        return 0;
    }
    while (n > 0) {
        int e = n % 10;
        n /= 10;
        if (e == 0) {
            ov++;
        }
        if (e == 6) {
            ov++;
        }
        if (e == 8) {
            ov += 2;
        }
        if (e == 9) {
            ov++;
        }
    }
    cout << ov;


    return 0;
}
