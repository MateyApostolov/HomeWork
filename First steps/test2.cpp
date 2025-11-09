#include <bits/stdc++.h>
using namespace std;

int main () {
    vector<int> d = {1, 8, 3, 152, 81, 23, 44, 11, 12, 13, 4, 7, 123, 61, 34};
    sort(d.begin(), d.end());
    auto it = lower_bound(d.begin(), d.end(), 122);
    if(it != d.end())cout << *it;
    else cout << "Out of range!";
    return 0;
}
