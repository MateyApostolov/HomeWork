#include <iostream>
using namespace std;

int main () {
    int n, minh = 0;
    cin >> n;
    char s;
    int h[n];
    h[0] = 0;
    for(int i = 0; i < n - 1; i++) {
        cin >> s;
        if(s == '<') h[i + 1] = h[i] + 1;
        else h[i + 1] = h[i] - 1;
        minh = min(minh, h[i + 1]);
    }
    for(int i = 0; i < n; i++) cout << h[i] + abs(minh) << " ";
    return 0;
}
