#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int c, m;
    int t = 0;
    for(int i = 0; i < n; i++) {
        cin >> c >> m;
        t += c * 60 + m;
    }
    int maxX = t / 240 + 1;
    int maxY = t / 180 + 1;
    int nmst = maxX * 1090 + maxY * 915;
    for(int x = 0; x <= maxX; x++) {
        for(int y = 0; y <= maxY; y++) {
            if(x * 240 + y * 180 >= t) {
                int curp = x * 1090 + y * 915;
                if(curp < nmst) {
                    nmst = curp;
                }
            }
        }
    }
    if(t == 0) {
        cout << "0.00";
        return 0;
    }
    cout << nmst / 100 << ".";
    if(nmst % 100 < 10) {
        cout << 0;
    }
    cout << nmst % 100;



    return 0;
}
