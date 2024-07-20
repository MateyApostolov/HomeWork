#include <iostream>
using namespace std;

int main () {
    string s;
    cin >> s;
    long long sum = 0, st2 = 1;
    for(int i = 0; i < s.size(); i++) {
        sum += (s[i] - 'a' + 1) * st2;
        st2 *= 2;
    }
    if(sum % 2 == 0) cout << "yes " << sum;
    else cout << "no";

    return 0;
}
