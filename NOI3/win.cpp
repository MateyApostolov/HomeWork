#include <bits/stdc++.h>
using namespace std;

int main () {
    long long k, n, m, a, b, ot;
    cin >> k >> n >> m;
    long long nmot = 1000000000000;
    vector<int> nom;
    for(int i = 0; i < k; i++) {
        cin >> a >> b;
        if(a > b) swap(a, b);
        ot = a * b - (1 + n) * a * m;
        if(ot < nmot) {
            nmot = ot;
            nom.clear();
            nom.push_back(i + 1);
        } else if(ot == nmot) nom.push_back(i + 1);
    }
    for(int i = 0; i < nom.size(); i++) cout << nom[i] << " ";
    cout << "\n" << nmot;

    return 0;
}
