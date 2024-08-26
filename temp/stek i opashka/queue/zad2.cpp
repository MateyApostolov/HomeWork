#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    int nc[n];
    queue <int> ednc;
    queue <int> do50;
    queue <int> nad50;
    for(int i = 0; i < n; i++) {
        cin >> nc[i];
    }
    for(int i = 0; i < n; i++) {
        if(nc[i] < 10) ednc.push(nc[i]);
        if(nc[i] >= 10 && nc[i] <= 50) do50.push(nc[i]);
        if(nc[i] > 50) nad50.push(nc[i]);
    }
    for(int i = 0; i < ednc.size() + 1; i++) {
        cout << ednc.front() << ", ";
        ednc.pop();
    }
    for(int i = 0; i < do50.size() + 1; i++) {
        cout << do50.front() << ", ";
        do50.pop();
    }
    for(int i = 0; i < nad50.size(); i++) {
        cout << nad50.front() << ", ";
        nad50.pop();
    }
    cout << nad50.front();
    return 0;
}
