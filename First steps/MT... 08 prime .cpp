#include <iostream>
#include <math.h>
using namespace std;

int main () {
    int c;
    cout << "Number ? ";
    cin >> c;
    int a;
    for (int r = 0; r < c; r++) {
        cin >> a;
        if(a == 1){
            cout << "This number can't be one" << endl;
            break;
        }
        int d = 0;
        int k = sqrt(a);
        for (int i = 2; i <= k; i++) {
            if (a % i == 0){
                d++;
            }
        }
        if (d == 0){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
