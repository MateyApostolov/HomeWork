#include <iostream>
using namespace std;

int c[10];

int main () {
    string s;
    cin >> s;
    int br, sum = 0, h;
    for(int i = 0; i < s.size(); i++) {
        c[s[i] - '0']++;
        sum += s[i] - '0';
    }
    for(int i = 0; i < 10; i++) if(c[i] > 0) br++;
    if(br == 1) {
        cout << s[0];
        return 0;
    }
    while(sum >= 10) {
        h = sum;
        sum = 0;
        while(h > 0) {
            sum += h % 10;
            h /= 10;
        }
    }
    cout << sum;
    return 0;
}
