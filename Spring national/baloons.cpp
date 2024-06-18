#include <iostream>
using namespace std;

int main () {
    int n, m, maxy = 0, maxw = 0, maxg = 0, maxr = 0, maxp = 0, maxb = 0, sum = 0;
    int sumy = 0, sumw = 0, sumg = 0, sumr = 0, sump = 0, sumb = 0;
    cin >> n >> m;
    char s[n];
    pair <char, int> c[m];
    string sc;
    for(int i = 0; i < n; i++) cin >> s[i];
    for(int i = 0; i < m; i++) {
        cin >> sc;
        int h = 1;
        c[i].first = sc[0];
        while(h < sc.size()) {
            c[i].second *= 10;
            c[i].second += sc[h] - '0';
            h++;
        }
    }
    for(int i1 = 0; i1 < n; i1++) {
        for(int i2 = 0; i2 < m; i2++) {
            if(s[i1] == c[i2].first) {
                if(s[i1] == 'y') {
                    if(maxy == c[i2].second) sumy += c[i2].second;
                    if(maxy < c[i2].second) {
                        maxy = c[i2].second;
                        sumy = maxy;
                    }
                }
                if(s[i1] == 'w') {
                    if(maxw == c[i2].second) sumw += c[i2].second;
                    if(maxw < c[i2].second) {
                        maxw = c[i2].second;
                        sumw = maxw;
                    }
                }
                if(s[i1] == 'g') {
                    if(maxg == c[i2].second) sumg += c[i2].second;
                    if(maxg < c[i2].second) {
                        maxg = c[i2].second;
                        sumg = maxg;
                    }
                }
                if(s[i1] == 'r') {
                    if(maxr == c[i2].second) sumr += c[i2].second;
                    if(maxr < c[i2].second) {
                        maxr = c[i2].second;
                        sumr = maxr;
                    }
                }
                if(s[i1] == 'p') {
                    if(maxp == c[i2].second) sump += c[i2].second;
                    if(maxp < c[i2].second) {
                        maxp = c[i2].second;
                        sump = maxp;
                    }
                }
                if(s[i1] == 'b') {
                    if(maxb == c[i2].second) sumb += c[i2].second;
                    if(maxb < c[i2].second) {
                        maxb = c[i2].second;
                        sumb = maxb;
                    }
                }
            }
        }
    }
    sum = sumy + sumw + sumg + sumr + sump + sumb;
    cout << sum / 100 << "." << sum % 100;
    return 0;
}
