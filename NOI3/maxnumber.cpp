#include <iostream>
using namespace std;

int ac[10], bc[10];

int main () {
    string a, b;
    cin >> a >> b;
    for(int i = 0; i < a.size(); i++) ac[a[i] - '0']++;
    for(int i = 0; i < b.size(); i++) bc[b[i] - '0']++;
    bool t = true;
    for(int i = 9; i >= 0; i--)
        for(int x = 0; x < min(ac[i], bc[i]); x++) {
            cout << i;
            t = false;
        }
    if(t) cout << "No solution";


    return 0;
}
