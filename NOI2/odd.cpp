#include <iostream>
#include <math.h>
using namespace std;

int main () {
    long long a, b;
    cin >> a >> b;
    cout << (long long)floor(sqrt(b)) - (long long)ceil(sqrt(a)) + 1;

    return 0;
}
