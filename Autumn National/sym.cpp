#include <iostream>
using namespace std;

int main () {
    int a[3];
    for(int i = 0; i < 3; i++) {
        cin >> a[i];
    }
    if(a[0] == a[2]) {
        cout << a[0] << a[1] << a[2];
        return 0;
    }
    if(a[1] == a[2]) {
        cout << a[0] << a[1] << a[1] << a[0];
        return 0;
    }
    cout << a[0] << a[1] << a[2] << a[1] << a[0];

    return 0;
}
