#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, brd = 0, sum = 0, i;
    cin >> n;
    vector <int> nc;
    for(i = 2; i * i < n; i++) {
        if(n % i == 0) {
            brd += 2;
            sum += i;
            sum += n / i;
            nc.push_back(i);
            nc.push_back(n / i);
        }
    }
    if(i * i == n) {
        brd++;
        sum += i;
        nc.push_back(i);
    }
    sort(nc.begin(), nc.end());
    for(int j = 0; j < nc.size(); j++)
        cout << nc[j] << " ";
    cout << endl << sum << " " << brd;

    return 0;
}
