#include <bits/stdc++.h>
using namespace std;

int main () {
    int m, nc, maxsum = 0;
    cin >> m;
    vector <int> num;
    while(cin >> nc) num.push_back(nc);
    for(int x = 0; x < num.size(); x++)
        for(int y = x; y < num.size(); y++) {
            swap(num[x], num[y]);
            int sum = 0;
            for(int i = 0; i < num.size(); i++) {
                if(i < m) sum += num[i];
                else {
                    maxsum = max(maxsum, sum);
                    sum -= num[i - m];
                    sum += num[i];
                }
            }
            maxsum = max(maxsum, sum);
            swap(num[x], num[y]);
        }
    cout << maxsum;

    return 0;
}
