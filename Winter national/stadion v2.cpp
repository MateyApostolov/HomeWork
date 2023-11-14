#include <bits/stdc++.h>
using namespace std;

int main () {
    int ha1, ma1, ha2, ma2;
    int hb1, mb1, hb2, mb2;
    int hc1, mc1, hc2, mc2;
    cin >> ha1 >> ma1 >> ha2 >> ma2 >> hb1 >> mb1 >> hb2 >> mb2 >> hc1 >> mc1 >> hc2 >> mc2;
    int ma = (ha2 * 60 + ma2) - (ha1 * 60 + ma1);
    int mb = (hb2 * 60 + mb2) - (hb1 * 60 + mb1);
    int mc = (hc2 * 60 + mc2) - (hc1 * 60 + mc1);
    if (ma < 0) ma += 24*60;
    if (mb < 0) mb += 24*60;
    if (mc < 0) mc += 24*60;
    pair<int,char> data[3];
    data[0].first = ma;
    data[0].second = 'A';
    data[1].first = mb;
    data[1].second = 'B';
    data[2].first = mc;
    data[2].second = 'C';
    sort(data, data + 3);
    if(data[0].first == data[2].first) cout << "X";
    else if (data[2].first == data[1].first) cout << "X" << data[0].second;
    else if (data[0].first == data[1].first) cout << data[2].second << "X";
    else cout << data[2].second << data[1].second << data[0].second;

    return 0;
}
