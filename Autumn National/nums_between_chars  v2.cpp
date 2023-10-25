#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    string input;
    cin >> input;
    for (int i = 0; i < 4; i++) if(!isdigit(input[i])) input[i] = ' ';
    stringstream SS;
    SS << input;
    int a = 10000, b = 10000;
    SS >> a >> b;
    if (a == 10000 && b == 10000){
        cout << "N/A";
        return 0;
    }
    if (a != 10000) cout << n * a;
    if (b != 10000) cout << endl << n * b;
    return 0;
}
