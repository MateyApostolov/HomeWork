#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, nod = 0, k;
    cin >> n;
    int x[n];
    vector <int> dnod;
    for(int i = 0; i < n; i++) cin >> x[i];

    for(int i = 0; i < n - 1; i++)
        nod = __gcd(abs(x[i] - x[i + 1]), nod);

    for(k = 2; k * k < nod; k++)
        if(nod % k == 0){
            dnod.push_back(k);
            dnod.push_back(nod / k);
        }
    if(k * k == nod) dnod.push_back(k);
    dnod.push_back(nod);

    sort(dnod.begin(), dnod.end());

    for(int i = 0; i < dnod.size(); i++) cout << dnod[i] << " ";
    return 0;
}
