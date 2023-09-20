#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int a;
    int m = 243819;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a < m) m = a;
    }
    cout << m;

    return 0;
}
