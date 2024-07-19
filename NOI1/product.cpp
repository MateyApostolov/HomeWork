#include <iostream>
using namespace std;

int main () {
    long long a, b, br2 = 0, br5 = 0;
    cin >> a >> b;
    for(int i = a; i <= b; i++) {
        long long h = i;
        while(h % 5 == 0) {
            h /= 5;
            br5++;
        }
    }
    for(int i = a; i <= b; i++) {
        long long h = i;
        while(h % 2 == 0) {
            h /= 2;
            br2++;
        }
        if(br2 >= br5) break;
    }
    cout << min(br5, br2);
    return 0;
}
