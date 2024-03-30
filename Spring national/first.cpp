#include <iostream>
using namespace std;

int pkl (int n) {
    int sum = 0;
    while(n > 0) {
        sum += (n % 10) * (n % 10);
        n /= 10;
    }
    return sum;
}

int main () {
    string s;
    cin >> s;
    int n = 0, tml = 0;
    for(int i = 0; i < s.size(); i++) {
        n += (s[i] - '0') * (s[i] - '0');
    }
    while(n != 1 && tml != 1000000) {
        tml++;
        n = pkl(n);
    }
    if(n == 1) cout << "YES";
    else cout << "NO";

    return 0;
}
