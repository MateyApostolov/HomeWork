#include <bits/stdc++.h>
using namespace std;

int main () {
    int nc[480], I[6] = {1, 2, 3, 4, 5, 6}, h = 0;
    do {
        if(I[2] == 6 || I[4] == 6) continue;
        nc[h] = I[5] + I[4] * 10 + 60 * (I[3] + I[2] * 10) + 60 * 60 * (I[1] + I[0] * 10);
        h++;
        ///cout << I[0] << I[1] << I[2] << I[3] << I[4] << I[5] << "\n";
    } while(next_permutation(I, I + 6));
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
