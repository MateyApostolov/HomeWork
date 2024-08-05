#include <iostream>
using namespace std;

bool is_valid (int num) {
    while(num > 0) {
        if((num % 10) % 2 == 0) return false;
        num /= 10;
    }
    return true;
}

int main () {
    int n, h = 1;
    cin >> n;
    while (n > 0) {
        if(is_valid(h)) n--;
        if(n == 0) break;
        h += 2;
    }
    cout << h;
    return 0;
}
