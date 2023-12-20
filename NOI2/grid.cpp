#include <iostream>
using namespace std;

int main () {
    int H, W, hmin = 51, hmax = -1, wmin = 51, wmax = -1;
    cin >> H >> W;
    char s[H][W];
    for(int h = 0; h < H; h++) {
        for(int w = 0; w < W; w++) {
            cin >> s[h][w];
            if(s[h][w] == '*') {
                hmax = max(h, hmax);
                hmin = min(h, hmin);
                wmax = max(w, wmax);
                wmin = min(w, wmin);
            }
        }
    }
    for(int h = 0; h < H; h++) {
        for(int w = 0; w < W; w++) {
            if(h >= hmin && w >= wmin && h <= hmax && w <= wmax) cout << "*";
            else cout << ".";
        }
        cout << endl;
    }
    cout << hmin << " " << hmax << " " << wmin << " " << wmax;


    return 0;
}
