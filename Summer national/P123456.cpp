#include <iostream>
using namespace std;

int main () {
    int nc[480], h = 0;
    for(int i1 = 1; i1 < 7; i1++) {
        for(int i2 = 1; i2 < 7; i2++) {
            if(i1 == i2) continue;
            for(int i3 = 1; i3 < 6; i3++) {
                if(i1 == i3 || i3 == i2) continue;
                for(int i4 = 1; i4 < 7; i4++) {
                    if(i1 == i4 || i4 == i3 || i4 == i2) continue;
                    for(int i5 = 1; i5 < 6; i5++) {
                        if(i1 == i5 || i5 == i2 || i5 == i3 || i5 == i4) continue;
                        for(int i6 = 1; i6 < 7; i6++) {
                            if(i1 == i6 || i6 == i2 || i6 == i3 || i6 == i4 || i6 == i5) continue;
                            nc[h] = i6 + i5 * 10 + 60 * (i4 + i3 * 10) + 60 * 60 * (i2 + i1 * 10);
                            ///cout << nc[h] << " " << i1 << i2 << i3 << i4 << i5 << i6 << "\n";
                            h++;
                        }
                    }
                }
            }
        }
    }
    int n, b, e, br;
    cin >> n;
    string sb, se;
    for(int i = 0; i < n; i++) {
        cin >> sb >> se;
        br = 0;
        b = (sb[7] - '0') + (sb[6] - '0') * 10 + 60 * ((sb[4] - '0') + (sb[3] - '0') * 10) + 60 * 60 * ((sb[1] - '0') + (sb[0] - '0') * 10);
        e = (se[7] - '0') + (se[6] - '0') * 10 + 60 * ((se[4] - '0') + (se[3] - '0') * 10) + 60 * 60 * ((se[1] - '0') + (se[0] - '0') * 10);
        for(int x = 0; x < 480; x++) if(nc[x] >= min(e, b) && nc[x] <= max(e, b)) br++;
        cout << br << " ";
    }


    return 0;
}
