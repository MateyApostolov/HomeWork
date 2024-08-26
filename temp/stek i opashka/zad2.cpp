#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, num;
    cin >> n;
    stack <int> nc;
    stack <int> obr;
    for(int i = 0; i < n; i++) {
        cin >> num;
        nc.push(num);
    }
    for(int i = 0; i < n; i++) {
        obr.push(nc.top());
        nc.pop();
    }
    for(int i = 0; i < n; i++) {
        cout << obr.top();
        obr.pop();
    }
    return 0;
}
