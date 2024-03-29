#include <bits/stdc++.h>
using namespace std;

int main () {
    long long a, b, nod, i;
    cin >> a >> b;
    nod = __gcd(a, b);
    vector <long long> n;
    for(i = 1; i * i < nod; i++) {
        if(nod % i == 0) {
            n.push_back(i);
            n.push_back(nod / i);
        }
    }
    if(i * i == nod) n.push_back(i);
    sort(n.begin(), n.end());
    for(int i = 0; i < n.size(); i++) {
        cout << n[i] << " " << a / n[i] << " " << b / n[i] << "\n";
    }

    return 0;
}
