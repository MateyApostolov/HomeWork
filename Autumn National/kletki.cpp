#include <iostream>
using namespace std;

int main () {
    int n, k;
    cin >> n >> k;
    int ok = n - k;
    int i = k - 1;
    int si = i - ok % i;
    cout << si;


    return 0;
}
