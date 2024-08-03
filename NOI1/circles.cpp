#include <iostream>
using namespace std;

int main () {
    long long n3, n1, n2, br = 0;
    char s;
    cin >> n1 >> n2 >> s;
    if(s == '+') n3 = n1 + n2;
    if(s == '-') n3 = n1 - n2;
    if(s == '*') n3 = n1 * n2;
    while(n3 > 0) {
        if(n3 % 10 == 8) br += 2;
        if(n3 % 10 == 0 || n3 % 10 == 6 || n3 % 10 == 9) br++;
        n3 /= 10;
    }
    cout << br;
    return 0;
}
