#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    int a[n], nm = 10000, ng = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(nm > a[i]) nm = a[i];
        if(ng < a[i]) ng = a[i];
    }
    double ogr = 1.0 * nm / 3 + 1.0 * ng / 3 * 2;

    for(int k = 0; k < n; k++)
        if(a[k] <= ogr){
            cout << k + 1;
            return 0;
        }

    return 0;
}
