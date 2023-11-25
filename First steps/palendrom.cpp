#include <bits/stdc++.h>
using namespace std;

int main () {
    int a, b = 0, c;
    cin >> a;
    c = a;
    while (c > 0){
        b = b * 10 + c % 10;
        c /= 10;
    }
    cout << a << " " << b << endl;
    if (a==b){
        cout << "Yes";
    } else {
        cout << "No";
    }

    pair<int, pair<int,int>> Maty[10];

    Maty[0].first = 10;
    Maty[0].second.first = 111;
    Maty[0].second.second = 222;


    return 0;
}

