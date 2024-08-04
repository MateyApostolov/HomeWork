#include <iostream>
using namespace std;

const int maxn = 1001;
int nom[maxn];

int main () {
    int n, m, p, q, h, str = 0, c;
    cin >> n >> m >> p >> q;
    for(int i = 0; i < n; i++) {
        cin >> h;
        nom[h]++;
    }
    for(int i = 0; i < maxn; i++) {
        str += nom[i] / (p * q);
        if(nom[i] % (p * q) != 0) str++;
    }
    c = str / (m * 2);
    if(str % (m * 2) != 0) c++;
    cout << c;
    return 0;
}
