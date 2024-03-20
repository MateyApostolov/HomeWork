#include <iostream>
using namespace std;


int main () {
    int n, br = 0;
    cin >> n;
    int h[n];
    for(int i = 0; i < n; i++) cin >> h[i];
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            br++;
            if((h[j] > h[j - 1] && h[j] > h[j + 1]) || (h[j] < h[j - 1] && h[j] < h[j + 1])) break;
        }
    }
    cout << br * 2;

    return 0;
}
