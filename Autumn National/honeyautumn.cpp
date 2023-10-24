#include <iostream>
using namespace std;

int main () {
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int sm = 0;
    n--;
    sm = sm + min(a, b);
    if(c < min(a, b)) {
        sm += (n - 1) * c;
    } else {
        sm = n * min(a, b);
    }
    cout << sm / 100 << " " << sm % 100;

    return 0;
}
