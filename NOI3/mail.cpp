#include <iostream>
using namespace std;

int main () {
    int n, k, ngc = 0, nm, km;
    string st;
    cin >> n;
    getline(cin, st);
    pair<int, int> m[n];
    for(int i = 0; i < n; i++) {
        getline(cin, st);
        m[i].first = ((st[0] - '0') * 10 + (st[1] - '0')) * 60 + (st[3] - '0') * 10 + (st[4] - '0');
        m[i].second = ((st[6] - '0') * 10 + (st[7] - '0')) * 60 + (st[9] - '0') * 10 + (st[10] - '0');
    }
    cin >> k;
    for(int i = 480; i < 24 * 60; i++) {
        for(int x = 0; x < n; x++) {
            if(i >= m[x].second) continue;
            int start = max(m[x].first, i);
            if(start + k <= m[x].second) {
                int c = start + k - i;
                if(c > ngc) {
                    nm = i;
                    km = start + k;
                    ngc = c;
                }
                break;
            }
        }
    }
    int h1 = nm / 60, m1 = nm % 60, h2 = km / 60, m2 = km % 60;
    cout << h1 / 10 << h1 % 10 << ":" << m1 / 10 << m1 % 10 << " " << h2 / 10 << h2 % 10 << ":" << m2 / 10 << m2 % 10;


    return 0;
}
