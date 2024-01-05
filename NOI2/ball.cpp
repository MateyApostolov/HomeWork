#include <iostream>
using namespace std;

int main () {
    long long n;
    int x;
    cin >> n >> x;
    while(n % 6 != 0) {
        if(n % 2 == 0) {
            if(x == 2) x = 1;
            else if(x == 1) x = 2;
        } else {
            if(x == 1) x = 0;
            else if(x == 0) x = 1;
        }
        n--;
    }
    cout << x;
    return 0;
}
