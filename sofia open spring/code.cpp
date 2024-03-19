#include <iostream>
using namespace std;

int main () {
    long long n, m, del = 0, num, ost;
    cin >> n >> m;
    for(int i = 0; i < m; i++) del = del * 10 + 9;
    string s = "", r = "";
    for(long long i = 0; i < n; i++) {
        cin >> s >> num;
        ost = num % del;
        string h = "";
        int br = 0;
        while(ost > 0) {
            if((ost % 10) % 2 != 0) h = s[m - 1 - br] + h;
            br++;
            ost /= 10;
        }
        r = r + h;
    }
    cout << r;

    return 0;
}
