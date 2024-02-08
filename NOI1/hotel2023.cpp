#include <iostream>
using namespace std;

int main () {
    char a, b, c, d, z;
    int br = 0;
    for(int i = 0; i < 4; i++) {
        cin >> a >> b >> c >> d >> z;
        a = a - '0';
        b = b - '0';
        cout << a * 10 + b << " ";
        if(z == 'A') br++;
    }
    cout << br;


    return 0;
}
