#include <iostream>
using namespace std;

int main () {
    char s, pr;
    cin >> s;
    pr = s;
    cout << s;
    while(s != '.') {
        cin >> s;
        if(s == '.') continue;
        if(s == '0' && pr == '0') {
            continue;
        }
        pr = s;
        cout << s;
    }

    return 0;
}
