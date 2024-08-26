#include <iostream>
using namespace std;

int sumc (int num) {
    if(num == 0) return num;
    else return sumc(num / 10) + num % 10;
}

int main () {
    int n;
    cin >> n;
    cout << sumc(n);

    return 0;
}
