#include <iostream>
using namespace std;

int main () {
    char s = ' ';
    int br = 0;

    while (s != '.') {
        cin >> s;
        if(s == '.') continue;
        if(s == '0') br++;
        else {
            cout << char(br + 'a');
            br = 0;
        }
    }

    return 0;
}
