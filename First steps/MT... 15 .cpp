#include <iostream>
#include <math.h>
using namespace std;

int main () {
    int n;
    cout << "Number ? ";
    cin >> n;
    int d = 0;
    int tc;
    int k = sqrt (n)
    for (int r = 0; r < n; r++) {
        cin >> tc;
        for (int s = 2; s <= k; s++) {
            if (n % s == 0){
                d++;
                if ( s != k ) d++;
                if (d == 0) {
                    cout << "yes";

                }
            }
        }
    }


    return 0;
}
