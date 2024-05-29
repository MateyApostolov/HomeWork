#include <iostream>
using namespace std;

int main () {
    char s, h;
    int n1 = 0, n2 = 0, n3 = 0, sum = 0;
    bool t = true, thn = false;
    while(cin >> s) {
        if(s == '+' || s == '-' || s == '*') {
            h = s;
            t = false;
        }
        if(s == '=') thn = true;
        if(isdigit(s)) {
            if(t) n1 = n1 * 10 + (s - '0');
            else if(!thn) n2 = n2 * 10 + (s - '0');
            else n3 = n3 * 10 + (s - '0');
        }
    }
    if(h == '+') sum = n2 + n1;
    if(h == '-') sum = n1 - n2;
    if(h == '*') sum = n2 * n1;
    if(sum == n3) cout << "Yes " << abs(n1 - n2);
    else cout << "No " << sum;
    return 0;
}
