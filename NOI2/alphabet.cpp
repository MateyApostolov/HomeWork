#include <iostream>
using namespace std;

int main () {
    int n, m, f = 0;
    cin >> n >> m;
    string a;
 //   getline(cin, a);
    for(int i = 0; i <= m; i++) {
        getline(cin, a);
        if(toupper(a[0]) == n + 'A' - 1 && f == 0) f = i;
    }
    if (f != 0) cout << "win " << f;
    else cout << "lose";
    return 0;
}
