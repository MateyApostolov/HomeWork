#include <bits/stdc++.h>
using namespace std;

vector<int> dele(int n){
    vector <int> nc;

    int i;
    for(i = 2; i * i < n; i++) {
        if(n % i == 0) {
            nc.push_back(i);
            nc.push_back(n / i);
        }
    }
    if(i * i == n)  nc.push_back(i);
    sort(nc.begin(), nc.end());

    return nc;
}

int main () {
    int n, i;
    cin >> n;
    vector <int> nc = dele(n);
    for(int j = 0; j < nc.size(); j++) cout << nc[j] << " ";
    return 0;
}
