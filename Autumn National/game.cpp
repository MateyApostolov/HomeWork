#include <iostream>
using namespace std;

int s[5];

int main () {
    int c[4];
    int a;
    for(int i = 0; i < 4; i++) {
        cin >> a;
        c[i] = a;
        s[a]++;
    }
    if(s[0] == 0) {
        cout << c[0] << " " << c[1];
        return 0;
    }
    if(s[0] == 2) {
        for(int i = 1; i <= 4; i++) {
            if(s[i] == 0) {
                cout << i << " ";
            }
        }
        return 0;
    }
    for(int i = 0; i < 4; i++) {
        if(c[i] == 0) {
            cout << i + 1;
            break;
        }
    }
    for(int i = 1; i <= 4; i++) {
        if(s[i] == 0) {
            cout << " " << i;
        }
    }


    return 0;
}
