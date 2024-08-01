#include <iostream>
using namespace std;

int main () {
    string s;
    cin >> s;
    int sum = 0;
    bool d2 = false, d3 = false, d5 = false;
    for(int i = 0; i < s.size(); i++) sum += s[i] - '0';
    if((s[s.size() - 1] - '0') % 2 == 0) d2 = true;
    if(sum % 3 == 0) d3 = true;
    if((s[s.size() - 1] - '0') % 5 == 0) d5 = true;
    cout << d2 << " " << d3 << " " << d5;

    return 0;
}
