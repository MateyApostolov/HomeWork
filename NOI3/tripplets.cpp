#include <iostream>
using namespace std;

const int maxc = 50001;
bool ch[maxc];

int main () {
    int n, br = 0;
    cin >> n;
    int c[n];
    for(int i = 0; i < n; i++) {
        cin >> c[i];
        ch[c[i]] = true;

    }
    for(int i = 0; i < n - 1; i++) {
        for(int x = i + 1; x < n; x++) {
            if(ch[c[i] + c[x]] && i != x) br++;
        }
    }
    cout << br * 2;


    return 0;
}
