#include <iostream>
using namespace std;

int n, m, nc, brm = 0;

bool br_del (int num) {
    int brd = 0, i;
    for(i = 2; i * i < num; i++) if(num % i == 0) brd += 2;
    if(i * i == num) brd++;
    if(brd == m) return true;
    return false;
}

int main () {
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        cin >> nc;
        if(br_del(nc)) brm++;
    }
    cout << brm;
    return 0;
}
