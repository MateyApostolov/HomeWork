#include <iostream>
using namespace std;

int d[5][5];

int main () {
    for(int r = 1; r < 4; r++){
        for(int c = 1; c < 4; c++){
            cin >> d[r][c];
        }
    }
    for(int r = 1; r < 4; r++){
        for(int c = 1; c < 4; c++){
            if (d[r][c] == 9) continue;
            if (d[r-1][c-1] == 9) d[r][c]++;
            if (d[r-1][c] == 9) d[r][c]++;
            if (d[r-1][c+1] == 9) d[r][c]++;
            if (d[r][c-1] == 9) d[r][c]++;
            if (d[r][c+1] == 9) d[r][c]++;
            if (d[r+1][c-1] == 9) d[r][c]++;
            if (d[r+1][c] == 9) d[r][c]++;
            if (d[r+1][c+1] == 9) d[r][c]++;
        }
    }
    for(int r = 1; r < 4; r++){
        for(int c = 1; c < 4; c++){
            cout << d[r][c] << " ";
        }
        cout << "\n";
    }


    return 0;
}
