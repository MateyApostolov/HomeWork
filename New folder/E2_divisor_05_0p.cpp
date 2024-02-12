#include <iostream>
using namespace std;

int main () {
    int a, b, br = 0;
    cin >> a >> b;
    bool t = true;
    for(int i = a; i <= b; i++) {
        if(i == 2) {
            continue;
        }
        if(i < 8) {
            br++;
            continue;
        }
        for(int x = 2; x < i; x++){
            if(i % x == 0) {
                t = false;
                break;
            }
        }
        if(t == true) {
            br++;
        }else {
            br += 2;
        }
        t = true;
    }
    cout << br;

    return 0;
}
