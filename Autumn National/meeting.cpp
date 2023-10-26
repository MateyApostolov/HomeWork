#include <iostream>
using namespace std;

int main () {
    int n1, k1, n2, k2, k;
    cin >> n1 >> k1 >> n2 >> k2 >> k;
    if(n2 < n1 ) {
        swap(n1, n2);
        swap(k1, k2);
    }
    int m = 0;
    if(k1 < n2) {
        cout << 0;
        return 0;
    }
    if(k1 >= n2 && k1 < k2) {
        m = k1 - n2 + 1;
        if (n2 <= k && k1 >= k) m--;
        cout << m;
        return 0;
    }
    if(k1 >= k2) {
        m = k2 - n2 + 1;
        if (n2 <= k && k2 >= k) m--;
        cout << m;
        return 0;
    }
    return 0;
}
