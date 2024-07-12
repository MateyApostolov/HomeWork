#include <iostream>
using namespace std;

bool cf[10][7] = {{1, 1, 1, 1, 1, 1, 0},
                  {0, 1, 1, 0, 0, 0, 0},
                  {1, 1, 0, 1, 1, 0, 1},
                  {1, 1, 1, 1, 0, 0, 1},
                  {0, 1, 1, 0, 0, 1, 1},
                  {1, 0, 1, 1, 0, 1, 1},
                  {1, 0, 1, 1, 1, 1, 1},
                  {1, 1, 1, 0, 0, 0, 0},
                  {1, 1, 1, 1, 1, 1, 1},
                  {1, 1, 1, 1, 0, 1, 1}};
char m[7];

int main () {
    string s;
    cin >> s;
    char a;
    int br = 0;
    cin >> a >> m[0] >> a >> m[5] >> a >> m[1] >> a >> m[6] >> a >> m[4] >> a >> m[2] >> a >> m[3] >> a;
    bool c[10];
    for(int i = 0; i < 10; i++) {
        bool t = true;
        for(int x = 0; x < 7; x++) {
            if(m[x] != '*' && cf[i][x] == false && (m[x] == '#' || m[x] == '=')) t = false;
            if(m[x] != '*' && cf[i][x] == true && (m[x] == '|' || m[x] == '-')) t = false;
        }
        c[i] = t;
    }
    bool t = true;
    for(int i = 0; i < 10; i++) if(c[i] == true) t = false;
    for(int i = 0; i < s.size(); i++) if(c[s[i] - '0']) br++;
    if(t) cout << "impossible";
    else cout << br;
    return 0;
}
