#include <iostream>
using namespace std;

int main () {
    char b;
    string s = "123";
    while (b != '.') {
        cin >> b;
        if(b == 'A') swap(s[0], s[1]);
        if(b == 'B') swap(s[1], s[2]);
        if(b == 'C') swap(s[0], s[2]);
    }
    cout << s[0];

    return 0;
}
