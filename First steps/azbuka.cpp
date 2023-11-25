#include <bits/stdc++.h>
using namespace std;

int main () {
    string az;
    getline(cin, az);

    for (int i = 0; i < az.length(); i++)
        az[i] = toupper(az[i]);

    cout << az;

    return 0;
}
