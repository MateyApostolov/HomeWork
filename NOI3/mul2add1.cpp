#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    vector <int> op;
    while(n != 0) {
        if(n % 2 == 0) op.push_back(1);
        else op.push_back(2);
        n /= 2;
    }
    cout << op.size() << "\n";
    for(int i = op.size() - 1; i >= 0; i--) cout << op[i] << " ";


    return 0;
}
