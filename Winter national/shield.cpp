#include <iostream>
using namespace std;

int main () {
    long long a1, b1, c1;
    cin >> a1 >> b1 >> c1;
    long long a2, b2, c2;
    cin >> a2 >> b2 >> c2;
    long long ng1 = max(a1, max(b1, c1));
    long long ng2 = max(a2, max(b2, c2));
    long long nm = min(ng1, ng2);
    cout << a1 + a2 + b1 + b2 + c1 + c2 - nm * 2;

    return 0;
}
