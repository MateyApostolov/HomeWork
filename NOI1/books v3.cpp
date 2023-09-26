#include <bits/stdc++.h>
using namespace std;

int main () {

    int mm[4], a, b;

    for (int i = 0; i < 4; i++){
        cin >> a >> b;
        mm[i] = a * 10000 + b;
    }

    sort(mm, mm+4);

    for (int i = 3; i >= 0; i--)
        cout << mm[i]/10000 << " " << mm[i]%10000 << endl;

    return 0;
}
