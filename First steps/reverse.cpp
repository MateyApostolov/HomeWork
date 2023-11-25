#include <bits/stdc++.h>
using namespace std;

int main () {
    int b;
    cin >> b;
    string st = to_string(b);
    string ss = st;
    reverse(st.begin(), st.end());
    cout << st << " " << ss << endl;
    if (st == ss) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}

