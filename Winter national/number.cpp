#include <iostream>
using namespace std;

int main () {
    int n, m;
    cin >> n >> m;
    int sh;
    int dh;
    int h;
    int s;
    int d;
    int e;
    int br = 0, sum = 0;
    for(int i = n; i <= m; i++) {
        sh = i / 100000;
        dh = i / 10000 % 10;
        h = i / 1000 % 10;
        s = i / 100 % 10;
        d = i / 10 % 10;
        e = i % 10;
        if(s == 0) {
            continue;
        }
        if(i % (sh * 100 + dh * 10 + h + s * 100 + d * 10 + e) == 0) {
            br++;
            sum += i;
        }
    }
    cout << br << " " << sum;

    return 0;
}
