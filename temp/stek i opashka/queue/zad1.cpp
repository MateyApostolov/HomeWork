#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, nc;
    cin >> n;
    queue <int> q;
    for(int i = 0; i < n; i++) {
        cin >> nc;
        q.push(nc);
    }
    for(int i = 0; i < n; i++) {
        cout << q.front() << " ";
        q.pop();
    }
}
