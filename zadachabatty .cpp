#include <iostream>
using namespace std;

int main () {
    int n, k;
    cin >> n >> k;
    int a;
    int m = 7316865, r;
    for (int i = 0;i < n; i++) {
        cin >> a;
        if (abs (k - a) < m){
            m = abs (k - a);
            r = a;
        }
    }
    cout << r;

    return 0;
}
