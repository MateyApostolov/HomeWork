#include <iostream>
using namespace std;

long long prc (int num) {
    long long pr = 1;
    while(num > 0) {
        pr *= num % 10;
        num /= 10;
    }
    return pr;
}

int main () {
    int a, b, br = 0;
    cin >> a >> b;
    for(int i = a; i <= b; i++) {
        long long h = prc(i);
        if(h != 0 && i % h == 0) br++;
    }
    cout << br;
    return 0;
}
